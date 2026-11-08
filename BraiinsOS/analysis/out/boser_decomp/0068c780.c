// FUN_0068c780 @ 0068c780 size=144 calls_out=1 calls_in=0
// strings: 

void FUN_0068c780(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  
  param_1 = (undefined4 *)*param_1;
  piVar7 = (int *)*param_1;
  piVar16 = (int *)param_1[1];
  *param_1 = 0;
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  iVar17 = *piVar7;
  *piVar7 = -0x80000000;
  if (iVar17 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d24074);
  }
  iVar1 = piVar7[1];
  iVar4 = piVar7[2];
  iVar10 = piVar7[3];
  iVar15 = piVar7[4];
  iVar2 = piVar7[5];
  iVar5 = piVar7[6];
  iVar8 = piVar7[7];
  iVar11 = piVar7[8];
  iVar13 = piVar7[9];
  iVar3 = piVar7[10];
  iVar6 = piVar7[0xb];
  iVar9 = piVar7[0xc];
  iVar12 = piVar7[0xd];
  iVar14 = piVar7[0xe];
  *piVar16 = iVar17;
  piVar16[1] = iVar1;
  piVar16[2] = iVar4;
  piVar16[3] = iVar10;
  piVar16[4] = iVar15;
  piVar16[5] = iVar2;
  piVar16[6] = iVar5;
  piVar16[7] = iVar8;
  piVar16[8] = iVar11;
  piVar16[9] = iVar13;
  piVar16[10] = iVar3;
  piVar16[0xb] = iVar6;
  piVar16[0xc] = iVar9;
  piVar16[0xd] = iVar12;
  piVar16[0xe] = iVar14;
  return;
}

