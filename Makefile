CC := gcc
CFLAGS := -Wall -Wextra -std=c11
LDLIBS := -lm
BUILD_DIR := /tmp/pp1

.PHONY: \
	week-1-lab1-celsius-to-farenheit \
	week-1-lab2-bill-splitter \
	week-1-lab3-distance-formula \
	week-2-float-division \
	week-2-math \
	week-2-pi \
	week-2-sizeof \
	week-3-two-variables

week-1-lab1-celsius-to-farenheit: week-1/lab1-celsius_to_farenheit.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $< $(LDLIBS) && $(BUILD_DIR)/$@

week-1-lab2-bill-splitter: week-1/lab2-bill_splitter.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $< $(LDLIBS) && $(BUILD_DIR)/$@

week-1-lab3-distance-formula: week-1/lab3-distance_formula.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $< $(LDLIBS) && $(BUILD_DIR)/$@

week-2-float-division: week-2/float-division.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $< $(LDLIBS) && $(BUILD_DIR)/$@

week-2-math: week-2/math.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $< $(LDLIBS) && $(BUILD_DIR)/$@

week-2-pi: week-2/pi.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $< $(LDLIBS) && $(BUILD_DIR)/$@

week-2-sizeof: week-2/sizeof.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $< $(LDLIBS) && $(BUILD_DIR)/$@

week-3-two-variables: week-3/two-variables.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $< $(LDLIBS) && $(BUILD_DIR)/$@
