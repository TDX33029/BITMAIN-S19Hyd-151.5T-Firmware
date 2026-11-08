// FUN_000202bc @ 000202bc  size=72  callers=0
// program: cgminer


void FUN_000202bc(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(pthread_t *)(param_1 + 0xc) != 0) {
    pthread_cancel(*(pthread_t *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  sem_destroy((sem_t *)(param_1 + 0x10));
  return;
}

