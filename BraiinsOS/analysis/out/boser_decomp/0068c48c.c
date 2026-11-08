// FUN_0068c48c @ 0068c48c size=124 calls_out=1 calls_in=0
// strings: 

void FUN_0068c48c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  param_1 = (undefined4 *)*param_1;
  piVar4 = (int *)*param_1;
  piVar9 = (int *)param_1[1];
  *param_1 = 0;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  iVar10 = *piVar4;
  *piVar4 = 0;
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d24074);
  }
  iVar2 = piVar4[1];
  iVar5 = piVar4[2];
  iVar7 = piVar4[3];
  iVar1 = piVar4[4];
  iVar3 = piVar4[5];
  iVar6 = piVar4[6];
  iVar8 = piVar4[7];
  *piVar9 = iVar10;
  piVar9[1] = iVar2;
  piVar9[2] = iVar5;
  piVar9[3] = iVar7;
  piVar9[4] = iVar1;
  piVar9[5] = iVar3;
  piVar9[6] = iVar6;
  piVar9[7] = iVar8;
  return;
}

