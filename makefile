CXX      := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra
LDFLAGS  := -lgmp -lgmpxx

TASK_DIR := tasks
TASKS    := $(patsubst $(TASK_DIR)/%.cpp,%,$(wildcard $(TASK_DIR)/p*.cpp))
BINS     := $(addprefix $(TASK_DIR)/,$(TASKS))

.PHONY: all clean run solve list

all: $(BINS)

$(TASKS): %: $(TASK_DIR)/%

$(TASK_DIR)/%: $(TASK_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

run: $(TASK_DIR)/$(P)
	@./$(TASK_DIR)/$(P)

solve: $(BINS)
	@$(foreach bin,$(BINS), \
		echo "=== Problem $(notdir $(bin)) ==="; \
		./$(bin);)

clean:
	rm -f $(BINS)

list:
	@echo "Available tasks:"
	@ls $(TASK_DIR)/*.cpp 2>/dev/null | sed 's|$(TASK_DIR)/||;s|\.cpp||' | sort