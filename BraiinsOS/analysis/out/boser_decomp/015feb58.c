// FUN_015feb58 @ 015feb58 size=3140 calls_out=20 calls_in=4
// strings: month

void FUN_015feb58(undefined4 *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte bVar11;
  uint *puVar12;
  char cVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  uint **ppuVar18;
  uint **ppuVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  undefined8 uVar24;
  longlong lVar25;
  uint *local_b8;
  uint *local_b4;
  uint local_ac;
  undefined8 local_a4;
  uint *local_9c;
  int local_98;
  uint local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  undefined4 local_6c;
  uint *local_68;
  undefined1 local_64;
  undefined8 local_60;
  uint *local_58;
  int local_54;
  uint local_50;
  int iStack_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d4eddc != 0) {
    local_7c = (uint *)&local_60;
    local_60._0_4_ = (uint *)&DAT_01d4edcc;
    FUN_019a768c(&DAT_01d4eddc,1,&local_7c,&DAT_01d0552c,&DAT_01d293e0);
  }
  local_64 = 0;
  ppuVar18 = (uint **)&local_60;
  local_6c = 0;
  local_7c = (uint *)0x0;
  local_74 = param_2;
  local_70 = param_3;
  local_68 = param_3;
  FUN_016bed40(ppuVar18,*(undefined4 *)(DAT_01d4edcc + 8),*(undefined4 *)(DAT_01d4edcc + 0xc));
  uVar17 = local_50;
  iVar8 = local_54;
  puVar5 = *(uint **)(*(int *)(DAT_01d4edcc + 0x10) + 0x58);
  local_60._0_4_ = (uint *)0x0;
  if (*puVar5 == 1) {
    lVar25 = ZEXT48(local_60._4_4_) << 0x20;
    if ((uint *)puVar5[1] <= param_3) {
      bVar11 = (byte)puVar5[7];
      bVar23 = (bVar11 & 1) != 0;
      if (bVar23) {
        bVar11 = (byte)puVar5[8];
      }
      if (((!bVar23 || (bVar11 & 2) == 0) || (puVar5[2] != 1)) ||
         (puVar5 = (uint *)puVar5[3], lVar25 = ZEXT48(local_60._4_4_) << 0x20, param_3 <= puVar5))
      goto LAB_015fec0c;
    }
LAB_015fee94:
    local_60 = lVar25;
    FUN_0169f478(&local_60);
    lVar25 = local_60;
LAB_015feea0:
    uVar17 = 0;
    uVar20 = 0;
    local_ac = 0;
    local_b4 = (uint *)0x0;
    uVar21 = 0;
    uVar22 = 0;
    local_60 = lVar25;
  }
  else {
LAB_015fec0c:
    uVar24 = thunk_FUN_01bee35a(puVar5,0x1cc);
    puVar5 = DAT_01d4edd0;
    piVar6 = (int *)((int)uVar24 + (int)((ulonglong)uVar24 >> 0x20));
    if ((char)piVar6[1] == '\0') {
      do {
        bVar23 = (bool)hasExclusiveAccess(0x1d4f0ac);
      } while (!bVar23);
      if (DAT_01d4f0ac == 0) {
        DAT_01d4f0ac = DAT_01d4f0ac + 1;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_004c1978,0x57,&DAT_01d06d10);
      }
      iVar10 = DAT_01d4f0ac + 1;
      *piVar6 = DAT_01d4f0ac;
      DAT_01d4f0ac = iVar10;
      *(undefined1 *)(piVar6 + 1) = 1;
    }
    puVar12 = (uint *)*piVar6;
    DataMemoryBarrier(0xb);
    if (puVar12 == (uint *)puVar5[0xbe]) {
      DataMemoryBarrier(0xb);
      puVar5[0xbe] = 1;
      local_2c = (uint *)((uint)local_2c & 0xffffff00);
      local_38 = (uint *)&DAT_00000001;
      local_34 = puVar12;
      local_30 = puVar5;
    }
    else {
      FUN_016001d0(&local_38);
    }
    puVar5 = local_38;
    local_48 = local_38;
    local_44 = local_34;
    local_40 = local_30;
    local_3c = local_2c;
    if (((uint)local_38 & 1) == 0) {
      puVar12 = local_34;
    }
    else {
      puVar12 = local_30;
    }
    lVar25 = (**(code **)(*(int *)(DAT_01d4edcc + 0xc) + 0x30))
                       (*(int *)(DAT_01d4edcc + 8) +
                        (*(int *)(*(int *)(DAT_01d4edcc + 0xc) + 8) - 1U & 0xfffffff8) + 8,puVar12,
                        &local_7c,iVar8,uVar17);
    puVar15 = (undefined1 *)((ulonglong)lVar25 >> 0x20);
    if (((uint)puVar5 & 1) == 0) {
      if (((uint)local_3c & 1) == 0) {
        FUN_015ff838();
      }
      else {
        FUN_015ffa1c(local_44);
      }
    }
    else {
      local_38 = local_44;
      if (local_44 == (uint *)0x2) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(1,&DAT_005288a8,&local_38,0,uVar17,&DAT_01d06ca0);
      }
      DataMemoryBarrier(0xb);
      local_40[0xbe] = (uint)local_44;
    }
    if ((int)lVar25 == 0) goto LAB_015fee94;
    if ((int)lVar25 == 2) goto LAB_015feea0;
    iVar8 = *(int *)(*(int *)(DAT_01d4edcc + 0x10) + 0x58);
    local_8c = *(undefined4 *)(iVar8 + 0x10);
    iVar8 = *(int *)(iVar8 + 0x14);
    local_88 = iVar8 + 1;
    if (iVar8 == -1) {
      local_88 = -1;
    }
    local_9c = local_58;
    puVar7 = *(undefined1 **)(iStack_4c + 0x10);
    local_94 = local_50;
    local_98 = local_54;
    local_90 = iStack_4c;
    local_84 = param_2;
    local_80 = param_3;
    if (puVar7 == &DAT_00000001) {
      uVar20 = 3;
      uVar17 = 2;
LAB_015feda0:
      if (local_50 <= uVar17 || local_50 <= uVar20) goto LAB_015fee1c;
      iVar8 = *(int *)(local_54 + uVar17 * 4);
      puVar14 = puVar15;
      if (iVar8 != 0) {
        puVar14 = *(undefined1 **)(local_54 + uVar20 * 4);
      }
      if (iVar8 == 0 || puVar14 == (undefined1 *)0x0) goto LAB_015fee1c;
      puVar12 = (uint *)(puVar14 + -1);
      puVar5 = (uint *)(iVar8 + -1);
      lVar2 = lVar25;
      lVar3 = lVar25;
      if (puVar12 < puVar5) goto LAB_015fef7c;
      if (puVar5 != (uint *)0x0) {
        if (puVar5 < param_3) {
          if (*(char *)((int)param_2 + (int)puVar5) < -0x40) goto LAB_015fef7c;
        }
        else if (param_3 != puVar5) goto LAB_015fef7c;
      }
      if (puVar12 != (uint *)0x0) {
        if (puVar12 < param_3) {
          if (*(char *)((int)param_2 + (int)puVar12) < -0x40) goto LAB_015fef7c;
        }
        else if (puVar12 != param_3) goto LAB_015fef7c;
      }
      uVar17 = (int)puVar14 - iVar8;
      if (uVar17 == 0) {
        ppuVar18 = (uint **)0x0;
LAB_015ff148:
        puVar5 = (uint *)&DAT_0056cfb8;
        local_ac = 2;
        ppuVar19 = &local_7c;
        lVar2 = CONCAT44(ppuVar18,4);
        goto LAB_015fee3c;
      }
      pbVar9 = (byte *)((int)param_2 + (int)puVar5);
      if (uVar17 == 1) {
        bVar11 = *pbVar9;
        ppuVar18 = (uint **)&DAT_00000001;
        if (bVar11 == 0x2b || bVar11 == 0x2d) goto LAB_015ff148;
      }
      else {
        bVar11 = *pbVar9;
      }
      if (bVar11 == 0x2d) {
        pbVar9 = (byte *)((int)param_2 + iVar8);
        if (uVar17 < 9) {
          if (uVar17 == 1) goto LAB_015ff0ac;
          iVar8 = iVar8 - (int)puVar14;
          ppuVar18 = (uint **)0x0;
          do {
            iVar8 = iVar8 + 1;
            bVar11 = *pbVar9;
            if (9 < bVar11 - 0x30) goto LAB_015ff144;
            pbVar9 = pbVar9 + 1;
            ppuVar18 = (uint **)((int)ppuVar18 * 10 - (bVar11 - 0x30));
          } while (iVar8 != -1);
        }
        else {
          iVar8 = iVar8 - (int)puVar14;
          ppuVar18 = (uint **)0x0;
          do {
            iVar8 = iVar8 + 1;
            iVar10 = (int)((longlong)(int)ppuVar18 * 10);
            if ((int)((ulonglong)((longlong)(int)ppuVar18 * 10) >> 0x20) != iVar10 >> 0x1f) {
              ppuVar18 = (uint **)&DAT_00000003;
              goto LAB_015ff5f8;
            }
            uVar17 = *pbVar9 - 0x30;
            if (9 < uVar17) goto LAB_015ff144;
            ppuVar18 = (uint **)(iVar10 - uVar17);
            if (SBORROW4(iVar10,uVar17)) {
              ppuVar18 = (uint **)&DAT_00000003;
              goto LAB_015ff148;
            }
            pbVar9 = pbVar9 + 1;
          } while (iVar8 != -1);
        }
      }
      else {
        if (bVar11 == 0x2b) {
          pbVar9 = (byte *)((int)param_2 + iVar8);
          uVar17 = uVar17 - 1;
        }
        if (7 < uVar17) {
          ppuVar18 = (uint **)0x0;
LAB_015ff078:
          iVar8 = (int)((longlong)(int)ppuVar18 * 10);
          if ((int)((ulonglong)((longlong)(int)ppuVar18 * 10) >> 0x20) != iVar8 >> 0x1f) {
            ppuVar18 = (uint **)0x2;
LAB_015ff5f8:
            if (9 < *pbVar9 - 0x30) {
              ppuVar18 = (uint **)&DAT_00000001;
            }
            goto LAB_015ff148;
          }
          uVar20 = *pbVar9 - 0x30;
          if (9 < uVar20) goto LAB_015ff144;
          ppuVar18 = (uint **)(iVar8 + uVar20);
          if (!SCARRY4(iVar8,uVar20)) goto code_r0x015ff09c;
          ppuVar18 = (uint **)0x2;
          goto LAB_015ff148;
        }
        if (uVar17 == 0) {
LAB_015ff0ac:
          ppuVar18 = (uint **)0x0;
        }
        else {
          ppuVar18 = (uint **)0x0;
          do {
            bVar11 = *pbVar9;
            if (9 < bVar11 - 0x30) goto LAB_015ff144;
            pbVar9 = pbVar9 + 1;
            uVar17 = uVar17 - 1;
            ppuVar18 = (uint **)((bVar11 - 0x30) + (int)ppuVar18 * 10);
          } while (uVar17 != 0);
        }
      }
LAB_015ff0f4:
      if (puVar7 == &DAT_00000001) {
        uVar17 = 5;
        uVar20 = 4;
LAB_015ff108:
        local_7c = (uint *)0x0;
        if (uVar20 < local_50 && uVar17 < local_50) {
          iVar8 = *(int *)(local_54 + uVar20 * 4);
          if (iVar8 != 0) {
            uVar17 = *(uint *)(local_54 + uVar17 * 4);
          }
          if (iVar8 != 0 && uVar17 != 0) {
            local_70 = (uint *)(uVar17 - 1);
            local_74 = (uint *)(iVar8 + -1);
            local_7c = param_2;
            local_78 = param_3;
          }
        }
      }
      else {
        local_7c = (uint *)0x0;
        if ((puVar15 < puVar7) &&
           (piVar6 = (int *)(*(int *)(iStack_4c + 0xc) + (int)puVar15 * 8), iVar8 = *piVar6,
           3 < (uint)(piVar6[1] - iVar8))) {
          uVar17 = iVar8 + 3;
          uVar20 = iVar8 + 2;
          goto LAB_015ff108;
        }
      }
      local_60 = lVar25;
      local_a4 = lVar25;
      FUN_015ffb94(&local_60,"month",5,&local_7c);
      uVar16 = local_60._4_4_;
      local_ac = (uint)(uint *)local_60 & 0xff;
      if (local_ac == 6) {
        if (*(undefined1 **)(iStack_4c + 0x10) == &DAT_00000001) {
          uVar17 = 7;
          uVar20 = 6;
LAB_015ff1f4:
          local_7c = (uint *)0x0;
          if (uVar20 < local_50 && uVar17 < local_50) {
            iVar8 = *(int *)(local_54 + uVar20 * 4);
            if (iVar8 != 0) {
              uVar17 = *(uint *)(local_54 + uVar17 * 4);
            }
            if (iVar8 != 0 && uVar17 != 0) {
              local_70 = (uint *)(uVar17 - 1);
              local_74 = (uint *)(iVar8 + -1);
              local_7c = param_2;
              local_78 = param_3;
            }
          }
        }
        else {
          local_7c = (uint *)0x0;
          if ((puVar15 < *(undefined1 **)(iStack_4c + 0x10)) &&
             (piVar6 = (int *)(*(int *)(iStack_4c + 0xc) + (int)puVar15 * 8), iVar8 = *piVar6,
             5 < (uint)(piVar6[1] - iVar8))) {
            uVar17 = iVar8 + 5;
            uVar20 = iVar8 + 4;
            goto LAB_015ff1f4;
          }
        }
        FUN_015ffb94(&local_60,"day",3,&local_7c);
        local_ac = (uint)(uint *)local_60 & 0xff;
        if (local_ac != 6) goto LAB_015ff2fc;
        puVar7 = (undefined1 *)FUN_01291b34(ppuVar18,uVar16,local_60._4_4_);
        lVar25 = CONCAT44(local_60._4_4_,(undefined4)local_a4);
        local_b4 = (uint *)0x0;
        if (puVar7 == (undefined1 *)0x0) {
          local_ac = 4;
          puVar5 = (uint *)0x0;
          puVar12 = (uint *)0x0;
          local_b8 = (uint *)0x0;
          goto LAB_015fee5c;
        }
        uVar17 = 8;
        uVar20 = 9;
        local_b8 = (uint *)&DAT_004ba58c;
        if (*(undefined1 **)(iStack_4c + 0x10) != &DAT_00000001) {
          local_ac = 1;
          puVar12 = (uint *)0x9;
          if ((puVar15 < *(undefined1 **)(iStack_4c + 0x10)) &&
             (piVar6 = (int *)(*(int *)(iStack_4c + 0xc) + (int)puVar15 * 8), iVar8 = *piVar6,
             7 < (uint)(piVar6[1] - iVar8))) {
            uVar20 = iVar8 + 7;
            uVar17 = iVar8 + 6;
            goto LAB_015ff2d8;
          }
LAB_015ff404:
          local_b4 = (uint *)0x0;
          puVar5 = (uint *)0x0;
          goto LAB_015fee5c;
        }
LAB_015ff2d8:
        if ((local_50 <= uVar17 || local_50 <= uVar20) ||
           (iVar8 = *(int *)(local_54 + uVar17 * 4), iVar8 == 0)) {
          local_ac = 1;
LAB_015ff2f4:
          local_b4 = (uint *)0x0;
          puVar5 = local_b4;
          puVar12 = (uint *)0x9;
          goto LAB_015fee5c;
        }
        iVar10 = *(int *)(local_54 + uVar20 * 4);
        local_ac = 1;
        if (iVar10 == 0) goto LAB_015ff2f4;
        puVar12 = (uint *)(iVar10 + -1);
        puVar5 = (uint *)(iVar8 + -1);
        lVar2 = local_60;
        lVar3 = local_a4;
        if (puVar12 < puVar5) goto LAB_015fef7c;
        if (puVar5 != (uint *)0x0) {
          if (puVar5 < param_3) {
            if (*(char *)((int)param_2 + (int)puVar5) < -0x40) goto LAB_015fef7c;
          }
          else if (param_3 != puVar5) goto LAB_015fef7c;
        }
        if (puVar12 != (uint *)0x0) {
          if (puVar12 < param_3) {
            if (*(char *)((int)param_2 + (int)puVar12) < -0x40) {
LAB_015fef7c:
              local_60 = lVar2;
              local_a4 = lVar3;
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(param_2,param_3,puVar5,puVar12,&DAT_01d06cf0);
            }
          }
          else if (puVar12 != param_3) goto LAB_015fef7c;
        }
        puVar15 = (undefined1 *)(iVar10 - iVar8);
        local_ac = 2;
        if (puVar15 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          goto LAB_015ff2f4;
        }
        pbVar9 = (byte *)((int)param_2 + (int)puVar5);
        if (puVar15 == &DAT_00000001) {
          bVar11 = *pbVar9;
          puVar5 = (uint *)0x0;
          if ((bVar11 == 0x2b) || (bVar11 == 0x2d)) {
            local_b4 = (uint *)0x0;
            puVar7 = &DAT_00000001;
            puVar12 = (uint *)0x9;
            goto LAB_015fee5c;
          }
        }
        else {
          bVar11 = *pbVar9;
        }
        if (bVar11 == 0x2b) {
          puVar15 = puVar15 + -1;
          pbVar9 = pbVar9 + 1;
        }
        if (puVar15 < &DAT_00000003) {
          puVar14 = puVar15;
          if (puVar15 == (undefined1 *)0x0) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            bVar23 = puVar15 == &DAT_00000001;
            do {
              bVar11 = *pbVar9;
              if (9 < bVar11 - 0x30) {
                puVar7 = &DAT_00000001;
                goto LAB_015ff2f4;
              }
              pbVar9 = pbVar9 + 1;
              uVar17 = (bVar11 - 0x30) + uVar17 * 10;
              bVar1 = !bVar23;
              bVar23 = true;
            } while (bVar1);
          }
LAB_015ff628:
          FUN_015ffd50(&local_7c,&local_a4,5);
          FUN_015ffe04(&local_60,&local_7c);
          ppuVar18 = local_60._4_4_;
          local_ac = (uint)(uint *)local_60 & 0xff;
          lVar25 = local_60;
          if (local_ac == 6) {
            FUN_015ffd50(&local_7c,&local_a4,6);
            if (local_7c == (uint *)0x0) {
              local_ac = 1;
            }
            else {
              local_2c = local_70;
              local_30 = local_74;
              local_34 = local_78;
              local_38 = local_7c;
              FUN_015fff14(&local_38);
              uVar20 = FUN_01aa4e44();
              if ((uVar20 & 1) == 0) {
                FUN_015ffd50(&local_60,&local_a4,7);
                puVar5 = (uint *)local_60;
                FUN_015ffd50(&local_7c,&local_a4,8);
                cVar4 = FUN_015fff9c(&local_7c);
                if (cVar4 != '\x1c') {
                  cVar13 = '\x1c';
                  if (cVar4 != '\x1d') {
                    cVar13 = cVar4;
                  }
                  FUN_0169f478(&local_a4);
                  *param_1 = 0x80000000;
                  param_1[1] = ppuVar18;
                  param_1[2] = puVar7;
                  *(bool *)((int)param_1 + 0x11) = puVar5 != (uint *)0x0;
                  *(char *)(param_1 + 4) = cVar13;
                  param_1[3] = uVar20 & 0xffffff00 | uVar17 & 0xff;
                  return;
                }
                local_ac = 5;
                puVar14 = &DAT_0000001d;
              }
              else {
                local_ac = 3;
                puVar14 = (undefined1 *)(uVar20 >> 8);
              }
            }
            puVar12 = (uint *)0x7;
            local_b8 = (uint *)&DAT_00520eda;
            puVar7 = puVar14;
            goto LAB_015ff404;
          }
          goto LAB_015ff304;
        }
        uVar17 = 0;
        puVar5 = (uint *)0x0;
        do {
          puVar14 = (undefined1 *)0x0;
          if (puVar15 == (undefined1 *)0x0) goto LAB_015ff628;
          uVar17 = (uVar17 & 0xff) * 4 + (uVar17 & 0xff);
          if (uVar17 >> 7 != 0) {
            puVar7 = &DAT_00000001;
            if (*pbVar9 - 0x30 < 10) {
              puVar7 = (undefined1 *)0x2;
            }
            goto LAB_015ff2f4;
          }
          uVar20 = *pbVar9 - 0x30;
          if (9 < uVar20) {
            puVar7 = &DAT_00000001;
            goto LAB_015ff618;
          }
          uVar17 = (uVar17 * 2 & 0xff) + (uVar20 & 0xff);
          puVar15 = puVar15 + -1;
          pbVar9 = pbVar9 + 1;
        } while ((uVar17 & 0xffffff00) == 0);
        puVar7 = (undefined1 *)0x2;
LAB_015ff618:
        local_ac = 2;
        local_b4 = (uint *)0x0;
        puVar12 = (uint *)0x9;
        goto LAB_015fee58;
      }
