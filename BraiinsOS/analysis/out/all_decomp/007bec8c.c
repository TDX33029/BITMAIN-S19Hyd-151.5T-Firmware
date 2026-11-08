// FUN_007bec8c @ 007bec8c size=96 calls_out=3 calls_in=0
// strings: BUG: munmap failed

void FUN_007bec8c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  
  iVar1 = FUN_016d6ac4(param_1[2],param_1[3]);
  if (iVar1 == -1) {
    local_14 = FUN_0126ead8();
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: munmap failed",0x12,&local_14,&DAT_018aeab8,&DAT_018aeac8);
  }
  uVar2 = FUN_016dac50(*param_1);
  local_14 = 0;
  iVar1 = thunk_FUN_016dde14(6,uVar2,0,0,0);
  if (iVar1 == -4) {
    iVar1 = 0;
  }
  FUN_016d3496(iVar1);
  return;
}

