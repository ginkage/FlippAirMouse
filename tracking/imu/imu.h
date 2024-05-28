#pragma once

#include <stdbool.h>

#include <furi_hal.h>

#include "imu_lsm6dso.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ACC_DATA_READY (1 << 0)
#define GYR_DATA_READY (1 << 1)

bool imu_begin();
void imu_end();
int imu_read(double* vec);

#ifdef __cplusplus
}
#endif
