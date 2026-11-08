// FUN_00914634 @ 00914634 size=4272 calls_out=15 calls_in=1
// strings: min_hashrate_target | power_step | hashrate_step | shutdown_enabledInvalidComponent | enabled | on_start_target_percent

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00914634(int *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 uVar12;
  int unaff_r5;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  undefined1 uVar18;
  int unaff_r8;
  int unaff_r9;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 unaff_d8;
  int unaff_s18;
  undefined8 unaff_d10;
  int local_108;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  uVar5 = 0x15;
  if ((int)*param_2 < 0) {
    uVar5 = *param_2 ^ 0x80000000;
  }
  if (uVar5 == 0x14) {
    uVar5 = param_2[2];
    uVar15 = param_2[3];
    local_c4 = uVar5 + uVar15 * 0x10;
    if (uVar15 == 0) {
      FUN_00f3cf48(&local_70,0,&DAT_01867368,&DAT_018ab990);
      param_1[2] = local_70;
      param_1[3] = local_6c;
      param_1[4] = local_68;
      param_1[5] = local_64;
      param_1[6] = local_60;
      param_1[7] = iStack_5c;
      param_1[8] = local_58;
      param_1[9] = local_54;
      param_1[10] = iStack_50;
      param_1[0xb] = iStack_4c;
      param_1[0xc] = iStack_48;
      param_1[0xd] = iStack_44;
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    FUN_0093f87c(&local_70,uVar5);
    uVar4 = (undefined1)local_6c;
    if (local_70 != 2) {
      FUN_016dd1aa((int)param_1 + 0xd,(int)&local_6c + 1,0x2b);
      *(undefined1 *)(param_1 + 3) = (undefined1)local_6c;
LAB_00914820:
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = local_70;
      return;
    }
    if (uVar15 == 1) {
      uVar8 = 1;
    }
    else {
      uVar19 = 0x15;
      if ((int)*(uint *)(uVar5 + 0x10) < 0) {
        uVar19 = *(uint *)(uVar5 + 0x10) ^ 0x80000000;
      }
      if (uVar19 == 0x10 || uVar19 == 0x12) {
        local_6c = 0;
        uVar19 = local_6c;
      }
      else {
        if (uVar19 == 0x11) {
          iVar9 = *(int *)(uVar5 + 0x14);
        }
        else {
          iVar9 = uVar5 + 0x10;
        }
        FUN_008f8320(&local_70,iVar9);
        if (local_70 != 2) {
          param_1[5] = local_64;
          param_1[6] = local_60;
          param_1[7] = iStack_5c;
          param_1[8] = local_58;
          param_1[9] = local_54;
          param_1[10] = iStack_50;
          param_1[0xb] = iStack_4c;
          param_1[0xc] = iStack_48;
          param_1[0xd] = iStack_44;
          *param_1 = 2;
          param_1[1] = 0;
          param_1[2] = local_70;
          param_1[3] = local_6c;
          param_1[4] = local_68;
          return;
        }
        local_d4 = local_68;
        uVar19 = local_6c;
      }
      local_70 = 2;
      local_6c = uVar19;
      if (uVar15 == 2) {
        local_70 = 2;
        FUN_00f3cf48(&local_70,2,&DAT_01867368,&DAT_018ab990);
        param_1[2] = local_70;
        param_1[3] = local_6c;
        param_1[4] = local_68;
        param_1[5] = local_64;
        param_1[6] = local_60;
        param_1[7] = iStack_5c;
        param_1[8] = local_58;
        param_1[9] = local_54;
        param_1[10] = iStack_50;
        param_1[0xb] = iStack_4c;
        param_1[0xc] = iStack_48;
        param_1[0xd] = iStack_44;
        *param_1 = 2;
        param_1[1] = 0;
        return;
      }
      uVar6 = 0x15;
      if ((int)*(uint *)(uVar5 + 0x20) < 0) {
        uVar6 = *(uint *)(uVar5 + 0x20) ^ 0x80000000;
      }
      uVar21 = 0;
      if ((uVar6 != 0x10) && (uVar6 != 0x12)) {
        if (uVar6 == 0x11) {
          iVar9 = *(int *)(uVar5 + 0x24);
        }
        else {
          iVar9 = uVar5 + 0x20;
        }
        FUN_008f8320(&local_70,iVar9);
        unaff_r9 = local_68;
        uVar21 = local_6c;
        if (local_70 != 2) {
          param_1[5] = local_64;
          param_1[6] = local_60;
          param_1[7] = iStack_5c;
          param_1[8] = local_58;
          param_1[9] = local_54;
          param_1[10] = iStack_50;
          param_1[0xb] = iStack_4c;
          param_1[0xc] = iStack_48;
          param_1[0xd] = iStack_44;
          *param_1 = 2;
          param_1[1] = 0;
          param_1[2] = local_70;
          param_1[3] = local_6c;
          param_1[4] = local_68;
          return;
        }
      }
      if (uVar15 == 3) {
        uVar8 = 3;
      }
      else {
        FUN_00940098(&local_70,uVar5 + 0x30);
        iVar20 = local_64;
        iVar9 = local_68;
        if (local_70 != 2) {
LAB_009150bc:
          param_1[8] = local_58;
          param_1[9] = local_54;
          param_1[10] = iStack_50;
          param_1[0xb] = iStack_4c;
          param_1[0xc] = iStack_48;
          param_1[0xd] = iStack_44;
          param_1[4] = local_68;
          *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_5c,local_60);
          *param_1 = 2;
          param_1[1] = 0;
          param_1[2] = local_70;
          param_1[3] = local_6c;
          param_1[5] = local_64;
          return;
        }
        if (uVar15 == 4) {
          uVar8 = 4;
        }
        else {
          uVar1 = CONCAT44(iStack_5c,local_60);
          FUN_00940098(&local_70,uVar5 + 0x40);
          iVar14 = local_64;
          iVar11 = local_68;
          if (local_70 != 2) goto LAB_009150bc;
          if (uVar15 == 5) {
            uVar8 = 5;
          }
          else {
            local_c0 = 6;
            local_c8 = uVar5 + 0x60;
            uVar2 = CONCAT44(iStack_5c,local_60);
            FUN_0093f87c(&local_70,uVar5 + 0x50);
            iVar17 = local_70;
            uVar12 = (undefined1)local_6c;
            if (local_70 != 2) {
              FUN_016dd1aa((int)param_1 + 0xd,(int)&local_6c + 1,0x2b);
              *(undefined1 *)(param_1 + 3) = uVar12;
              local_70 = iVar17;
              goto LAB_00914820;
            }
            FUN_008f8868(&local_70,&local_c8);
            iVar17 = local_68;
            uVar5 = local_6c;
            if (local_70 != 2) {
              param_1[5] = local_64;
              param_1[6] = local_60;
              param_1[7] = iStack_5c;
              param_1[8] = local_58;
              param_1[9] = local_54;
              param_1[10] = iStack_50;
              param_1[0xb] = iStack_4c;
              param_1[0xc] = iStack_48;
              param_1[0xd] = iStack_44;
              param_1[4] = local_68;
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_70;
              param_1[3] = local_6c;
              return;
            }
            if (local_6c != 2) {
              FUN_008f88f4(&local_70,&local_c8);
              iVar3 = local_70;
              uVar18 = (undefined1)local_6c;
              if (local_70 != 2) {
                FUN_016dd1aa((int)param_1 + 0xd,(int)&local_6c + 1,0x2b);
                *(undefined1 *)(param_1 + 3) = uVar18;
                *param_1 = 2;
                param_1[1] = 0;
                param_1[2] = iVar3;
                return;
              }
              if ((local_6c & 0xff) == 3) {
                FUN_00f3cf48(&local_70,7,&DAT_01867368,&DAT_018ab990);
                param_1[2] = local_70;
                param_1[3] = local_6c;
                param_1[4] = local_68;
                param_1[5] = local_64;
                param_1[6] = local_60;
                param_1[7] = iStack_5c;
                param_1[8] = local_58;
                param_1[9] = local_54;
                param_1[10] = iStack_50;
                param_1[0xb] = iStack_4c;
                param_1[0xc] = iStack_48;
                param_1[0xd] = iStack_44;
              }
              else {
                FUN_008f89e4(&local_70,&local_c8);
                if (local_70 != 2) {
                  param_1[5] = local_64;
                  param_1[6] = local_60;
                  param_1[7] = iStack_5c;
                  param_1[8] = local_58;
                  param_1[9] = local_54;
                  param_1[10] = iStack_50;
                  param_1[0xb] = iStack_4c;
                  param_1[0xc] = iStack_48;
                  param_1[0xd] = iStack_44;
                  *param_1 = 2;
                  param_1[1] = 0;
                  param_1[2] = local_70;
                  param_1[3] = local_6c;
                  param_1[4] = local_68;
                  return;
                }
                if (local_6c == 2) {
                  FUN_00f3cf48(&local_70,8,&DAT_01867368,&DAT_018ab990);
                }
                else {
                  param_1[4] = iVar11;
                  *param_1 = iVar9;
                  *(undefined1 *)((int)param_1 + 0x42) = uVar18;
                  param_1[9] = local_d4;
                  param_1[10] = uVar21;
                  param_1[0xb] = unaff_r9;
                  param_1[5] = iVar14;
                  param_1[0xe] = local_6c;
                  param_1[0xf] = local_68;
                  *(undefined1 *)((int)param_1 + 0x41) = uVar12;
                  *(undefined1 *)(param_1 + 0x10) = uVar4;
                  param_1[0xd] = iVar17;
                  param_1[8] = uVar19;
                  param_1[0xc] = uVar5;
                  *(undefined8 *)(param_1 + 6) = uVar2;
                  *(undefined8 *)(param_1 + 2) = uVar1;
                  param_1[1] = iVar20;
                  FUN_016dd1aa(&local_b8,param_1,0x48);
                  if (local_c4 == local_c8) {
LAB_00914e48:
                    FUN_016dd1aa(param_1,&local_b8,0x48);
                    return;
                  }
                  local_bc = local_c0;
                  FUN_00f3cf48(&local_70,local_c0 + ((uint)(local_c4 - local_c8) >> 4),&local_bc,
                               &DAT_01887234);
                  if (local_70 == 2) goto LAB_00914e48;
                }
                param_1[2] = local_70;
                param_1[3] = local_6c;
                param_1[4] = local_68;
                param_1[5] = local_64;
                param_1[6] = local_60;
                param_1[7] = iStack_5c;
                param_1[8] = local_58;
                param_1[9] = local_54;
                param_1[10] = iStack_50;
                param_1[0xb] = iStack_4c;
                param_1[0xc] = iStack_48;
                param_1[0xd] = iStack_44;
              }
              goto LAB_009154e8;
            }
            uVar8 = 6;
          }
        }
      }
    }
    piVar13 = &local_70;
    FUN_00f3cf48(&local_70,uVar8,&DAT_01867368,&DAT_018ab990);
  }
  else {
    if (uVar5 == 0x15) {
      uVar5 = param_2[1];
      uVar15 = param_2[2];
      uVar19 = uVar5 + uVar15 * 0x20;
      if (uVar15 == 0) {
        local_d0 = 2;
        local_108 = 0;
        local_e0 = 3;
        local_d4 = 2;
        local_ec = 2;
        local_f0 = 0;
        local_f4 = 2;
        local_f8 = 0;
        local_d8 = 2;
        local_dc = 3;
        local_e4 = 2;
        uVar4 = 2;
      }
      else {
        iVar20 = 0;
        local_108 = (uVar15 * 0x20 - 0x20 >> 5) + 1;
        iVar9 = (int)&local_b4 + 1;
        local_d0 = 2;
        local_e8 = 3;
        local_d4 = 2;
        local_ec = 2;
        local_f0 = 0;
        local_f4 = 2;
        local_f8 = 0;
        local_d8 = 2;
        local_e0 = 3;
        local_dc = 3;
        local_e4 = 2;
        do {
          uVar6 = 0x15;
          puVar16 = (uint *)(uVar5 + iVar20);
          if ((int)*puVar16 < 0) {
            uVar6 = *puVar16 ^ 0x80000000;
          }
          switch(uVar6) {
          case 1:
            uVar6 = (uint)*(byte *)(uVar5 + iVar20 + 4);
            if (8 < uVar6) {
              uVar6 = 9;
            }
            local_b4 = CONCAT31(local_b4._1_3_,(char)uVar6);
            break;
          default:
            FUN_008f7820(&local_b8,puVar16,&local_70,&DAT_01867308);
            uVar4 = (undefined1)local_b4;
            goto joined_r0x00914984;
          case 4:
            uVar6 = *(uint *)(uVar5 + iVar20 + 8);
            if (8 < uVar6) {
              uVar6 = 9;
            }
            if (*(int *)(uVar5 + iVar20 + 0xc) != 0) {
              uVar6 = 9;
            }
            break;
          case 0xc:
            uVar8 = *(undefined4 *)(uVar5 + iVar20 + 8);
            uVar10 = *(undefined4 *)(uVar5 + iVar20 + 0xc);
            goto LAB_009149c0;
          case 0xd:
            uVar8 = *(undefined4 *)(uVar5 + iVar20 + 4);
            uVar10 = *(undefined4 *)(uVar5 + iVar20 + 8);
LAB_009149c0:
            FUN_00918514(&local_b8,uVar8,uVar10);
            uVar4 = (undefined1)local_b4;
joined_r0x00914984:
            if (local_b8 != 2) {
              FUN_016dd1aa((int)param_1 + 0xd,iVar9,0x2b);
              *(undefined1 *)(param_1 + 3) = uVar4;
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_b8;
              return;
            }
            uVar6 = local_b4 & 0xff;
            break;
          case 0xe:
            uVar8 = *(undefined4 *)(uVar5 + iVar20 + 8);
            uVar10 = *(undefined4 *)(uVar5 + iVar20 + 0xc);
            goto LAB_00914968;
          case 0xf:
            uVar8 = *(undefined4 *)(uVar5 + iVar20 + 4);
            uVar10 = *(undefined4 *)(uVar5 + iVar20 + 8);
LAB_00914968:
            FUN_00917f40(&local_b8,uVar8,uVar10);
            uVar4 = (undefined1)local_b4;
            goto joined_r0x00914984;
          }
          puVar16 = puVar16 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar6 & 0xff) {
          case 0:
            if (local_e8 != 3) {
              uVar8 = 7;
              pcVar7 = "enabled";
LAB_0091560c:
              piVar13 = &local_b8;
              FUN_009244cc(piVar13,pcVar7,uVar8);
              goto LAB_009154d8;
            }
            FUN_0093f87c(&local_b8);
            uVar4 = (undefined1)local_b4;
            local_e8 = local_b4 & 0xff;
            if (local_b8 != 2) {
              FUN_016dd1aa((int)param_1 + 0xd,iVar9,0x2b);
LAB_009152d4:
              *(undefined1 *)(param_1 + 3) = uVar4;
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_b8;
              return;
            }
            break;
          case 1:
            if (local_d0 != 2) {
              uVar8 = 10;
              pcVar7 = "power_step";
              goto LAB_0091560c;
            }
            uVar6 = 0x15;
            if ((int)*puVar16 < 0) {
              uVar6 = *puVar16 ^ 0x80000000;
            }
            local_d0 = 0;
            if (uVar6 != 0x10) {
              if (uVar6 == 0x11) {
                puVar16 = *(uint **)(uVar5 + iVar20 + 0x14);
              }
              else if (uVar6 == 0x12) goto LAB_00914c54;
              FUN_008f8320(&local_b8,puVar16);
              local_d0 = local_b4;
              if (local_b8 != 2) {
                param_1[5] = local_ac;
                param_1[6] = local_a8;
                param_1[7] = iStack_a4;
                param_1[8] = local_a0;
                param_1[9] = local_9c;
                param_1[10] = iStack_98;
                param_1[0xb] = iStack_94;
                param_1[0xc] = iStack_90;
                param_1[0xd] = iStack_8c;
                param_1[2] = local_b8;
                *param_1 = 2;
                param_1[1] = 0;
LAB_00915448:
                param_1[3] = local_b4;
                param_1[4] = local_b0;
                return;
              }
            }
LAB_00914c54:
            unaff_r8 = local_b0;
            break;
          case 2:
            if (local_d4 != 2) {
              pcVar7 = "min_power_target";
LAB_009155c8:
              uVar8 = 0x10;
              goto LAB_0091560c;
            }
            uVar6 = 0x15;
            if ((int)*puVar16 < 0) {
              uVar6 = *puVar16 ^ 0x80000000;
            }
            local_d4 = 0;
            if (uVar6 != 0x10) {
              if (uVar6 == 0x11) {
                puVar16 = *(uint **)(uVar5 + iVar20 + 0x14);
              }
              else if (uVar6 == 0x12) goto LAB_00914c80;
              FUN_008f8320(&local_b8,puVar16);
              local_d4 = local_b4;
              if (local_b8 != 2) {
                param_1[5] = local_ac;
                param_1[6] = local_a8;
                param_1[7] = iStack_a4;
                param_1[8] = local_a0;
                param_1[9] = local_9c;
                param_1[10] = iStack_98;
                param_1[0xb] = iStack_94;
                param_1[0xc] = iStack_90;
                param_1[0xd] = iStack_8c;
                param_1[2] = local_b8;
                *param_1 = 2;
                param_1[1] = 0;
                goto LAB_00915448;
              }
            }
LAB_00914c80:
            unaff_r9 = local_b0;
            break;
          case 3:
            if (local_ec != 2 || local_f0 != 0) {
              uVar8 = 0xd;
              pcVar7 = "hashrate_step";
              goto LAB_0091560c;
            }
            FUN_00940098(&local_b8);
            if (local_b8 != 2) {
LAB_009151ac:
              param_1[8] = local_a0;
              param_1[9] = local_9c;
              param_1[10] = iStack_98;
              param_1[0xb] = iStack_94;
              param_1[0xc] = iStack_90;
              param_1[0xd] = iStack_8c;
              param_1[4] = local_b0;
              *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_a4,local_a8);
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_b8;
              param_1[3] = local_b4;
              param_1[5] = local_ac;
              return;
            }
            unaff_d8 = CONCAT44(iStack_a4,local_a8);
            local_ec = local_b0;
            local_f0 = local_ac;
            break;
          case 4:
            if (local_f4 != 2 || local_f8 != 0) {
              uVar8 = 0x13;
              pcVar7 = "min_hashrate_target";
              goto LAB_0091560c;
            }
            FUN_00940098(&local_b8);
            if (local_b8 != 2) goto LAB_009151ac;
            unaff_d10 = CONCAT44(iStack_a4,local_a8);
            local_f4 = local_b0;
            local_f8 = local_ac;
            break;
          case 5:
            if (local_e0 != 3) {
              pcVar7 = "shutdown_enabledInvalidComponent";
              goto LAB_009155c8;
            }
            FUN_0093f87c(&local_b8);
            uVar4 = (undefined1)local_b4;
            local_e0 = local_b4 & 0xff;
            if (local_b8 != 2) {
              FUN_016dd1aa((int)param_1 + 0xd,iVar9,0x2b);
              goto LAB_009152d4;
            }
            break;
          case 6:
            if (local_e4 != 2) {
              uVar8 = 0x11;
              pcVar7 = "shutdown_duration";
              goto LAB_0091560c;
            }
            FUN_0093fac0(&local_b8);
            local_e4 = local_b4;
            unaff_s18 = local_b0;
            if (local_b8 != 2) {
              param_1[5] = local_ac;
              param_1[6] = local_a8;
              param_1[7] = iStack_a4;
              param_1[8] = local_a0;
              param_1[9] = local_9c;
              param_1[10] = iStack_98;
              param_1[0xb] = iStack_94;
              param_1[0xc] = iStack_90;
              param_1[0xd] = iStack_8c;
              param_1[2] = local_b8;
              param_1[4] = local_b0;
              *param_1 = 2;
              param_1[1] = 0;
              param_1[3] = local_b4;
              return;
            }
            break;
          case 7:
            if (local_dc != 3) {
              uVar8 = 8;
              pcVar7 = &DAT_0056a270;
              goto LAB_0091560c;
            }
            uVar6 = 0x15;
            if ((int)*puVar16 < 0) {
              uVar6 = *puVar16 ^ 0x80000000;
            }
            local_dc = 2;
            if (uVar6 != 0x10) {
              if (uVar6 == 0x11) {
                puVar16 = *(uint **)(uVar5 + iVar20 + 0x14);
              }
              else if (uVar6 == 0x12) break;
              FUN_00915d28(&local_b8,puVar16);
              iVar11 = local_b8;
              uVar4 = (undefined1)local_b4;
              local_dc = local_b4 & 0xff;
              iVar14 = 2;
              if (local_b8 != 2) {
                FUN_016dd1aa(&local_70,iVar9,0x2b);
                iVar14 = iVar11;
              }
              if (iVar14 != 2) {
                FUN_016dd1aa((int)param_1 + 0xd,&local_70,0x2b);
                *(undefined1 *)(param_1 + 3) = uVar4;
                *param_1 = 2;
                param_1[1] = 0;
                param_1[2] = iVar14;
                return;
              }
            }
            break;
          case 8:
            if (local_d8 != 2) {
              uVar8 = 0x17;
              pcVar7 = "on_start_target_percent";
              goto LAB_0091560c;
            }
            uVar6 = 0x15;
            if ((int)*puVar16 < 0) {
              uVar6 = *puVar16 ^ 0x80000000;
            }
            local_d8 = 0;
            if (uVar6 != 0x10) {
              if (uVar6 == 0x11) {
                puVar16 = *(uint **)(uVar5 + iVar20 + 0x14);
              }
              else if (uVar6 == 0x12) goto LAB_00914898;
              FUN_008f84c0(&local_b8,puVar16);
              local_d8 = local_b4;
              if (local_b8 != 2) {
                param_1[5] = local_ac;
                param_1[6] = local_a8;
                param_1[7] = iStack_a4;
                param_1[8] = local_a0;
                param_1[9] = local_9c;
                param_1[10] = iStack_98;
                param_1[0xb] = iStack_94;
                param_1[0xc] = iStack_90;
                param_1[0xd] = iStack_8c;
                param_1[2] = local_b8;
                *param_1 = 2;
                param_1[1] = 0;
                goto LAB_00915448;
              }
            }
LAB_00914898:
            unaff_r5 = local_b0;
          }
          iVar20 = iVar20 + 0x20;
        } while (uVar15 * 0x20 != iVar20);
        uVar4 = (undefined1)local_e8;
        if (local_e8 == 3) {
          uVar4 = 2;
        }
        uVar5 = uVar19;
        local_fc = unaff_r9;
        local_e8 = unaff_r8;
        local_cc = unaff_r5;
      }
      uVar18 = (undefined1)local_dc;
      uVar12 = (undefined1)local_e0;
      if (local_dc == 3) {
        uVar18 = 2;
      }
      *(undefined1 *)(param_1 + 0x10) = uVar4;
      param_1[0xf] = local_cc;
      param_1[0xb] = local_fc;
      param_1[9] = local_e8;
      param_1[0xd] = unaff_s18;
      if (local_e0 == 3) {
        uVar12 = 2;
      }
      uVar15 = 0;
      if (local_d8 != 2) {
        uVar15 = local_d8;
      }
      *(undefined8 *)(param_1 + 6) = unaff_d10;
      param_1[0xe] = uVar15;
      uVar15 = 0;
      if (local_e4 != 2) {
        uVar15 = local_e4;
      }
      param_1[0xc] = uVar15;
      uVar15 = 0;
      if (local_d4 != 2) {
        uVar15 = local_d4;
      }
      *(undefined8 *)(param_1 + 2) = unaff_d8;
      param_1[10] = uVar15;
      uVar15 = 0;
      if (local_d0 != 2) {
        uVar15 = local_d0;
      }
      *(undefined1 *)((int)param_1 + 0x42) = uVar18;
      param_1[8] = uVar15;
      *(undefined1 *)((int)param_1 + 0x41) = uVar12;
      if (local_f4 == 2 && local_f8 == 0) {
        local_f4 = 0;
        local_f8 = 0;
      }
      param_1[4] = local_f4;
      param_1[5] = local_f8;
      if (local_ec == 2 && local_f0 == 0) {
        local_ec = 0;
        local_f0 = 0;
      }
      *param_1 = local_ec;
      param_1[1] = local_f0;
      FUN_016dd1aa(&local_b8,param_1,0x48);
      if (uVar19 != uVar5) {
        local_c8 = local_108;
        FUN_00f3cf48(&local_70,local_108 + (uVar19 - uVar5 >> 5),&local_c8,&DAT_01887224);
        if (local_70 != 2) {
          param_1[2] = local_70;
          param_1[3] = local_6c;
          param_1[4] = local_68;
          param_1[5] = local_64;
          param_1[6] = local_60;
          param_1[7] = iStack_5c;
          param_1[8] = local_58;
          param_1[9] = local_54;
          param_1[10] = iStack_50;
          param_1[0xb] = iStack_4c;
          param_1[0xc] = iStack_48;
          param_1[0xd] = iStack_44;
          *param_1 = 2;
          param_1[1] = 0;
          return;
        }
      }
      goto LAB_00914e48;
    }
    piVar13 = &local_b8;
    FUN_008f7820(piVar13,param_2,&local_70,&DAT_01867228);
  }
LAB_009154d8:
  iVar9 = piVar13[1];
  iVar20 = piVar13[2];
  iVar11 = piVar13[3];
  iVar14 = piVar13[4];
  iVar17 = piVar13[5];
  param_1[2] = *piVar13;
  param_1[3] = iVar9;
  param_1[4] = iVar20;
  param_1[5] = iVar11;
  param_1[6] = iVar14;
  param_1[7] = iVar17;
  iVar9 = piVar13[7];
  iVar20 = piVar13[8];
  iVar11 = piVar13[9];
  iVar14 = piVar13[10];
  iVar17 = piVar13[0xb];
  param_1[8] = piVar13[6];
  param_1[9] = iVar9;
  param_1[10] = iVar20;
  param_1[0xb] = iVar11;
  param_1[0xc] = iVar14;
  param_1[0xd] = iVar17;
LAB_009154e8:
  *param_1 = 2;
  param_1[1] = 0;
  return;
}

