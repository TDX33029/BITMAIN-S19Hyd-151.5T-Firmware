// FUN_0001e084 @ 0001e084  size=120  callers=1
// program: cgminer


void FUN_0001e084(char *param_1,char *param_2,int param_3)

{
  if (param_3 != 0) {
    pthread_mutex_trylock((pthread_mutex_t *)&DAT_00074ff4);
    FUN_0001df78(0x29);
    (*DAT_0006796c)();
  }
  FUN_0001dff8();
  printf("%s%s%s",param_1,param_2,"                    \n");
  FUN_0001df78(0x36);
  (*DAT_0006796c)();
  return;
}

