// FUN_01914f6c @ 01914f6c size=92 calls_out=1 calls_in=2
// strings: 

int FUN_01914f6c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar2 = uVar4 - *(uint *)(param_1 + 8);
  if (uVar4 < *(uint *)(param_1 + 8)) {
    uVar2 = uVar4;
  }
  iVar3 = *(int *)(param_1 + 0xc) + uVar2 * 0xc;
  uVar2 = *(uint *)(iVar3 + 8);
  if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,uVar2,uVar2,&DAT_01d252bc);
  }
  return *(int *)(iVar3 + 4) + uVar1;
}

