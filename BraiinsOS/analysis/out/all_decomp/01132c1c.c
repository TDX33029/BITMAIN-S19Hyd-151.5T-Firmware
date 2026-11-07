// FUN_01132c1c @ 01132c1c size=296 calls_out=6 calls_in=0
// strings: out-of-sequence-message | out-of-sequence channel-open messagehandle_submit_shares_extendedhandle_submit_shares_standard

void FUN_01132c1c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_2 + 0x28) == 2 || *(int *)(param_2 + 0x28) == 5) {
    *param_1 = 0x11;
    return;
  }
  local_64 = thunk_FUN_016d4a50(0x17);
  if (local_64 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x17);
  }
  local_68 = 0x17;
  FUN_016dd1aa(local_64,"out-of-sequence-message",0x17);
  local_60 = 0x17;
  uStack_74 = FUN_01139000(&local_68);
  uStack_6c = param_3;
  FUN_01130ee4(&local_68,param_2,&uStack_74);
  if (local_68 != 0x11) {
    local_40 = local_68;
    iStack_3c = local_64;
    uStack_38 = local_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    local_2c = local_54;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_20 = uStack_48;
    uStack_1c = uStack_44;
    FUN_011331bc(param_1 + 1);
    *param_1 = 0xd;
    return;
  }
  iVar1 = thunk_FUN_016d4a50(0x24);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x24);
  }
  FUN_016dd1aa(iVar1,
               "out-of-sequence channel-open messagehandle_submit_shares_extendedhandle_submit_shares_standard"
               ,0x24);
  param_1[1] = 0x24;
  param_1[2] = iVar1;
  param_1[3] = 0x24;
  *param_1 = 1;
  return;
}

