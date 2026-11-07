// FUN_006970bc @ 006970bc size=2220 calls_out=19 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006970bc(undefined4 *param_1,int param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  bool bVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  undefined8 uVar21;
  uint local_18c;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  int local_118;
  undefined1 local_114;
  uint *local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint uStack_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint *local_d8;
  uint local_d4;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint *local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int local_48;
  undefined1 local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  FUN_00677900(&local_68);
  if ((char)local_68 == '\x01') goto LAB_006970e8;
  if (local_68._1_1_ == '\x01') {
    if (local_68._2_1_ == '{') {
      cVar4 = *(char *)(param_2 + 0x2c) + -1;
      *(char *)(param_2 + 0x2c) = cVar4;
      if (cVar4 == '\0') {
        uVar5 = *(undefined4 *)(param_2 + 0x1c);
        uVar15 = *(undefined4 *)(param_2 + 0x20);
        local_90 = (uint *)0x18;
        goto LAB_00697930;
      }
      uVar5 = FUN_0157653c(param_2 + 0xc);
      uVar21 = thunk_FUN_01bee35a(uVar5,0x2c0);
      puVar18 = (uint *)((int)uVar21 + (int)((ulonglong)uVar21 >> 0x20));
      local_114 = 1;
      local_118 = param_2;
      if ((char)puVar18[4] == '\0') {
        FUN_019ae6ac(&local_90);
        *puVar18 = (uint)local_90;
        puVar18[1] = local_8c;
        puVar18[2] = local_88;
        puVar18[3] = local_84;
        *(undefined1 *)(puVar18 + 4) = 1;
      }
      local_100 = *puVar18;
      uStack_fc = puVar18[1];
      local_f4 = puVar18[3];
      puVar14 = puVar18 + 2;
      local_f8 = *puVar14;
      *puVar18 = local_100 + 1;
      puVar18[1] = uStack_fc + (0xfffffffe < local_100);
      local_104 = 0;
      local_108 = 0;
      local_10c = 0;
      puVar6 = (undefined4 *)((uint)&local_90 | 4);
      local_110 = &DAT_0056d238;
LAB_006971f0:
      FUN_00679850(&local_b4,&local_118);
      uVar3 = local_ac;
      uVar12 = local_b0;
      uVar13 = local_b4;
      iVar20 = local_118;
      if (local_b4 != 0x80000001) {
        if (local_b4 == 0x80000000) {
LAB_00697744:
          local_130 = local_108;
          uStack_12c = local_104;
          uStack_128 = local_100;
          uStack_124 = uStack_fc;
          uStack_120 = local_f8;
          uStack_11c = local_f4;
          local_64 = local_10c;
          local_68 = local_110;
          goto LAB_006977d0;
        }
        uVar7 = FUN_006794bc(local_118);
        if (uVar7 == 0) {
          FUN_00677900(&local_68,iVar20);
          if ((char)local_68 == '\x01') {
            uVar7 = local_64;
            goto LAB_006977b8;
          }
          if (local_68._1_1_ != '\x01') {
            local_90 = (uint *)&DAT_00000005;
            uVar7 = FUN_01966fbc(&local_90,*(undefined4 *)(iVar20 + 0x1c),
                                 *(undefined4 *)(iVar20 + 0x20));
LAB_006977b4:
            goto LAB_006977b8;
          }
          if (local_68._2_1_ != '{') {
            uVar7 = FUN_00678df8(iVar20,&uStack_25,&DAT_01c04764);
            goto LAB_006977a0;
          }
          cVar4 = *(char *)(iVar20 + 0x2c) + -1;
          *(char *)(iVar20 + 0x2c) = cVar4;
          if (cVar4 == '\0') {
            local_90 = (uint *)&DAT_00000018;
            uVar7 = FUN_01966fbc(&local_90,*(undefined4 *)(iVar20 + 0x1c),
                                 *(undefined4 *)(iVar20 + 0x20));
            goto LAB_006977b4;
          }
          FUN_0157653c(iVar20 + 0xc);
          local_44 = 1;
          local_48 = iVar20;
          if ((char)puVar18[4] == '\0') {
            FUN_019ae6ac(&local_68);
            *puVar18 = (uint)local_68;
            puVar18[1] = local_64;
            *puVar14 = local_60;
            puVar18[3] = uStack_5c;
            *(undefined1 *)(puVar18 + 4) = 1;
          }
          local_80 = *puVar18;
          uStack_7c = puVar18[1];
          local_78 = *puVar14;
          uStack_74 = puVar18[3];
          *puVar18 = local_80 + 1;
          puVar18[1] = uStack_7c + (0xfffffffe < local_80);
          local_84 = 0;
          local_88 = 0;
          local_8c = 0;
          local_90 = &DAT_0056d238;
          while( true ) {
            FUN_00679850(&local_34,&local_48);
            uVar5 = local_2c;
            uVar7 = local_30;
            iVar11 = local_34;
            if (local_34 == -0x7fffffff) break;
            if (local_34 == -0x80000000) {
LAB_00697360:
              local_a8 = local_88;
              uStack_a4 = local_84;
              uStack_a0 = local_80;
              uStack_9c = uStack_7c;
              uStack_98 = local_78;
              uStack_94 = uStack_74;
              local_64 = local_8c;
              local_68 = local_90;
              goto LAB_006973b4;
            }
            FUN_0067996c(&local_68,local_48);
            uVar8 = local_64;
            if (local_68 == (uint *)&DAT_00000001) {
              FUN_019bb7e0(iVar11,uVar7);
              uVar7 = uVar8;
              break;
            }
            if (iVar11 == -0x80000000) goto LAB_00697360;
            if (iVar11 == -0x7fffffff) {
              break;
            }
            local_38 = uVar5;
            local_3c = uVar7;
            local_40 = iVar11;
            FUN_0067d3b8(&local_68,&local_90,&local_40);
          }
          FUN_0160eb30(&local_90);
          local_64 = uVar7;
          local_68 = (uint *)0x0;
LAB_006973b4:
          *(char *)(iVar20 + 0x2c) = *(char *)(iVar20 + 0x2c) + '\x01';
          local_60 = local_a8;
          uStack_5c = uStack_a4;
          local_58 = uStack_a0;
          uStack_54 = uStack_9c;
          uStack_50 = uStack_98;
          uStack_4c = uStack_94;
          uVar8 = FUN_00679540(iVar20);
          uVar7 = local_64;
          local_90 = local_68;
          local_8c = local_64;
          local_88 = local_60;
          local_84 = uStack_5c;
          local_80 = local_58;
          uStack_7c = uStack_54;
          local_78 = uStack_50;
          uStack_74 = uStack_4c;
          local_70 = uVar8;
          if (local_68 == (uint *)0x0) {
            if (uVar8 != 0) {
              FUN_0067904c(uVar8);
            }
LAB_006977a0:
            uVar7 = FUN_012c6694(uVar7,*(undefined4 *)(iVar20 + 0x1c),*(undefined4 *)(iVar20 + 0x20)
                                );
            goto LAB_006977b4;
          }
          if (uVar8 != 0) {
            FUN_0160eb30(&local_90);
            uVar7 = uVar8;
            goto LAB_006977a0;
          }
          local_f0 = local_60;
          uStack_ec = uStack_5c;
          uStack_e8 = local_58;
          uStack_e4 = uStack_54;
          uStack_e0 = uStack_50;
          uStack_dc = uStack_4c;
          if (uVar13 == 0x80000000) goto LAB_00697744;
          if (uVar13 != 0x80000001) {
            local_d4 = local_64;
            local_d8 = local_68;
            local_d0 = local_60;
            uStack_cc = uStack_5c;
            local_c8 = local_58;
            uStack_c4 = uStack_54;
            uStack_c0 = uStack_50;
            uStack_bc = uStack_4c;
            uVar7 = FUN_01adafd4(local_100,uStack_fc,local_f8,local_f4,uVar12,uVar3);
            if (local_108 == 0) {
              FUN_0067f5f4(&local_110,&local_100);
            }
            uVar8 = local_10c;
            puVar2 = local_110;
            bVar16 = false;
            iVar20 = 0;
            uVar19 = uVar7;
            do {
              uVar19 = uVar8 & uVar19;
              uVar17 = *(uint *)((int)puVar2 + uVar19);
              uVar9 = uVar17 ^ (uVar7 >> 0x19) * 0x1010101;
              for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0;
                  uVar9 = uVar9 - 1 & uVar9) {
                uVar10 = uVar19 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                                 (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3)
                         & uVar8;
                if ((uVar3 == puVar2[uVar10 * -0xc + -10]) &&
                   (iVar11 = thunk_FUN_01bed842(uVar12,puVar2[uVar10 * -0xc + -0xb]), iVar11 == 0))
                {
                  local_90 = (uint *)puVar2[uVar10 * -0xc + -8];
                  local_8c = puVar2[uVar10 * -0xc + -7];
                  local_88 = puVar2[uVar10 * -0xc + -6];
                  local_84 = puVar2[uVar10 * -0xc + -5];
                  local_80 = puVar2[uVar10 * -0xc + -4];
                  uStack_7c = puVar2[uVar10 * -0xc + -3];
                  local_78 = puVar2[uVar10 * -0xc + -2];
                  uStack_74 = puVar2[uVar10 * -0xc + -1];
                  puVar2[uVar10 * -0xc + -8] = (uint)local_d8;
                  puVar2[uVar10 * -0xc + -7] = local_d4;
                  puVar2[uVar10 * -0xc + -6] = local_d0;
                  puVar2[uVar10 * -0xc + -5] = uStack_cc;
                  puVar2[uVar10 * -0xc + -4] = local_c8;
                  puVar2[uVar10 * -0xc + -3] = uStack_c4;
                  puVar2[uVar10 * -0xc + -2] = uStack_c0;
                  puVar2[uVar10 * -0xc + -1] = uStack_bc;
                  FUN_019bb7e0(uVar13,uVar12);
                  if (local_90 != (uint *)0x0) {
                    FUN_0160eb30(&local_90);
                  }
                  goto LAB_006971f0;
                }
              }
              uVar9 = uVar17 & 0x80808080;
              if (bVar16) {
LAB_00697594:
                if ((uVar9 & uVar17 << 1) != 0) goto LAB_00697634;
                bVar16 = true;
              }
              else {
                if (uVar9 != 0) {
                  local_18c = uVar19 + ((uint)LZCOUNT((uVar17 & 0x80) << 0x18 |
                                                      (uVar9 >> 8 & 0xff) << 0x10 |
                                                      (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18)
                                       >> 3) & uVar8;
                  goto LAB_00697594;
                }
                bVar16 = false;
              }
              iVar20 = iVar20 + 4;
              uVar19 = iVar20 + uVar19;
            } while( true );
          }
        }
        else {
LAB_006977b8:
          FUN_019bb7e0(uVar13,uVar12);
          uVar12 = uVar7;
        }
      }
      FUN_0067e1d0(&local_110);
      local_64 = uVar12;
      local_68 = (uint *)0x0;
LAB_006977d0:
      *(char *)(param_2 + 0x2c) = *(char *)(param_2 + 0x2c) + '\x01';
      local_60 = local_130;
      uStack_5c = uStack_12c;
      local_58 = uStack_128;
      uStack_54 = uStack_124;
      uStack_50 = uStack_120;
      uStack_4c = uStack_11c;
      uVar12 = FUN_00679540(param_2);
      uVar13 = local_64;
      local_90 = local_68;
      local_8c = local_64;
      local_88 = local_60;
      local_84 = uStack_5c;
      local_80 = local_58;
      uStack_7c = uStack_54;
      local_78 = uStack_50;
      uStack_74 = uStack_4c;
      local_70 = uVar12;
      if (local_68 == (uint *)0x0) {
        if (uVar12 != 0) {
          FUN_0067904c(uVar12);
        }
      }
      else {
        if (uVar12 == 0) {
          param_1[2] = local_60;
          param_1[3] = uStack_5c;
          param_1[4] = local_58;
          param_1[5] = uStack_54;
          param_1[6] = uStack_50;
          param_1[7] = uStack_4c;
          *param_1 = local_68;
          param_1[1] = local_64;
          return;
        }
        FUN_0067e1d0(&local_90);
        uVar13 = uVar12;
      }
    }
    else {
      uVar13 = FUN_00678df8(param_2,&uStack_25,&DAT_01c04774);
    }
    local_64 = FUN_012c6694(uVar13,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    uVar15 = *(undefined4 *)(param_2 + 0x20);
    local_90 = (uint *)0x5;
LAB_00697930:
    local_64 = FUN_01966fbc(&local_90,uVar5,uVar15);
  }
LAB_006970e8:
  *param_1 = 0;
  param_1[1] = local_64;
  return;
LAB_00697634:
  uVar9 = (uint)*(char *)((int)puVar2 + local_18c);
  uVar19 = local_18c;
  if (-1 < (int)uVar9) {
    uVar19 = *puVar2 & 0x80808080;
    uVar19 = LZCOUNT((*puVar2 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                     (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18);
    uVar9 = (uint)*(byte *)((int)puVar2 + (uVar19 >> 3));
    uVar19 = uVar19 >> 3;
  }
  *puVar6 = local_d8;
  puVar6[1] = local_d4;
  puVar6[2] = local_d0;
  puVar6[3] = uStack_cc;
  puVar6[4] = local_c8;
  puVar6[5] = uStack_c4;
  puVar6[6] = uStack_c0;
  puVar6[7] = uStack_bc;
  bVar1 = (byte)(uVar7 >> 0x19);
  *(byte *)((int)puVar2 + uVar19) = bVar1;
  *(byte *)((int)puVar2 + (uVar8 & uVar19 - 4) + 4) = bVar1;
  puVar2[uVar19 * -0xc + -0xc] = uVar13;
  puVar2[uVar19 * -0xc + -0xb] = uVar12;
  local_108 = local_108 - (uVar9 & 1);
  puVar2[uVar19 * -0xc + -10] = uVar3;
  local_104 = local_104 + 1;
  puVar2[uVar19 * -0xc + -9] = (uint)local_90;
  puVar2[uVar19 * -0xc + -8] = local_8c;
  puVar2[uVar19 * -0xc + -7] = local_88;
  puVar2[uVar19 * -0xc + -6] = local_84;
  puVar2[uVar19 * -0xc + -5] = local_80;
  puVar2[uVar19 * -0xc + -4] = uStack_7c;
  puVar2[uVar19 * -0xc + -3] = local_78;
  puVar2[uVar19 * -0xc + -2] = uStack_74;
  puVar2[uVar19 * -0xc + -1] = local_70;
  goto LAB_006971f0;
}

