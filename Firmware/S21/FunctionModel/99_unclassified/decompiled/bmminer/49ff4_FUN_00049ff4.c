// FUN_00049ff4 @ 00049ff4  size=120  callers=3
// program: bmminer


void FUN_00049ff4(char *param_1,char *param_2,int param_3)

{
  if (param_3 != 0) {
    pthread_mutex_trylock((pthread_mutex_t *)&DAT_00a5f254);
    FUN_00049ee4(0x31);
    (*DAT_000be768)();
  }
  FUN_00049f6c();
  printf("%s%s%s",param_1,param_2,"                    \n");
  FUN_00049ee4(0x3e);
  (*DAT_000be768)();
  return;
}

