// FUN_00f9b31c @ 00f9b31c size=184 calls_out=1 calls_in=1
// strings: 

void FUN_00f9b31c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_2 + 0x114);
  iVar6 = *(int *)(param_2 + 0x118);
  iVar7 = *(int *)(param_1 + 0x24);
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x28) << 3;
  do {
    if (iVar4 == 0) {
      iVar4 = param_1 + 0x20;
LAB_00f9b3a0:
      piVar2 = &DAT_0035e2f0;
      if (*(int *)(param_2 + 0x28) != 5) {
        piVar2 = (int *)(param_2 + 0x28);
      }
                    /* WARNING: Could not recover jumptable at 0x00f9b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00f9b3d4 + *(int *)(&DAT_00f9b3d4 + *piVar2 * 4)))
                (piVar2,*(int *)(&DAT_00f9b3d4 + *piVar2 * 4),1,&UNK_018805c4,iVar4,iVar5,iVar6);
      return;
    }
    if ((*(int *)(iVar7 + iVar3 * 8 + 4) == iVar6) &&
       (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + iVar3 * 8),iVar5,iVar6), iVar1 == 0)) {
      iVar4 = 0;
      iVar5 = param_1 + 0x20;
      iVar6 = iVar3;
      goto LAB_00f9b3a0;
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + -8;
  } while( true );
}

