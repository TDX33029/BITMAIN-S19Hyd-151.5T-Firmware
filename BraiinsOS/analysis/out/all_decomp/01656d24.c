// FUN_01656d24 @ 01656d24 size=132 calls_out=2 calls_in=1
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_01656d24(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_0164ec90(param_6);
  iVar1 = 0x180;
  if ((uVar2 & 1) != 0) {
    iVar1 = 0xb8;
  }
  if (*(undefined1 **)((int)(uVar2 >> 0x20) + iVar1 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,param_6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(ulonglong *)(param_1 + 0xc) = uVar2;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  param_1[0x10] = param_5;
  return;
}

