// FUN_009593fc @ 009593fc size=3916 calls_out=13 calls_in=0
// strings: min_hashrate_target | min_power_target | hashrate_step | shutdown_duration | enabled | power_step

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009593fc(int *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined1 uVar17;
  int unaff_r6;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  int unaff_r10;
  uint uVar23;
  int unaff_s16;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  int local_fc;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
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
  
  uVar7 = 0x15;
  if ((int)*param_2 < 0) {
    uVar7 = *param_2 ^ 0x80000000;
  }
  if (uVar7 == 0x14) {
    uVar7 = param_2[2];
    uVar19 = param_2[3];
    local_bc = uVar7 + uVar19 * 0x10;
    if (uVar19 == 0) {
      FUN_00f3cf48(&local_70,0,&DAT_01867390,&DAT_018ab990);
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
    piVar16 = &local_70;
    FUN_0093f87c(piVar16,uVar7);
    uVar8 = (char)local_6c;
    if (local_70 != 2) {
      FUN_016dd1aa((int)param_1 + 0xd,(int)&local_6c + 1,0x2b);
      *(char *)(param_1 + 3) = (char)local_6c;
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = local_70;
      return;
    }
    if (uVar19 != 1) {
      uVar23 = 0x15;
      if ((int)*(uint *)(uVar7 + 0x10) < 0) {
        uVar23 = *(uint *)(uVar7 + 0x10) ^ 0x80000000;
      }
      if (uVar23 == 0x10 || uVar23 == 0x12) {
        local_6c = 0;
        iVar12 = local_6c;
      }
      else {
        if (uVar23 == 0x11) {
          iVar12 = *(int *)(uVar7 + 0x14);
        }
        else {
          iVar12 = uVar7 + 0x10;
        }
        FUN_008f8320(&local_70,iVar12);
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
          param_1[1] = 0;
          *param_1 = 2;
          param_1[2] = local_70;
          param_1[3] = local_6c;
          param_1[4] = local_68;
          return;
        }
        local_c4 = local_68;
        iVar12 = local_6c;
      }
      local_70 = 2;
      local_6c = iVar12;
      if (uVar19 == 2) {
        local_70 = 2;
        FUN_00f3cf48(piVar16,2,&DAT_01867390,&DAT_018ab990);
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
      uVar23 = 0x15;
      if ((int)*(uint *)(uVar7 + 0x20) < 0) {
        uVar23 = *(uint *)(uVar7 + 0x20) ^ 0x80000000;
      }
      iVar22 = 0;
      if ((uVar23 != 0x10) && (uVar23 != 0x12)) {
        if (uVar23 == 0x11) {
          iVar22 = *(int *)(uVar7 + 0x24);
        }
        else {
          iVar22 = uVar7 + 0x20;
        }
        FUN_008f8320(&local_70,iVar22);
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
        local_cc = local_68;
        iVar22 = local_6c;
      }
      if (uVar19 == 3) {
        uVar11 = 3;
      }
      else {
        FUN_00940098(&local_70,uVar7 + 0x30);
        iVar18 = local_64;
        iVar14 = local_68;
        if (local_70 != 2) {
LAB_00959d94:
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
        if (uVar19 == 4) {
          uVar11 = 4;
        }
        else {
          uVar1 = CONCAT44(iStack_5c,local_60);
          FUN_00940098(&local_70,uVar7 + 0x40);
          iVar6 = local_64;
          iVar21 = local_68;
          if (local_70 != 2) goto LAB_00959d94;
          if (uVar19 != 5) {
            local_b8 = 6;
            local_c0 = uVar7 + 0x60;
            uVar2 = CONCAT44(iStack_5c,local_60);
            FUN_0093f87c(&local_70,uVar7 + 0x50);
            iVar15 = local_70;
            uVar17 = (char)local_6c;
            if (local_70 == 2) {
              FUN_008f8868(&local_70,&local_c0);
              iVar5 = local_68;
              iVar4 = local_6c;
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
              if (local_6c == 2) {
                uVar11 = 6;
                goto LAB_0095a1d0;
              }
              FUN_008f88f4(&local_70,&local_c0);
              iVar15 = local_70;
              cVar3 = (char)local_6c;
              if (local_70 == 2) {
                if ((char)local_6c == '\x03') {
                  FUN_00f3cf48(&local_70,7,&DAT_01867390,&DAT_018ab990);
LAB_0095a37c:
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
                param_1[4] = iVar21;
                param_1[9] = local_c4;
                param_1[8] = iVar12;
                param_1[0xb] = local_cc;
                param_1[5] = iVar6;
                *param_1 = iVar14;
                *(char *)((int)param_1 + 0x3a) = (char)local_6c;
                *(undefined1 *)((int)param_1 + 0x39) = uVar17;
                *(undefined1 *)(param_1 + 0xe) = uVar8;
                param_1[0xd] = iVar5;
                param_1[10] = iVar22;
                param_1[0xc] = iVar4;
                *(undefined8 *)(param_1 + 6) = uVar2;
                *(undefined8 *)(param_1 + 2) = uVar1;
                param_1[1] = iVar18;
                local_b0 = *param_1;
                local_ac = param_1[1];
                local_a8 = param_1[2];
                local_a4 = param_1[3];
                local_a0 = param_1[4];
                iStack_9c = param_1[5];
                local_98 = param_1[6];
                local_94 = param_1[7];
                iStack_90 = param_1[8];
                iStack_8c = param_1[9];
                local_88 = param_1[10];
                iStack_84 = param_1[0xb];
                iStack_80 = param_1[0xc];
                iStack_7c = param_1[0xd];
                iStack_78 = param_1[0xe];
                iStack_74 = param_1[0xf];
                if (local_bc != local_c0) {
                  local_b4 = local_b8;
                  FUN_00f3cf48(&local_70,local_b8 + ((uint)(local_bc - local_c0) >> 4),&local_b4,
                               &DAT_01887234);
                  if (local_70 != 2) goto LAB_0095a37c;
                }
                *param_1 = local_b0;
                param_1[1] = local_ac;
                param_1[2] = local_a8;
                param_1[3] = local_a4;
                param_1[4] = local_a0;
                param_1[5] = iStack_9c;
                param_1[6] = local_98;
                param_1[7] = local_94;
                param_1[8] = iStack_90;
                param_1[9] = iStack_8c;
                param_1[10] = local_88;
                param_1[0xb] = iStack_84;
                param_1[0xc] = iStack_80;
                param_1[0xd] = iStack_7c;
                param_1[0xe] = iStack_78;
                param_1[0xf] = iStack_74;
                return;
              }
              FUN_016dd1aa((int)param_1 + 0xd,(int)&local_6c + 1,0x2b);
              *(char *)(param_1 + 3) = cVar3;
            }
            else {
              FUN_016dd1aa((int)param_1 + 0xd,(int)&local_6c + 1,0x2b);
              *(undefined1 *)(param_1 + 3) = uVar17;
            }
            *param_1 = 2;
            param_1[1] = 0;
            param_1[2] = iVar15;
            return;
          }
          uVar11 = 5;
        }
      }
LAB_0095a1d0:
      piVar16 = &local_70;
      FUN_00f3cf48(&local_70,uVar11,&DAT_01867390,&DAT_018ab990);
LAB_0095a1dc:
      iVar12 = piVar16[1];
      iVar22 = piVar16[2];
      iVar14 = piVar16[3];
      iVar18 = piVar16[4];
      iVar21 = piVar16[5];
      param_1[2] = *piVar16;
      param_1[3] = iVar12;
      param_1[4] = iVar22;
      param_1[5] = iVar14;
      param_1[6] = iVar18;
      param_1[7] = iVar21;
      iVar12 = piVar16[7];
      iVar22 = piVar16[8];
      iVar14 = piVar16[9];
      iVar18 = piVar16[10];
      iVar21 = piVar16[0xb];
      param_1[8] = piVar16[6];
      param_1[9] = iVar12;
      param_1[10] = iVar22;
      param_1[0xb] = iVar14;
      param_1[0xc] = iVar18;
      param_1[0xd] = iVar21;
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    FUN_00f3cf48(piVar16,1,&DAT_01867390,&DAT_018ab990);
  }
  else {
    if (uVar7 == 0x15) {
      uVar19 = param_2[2];
      uVar7 = param_2[1];
      uVar23 = uVar7 + uVar19 * 0x20;
      if (uVar19 == 0) {
        local_c8 = 2;
        local_fc = 0;
        local_d0 = 3;
        local_cc = 2;
        local_e0 = 2;
        local_e4 = 0;
        local_e8 = 2;
        local_ec = 0;
        local_d8 = 2;
        local_dc = 3;
        local_d4._0_1_ = 2;
      }
      else {
        piVar16 = &local_b0;
        iVar22 = 0;
        local_fc = (uVar19 * 0x20 - 0x20 >> 5) + 1;
        iVar12 = (int)&local_ac + 1;
        local_c8 = 2;
        local_d4 = 3;
        local_cc = 2;
        local_e0 = 2;
        local_e4 = 0;
        local_d0 = 3;
        local_e8 = 2;
        local_ec = 0;
        local_d8 = 2;
        local_dc = 3;
        do {
          uVar9 = 0x15;
          puVar20 = (uint *)(uVar7 + iVar22);
          if ((int)*puVar20 < 0) {
            uVar9 = *puVar20 ^ 0x80000000;
          }
          switch(uVar9) {
          case 1:
            uVar9 = (uint)*(byte *)(uVar7 + iVar22 + 4);
            if (7 < uVar9) {
              uVar9 = 8;
            }
            local_ac = CONCAT31(local_ac._1_3_,(char)uVar9);
            break;
          default:
            FUN_008f7820(piVar16,puVar20,&local_70,&DAT_018672a8);
            uVar8 = (undefined1)local_ac;
            goto joined_r0x00959704;
          case 4:
            uVar9 = *(uint *)(uVar7 + iVar22 + 8);
            if (7 < uVar9) {
              uVar9 = 8;
            }
            if (*(int *)(uVar7 + iVar22 + 0xc) != 0) {
              uVar9 = 8;
            }
            break;
          case 0xc:
            uVar11 = *(undefined4 *)(uVar7 + iVar22 + 8);
            uVar13 = *(undefined4 *)(uVar7 + iVar22 + 0xc);
            goto LAB_0095973c;
          case 0xd:
            uVar11 = *(undefined4 *)(uVar7 + iVar22 + 4);
            uVar13 = *(undefined4 *)(uVar7 + iVar22 + 8);
LAB_0095973c:
            FUN_0095aee4(piVar16,uVar11,uVar13);
            uVar8 = (undefined1)local_ac;
joined_r0x00959704:
            if (local_b0 != 2) {
              FUN_016dd1aa((int)param_1 + 0xd,iVar12,0x2b);
              *(undefined1 *)(param_1 + 3) = uVar8;
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_b0;
              return;
            }
            uVar9 = local_ac & 0xff;
            break;
          case 0xe:
            uVar11 = *(undefined4 *)(uVar7 + iVar22 + 8);
            uVar13 = *(undefined4 *)(uVar7 + iVar22 + 0xc);
            goto LAB_009596e8;
          case 0xf:
            uVar11 = *(undefined4 *)(uVar7 + iVar22 + 4);
            uVar13 = *(undefined4 *)(uVar7 + iVar22 + 8);
LAB_009596e8:
            FUN_0095aa08(piVar16,uVar11,uVar13);
            uVar8 = (undefined1)local_ac;
            goto joined_r0x00959704;
          }
          puVar20 = puVar20 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar9 & 0xff) {
          case 0:
            if (local_d4 != 3) {
              uVar11 = 7;
              pcVar10 = "enabled";
LAB_0095a2b8:
              FUN_009244cc(piVar16,pcVar10,uVar11);
              goto LAB_0095a1dc;
            }
            FUN_0093f87c(piVar16);
            uVar8 = (undefined1)local_ac;
            local_d4 = local_ac & 0xff;
            if (local_b0 != 2) {
              FUN_016dd1aa((int)param_1 + 0xd,iVar12,0x2b);
LAB_00959f60:
              *(undefined1 *)(param_1 + 3) = uVar8;
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_b0;
              return;
            }
            break;
          case 1:
            if (local_c8 != 2) {
              uVar11 = 10;
              pcVar10 = "power_step";
              goto LAB_0095a2b8;
            }
            uVar9 = 0x15;
            if ((int)*puVar20 < 0) {
              uVar9 = *puVar20 ^ 0x80000000;
            }
            local_c8 = 0;
            if (uVar9 != 0x10) {
              if (uVar9 == 0x11) {
                puVar20 = *(uint **)(uVar7 + iVar22 + 0x14);
              }
              else if (uVar9 == 0x12) goto LAB_00959624;
              FUN_008f8320(piVar16,puVar20);
              local_c8 = local_ac;
              if (local_b0 != 2) {
                param_1[5] = local_a4;
                param_1[6] = local_a0;
                param_1[7] = iStack_9c;
                param_1[8] = local_98;
                param_1[9] = local_94;
                param_1[10] = iStack_90;
                param_1[0xb] = iStack_8c;
                param_1[0xc] = local_88;
                param_1[0xd] = iStack_84;
                param_1[2] = local_b0;
                *param_1 = 2;
                param_1[1] = 0;
LAB_0095a118:
                param_1[3] = local_ac;
                param_1[4] = local_a8;
                return;
              }
            }
LAB_00959624:
            unaff_r10 = local_a8;
            break;
          case 2:
            if (local_cc != 2) {
              pcVar10 = "min_power_target";
LAB_0095a24c:
              uVar11 = 0x10;
              goto LAB_0095a2b8;
            }
            uVar9 = 0x15;
            if ((int)*puVar20 < 0) {
              uVar9 = *puVar20 ^ 0x80000000;
            }
            local_cc = 0;
            if (uVar9 != 0x10) {
              if (uVar9 == 0x11) {
                puVar20 = *(uint **)(uVar7 + iVar22 + 0x14);
              }
              else if (uVar9 == 0x12) goto LAB_0095998c;
              FUN_008f8320(piVar16,puVar20);
              local_cc = local_ac;
              if (local_b0 != 2) {
                param_1[5] = local_a4;
                param_1[6] = local_a0;
                param_1[7] = iStack_9c;
                param_1[8] = local_98;
                param_1[9] = local_94;
                param_1[10] = iStack_90;
                param_1[0xb] = iStack_8c;
                param_1[0xc] = local_88;
                param_1[0xd] = iStack_84;
                param_1[2] = local_b0;
                *param_1 = 2;
                param_1[1] = 0;
                goto LAB_0095a118;
              }
            }
LAB_0095998c:
            unaff_r6 = local_a8;
            break;
          case 3:
            if (local_e0 != 2 || local_e4 != 0) {
              uVar11 = 0xd;
              pcVar10 = "hashrate_step";
              goto LAB_0095a2b8;
            }
            FUN_00940098(piVar16);
            if (local_b0 != 2) {
LAB_00959ec4:
              param_1[8] = local_98;
              param_1[9] = local_94;
              param_1[10] = iStack_90;
              param_1[0xb] = iStack_8c;
              param_1[0xc] = local_88;
              param_1[0xd] = iStack_84;
              param_1[4] = local_a8;
              *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_9c,local_a0);
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_b0;
              param_1[3] = local_ac;
              param_1[5] = local_a4;
              return;
            }
            unaff_d9 = CONCAT44(iStack_9c,local_a0);
            local_e0 = local_a8;
            local_e4 = local_a4;
            break;
          case 4:
            if (local_e8 != 2 || local_ec != 0) {
              uVar11 = 0x13;
              pcVar10 = "min_hashrate_target";
              goto LAB_0095a2b8;
            }
            FUN_00940098(piVar16);
            if (local_b0 != 2) goto LAB_00959ec4;
            unaff_d10 = CONCAT44(iStack_9c,local_a0);
            local_e8 = local_a8;
            local_ec = local_a4;
            break;
          case 5:
            if (local_dc != 3) {
              pcVar10 = "shutdown_enabledInvalidComponent";
              goto LAB_0095a24c;
            }
            FUN_0093f87c(piVar16);
            uVar8 = (undefined1)local_ac;
            local_dc = local_ac & 0xff;
            if (local_b0 != 2) {
              FUN_016dd1aa((int)param_1 + 0xd,iVar12,0x2b);
              goto LAB_00959f60;
            }
            break;
          case 6:
            if (local_d8 != 2) {
              uVar11 = 0x11;
              pcVar10 = "shutdown_duration";
              goto LAB_0095a2b8;
            }
            FUN_0093fac0(piVar16);
            local_d8 = local_ac;
            unaff_s16 = local_a8;
            if (local_b0 != 2) {
              param_1[5] = local_a4;
              param_1[6] = local_a0;
              param_1[7] = iStack_9c;
              param_1[8] = local_98;
              param_1[9] = local_94;
              param_1[10] = iStack_90;
              param_1[0xb] = iStack_8c;
              param_1[0xc] = local_88;
              param_1[0xd] = iStack_84;
              param_1[2] = local_b0;
              param_1[4] = local_a8;
              *param_1 = 2;
              param_1[1] = 0;
              param_1[3] = local_ac;
              return;
            }
            break;
          case 7:
            if (local_d0 != 3) {
              uVar11 = 8;
              pcVar10 = &DAT_0056a270;
              goto LAB_0095a2b8;
            }
            uVar9 = 0x15;
            if ((int)*puVar20 < 0) {
              uVar9 = *puVar20 ^ 0x80000000;
            }
            local_d0 = 2;
            if (uVar9 != 0x10) {
              if (uVar9 == 0x11) {
                puVar20 = *(uint **)(uVar7 + iVar22 + 0x14);
              }
              else if (uVar9 == 0x12) break;
              FUN_00915d28(piVar16,puVar20);
              iVar14 = local_b0;
              uVar8 = (undefined1)local_ac;
              local_d0 = local_ac & 0xff;
              iVar18 = 2;
              if (local_b0 != 2) {
                FUN_016dd1aa(&local_70,iVar12,0x2b);
                iVar18 = iVar14;
              }
              if (iVar18 != 2) {
                FUN_016dd1aa((int)param_1 + 0xd,&local_70,0x2b);
                *(undefined1 *)(param_1 + 3) = uVar8;
                *param_1 = 2;
                param_1[1] = 0;
                param_1[2] = iVar18;
                return;
              }
            }
          }
          iVar22 = iVar22 + 0x20;
        } while (uVar19 * 0x20 != iVar22);
        if (local_d4 == 3) {
          local_d4._0_1_ = 2;
        }
        uVar7 = uVar23;
        local_c4 = unaff_r6;
      }
      uVar8 = (undefined1)local_dc;
      uVar17 = (undefined1)local_d0;
      *(undefined1 *)(param_1 + 0xe) = (undefined1)local_d4;
      param_1[0xb] = local_c4;
      if (local_d0 == 3) {
        uVar17 = 2;
      }
      if (local_dc == 3) {
        uVar8 = 2;
      }
      uVar19 = 0;
      if (local_d8 != 2) {
        uVar19 = local_d8;
      }
      param_1[0xd] = unaff_s16;
      param_1[0xc] = uVar19;
      uVar19 = 0;
      if (local_cc != 2) {
        uVar19 = local_cc;
      }
      param_1[9] = unaff_r10;
      param_1[10] = uVar19;
      uVar19 = 0;
      if (local_c8 != 2) {
        uVar19 = local_c8;
      }
      *(undefined8 *)(param_1 + 6) = unaff_d10;
      param_1[8] = uVar19;
      *(undefined8 *)(param_1 + 2) = unaff_d9;
      *(undefined1 *)((int)param_1 + 0x3a) = uVar17;
      if (local_e8 == 2 && local_ec == 0) {
        local_e8 = 0;
        local_ec = 0;
      }
      param_1[4] = local_e8;
      *(undefined1 *)((int)param_1 + 0x39) = uVar8;
      param_1[5] = local_ec;
      if (local_e0 == 2 && local_e4 == 0) {
        local_e0 = 0;
        local_e4 = 0;
      }
      *param_1 = local_e0;
      param_1[1] = local_e4;
      local_b0 = *param_1;
      local_ac = param_1[1];
      local_a8 = param_1[2];
      local_a4 = param_1[3];
      local_a0 = param_1[4];
      iStack_9c = param_1[5];
      local_98 = param_1[6];
      local_94 = param_1[7];
      iStack_90 = param_1[8];
      iStack_8c = param_1[9];
      local_88 = param_1[10];
      iStack_84 = param_1[0xb];
      iStack_80 = param_1[0xc];
      iStack_7c = param_1[0xd];
      iStack_78 = param_1[0xe];
      iStack_74 = param_1[0xf];
      if (uVar23 != uVar7) {
        piVar16 = &local_70;
        local_c0 = local_fc;
        FUN_00f3cf48(piVar16,local_fc + (uVar23 - uVar7 >> 5),&local_c0,&DAT_01887224);
        if (local_70 != 2) goto LAB_00959fe4;
      }
      *param_1 = local_b0;
      param_1[1] = local_ac;
      param_1[2] = local_a8;
      param_1[3] = local_a4;
      param_1[4] = local_a0;
      param_1[5] = iStack_9c;
      param_1[6] = local_98;
      param_1[7] = local_94;
      param_1[8] = iStack_90;
      param_1[9] = iStack_8c;
      param_1[10] = local_88;
      param_1[0xb] = iStack_84;
      param_1[0xc] = iStack_80;
      param_1[0xd] = iStack_7c;
      param_1[0xe] = iStack_78;
      param_1[0xf] = iStack_74;
      return;
    }
    piVar16 = &local_b0;
    FUN_008f7820(piVar16,param_2,&local_70,&DAT_018671e8);
  }
LAB_00959fe4:
  iVar12 = piVar16[1];
  iVar22 = piVar16[2];
  iVar14 = piVar16[3];
  iVar18 = piVar16[4];
  iVar21 = piVar16[5];
  param_1[2] = *piVar16;
  param_1[3] = iVar12;
  param_1[4] = iVar22;
  param_1[5] = iVar14;
  param_1[6] = iVar18;
  param_1[7] = iVar21;
  iVar12 = piVar16[7];
  iVar22 = piVar16[8];
  iVar14 = piVar16[9];
  iVar18 = piVar16[10];
  iVar21 = piVar16[0xb];
  param_1[8] = piVar16[6];
  param_1[9] = iVar12;
  param_1[10] = iVar22;
  param_1[0xb] = iVar14;
  param_1[0xc] = iVar18;
  param_1[0xd] = iVar21;
  *param_1 = 2;
  param_1[1] = 0;
  return;
}

