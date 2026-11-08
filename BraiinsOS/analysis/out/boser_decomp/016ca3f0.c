// FUN_016ca3f0 @ 016ca3f0 size=92 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_016ca3f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    param_3 = *(int *)(param_1 + 0x10) + iVar1 * 8;
  }
  if (iVar1 != 0 && param_3 != 8) {
    uVar2 = *(uint *)(param_1 + 8);
    uVar3 = *(uint *)(param_3 + -4);
    if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar3,uVar2,uVar2,&DAT_01d09868);
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    uVar3 = 0;
  }
  return CONCAT44(uVar2 - uVar3,*(int *)(param_1 + 4) + uVar3 * 8);
}

