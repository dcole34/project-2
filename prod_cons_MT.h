#ifndef PROD_CONS_MT_H
#define PROD_CONS_MT_H

typedef struct {
    // additional structures or types needed for the monitor
} Monitor;

// function prototypes for sections C and D
void init_monitor(Monitor *monitor);
void produce_item(Monitor *monitor, int producer_id, int num_items);
void consume_item(Monitor *monitor, int consumer_id, int num_items);

#endif  // PROD_CONS_MT_H

