// FUN_008c582c @ 008c582c size=316 calls_out=4 calls_in=1
// strings: BUG: munmap failed | BUG: munmap failed | BUG: munmap failed | BUG: munmap failed

void FUN_008c582c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  
  iVar1 = FUN_016d6ac4(*param_1,param_1[1]);
  if (iVar1 == -1) {
    local_14 = FUN_0126ead8();
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: munmap failed",0x12,&local_14,&DAT_018aeab8,&DAT_018aeac8);
  }
  iVar1 = FUN_016d6ac4(param_1[0xc],param_1[0xd]);
  if (iVar1 == -1) {
    local_14 = FUN_0126ead8();
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: munmap failed",0x12,&local_14,&DAT_018aeab8,&DAT_018aeac8);
  }
  FUN_016dffb2(param_1[10]);
  iVar1 = FUN_016d6ac4(param_1[6],param_1[7]);
  if (iVar1 == -1) {
    local_14 = FUN_0126ead8();
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: munmap failed",0x12,&local_14,&DAT_018aeab8,&DAT_018aeac8);
  }
  FUN_016dffb2(param_1[4]);
  iVar1 = FUN_016d6ac4(param_1[0x11],param_1[0x12]);
  if (iVar1 == -1) {
    local_14 = FUN_0126ead8();
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: munmap failed",0x12,&local_14,&DAT_018aeab8,&DAT_018aeac8);
  }
  uVar2 = FUN_016dac50(param_1[0xf]);
  local_14 = 0;
  iVar1 = thunk_FUN_016dde14(6,uVar2,0,0,0);
  if (iVar1 == -4) {
    iVar1 = 0;
  }
  FUN_016d3496(iVar1);
  return;
}

