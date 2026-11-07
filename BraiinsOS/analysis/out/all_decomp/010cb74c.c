// FUN_010cb74c @ 010cb74c size=200 calls_out=5 calls_in=0
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

undefined8
FUN_010cb74c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = FUN_0164ec90(&DAT_018852cc);
  iVar1 = 0x180;
  if ((local_18 & 1) != 0) {
    iVar1 = 0xb8;
  }
  if (*(undefined1 **)((int)(local_18 >> 0x20) + iVar1 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_018852cc);
  }
  local_64 = 0;
  local_68 = 0;
  local_20 = 0;
  local_28 = param_5;
  local_30 = param_3;
  local_2c = param_4;
  local_38 = local_18;
  iVar1 = thunk_FUN_016d4a50(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x50);
  }
  FUN_016dd1aa(iVar1,&local_68,0x50);
  return CONCAT44(&UNK_018852dc,iVar1);
}

