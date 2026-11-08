// FUN_00b0dfa8 @ 00b0dfa8 size=212 calls_out=5 calls_in=0
// strings: fan speed

void FUN_00b0dfa8(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined1 local_39;
  undefined1 *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  if (param_1 != 0) {
    iVar1 = thunk_FUN_01be5118(9);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(iVar1,"fan speed",9);
    local_1c = &LAB_00b52a2c;
    local_20 = &local_39;
    uStack_40 = 9;
    local_48 = 9;
    local_24 = &LAB_00632348;
    iStack_44 = iVar1;
    local_39 = param_3;
    local_28 = (undefined1 *)&local_48;
    FUN_00664898(&local_38,&DAT_00596f7e,&local_28);
    local_28 = local_38;
    local_24 = (undefined1 *)uStack_34;
    local_20 = (undefined1 *)uStack_30;
    FUN_019bb7e0(local_48,iStack_44);
    iVar1 = *(int *)(param_2 + 0x3c);
    if (iVar1 != -0x80000000) {
      FUN_019bb7e0(iVar1,*(undefined4 *)(param_2 + 0x40));
    }
    *(int *)(param_2 + 0x3c) = (int)local_28;
    *(undefined1 **)(param_2 + 0x40) = local_24;
    *(undefined1 **)(param_2 + 0x44) = local_20;
  }
  return;
}

