// FUN_01651a54 @ 01651a54 size=280 calls_out=7 calls_in=7
// strings: `period` must be non-zero. | A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_01651a54(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  if ((param_3 == 0 && param_4 == 0) && param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("`period` must be non-zero.",0x35,param_6);
  }
  FUN_0165a798(&local_78);
  uVar1 = local_74;
  local_28 = FUN_0164ec90(&DAT_018acd8c);
  iVar2 = 0x180;
  if ((local_28 & 1) != 0) {
    iVar2 = 0xb8;
  }
  if (*(undefined1 **)((int)(local_28 >> 0x20) + iVar2 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_018acd8c);
  }
  local_40 = local_78;
  local_74 = 0;
  local_78 = 0;
  local_30 = 0;
  local_38 = local_70;
  local_3c = uVar1;
  local_48 = local_28;
  iVar2 = thunk_FUN_016d4a50(0x50);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x50);
  }
  FUN_016dd1aa(iVar2,&local_78,0x50);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[4] = iVar2;
  return;
}