LAB_015ff2fc:
      lVar25 = local_60;
LAB_015ff304:
      local_60._4_4_ = (uint **)((ulonglong)lVar25 >> 0x20);
      local_60._0_4_ = (uint *)lVar25;
      local_b8 = (uint *)local_60._4_4_;
      ppuVar18 = (uint **)((uint)(uint *)local_60 >> 0x10);
      local_b4 = (uint *)((uint)local_58 & 0xffff0000);
      puVar7 = (undefined1 *)((uint)(uint *)local_60 >> 8 & 0xff);
      puVar5 = local_58;
      puVar12 = local_58;
      local_60 = lVar25;
    }
    else {
      if ((puVar15 < puVar7) &&
         (puVar5 = (uint *)(*(int *)(iStack_4c + 0xc) + (int)puVar15 * 8), uVar17 = *puVar5,
         1 < puVar5[1] - uVar17)) {
        uVar20 = uVar17 + 1;
        goto LAB_015feda0;
      }
LAB_015fee1c:
      local_ac = 1;
      local_7c = (uint *)&DAT_0056cfb8;
      puVar5 = (uint *)0x4;
      ppuVar19 = ppuVar18;
      lVar2 = lVar25;
LAB_015fee3c:
      puVar7 = (undefined1 *)((ulonglong)lVar2 >> 0x20);
      local_60._0_4_ = (uint *)lVar2;
      *ppuVar19 = puVar5;
      local_b8 = local_7c;
      local_b4 = (uint *)((uint)(uint *)local_60 & 0xffff0000);
      puVar5 = (uint *)local_60;
      puVar12 = (uint *)local_60;
      local_a4._4_4_ = puVar15;
LAB_015fee58:
      local_60._4_4_ = (uint **)((ulonglong)lVar25 >> 0x20);
      local_a4._0_4_ = (undefined4)lVar25;
      local_60 = CONCAT44(local_60._4_4_,(uint *)local_60);
    }
