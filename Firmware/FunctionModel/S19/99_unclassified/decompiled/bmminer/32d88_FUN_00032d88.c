// FUN_00032d88 @ 00032d88  size=120  callers=2
// program: bmminer


void FUN_00032d88(char *param_1,char *param_2,int param_3)

{
  if (param_3 != 0) {
    pthread_mutex_trylock((pthread_mutex_t *)&DAT_00722954);
    FUN_00032c84(0x2c);
    (*DAT_00087ce8)();
  }
  FUN_00032d00();
  printf("%s%s%s",param_1,param_2,"                    \n");
  FUN_00032c84(0x39);
  (*DAT_00087ce8)();
  return;
}

