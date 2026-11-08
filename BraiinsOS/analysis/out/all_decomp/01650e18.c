// FUN_01650e18 @ 01650e18 size=280 calls_out=6 calls_in=2
// strings: `period` must be non-zero. | A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_01650e18(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  if ((param_7 == 0 && param_8 == 0) && param_9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("`period` must be non-zero.",0x35,&DAT_0186da18);
  }
  local_28 = FUN_0164ec90(&DAT_018acd8c);
  iVar1 = 0x180;
  if ((local_28 & 1) != 0) {
    iVar1 = 0xb8;
  }
  if (*(undefined1 **)((int)(local_28 >> 0x20) + iVar1 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_018acd8c);
  }
  local_74 = 0;
  local_78 = 0;
  local_30 = 0;
  local_38 = param_5;
  local_40 = param_3;
  local_3c = param_4;
  local_48 = local_28;
  iVar1 = thunk_FUN_016d4a50(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x50);
  }
  FUN_016dd1aa(iVar1,&local_78,0x50);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = param_7;
  param_1[1] = param_8;
  param_1[2] = param_9;
  param_1[4] = iVar1;
  return;
}

