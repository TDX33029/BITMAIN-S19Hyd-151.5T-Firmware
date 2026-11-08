// FUN_019dc4f8 @ 019dc4f8 size=108 calls_out=1 calls_in=27
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_019dc4f8(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = 0x180;
  if ((param_2 & 1) != 0) {
    iVar1 = 0xb8;
  }
  if (*(undefined1 **)(param_3 + iVar1 + 0x60) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,param_8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  param_1[0xe] = param_5;
  param_1[0xf] = param_6;
  param_1[0x10] = param_7;
  return;
}

