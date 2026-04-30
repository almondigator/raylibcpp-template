BUILD_DIR = build
EXEC_NAME = program

.PHONY: clear build run

all: build run

clear:
	@rm -rf $(BUILD_DIR)

build:
	@mkdir -p $(BUILD_DIR)
	@cd $(BUILD_DIR) && cmake ..
	@cmake --build $(BUILD_DIR)

run:
	./$(BUILD_DIR)/$(EXEC_NAME);
	


