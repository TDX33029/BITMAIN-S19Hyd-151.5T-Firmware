// FUN_00f7fb00 @ 00f7fb00 size=364 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_00f7fb00(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = (int *)param_3[1];
  iVar6 = *param_3;
  if (param_3[2] == 0) {
    piVar3 = piVar5;
  }
  else {
    piVar3 = &DAT_0035e2f0;
    if (*(int *)(param_2 + 0x28) != 5) {
      piVar3 = (int *)(param_2 + 0x28);
    }
    iVar1 = *piVar3;
    if (*piVar5 != -0x80000000) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
                    /* WARNING: Could not recover jumptable at 0x00f7fc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&DAT_00f7fc10 + *(int *)(&DAT_00f7fc10 + iVar1 * 4)))
                        (&UNK_018805c4,1,*(undefined4 *)(param_1 + 8));
      return uVar2;
    }
    piVar3 = piVar5 + 3;
  }
  piVar4 = piVar3 + 1;
  for (iVar1 = ((uint)((int)piVar5 + (param_3[2] * 0xc - (int)piVar3)) >> 2) * -0x55555555;
      iVar1 != 0; iVar1 = iVar1 + -1) {
    if (piVar4[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar4);
    }
    piVar4 = piVar4 + 3;
  }
  if (iVar6 != 0) {
    thunk_FUN_016d3fb4(piVar5);
  }
  return 0;
}

