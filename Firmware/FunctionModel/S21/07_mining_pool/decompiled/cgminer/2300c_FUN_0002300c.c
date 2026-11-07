// FUN_0002300c @ 0002300c  size=64  callers=0
// program: cgminer


undefined4 FUN_0002300c(int param_1)

{
  pthread_setcanceltype(1,(int *)0x0);
  (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x14));
  FUN_00022fd4(param_1,"util.c","completion_thread",0xf3b);
  return 0;
}

