// FUN_01af5170 @ 01af5170 size=2532 calls_out=5 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01af5170(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint3 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint3 *puVar8;
  uint3 *puVar9;
  int iVar10;
  uint3 *extraout_r2;
  uint *extraout_r2_00;
  uint *puVar11;
  uint *extraout_r2_01;
  uint3 *extraout_r3;
  uint3 *extraout_r3_00;
  uint3 *extraout_r3_01;
  uint3 *extraout_r3_02;
  uint3 *extraout_r3_03;
  uint3 *puVar12;
  uint3 *puVar13;
  uint uVar14;
  uint3 *puVar15;
  uint3 *unaff_r7;
  uint3 *puVar16;
  undefined1 *puVar17;
  byte unaff_r10;
  byte bVar18;
  uint3 *puVar19;
  int unaff_r11;
  uint3 *puVar20;
  uint3 *local_17c;
  uint3 *local_168;
  uint3 *local_164;
  uint3 *local_158;
  uint3 *local_144;
  uint3 *local_140;
  uint3 *local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  byte *local_114;
  uint3 *local_110;
  byte *local_f4;
  uint3 *local_f0;
  uint3 *local_ec;
  int local_e8;
  uint3 *local_e4;
  int local_e0;
  undefined4 local_c8;
  uint3 *local_c4;
  undefined4 local_a8;
  undefined1 local_a4;
  uint *local_a0;
  byte *local_84;
  uint *local_80;
  uint *local_7c;
  undefined4 local_78;
  undefined1 local_74;
  uint3 *local_54;
  int local_50;
  int local_4c;
  undefined1 *local_48;
  uint3 *local_44;
  uint3 *local_40;
  uint3 *local_3c;
  int local_38;
  byte local_34;
  uint3 local_33;
  uint3 *local_30;
  uint3 *local_2c;
  
  puVar5 = (uint3 *)param_2[1];
  puVar12 = (uint3 *)param_2[2];
  if (puVar12 == puVar5) {
    uVar6 = 3;
    goto LAB_01af5194;
  }
  local_138 = 0x8000001d;
  local_134 = CONCAT31(local_134._1_3_,0x18);
  local_158 = unaff_r7;
  if (puVar12 < puVar5) {
    iVar10 = *param_2;
    puVar13 = (uint3 *)((int)puVar12 + 1);
    param_2[2] = (int)puVar13;
    bVar18 = *(byte *)((int)puVar12 + iVar10);
    local_158 = (uint3 *)~(uint)bVar18;
    if ((((uint)local_158 & 0x1f) == 0) || (puVar5 <= puVar13)) goto LAB_01af5464;
    bVar2 = *(byte *)((int)puVar13 + iVar10);
    puVar13 = (uint3 *)((int)puVar12 + 2);
    param_2[2] = (int)puVar13;
    uVar14 = (uint)(char)bVar2;
    if ((int)uVar14 < 0) {
      puVar16 = (uint3 *)(bVar2 - 0x81);
      local_158 = puVar16;
      if (puVar16 < &SUB_00000004) {
        local_158 = (uint3 *)(&switchD_01af531c::switchdataD_01af5320)[(int)puVar16];
        switch(puVar16) {
        case (uint3 *)0x0:
          if (puVar13 < puVar5) {
            local_158 = (uint3 *)((int)puVar13 + iVar10);
            puVar13 = (uint3 *)((int)puVar12 + 3);
            param_2[2] = (int)puVar13;
            uVar14 = (uint)(char)(byte)*local_158;
            if ((int)uVar14 < 0) goto LAB_01af51f0;
          }
          break;
        case (uint3 *)0x1:
          if (puVar13 < puVar5) {
            bVar2 = *(byte *)((int)puVar13 + iVar10);
            puVar13 = (uint3 *)((int)puVar12 + 3);
            param_2[2] = (int)puVar13;
            if (puVar13 < puVar5) {
              bVar3 = *(byte *)((int)puVar13 + iVar10);
              local_158 = (uint3 *)(uint)bVar3;
              puVar13 = puVar12 + 1;
              param_2[2] = (int)puVar13;
              if (bVar2 != 0) {
                local_158 = (uint3 *)(uint)CONCAT11(bVar2,bVar3);
LAB_01af5454:
                if (local_158 < (uint3 *)0xffff) goto LAB_01af51f4;
              }
            }
          }
          break;
        case (uint3 *)0x2:
          if (puVar13 < puVar5) {
            bVar2 = *(byte *)((int)puVar13 + iVar10);
            puVar13 = (uint3 *)((int)puVar12 + 3);
            param_2[2] = (int)puVar13;
            if (puVar13 < puVar5) {
              bVar3 = *(byte *)((int)puVar13 + iVar10);
              puVar13 = puVar12 + 1;
              param_2[2] = (int)puVar13;
              if (puVar13 < puVar5) {
                local_158 = (uint3 *)(uint)*(byte *)((int)puVar13 + iVar10);
                puVar13 = (uint3 *)((int)puVar12 + 5);
                param_2[2] = (int)puVar13;
                if (bVar2 != 0) {
                  uVar14 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10;
LAB_01af5418:
                  local_158 = (uint3 *)(uVar14 | (uint)local_158);
                  goto LAB_01af5454;
                }
              }
            }
          }
          break;
        case (uint3 *)0x3:
          if (puVar13 < puVar5) {
            bVar2 = *(byte *)((int)puVar13 + iVar10);
            puVar13 = (uint3 *)((int)puVar12 + 3);
            param_2[2] = (int)puVar13;
            if (puVar13 < puVar5) {
              bVar3 = *(byte *)((int)puVar13 + iVar10);
              puVar13 = puVar12 + 1;
              param_2[2] = (int)puVar13;
              if (puVar13 < puVar5) {
                bVar4 = *(byte *)((int)puVar13 + iVar10);
                puVar13 = (uint3 *)((int)puVar12 + 5);
                param_2[2] = (int)puVar13;
                if (puVar13 < puVar5) {
                  local_158 = (uint3 *)(uint)*(byte *)((int)puVar13 + iVar10);
                  puVar13 = (uint3 *)((int)puVar12 + 6);
                  param_2[2] = (int)puVar13;
                  if (bVar2 != 0) {
                    uVar14 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar4 << 8;
                    goto LAB_01af5418;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_01af5464;
    }
LAB_01af51f0:
    local_158 = (uint3 *)(uVar14 & 0xff);
LAB_01af51f4:
    local_144 = (uint3 *)((int)local_158 + (int)puVar13);
    local_158 = local_158;
    if ((CARRY4((uint)local_158,(uint)puVar13)) || (local_158 = local_158, puVar5 < local_144))
    goto LAB_01af5464;
    param_2[2] = (int)local_144;
    if (bVar18 == 0x30) {
      local_114 = (byte *)((int)puVar13 + iVar10);
      local_118 = 0x8000002d;
      local_ec = (uint3 *)0x0;
      local_110 = local_158;
      local_f4 = local_114;
      local_f0 = local_158;
      FUN_01af347c(&local_e8,&local_f4,2);
      if (local_e8 == -0x7fffffd3) {
        FUN_01aef5d0(&local_48,&local_f4);
        puVar13 = local_3c;
        puVar5 = local_40;
        if (local_48 != (undefined1 *)0x8000002d) {
          puVar12 = (uint3 *)(uint)local_33;
          local_13c = local_3c;
          local_140 = local_30;
          local_144 = local_2c;
          local_158 = local_40;
          puVar17 = local_48;
          unaff_r11 = local_38;
          puVar5 = local_44;
          goto LAB_01af54dc;
        }
        local_144 = local_3c;
        local_140 = local_40;
        local_13c = (uint3 *)&DAT_0000000b;
        if (local_ec == local_f0) {
LAB_01af52a0:
          puVar20 = (uint3 *)0x0;
        }
        else {
          puVar20 = &local_33;
          FUN_01af347c(&local_48,&local_f4,0x30);
          local_158 = local_40;
          puVar16 = local_44;
          if (local_48 != (undefined1 *)0x8000002d) {
            puVar12 = (uint3 *)(uint)local_33;
            local_13c = local_3c;
            local_140 = local_30;
            local_144 = local_2c;
            puVar17 = local_48;
            unaff_r11 = local_38;
            puVar5 = local_44;
            goto LAB_01af54dc;
          }
          if (local_40 == (uint3 *)0x0) goto LAB_01af52a0;
          local_13c = (uint3 *)&DAT_0000000b;
          puVar8 = (uint3 *)0x0;
          local_164 = (uint3 *)0x0;
          puVar11 = extraout_r2_00;
          puVar12 = (uint3 *)0x0;
          do {
            local_c8 = 0x8000001d;
            local_c4 = (uint3 *)CONCAT31(local_c4._1_3_,0x17);
            puVar15 = local_c4;
            if (((local_158 <= puVar8) ||
                (pbVar1 = (byte *)((int)puVar16 + (int)puVar8), puVar20 = puVar8,
                (~*pbVar1 & 0x1f) == 0)) || (local_158 <= (uint3 *)((int)puVar8 + 1))) {
switchD_01af5600_default:
              local_a4 = 0;
              *(undefined1 *)((undefined2 *)((uint)&local_a8 | 5) + 1) = 0;
              *(undefined2 *)((uint)&local_a8 | 5) = 0;
              local_a0 = puVar11;
LAB_01af59b4:
              puVar12 = puVar20;
              local_a8 = 0x80000000;
              FUN_01aeb5f4(&local_a8);
              puVar9 = extraout_r3_03;
              puVar19 = local_e4;
              puVar5 = puVar15;
LAB_01af59cc:
              local_13c = (uint3 *)0x0;
              local_140 = puVar9;
              local_144 = puVar15;
              puVar17 = (undefined1 *)0x8000001d;
              unaff_r11 = local_e0;
              local_34 = (byte)puVar19;
              goto LAB_01af54dc;
            }
            bVar18 = *(byte *)((int)puVar16 + (int)puVar8 + 1);
            puVar9 = (uint3 *)((int)puVar8 + 2);
            puVar11 = (uint *)(uint)bVar18;
            if (0x7fffffff < (uint)(int)(char)bVar18) {
              switch(puVar11) {
              case (uint *)0x81:
                puVar11 = &switchD_01af5600::switchdataD_01af5604;
                if ((puVar9 < local_158) &&
                   (0x7fffffff < (uint)(int)(char)*(byte *)((int)puVar16 + (int)puVar9))) {
                  puVar11 = (uint *)(uint)*(byte *)((int)puVar16 + (int)puVar9);
                  puVar9 = (uint3 *)((int)puVar8 + 3);
                  goto LAB_01af5720;
                }
                break;
              case (uint *)0x82:
                puVar11 = &switchD_01af5600::switchdataD_01af5604;
                if (((puVar9 < local_158) && ((uint3 *)((int)puVar8 + 3) < local_158)) &&
                   (*(byte *)((int)puVar16 + (int)puVar9) != 0)) {
                  puVar11 = (uint *)(uint)CONCAT11(*(byte *)((int)puVar16 + (int)puVar9),
                                                   *(byte *)((int)puVar16 + (int)puVar8 + 3));
                  puVar9 = puVar8 + 1;
LAB_01af5714:
                  puVar20 = puVar8;
                  if (puVar11 < (uint *)0xffff) goto LAB_01af5720;
                }
                break;
              case (uint *)0x83:
                puVar11 = &switchD_01af5600::switchdataD_01af5604;
                if ((((puVar9 < local_158) &&
                     (puVar20 = (uint3 *)((int)puVar8 + 3), puVar20 < local_158)) &&
                    (puVar8 + 1 < local_158)) && (*(byte *)((int)puVar16 + (int)puVar9) != 0)) {
                  puVar11 = (uint *)((uint)*(byte *)((int)puVar16 + (int)puVar20) << 8 |
                                     (uint)*(byte *)((int)puVar16 + (int)puVar9) << 0x10 |
                                    (uint)*(byte *)((int)puVar16 + (int)(puVar8 + 1)));
                  puVar9 = (uint3 *)((int)puVar8 + 5);
                  puVar8 = puVar20;
                  goto LAB_01af5714;
                }
                break;
              case (uint *)0x84:
                puVar11 = &switchD_01af5600::switchdataD_01af5604;
                if (((puVar9 < local_158) && ((uint3 *)((int)puVar8 + 3) < local_158)) &&
                   ((puVar8 + 1 < local_158 &&
                    (((uint3 *)((int)puVar8 + 5) < local_158 &&
                     (*(byte *)((int)puVar16 + (int)puVar9) != 0)))))) {
                  puVar11 = (uint *)((uint)*(byte *)((int)puVar16 + (int)puVar8 + 3) << 0x10 |
                                     (uint)*(byte *)((int)puVar16 + (int)puVar9) << 0x18 |
                                     (uint)*(byte *)((int)puVar16 + (int)(puVar8 + 1)) << 8 |
                                    (uint)*(byte *)((int)puVar16 + (int)puVar8 + 5));
                  puVar9 = (uint3 *)((int)puVar8 + 6);
                  goto LAB_01af5714;
                }
              }
              goto switchD_01af5600_default;
            }
LAB_01af5720:
            puVar8 = (uint3 *)((int)puVar9 + (int)puVar11);
            if ((CARRY4((uint)puVar11,(uint)puVar9)) || (local_158 < puVar8))
            goto switchD_01af5600_default;
            if (*pbVar1 != 0x30) goto LAB_01af59b4;
            local_7c = (uint *)0x0;
            local_84 = (byte *)((int)puVar16 + (int)puVar9);
            local_80 = puVar11;
            FUN_01aefedc(&local_48,&local_84);
            bVar18 = local_34;
            unaff_r11 = local_38;
            puVar15 = local_44;
            puVar19 = (uint3 *)(uint)local_34;
            if (local_48 != (undefined1 *)0x8000002d) {
              local_13c = local_3c;
              local_158 = local_40;
              puVar12 = (uint3 *)(uint)local_33;
              local_140 = local_30;
              local_144 = local_2c;
              puVar17 = local_48;
              goto LAB_01af5a08;
            }
            puVar20 = puVar12;
            if ((local_40 == (uint3 *)&DAT_00000003) && ((short)*local_44 == 0x1d55)) {
              if ((byte *)((int)local_44 + 2) == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0cc(&DAT_01d30578);
              }
              bVar2 = *(byte *)((int)local_44 + 2);
              if (bVar2 == 0x15) {
                if (local_13c != (uint3 *)&DAT_0000000b) {
LAB_01af5a54:
                  puVar17 = &DAT_80000009;
                  goto LAB_01af5a28;
                }
                local_54 = local_3c;
                local_78 = 0x8000001d;
                local_74 = 0xd;
                local_4c = 0;
                local_50 = local_38;
                FUN_01af347c(&local_48,&local_54,10);
                if (local_48 == (undefined1 *)0x8000002d) {
                  local_48 = (undefined1 *)0x80000000;
                  if (local_40 == (uint3 *)&DAT_00000001) {
                    puVar15 = (uint3 *)(uint)(byte)*local_44;
                    FUN_01aeb5f4(&local_48);
                    local_13c = puVar15;
                    if ((puVar15 < &DAT_00000007) || (puVar15 + -2 < &DAT_00000003)) {
                      if (local_4c == local_50) {
                        FUN_01aeb5f4(&local_78);
                        local_17c = (uint3 *)((uint)local_17c & 0xffffff00 | (uint)puVar15);
                        puVar9 = extraout_r3_02;
                        goto LAB_01af57a8;
                      }
                      puVar17 = (undefined1 *)0x8000001d;
                      local_13c = (uint3 *)0x0;
                      puVar15 = (uint3 *)&DAT_0000000d;
                      uVar14 = 0;
                      goto LAB_01af5a30;
                    }
                    puVar17 = (undefined1 *)0x80000027;
                    puVar15 = local_17c;
                  }
                  else if (local_40 == (uint3 *)0x0) {
                    FUN_01aeb5f4(&local_48);
                    puVar17 = (undefined1 *)0x80000000;
                    local_13c = (uint3 *)0x0;
                    puVar15 = (uint3 *)&DAT_0000000b;
                  }
                  else {
                    local_13c = (uint3 *)0x0;
                    puVar15 = (uint3 *)0x0;
                    puVar17 = (undefined1 *)0x80000000;
                  }
                }
                else {
                  local_13c = local_3c;
                  local_144 = local_2c;
                  local_140 = local_30;
                  puVar12 = (uint3 *)(uint)local_33;
                  local_158 = local_40;
                  puVar15 = local_44;
                  puVar17 = local_48;
                  unaff_r11 = local_38;
                  bVar18 = local_34;
                }
                FUN_01aeb5f4(&local_78);
LAB_01af5a08:
                uVar14 = (uint)puVar15 & 0xffffff00;
              }
              else {
                if (bVar2 == 0x18) {
                  if (puVar12 != (uint3 *)0x0) goto LAB_01af5a54;
                  local_50 = local_38;
                  local_78 = 0x80000000;
                  local_4c = 0;
                  local_54 = local_3c;
                  FUN_01aef5d0(&local_48,&local_54);
                  puVar17 = local_48;
                  if (local_48 == (undefined1 *)0x8000002d) {
                    if (local_4c == local_50) {
                      local_168 = local_40;
                      local_164 = local_3c;
                      FUN_01aeb5f4(&local_78);
                      puVar20 = (uint3 *)&DAT_00000001;
                      puVar9 = extraout_r3_01;
                      goto LAB_01af57a8;
                    }
                    local_13c = (uint3 *)0x0;
                    puVar17 = (undefined1 *)0x80000000;
                  }
                  else {
                    local_140 = local_30;
                    local_144 = local_2c;
                    local_158 = local_40;
                    local_13c = local_3c;
                    FUN_01aeb5f4(&local_78);
                    puVar12 = (uint3 *)(uint)local_33;
                    puVar15 = local_44;
                    unaff_r11 = local_38;
                    bVar18 = local_34;
                  }
                  goto LAB_01af5a08;
                }
                if (bVar2 != 0x1d) goto LAB_01af57a0;
                puVar17 = (undefined1 *)0x80000025;
LAB_01af5a28:
                uVar14 = 0;
                puVar15 = (uint3 *)0x0;
                local_13c = (uint3 *)0x0;
              }
LAB_01af5a30:
              FUN_01aeb5f4(&local_c8);
              puVar5 = (uint3 *)(uVar14 | (uint)puVar15 & 0xff);
              local_34 = bVar18;
              goto LAB_01af54dc;
            }
LAB_01af57a0:
            puVar9 = extraout_r3_00;
            if ((local_34 & 1) != 0) {
              puVar17 = (undefined1 *)0x80000021;
              goto LAB_01af5a28;
            }
LAB_01af57a8:
            if (local_7c != local_80) {
              local_158 = local_e4;
              puVar5 = local_c4;
              goto LAB_01af59cc;
            }
            FUN_01aeb5f4(&local_c8);
            puVar11 = extraout_r2_01;
            puVar12 = puVar20;
          } while (puVar8 != local_158);
        }
        if (local_ec != local_f0) {
          param_1[2] = local_138;
          param_1[3] = local_134;
          param_1[4] = uStack_130;
          param_1[5] = uStack_12c;
          param_1[6] = local_128;
          param_1[7] = uStack_124;
          param_1[8] = uStack_120;
          param_1[9] = uStack_11c;
          uVar6 = 2;
LAB_01af5194:
          *param_1 = uVar6;
          param_1[1] = 0;
          return;
        }
        *(char *)(param_1 + 7) = (char)puVar13;
        *(short *)((int)param_1 + 0x1d) = (short)((uint)puVar13 >> 8);
        *(char *)((int)param_1 + 0x1f) = (char)((uint)puVar13 >> 0x18);
        param_1[2] = local_168;
        param_1[8] = local_13c;
        param_1[4] = local_e4;
        param_1[5] = local_e0;
        param_1[6] = puVar5;
        param_1[9] = 0;
        *param_1 = puVar20;
        param_1[1] = 0;
        param_1[3] = local_164;
      }
      else {
        puVar5 = (uint3 *)0x1af535c;
        FUN_01aeb5f4(&local_e8);
        puVar17 = (undefined1 *)0x8000000d;
        local_13c = extraout_r2;
        local_140 = extraout_r3;
        local_34 = unaff_r10;
LAB_01af54dc:
        param_1[1] = 0;
        param_1[2] = puVar17;
        param_1[3] = puVar5;
        param_1[4] = local_158;
        *(short *)((int)param_1 + 0x1d) = (short)puVar12;
        param_1[8] = local_140;
        param_1[5] = local_13c;
        *(byte *)(param_1 + 7) = local_34;
        param_1[6] = unaff_r11;
        *param_1 = 2;
        *(char *)((int)param_1 + 0x1f) = (char)((uint)puVar12 >> 0x10);
        param_1[9] = local_144;
      }
      puVar7 = &local_138;
      goto LAB_01af54a8;
    }
  }
  else {
LAB_01af5464:
    local_114 = (byte *)0x0;
    local_110 = local_158;
  }
  local_118 = 0x80000000;
  param_1[2] = 0x8000001d;
  param_1[3] = local_134;
  param_1[4] = uStack_130;
  param_1[5] = uStack_12c;
  param_1[6] = local_128;
  param_1[7] = uStack_124;
  param_1[8] = uStack_120;
  param_1[9] = uStack_11c;
  *param_1 = 2;
  param_1[1] = 0;
  puVar7 = &local_118;
LAB_01af54a8:
  FUN_01aeb5f4(puVar7);
  return;
}

