// FUN_0002c290 @ 0002c290  size=128  callers=40
// program: cgminer


void FUN_0002c290(int param_1,int param_2)

{
  int iVar1;
  pthread_t local_c [2];
  
  iVar1 = pthread_create(local_c,(pthread_attr_t *)0x0,FUN_00028fc8,(void *)0x0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (param_2 != 0) {
    FUN_0002f480();
  }
  if (0 < DAT_00068b1c) {
    kill(DAT_00068b1c,0xf);
    DAT_00068b1c = 0;
  }
  pthread_cancel(local_c[0]);
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}