LAB_015fee5c:
    FUN_0169f478(&local_a4);
    uVar21 = (uint)puVar5 & 0xff00;
    uVar22 = (uint)puVar12 & 0xff;
    uVar17 = (int)ppuVar18 << 0x10;
    uVar20 = ((uint)puVar7 & 0xff) << 8;
  }
  uVar16 = 0;
  if ((int)param_3 < 0) {
LAB_015feec8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar16,param_3);
  }
  if (param_3 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
    iVar8 = 1;
  }
  else {
    uVar16 = 1;
    iVar8 = FUN_01298504(param_3,1);
    puVar5 = param_3;
    if (iVar8 == 0) goto LAB_015feec8;
  }
  FUN_01bed4e2(iVar8,param_2,param_3);
  param_1[3] = uVar20 | uVar17 | local_ac;
  *param_1 = puVar5;
  param_1[1] = iVar8;
  param_1[2] = param_3;
  param_1[4] = local_b8;
  param_1[5] = uVar21 | (uint)local_b4 | uVar22;
  return;
code_r0x015ff09c:
  uVar17 = uVar17 - 1;
  pbVar9 = pbVar9 + 1;
  if (uVar17 == 0) goto LAB_015ff0f4;
  goto LAB_015ff078;
LAB_015ff144:
  ppuVar18 = (uint **)&DAT_00000001;
  goto LAB_015ff148;
}

