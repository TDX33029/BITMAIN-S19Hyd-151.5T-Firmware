// FUN_016b7df8 @ 016b7df8 size=1156 calls_out=6 calls_in=2
// strings: 

void FUN_016b7df8(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,
                 uint param_6)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  undefined8 uVar21;
  uint local_54;
  uint local_4c;
  int local_30;
  uint local_2c;
  
  if (param_6 != 0) {
    FUN_01bed93e(param_5,0,param_6 << 2);
  }
  iVar20 = param_2[6];
  uVar3 = param_4[4];
  uVar9 = param_4[5];
  iVar4 = uVar9 - uVar3;
  uVar10 = *(uint *)(iVar20 + 0x148);
  if (uVar9 < uVar3) {
    iVar4 = 0;
  }
  param_3[2] = 0;
  param_3[6] = iVar4 + 1U;
  uVar1 = (ulonglong)(iVar4 + 1U) * (ulonglong)uVar10;
  uVar10 = (uint)uVar1;
  if ((int)(uVar1 >> 0x20) == 0) {
    uVar19 = 0x200000;
    if (*param_2 != 0) {
      uVar19 = param_2[1] << 3;
    }
    if (uVar10 <= uVar19) {
      puVar18 = (uint *)(uVar10 >> 5);
      if ((uVar1 & 0x1f) != 0) {
        puVar18 = (uint *)((uVar10 >> 5) + 1);
      }
      puVar14 = (uint *)param_3[5];
      if (puVar18 <= (uint *)param_3[5]) {
        param_3[5] = (int)puVar18;
        puVar14 = puVar18;
      }
      if (puVar14 == (uint *)0x0) {
        puVar15 = (uint *)0x0;
      }
      else {
        FUN_01bed93e(param_3[4],0,(int)puVar14 << 2);
        puVar15 = puVar14;
      }
      piVar11 = param_3 + 3;
      if (puVar15 < puVar18) {
        if (puVar14 < puVar18) {
          FUN_016c0f54(piVar11,(int)puVar18 - (int)puVar14,0);
        }
        else {
          param_3[5] = (int)puVar18;
        }
      }
      if (uVar9 < uVar3) {
        *param_1 = 0;
        return;
      }
      if (*param_4 == 0) {
        local_54 = *(uint *)(iVar20 + 0x128);
        if (local_54 != *(uint *)(iVar20 + 300)) {
          pcVar6 = "";
          iVar4 = param_4[2];
          iVar8 = param_4[3];
          if ((char)param_2[5] != '\x03') {
            pcVar6 = (char *)(param_2 + 2);
          }
          iVar16 = *(int *)pcVar6;
          iVar12 = *(int *)((int)pcVar6 + 4);
          iVar2 = *(int *)((int)pcVar6 + 0xc);
          local_4c = uVar3;
          do {
            if ((char)iVar2 != '\x02') {
              (**(code **)(iVar12 + 0x10))
                        (&local_30,iVar16 + 8 + (*(int *)(iVar12 + 8) - 1U & 0xfffffff8),iVar4,iVar8
                         ,local_4c,uVar9);
              if (local_30 == 0) break;
              local_4c = local_2c;
            }
            iVar17 = param_3[2];
            if (iVar17 == *param_3) {
              FUN_018c4418(param_3);
            }
            iVar7 = iVar17 + 1;
            param_3[2] = iVar7;
            puVar13 = (undefined4 *)(param_3[1] + iVar17 * 0xc);
            *puVar13 = 0;
            puVar13[1] = local_54;
            puVar13[2] = local_4c;
            if (iVar17 != -1) {
              do {
                iVar7 = iVar7 + -1;
                param_3[2] = iVar7;
                puVar18 = (uint *)(param_3[1] + iVar7 * 0xc);
                uVar10 = puVar18[1];
                if (*puVar18 == 2) break;
                if ((*puVar18 & 1) == 0) {
                  iVar17 = FUN_016b8f4c(piVar11,uVar10,puVar18[2] - uVar3);
                  if (iVar17 != 0) {
                    if (*(uint *)(iVar20 + 0x148) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar10,*(uint *)(iVar20 + 0x148),&DAT_01d08b38);
                    }
                    /* WARNING: Could not recover jumptable at 0x016b80e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(&DAT_016b80e4 +
                              *(int *)(&DAT_016b80e4 +
                                      *(int *)(*(int *)(iVar20 + 0x144) + uVar10 * 0x14) * 4)))();
                    return;
                  }
                  iVar7 = param_3[2];
                }
                else {
                  if (param_6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar10,param_6,&DAT_01d08b48);
                  }
                  *(uint *)(param_5 + uVar10 * 4) = puVar18[2];
                }
              } while (iVar7 != 0);
            }
            local_4c = local_4c + 1;
          } while (local_4c <= uVar9);
LAB_016b8d7c:
          *param_1 = 0;
          return;
        }
      }
      else if (*param_4 == 1) {
        local_54 = *(uint *)(iVar20 + 0x128);
      }
      else {
        if (*(uint *)(iVar20 + 0x154) <= (uint)param_4[1]) goto LAB_016b8d7c;
        local_54 = *(uint *)(*(int *)(iVar20 + 0x150) + param_4[1] * 4);
      }
      iVar4 = param_3[2];
      if (iVar4 == *param_3) {
        FUN_018c4418(param_3);
      }
      iVar8 = iVar4 + 1;
      param_3[2] = iVar8;
      puVar14 = (uint *)(param_3[1] + iVar4 * 0xc);
      *puVar14 = 0;
      puVar14[1] = local_54;
      puVar14[2] = uVar3;
      puVar15 = puVar18;
      if (iVar4 != -1) {
        do {
          iVar8 = iVar8 + -1;
          param_3[2] = iVar8;
          puVar14 = (uint *)(param_3[1] + iVar8 * 0xc);
          puVar15 = puVar18;
          if (*puVar14 == 2) break;
          uVar9 = puVar14[1];
          puVar15 = (uint *)puVar14[2];
          if ((*puVar14 & 1) == 0) {
            uVar21 = FUN_016b8f4c(piVar11,uVar9,(int)puVar15 - uVar3);
            puVar14 = (uint *)((ulonglong)uVar21 >> 0x20);
            if ((int)uVar21 != 0) {
              if (*(uint *)(iVar20 + 0x148) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar9,*(uint *)(iVar20 + 0x148),&DAT_01d08b38);
              }
                    /* WARNING: Could not recover jumptable at 0x016b87a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_016b87a8 +
                        *(int *)(&DAT_016b87a8 +
                                *(int *)(*(int *)(iVar20 + 0x144) + uVar9 * 0x14) * 4)))();
              return;
            }
            iVar8 = param_3[2];
          }
          else {
            if (param_6 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar9,param_6,&DAT_01d08b48);
            }
            *(uint **)(param_5 + uVar9 * 4) = puVar15;
            puVar14 = puVar15;
            puVar15 = puVar18;
          }
          puVar18 = puVar15;
        } while (iVar8 != 0);
      }
      *param_1 = 0;
      param_1[1] = puVar14;
      param_1[2] = puVar15;
      return;
    }
  }
  local_30 = CONCAT31(local_30._1_3_,2);
  local_2c = iVar4;
  uVar5 = FUN_016cc61c(&local_30);
  *param_1 = 2;
  param_1[1] = uVar5;
  return;
}

