// FUN_0120d828 @ 0120d828 size=124 calls_out=1 calls_in=0
// strings: 

void FUN_0120d828(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  param_1 = (undefined4 *)*param_1;
  piVar5 = (int *)*param_1;
  piVar12 = (int *)param_1[1];
  *param_1 = 0;
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  iVar13 = *piVar5;
  *piVar5 = 0;
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a78a8);
  }
  iVar1 = piVar5[1];
  iVar3 = piVar5[2];
  iVar6 = piVar5[3];
  iVar8 = piVar5[4];
  iVar11 = piVar5[5];
  iVar2 = piVar5[6];
  iVar4 = piVar5[7];
  iVar7 = piVar5[8];
  iVar9 = piVar5[9];
  iVar10 = piVar5[10];
  *piVar12 = iVar13;
  piVar12[1] = iVar1;
  piVar12[2] = iVar3;
  piVar12[3] = iVar6;
  piVar12[4] = iVar8;
  piVar12[5] = iVar11;
  piVar12[6] = iVar2;
  piVar12[7] = iVar4;
  piVar12[8] = iVar7;
  piVar12[9] = iVar9;
  piVar12[10] = iVar10;
  return;
}

