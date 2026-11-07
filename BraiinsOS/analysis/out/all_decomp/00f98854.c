// FUN_00f98854 @ 00f98854 size=628 calls_out=5 calls_in=1
// strings: 

void FUN_00f98854(int *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int extraout_r1;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  
  piVar11 = *(int **)(param_2 + 0x10);
  iVar15 = *(int *)(param_2 + 0x14);
  piVar21 = *(int **)(param_2 + 4);
  iVar24 = *(int *)(param_2 + 8);
  piVar12 = piVar11;
  piVar22 = piVar21;
LAB_00f988d8:
  do {
    if (piVar22 == piVar21 + iVar24 * 4) {
      return;
    }
    if (piVar12 == piVar11 + iVar15 * 6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018807b4,param_2);
    }
    iVar25 = *piVar22;
    piVar14 = piVar12 + 6;
    piVar3 = (int *)*piVar12;
    piVar18 = piVar22 + 4;
    iVar19 = piVar22[1];
    iVar20 = piVar22[2];
    iVar23 = piVar22[3];
    do {
      iVar9 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar9 + 1;
    if (iVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xf98ac4);
      (*pcVar1)();
    }
    iVar9 = *piVar12;
    iVar10 = 0;
    iVar4 = piVar12[1];
    iVar5 = piVar12[2];
    iVar6 = piVar12[3];
    iVar7 = piVar12[4];
    param_2 = piVar12[5];
    iVar13 = param_1[1];
    iVar16 = param_1[2];
    uVar8 = 0xffffffff;
    do {
      piVar12 = piVar14;
      piVar22 = piVar18;
      if (iVar16 * 0x10 == iVar10) {
        if (iVar16 == *param_1) {
          FUN_00f98eac(param_1);
          iVar13 = param_1[1];
        }
        iVar17 = param_1[5];
        iVar10 = param_1[3];
        param_1[2] = iVar16 + 1;
        piVar3 = (int *)(iVar13 + iVar16 * 0x10);
        *piVar3 = iVar25;
        piVar3[1] = iVar19;
        piVar3[2] = iVar20;
        piVar3[3] = iVar23;
        if (iVar17 == iVar10) {
          FUN_00f9902c(param_1 + 3);
        }
        param_1[5] = iVar17 + 1;
        piVar3 = (int *)(param_1[4] + iVar17 * 0x18);
        *piVar3 = iVar9;
        piVar3[1] = iVar4;
        piVar3[2] = iVar5;
        piVar3[3] = iVar6;
        piVar3[4] = iVar7;
        piVar3[5] = param_2;
        goto LAB_00f988d8;
      }
      piVar3 = (int *)(iVar13 + iVar10);
      iVar10 = iVar10 + 0x10;
      uVar8 = uVar8 + 1;
    } while ((*piVar3 != iVar25 || piVar3[2] != iVar20) ||
             (piVar3[1] != iVar19 || piVar3[3] != iVar23));
    if ((uint)param_1[5] <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar8,param_1[5],&DAT_01880834);
    }
    piVar14 = (int *)(param_1[4] + uVar8 * 0x18);
    piVar3 = (int *)*piVar14;
    *piVar14 = iVar9;
    piVar14[5] = param_2;
    piVar14[4] = iVar7;
    piVar14[3] = iVar6;
    piVar14[2] = iVar5;
    param_2 = piVar14[1];
    piVar14[1] = iVar4;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar19 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar19 + -1;
      if (iVar19 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc();
        param_2 = extraout_r1;
      }
    }
  } while( true );
}

