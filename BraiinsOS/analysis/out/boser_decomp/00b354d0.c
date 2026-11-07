// FUN_00b354d0 @ 00b354d0 size=148 calls_out=5 calls_in=2
// strings: BUG: Invalid firmware upload path.EXPIREDFIRMWARE_CHECK_FAILED

void FUN_00b354d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  uVar2 = FUN_019aff98(param_2,param_3);
  if ((int)uVar2 == 0) {
    iVar1 = thunk_FUN_01be5118(0x22);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x22);
    }
    FUN_01bed4e2(iVar1,"BUG: Invalid firmware upload path.EXPIREDFIRMWARE_CHECK_FAILED",0x22);
    local_14 = 0x22;
    local_1c = 0x22;
    local_18 = iVar1;
    FUN_01a70fd4(param_1,0xd,&local_1c);
  }
  else {
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 2) = uVar2;
  }
  return;
}

