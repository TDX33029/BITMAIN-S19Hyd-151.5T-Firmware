// FUN_01387810 @ 01387810 size=1372 calls_out=6 calls_in=2
// strings: 

void FUN_01387810(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,
                 uint param_6)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  int *extraout_r3;
  int *extraout_r3_00;
  int *piVar18;
  int *extraout_r3_01;
  int *extraout_r3_02;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int local_30;
  uint local_2c;
  
  piVar18 = param_4;
  if (param_6 != 0) {
    FUN_016dd606(param_5,0,param_6 << 2);
    piVar18 = extraout_r3;
  }
  iVar23 = param_2[6];
  uVar3 = param_4[4];
  uVar10 = param_4[5];
  iVar19 = uVar10 - uVar3;
  uVar11 = *(uint *)(iVar23 + 0x148);
  if (uVar10 < uVar3) {
    iVar19 = 0;
  }
  param_3[2] = 0;
  uVar1 = (ulonglong)(iVar19 + 1U) * (ulonglong)uVar11;
  uVar11 = (uint)uVar1;
  param_3[6] = iVar19 + 1U;
  if ((int)(uVar1 >> 0x20) == 0) {
    uVar16 = 0x200000;
    if (*param_2 != 0) {
      uVar16 = param_2[1] << 3;
    }
    if (uVar11 <= uVar16) {
      uVar16 = uVar11 & 0x1f;
      if ((uVar1 & 0x1f) != 0) {
        uVar16 = 1;
      }
      uVar20 = uVar16 + (uVar11 >> 5);
      uVar9 = param_3[5];
      if (uVar20 <= (uint)param_3[5]) {
        param_3[5] = uVar20;
        uVar9 = uVar20;
      }
      if (uVar9 != 0) {
        FUN_016dd606(param_3[4],0,uVar9 << 2);
        piVar18 = extraout_r3_00;
      }
      if (uVar9 < uVar20) {
        uVar20 = uVar20 - uVar9;
        if (param_3[3] - uVar9 < uVar20) {
          FUN_013c4434(param_3 + 3,uVar9,uVar20,4,4);
          puVar12 = (undefined4 *)(param_3[4] + param_3[5] * 4);
          uVar5 = param_3[5];
          piVar18 = extraout_r3_02;
        }
        else {
          puVar12 = (undefined4 *)(param_3[4] + uVar9 * 4);
          uVar5 = uVar9;
        }
        if (1 < uVar20) {
          iVar19 = ~uVar9 + (uVar11 >> 5) + uVar16;
          piVar18 = (int *)0x0;
          puVar13 = puVar12;
          do {
            puVar12 = puVar13 + 1;
            *puVar13 = 0;
            iVar19 = iVar19 + -1;
            puVar13 = puVar12;
          } while (iVar19 != 0);
          uVar5 = (uVar20 + uVar5) - 1;
        }
        param_3[5] = uVar5 + 1;
        *puVar12 = 0;
      }
      if (uVar10 < uVar3) {
LAB_01387978:
        *param_1 = 0;
        return;
      }
      if (*param_4 == 0) {
        iVar19 = *(int *)(iVar23 + 0x128);
        if (iVar19 != *(int *)(iVar23 + 300)) {
          pcVar7 = "";
          iVar22 = param_4[3];
          iVar24 = param_4[2];
          if ((char)param_2[5] != '\x03') {
            pcVar7 = (char *)(param_2 + 2);
          }
          iVar17 = *(int *)pcVar7;
          iVar14 = *(int *)((int)pcVar7 + 4);
          iVar2 = *(int *)((int)pcVar7 + 0xc);
          uVar11 = uVar3;
          do {
            if ((char)iVar2 != '\x02') {
              (**(code **)(iVar14 + 0x10))
                        (&local_30,iVar17 + 8 + (*(int *)(iVar14 + 8) - 1U & 0xfffffff8),iVar24,
                         iVar22,uVar11,uVar10);
              if (local_30 == 0) break;
              uVar11 = local_2c;
            }
            iVar21 = param_3[2];
            if (iVar21 == *param_3) {
              FUN_013c402c(param_3);
            }
            puVar12 = (undefined4 *)(param_3[1] + iVar21 * 0xc);
            *puVar12 = 0;
            puVar12[1] = iVar19;
            puVar12[2] = uVar11;
            iVar8 = iVar21 + 1;
            param_3[2] = iVar8;
            if (iVar21 != -1) {
              do {
                while( true ) {
                  iVar8 = iVar8 + -1;
                  param_3[2] = iVar8;
                  puVar15 = (uint *)(param_3[1] + iVar8 * 0xc);
                  uVar16 = puVar15[1];
                  if ((*puVar15 & 1) == 0) break;
                  if (param_6 <= uVar16) goto LAB_013888bc;
                  *(uint *)(param_5 + uVar16 * 4) = puVar15[2];
                  if (iVar8 == 0) goto LAB_01387a28;
                }
                uVar20 = param_3[5];
                uVar5 = param_3[6] * uVar16 + (puVar15[2] - uVar3);
                uVar9 = uVar5 >> 5;
                if (uVar20 <= uVar5 >> 5) goto LAB_013888a0;
                uVar20 = *(uint *)(param_3[4] + uVar9 * 4);
                if ((uVar20 & 1 << (uVar5 & 0x1f)) == 0) {
                  *(uint *)(param_3[4] + uVar9 * 4) = uVar20 | 1 << (uVar5 & 0x1f);
                  uVar3 = *(uint *)(iVar23 + 0x148);
                  if (uVar16 < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x01387ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(&DAT_01387ba8 +
                              *(int *)(&DAT_01387ba8 +
                                      *(int *)(*(int *)(iVar23 + 0x144) + uVar16 * 0x14) * 4)))();
                    return;
                  }
                  goto LAB_013888ac;
                }
                iVar8 = param_3[2];
              } while (iVar8 != 0);
            }
LAB_01387a28:
            uVar11 = uVar11 + 1;
          } while (uVar11 <= uVar10);
          goto LAB_01387978;
        }
      }
      else {
        if (*param_4 == 1) {
          piVar6 = (int *)(iVar23 + 0x128);
        }
        else {
          if (*(uint *)(iVar23 + 0x154) <= (uint)param_4[1]) {
            *param_1 = 0;
            return;
          }
          piVar6 = (int *)(*(int *)(iVar23 + 0x150) + param_4[1] * 4);
        }
        iVar19 = *piVar6;
      }
      iVar22 = param_3[2];
      if (iVar22 == *param_3) {
        FUN_013c402c(param_3);
        piVar18 = extraout_r3_01;
      }
      uVar10 = iVar22 * 3;
      puVar12 = (undefined4 *)(param_3[1] + iVar22 * 0xc);
      *puVar12 = 0;
      puVar12[1] = iVar19;
      puVar12[2] = uVar3;
      iVar19 = iVar22 + 1;
      param_3[2] = iVar19;
      if (iVar22 != -1) {
        do {
          while( true ) {
            iVar19 = iVar19 + -1;
            param_3[2] = iVar19;
            puVar15 = (uint *)(param_3[1] + iVar19 * 0xc);
            uVar10 = *puVar15;
            uVar16 = puVar15[1];
            piVar18 = (int *)puVar15[2];
            if ((uVar10 & 1) == 0) break;
            if (param_6 <= uVar16) {
LAB_013888bc:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar16,param_6,&DAT_01892cb0);
            }
            *(int **)(param_5 + uVar16 * 4) = piVar18;
            if (iVar19 == 0) goto LAB_01388854;
          }
          uVar20 = param_3[5];
          uVar10 = (int)piVar18 + (param_3[6] * uVar16 - uVar3);
          uVar9 = uVar10 >> 5;
          if (uVar20 <= uVar10 >> 5) {
LAB_013888a0:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar9,uVar20,&DAT_01892cc0);
          }
          uVar10 = uVar10 & 0x1f;
          piVar18 = *(int **)(param_3[4] + uVar9 * 4);
          if (((uint)piVar18 & 1 << uVar10) == 0) {
            *(uint *)(param_3[4] + uVar9 * 4) = (uint)piVar18 | 1 << uVar10;
            uVar3 = *(uint *)(iVar23 + 0x148);
            if (uVar16 < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x01388298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_0138829c +
                        *(int *)(&DAT_0138829c +
                                *(int *)(*(int *)(iVar23 + 0x144) + uVar16 * 0x14) * 4)))();
              return;
            }
LAB_013888ac:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar16,uVar3,&DAT_01894288);
          }
          iVar19 = param_3[2];
        } while (iVar19 != 0);
      }
LAB_01388854:
      *param_1 = 0;
      param_1[1] = uVar10;
      param_1[2] = piVar18;
      return;
    }
  }
  puVar4 = (undefined1 *)thunk_FUN_016d4a50(0xc);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(int *)(puVar4 + 4) = iVar19;
  *puVar4 = 2;
  *param_1 = 2;
  param_1[1] = puVar4;
  return;
}

