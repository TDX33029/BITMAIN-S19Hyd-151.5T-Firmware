// FUN_012a650c @ 012a650c size=756 calls_out=5 calls_in=1
// strings: 

void FUN_012a650c(int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *extraout_r1;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int *local_50 [6];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*(byte *)(param_1 + 0x146) & 0x40) != 0) {
    if ((*(int *)(param_1 + 0x134) != 0) && (*(int *)(param_2 + 0x134) == 0)) {
      uVar9 = *(undefined4 *)(param_1 + 0x138);
      *(int *)(param_2 + 0x134) = *(int *)(param_1 + 0x134);
      *(undefined4 *)(param_2 + 0x138) = uVar9;
    }
    if ((*(int *)(param_1 + 0x13c) != 0) && (*(int *)(param_2 + 0x13c) == 0)) {
      uVar9 = *(undefined4 *)(param_1 + 0x140);
      *(int *)(param_2 + 0x13c) = *(int *)(param_1 + 0x13c);
      *(undefined4 *)(param_2 + 0x140) = uVar9;
    }
  }
  uVar16 = *(uint *)(param_1 + 0x148);
  iVar18 = *(int *)(param_1 + 0x88);
  piVar12 = *(int **)(param_1 + 0x78);
  puVar10 = *(undefined4 **)(param_1 + 0x84);
  iVar21 = *(int *)(param_1 + 0x7c);
  *(uint *)(param_2 + 0x144) = uVar16 | *(uint *)(param_2 + 0x144);
  piVar7 = (int *)(uVar16 | *(uint *)(param_2 + 0x148));
  *(int **)(param_2 + 0x148) = piVar7;
  puVar6 = puVar10;
  piVar13 = piVar12;
LAB_012a65c8:
  do {
    if (piVar13 == piVar12 + iVar21 * 4) {
      return;
    }
    if (puVar6 == puVar10 + iVar18 * 6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce24b4,piVar7);
    }
    piVar7 = piVar13 + 4;
    iVar3 = piVar13[1];
    puVar4 = puVar6 + 6;
    piVar17 = (int *)*puVar6;
    iVar22 = *piVar13;
    iVar19 = piVar13[2];
    iVar20 = piVar13[3];
    do {
      iVar5 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x12a67fc);
      (*pcVar1)();
    }
    puVar14 = (undefined4 *)puVar6[1];
    iVar8 = 0;
    local_50[2] = (int *)puVar6[2];
    local_50[3] = (int *)puVar6[3];
    local_50[4] = (int *)puVar6[4];
    local_50[5] = (int *)puVar6[5];
    iVar11 = -0x18;
    iVar5 = *(int *)(param_2 + 0x7c);
    iVar23 = *(int *)(param_2 + 0x78);
    uVar16 = 0xffffffff;
    local_50[1] = puVar14;
    local_50[0] = piVar17;
    do {
      piVar13 = piVar7;
      if (iVar5 * 0x10 == iVar8) {
        local_38 = puVar6[2];
        uStack_34 = puVar6[3];
        uStack_30 = puVar6[4];
        uStack_2c = puVar6[5];
        if (iVar5 == *(int *)(param_2 + 0x74)) {
          FUN_018fa978((int *)(param_2 + 0x74));
          iVar23 = *(int *)(param_2 + 0x78);
        }
        iVar11 = *(int *)(param_2 + 0x80);
        iVar8 = *(int *)(param_2 + 0x88);
        *(int *)(param_2 + 0x7c) = iVar5 + 1;
        piVar7 = (int *)(iVar23 + iVar5 * 0x10);
        *piVar7 = iVar22;
        piVar7[1] = iVar3;
        piVar7[2] = iVar19;
        piVar7[3] = iVar20;
        if (iVar8 == iVar11) {
          FUN_015f5b18(param_2 + 0x80);
        }
        puVar6 = (undefined4 *)(*(int *)(param_2 + 0x84) + iVar8 * 0x18);
        *puVar6 = piVar17;
        puVar6[1] = puVar14;
        piVar7 = &local_38;
        puVar6[2] = local_38;
        puVar6[3] = uStack_34;
        puVar6[4] = uStack_30;
        puVar6[5] = uStack_2c;
        *(int *)(param_2 + 0x88) = iVar8 + 1;
        puVar6 = puVar4;
        goto LAB_012a65c8;
      }
      piVar15 = (int *)(iVar23 + iVar8);
      iVar11 = iVar11 + 0x18;
      uVar16 = uVar16 + 1;
      iVar8 = iVar8 + 0x10;
    } while ((*piVar15 != iVar22 || piVar15[2] != iVar19) ||
             (piVar15[1] != iVar3 || piVar15[3] != iVar20));
    if (*(uint *)(param_2 + 0x88) <= uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar16,*(uint *)(param_2 + 0x88),&DAT_01ce2524);
    }
    iVar3 = 0;
    iVar11 = *(int *)(param_2 + 0x84) + iVar11;
    do {
      piVar7 = local_50[iVar3];
      local_50[iVar3] = *(int **)(iVar11 + iVar3 * 4);
      *(int **)(iVar11 + iVar3 * 4) = piVar7;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 6);
    piVar7 = local_50[1];
    puVar6 = puVar4;
    if (local_50[0] != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *local_50[0];
        bVar2 = (bool)hasExclusiveAccess(local_50[0]);
      } while (!bVar2);
      *local_50[0] = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0();
        piVar7 = extraout_r1;
      }
    }
  } while( true );
}

