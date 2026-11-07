// FUN_01656dc8 @ 01656dc8 size=192 calls_out=3 calls_in=19
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_01656dc8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_28;
  undefined4 local_20;
  
  FUN_0165a798(&local_28);
  iVar2 = (uint)local_28 + 0x38640900;
  uVar3 = local_28._4_4_ + (0xc79bf6ff < (uint)local_28);
  if ((int)((local_28._4_4_ ^ uVar3) & ~local_28._4_4_) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  local_28 = FUN_0164ec90(&DAT_018ad13c);
  iVar1 = 0x180;
  if ((local_28 & 1) != 0) {
    iVar1 = 0xb8;
  }
  if (*(undefined1 **)((int)(local_28 >> 0x20) + iVar1 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_018ad13c);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(ulonglong *)(param_1 + 0xc) = local_28;
  param_1[0xe] = iVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = local_20;
  return;
}

