// FUN_00f9c298 @ 00f9c298 size=188 calls_out=1 calls_in=1
// strings: 

void FUN_00f9c298(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x28) << 3;
  iVar5 = -1;
  do {
    if (iVar2 == 0) {
      iVar7 = 0;
      iVar4 = 1;
      iVar2 = param_1 + 0x20;
      goto LAB_00f9c2f8;
    }
    piVar3 = (int *)(iVar4 + 4);
    iVar2 = iVar2 + -8;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 8;
  } while (*piVar3 != 0);
  iVar2 = 0;
  iVar4 = param_1 + 0x20;
  iVar7 = iVar5;
LAB_00f9c2f8:
  bVar1 = *(byte *)(param_2 + 0x145);
  bVar6 = (bVar1 & 4) == 0;
  if (bVar6) {
    bVar1 = *(byte *)(param_2 + 0x149);
  }
  if (bVar6 && (bVar1 & 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_018808b4,iVar5,iVar2,iVar4,iVar7);
  }
  piVar3 = &DAT_0035db48;
  if (*(int *)(param_2 + 0x10) != 5) {
    piVar3 = (int *)(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00f9c338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f9c33c + *(int *)(&DAT_00f9c33c + *piVar3 * 4)))();
  return;
}

