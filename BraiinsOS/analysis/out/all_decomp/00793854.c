// FUN_00793854 @ 00793854 size=252 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00793854(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r7;
  undefined4 uVar7;
  
  piVar3 = *(int **)(param_1 + 0x304);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    iVar4 = *(int *)(param_1 + 0x304);
    if (*(int *)(param_1 + 0x2f8) == -0x80000000) {
      iVar6 = -0x80000000;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x300);
      uVar7 = *(undefined4 *)(param_1 + 0x2fc);
      if (iVar6 == 0) {
        unaff_r7 = 1;
      }
      else {
        unaff_r7 = thunk_FUN_016d4a50(iVar6);
        if (unaff_r7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar6);
        }
      }
      FUN_016dd1aa(unaff_r7,uVar7,iVar6);
    }
    piVar3 = *(int **)(param_1 + 0x308);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + 1;
    if (-1 < iVar5) {
      iVar5 = *(int *)(param_1 + 0x308);
      piVar3 = (int *)thunk_FUN_016d4a50(0x14);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      *piVar3 = iVar6;
      piVar3[1] = unaff_r7;
      piVar3[2] = iVar6;
      piVar3[3] = iVar4;
      piVar3[4] = iVar5;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x793950);
  (*pcVar1)();
}

