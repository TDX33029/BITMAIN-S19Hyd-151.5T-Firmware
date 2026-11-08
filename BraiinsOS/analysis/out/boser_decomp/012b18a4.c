// FUN_012b18a4 @ 012b18a4 size=136 calls_out=1 calls_in=2
// strings: 

int FUN_012b18a4(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  piVar3 = *(int **)(param_1 + 4);
  uVar6 = 0xffffffff;
  iVar4 = *(int *)(param_1 + 8) << 4;
  do {
    if (iVar4 == 0) {
      return 0;
    }
    iVar5 = *piVar3;
    piVar7 = piVar3 + 1;
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + -0x10;
    piVar1 = piVar3 + 2;
    piVar2 = piVar3 + 3;
    piVar3 = piVar3 + 4;
  } while ((iVar5 != param_3 || *piVar1 != param_5) || (*piVar7 != param_4 || *piVar2 != param_6));
  if (*(uint *)(param_1 + 0x14) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar6,*(uint *)(param_1 + 0x14),&DAT_01ce2514);
  }
  return *(int *)(param_1 + 0x10) + uVar6 * 0x18;
}

