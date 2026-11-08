// FUN_00f9d5e4 @ 00f9d5e4 size=108 calls_out=1 calls_in=1
// strings: 

int FUN_00f9d5e4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)(param_1 + 0x14) << 4;
  piVar1 = (int *)(*(int *)(param_1 + 0x10) + 4);
  do {
    piVar4 = piVar1;
    if (iVar5 == 0) {
      return 0;
    }
    iVar2 = piVar4[-1];
    iVar5 = iVar5 + -0x10;
    bVar6 = iVar2 != 2;
    if (!bVar6) {
      iVar2 = *piVar4;
    }
    piVar1 = piVar4 + 4;
  } while (bVar6 || iVar2 != param_2);
  uVar3 = piVar4[2];
  if (*(uint *)(param_1 + 8) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,*(uint *)(param_1 + 8),&DAT_018808ec);
  }
  return uVar3 * 0x134 + *(int *)(param_1 + 4);
}

