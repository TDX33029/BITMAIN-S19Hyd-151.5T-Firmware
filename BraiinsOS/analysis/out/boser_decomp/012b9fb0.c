// FUN_012b9fb0 @ 012b9fb0 size=116 calls_out=1 calls_in=1
// strings: 

int FUN_012b9fb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x14) << 4;
  piVar4 = *(int **)(param_1 + 0x10);
  while( true ) {
    iVar3 = *piVar4;
    bVar5 = iVar3 == 2;
    if (bVar5) {
      iVar3 = piVar4[1];
    }
    if (bVar5 && iVar3 == param_2) break;
    iVar2 = iVar2 + -0x10;
    piVar4 = piVar4 + 4;
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar1 = piVar4[3];
  if (*(uint *)(param_1 + 8) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_1 + 8),&DAT_01ce26d4);
  }
  return uVar1 * 0x134 + *(int *)(param_1 + 4);
}

