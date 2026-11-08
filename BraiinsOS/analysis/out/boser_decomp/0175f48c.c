// FUN_0175f48c @ 0175f48c size=5912 calls_out=16 calls_in=1
// strings: HTTP/1.1 100 Continue   | Invalid chunk end LF | chunk trailers bytes over limit | Invalid chunk size linear white space | unexpected EOF during chunk size line | unexpected EOF during chunk size line

/* WARNING: Removing unreachable block (ram,0x0175fd70) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0175f48c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined **ppuVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  uint *puVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  undefined **extraout_r12;
  undefined *local_168;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_148;
  uint local_144;
  undefined4 local_140;
  undefined **local_128;
  undefined **local_124;
  undefined **local_120;
  undefined **local_11c;
  undefined **local_118;
  undefined **local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  undefined **ppuStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined **local_b0;
  undefined **ppuStack_ac;
  undefined **ppuStack_a8;
  undefined **ppuStack_a4;
  undefined **local_a0;
  undefined **local_9c;
  undefined **local_98;
  undefined **ppuStack_94;
  undefined4 local_90;
  undefined **local_8c;
  undefined **local_88;
  undefined **local_84;
  undefined **local_80;
  undefined **local_7c;
  undefined **local_78;
  undefined **local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined **local_38;
  undefined **local_34;
  undefined **local_30;
  undefined **local_2c [2];
  
  ppuVar7 = (undefined **)(param_2 + 0x40);
  puVar19 = (uint *)(param_2 + 0x60);
  puVar15 = (uint *)(param_2 + 0x58);
  piVar21 = (int *)(param_2 + 0x68);
  puVar10 = (uint *)(param_2 + 0x6c);
  piVar11 = (int *)(param_2 + 0x50);
  puVar4 = *ppuVar7;
  while (puVar4 == (undefined *)0x1) {
    if (*(int *)(param_2 + 0x90) == 3) {
      FUN_01ac6cbc(param_2 + 0x108,"HTTP/1.1 100 Continue\r\n\r\n",0x19);
    }
    uVar20 = *(uint *)(param_2 + 0x48);
    iVar5 = 1;
    if (1 < uVar20) {
      iVar5 = uVar20 - 2;
    }
    if ((iVar5 == 0) || (iVar5 != 1)) {
      local_140 = *(undefined4 *)(param_2 + 100);
      local_144 = *puVar15;
      local_148 = *(undefined4 *)(param_2 + 0x5c);
      local_150 = *(undefined4 *)(param_2 + 0x4c);
      local_154 = *(undefined4 *)(param_2 + 0x50);
      local_158 = *(undefined4 *)(param_2 + 0x54);
      uVar6 = *puVar19;
      local_b0 = (undefined **)*piVar21;
      ppuStack_ac = *(undefined ***)(param_2 + 0x6c);
      ppuStack_a8 = *(undefined ***)(param_2 + 0x70);
      ppuStack_a4 = *(undefined ***)(param_2 + 0x74);
      local_b4 = *(undefined2 *)(param_2 + 0x7d);
      local_b2 = *(undefined1 *)(param_2 + 0x7f);
      uVar2 = *(undefined1 *)(param_2 + 0x7c);
      local_15c = *(undefined4 *)(param_2 + 0x78);
    }
    else {
      uVar6 = *puVar19;
      local_140 = *(undefined4 *)(param_2 + 100);
      local_144 = *puVar15;
      local_148 = *(undefined4 *)(param_2 + 0x5c);
      uVar2 = *(undefined1 *)(param_2 + 0x7c);
      if (*(int *)(param_2 + 0x68) == 0) {
        local_88 = (undefined **)0x0;
      }
      else {
        FUN_012841fc(&local_88,*(int *)(param_2 + 0x68),*puVar10);
      }
      local_150 = *(undefined4 *)(param_2 + 0x4c);
      local_154 = *(undefined4 *)(param_2 + 0x50);
      local_158 = *(undefined4 *)(param_2 + 0x54);
      local_15c = *(undefined4 *)(param_2 + 0x78);
      local_b0 = local_88;
      ppuStack_ac = local_84;
      ppuStack_a8 = local_80;
      ppuStack_a4 = local_7c;
    }
    FUN_0172f038(ppuVar7);
    *ppuVar7 = (undefined *)0x2;
    *(undefined4 *)(param_2 + 0x44) = 0;
    *puVar15 = local_144;
    *(undefined4 *)(param_2 + 0x5c) = local_148;
    *puVar19 = uVar6;
    *(undefined4 *)(param_2 + 100) = local_140;
    *(undefined4 *)(param_2 + 0x4c) = local_150;
    *(undefined4 *)(param_2 + 0x50) = local_154;
    *(uint *)(param_2 + 0x48) = uVar20;
    *(undefined4 *)(param_2 + 0x54) = local_158;
    *piVar21 = (int)local_b0;
    *(undefined ***)(param_2 + 0x6c) = ppuStack_ac;
    *(undefined ***)(param_2 + 0x70) = ppuStack_a8;
    *(undefined ***)(param_2 + 0x74) = ppuStack_a4;
    *(undefined1 *)(param_2 + 0x7c) = uVar2;
    *(undefined4 *)(param_2 + 0x78) = local_15c;
    *(undefined2 *)(param_2 + 0x7d) = local_b4;
    *(undefined1 *)(param_2 + 0x7f) = local_b2;
    puVar4 = (undefined *)0x2;
  }
  if (puVar4 != (undefined *)0x2) {
    local_84 = (undefined **)&LAB_00a604d0;
    local_88 = ppuVar7;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00575a12,&local_88,&DAT_01d209f8);
  }
  uVar20 = *(uint *)(param_2 + 0x48);
  iVar5 = 1;
  iVar22 = param_2 + 0x100;
  if (1 < uVar20) {
    iVar5 = uVar20 - 2;
  }
  if (iVar5 == 0) {
    ppuVar18 = (undefined **)*piVar11;
    uVar20 = *(uint *)(param_2 + 0x54);
    if (ppuVar18 != (undefined **)0x0 || uVar20 != 0) {
      FUN_01725e4c(&local_88,iVar22,param_3,ppuVar18);
      ppuVar17 = local_84;
      local_124 = (undefined **)0x0;
      local_128 = (undefined **)&DAT_00000005;
      if (local_88 == (undefined **)0x0) {
        if (local_84 != (undefined **)0x0) {
          local_2c[0] = local_78;
          local_34 = local_80;
          local_38 = local_84;
          local_30 = local_7c;
          if (uVar20 == 0 && (local_7c <= ppuVar18) <= uVar20) {
            iVar5 = 0;
            iVar22 = 0;
          }
          else {
            if (local_7c == (undefined **)0x0) {
              FUN_01753ba0(&local_88,0,uVar20 - (local_7c > ppuVar18));
              local_124 = (undefined **)0x0;
              local_11c = local_84;
              local_120 = local_88;
              (*(code *)ppuVar17[4])(local_2c,local_80,0);
              local_128 = (undefined **)&SUB_00000004;
              goto LAB_01760a54;
            }
            iVar5 = (int)ppuVar18 - (int)local_7c;
            iVar22 = uVar20 - (ppuVar18 < local_7c);
          }
          *piVar11 = iVar5;
          *(int *)(param_2 + 0x54) = iVar22;
          local_120 = local_84;
          local_11c = local_80;
          local_118 = local_7c;
          local_114 = local_78;
          goto LAB_017606b0;
        }
        local_120 = local_80;
LAB_01760998:
        local_124 = (undefined **)0x0;
        local_128 = (undefined **)&SUB_00000004;
        local_11c = local_7c;
      }
      goto LAB_01760a54;
    }
LAB_01760690:
    local_114 = (undefined **)0x0;
    local_11c = (undefined **)&DAT_00000001;
    local_118 = (undefined **)0x0;
    local_120 = &PTR_FUN_01d193c8;
LAB_017606b0:
    local_84 = (undefined **)0x0;
    local_88 = (undefined **)&DAT_00000003;
    local_80 = local_120;
    local_7c = local_11c;
LAB_017606e8:
    iVar5 = 1;
    if (1 < *(uint *)(param_2 + 0x48)) {
      iVar5 = *(uint *)(param_2 + 0x48) - 2;
    }
    local_60 = local_100;
    uStack_5c = uStack_fc;
    uStack_58 = uStack_f8;
    uStack_54 = uStack_f4;
    uStack_50 = uStack_f0;
    uStack_4c = uStack_ec;
    if (iVar5 == 0) {
      if (!(*piVar11 == 0 && *(int *)(param_2 + 0x54) == 0)) goto LAB_017607c4;
LAB_01760718:
      if (local_118 != (undefined **)0x0) {
        local_128 = (undefined **)&DAT_00000003;
        puVar4 = (undefined *)0x3;
        local_120 = local_80;
        local_11c = local_7c;
        goto LAB_01760ab4;
      }
      puVar4 = (undefined *)0x3;
    }
    else {
      if (iVar5 != 1) {
        if (*(char *)(param_2 + 0x4c) == '\0') goto LAB_017607c4;
        goto LAB_01760718;
      }
      if (*(char *)(param_2 + 0x7c) == '\f') goto LAB_01760718;
LAB_017607c4:
      if (local_118 != (undefined **)0x0) {
        *param_1 = local_88;
        param_1[1] = local_84;
        param_1[2] = local_80;
        param_1[3] = local_7c;
        param_1[4] = local_118;
        param_1[5] = local_114;
        param_1[6] = uStack_110;
        param_1[7] = uStack_10c;
        param_1[8] = uStack_108;
        param_1[9] = uStack_104;
        goto LAB_01760b78;
      }
      puVar4 = (undefined *)0x4;
    }
    local_11c = (undefined **)0x17608f8;
    local_78 = local_118;
    local_74 = local_114;
    uStack_70 = uStack_110;
    uStack_6c = uStack_10c;
    uStack_68 = uStack_108;
    uStack_64 = uStack_104;
    FUN_01760ec4(&local_88);
    local_124 = (undefined **)0x0;
    local_128 = (undefined **)&DAT_00000005;
    local_120 = extraout_r12;
  }
  else {
    if (iVar5 == 1) {
      uVar6 = *(uint *)(param_2 + 0x54);
      if (*(int *)(param_2 + 0x50) == 0) {
        uVar6 = 0x4000;
      }
      uVar13 = *(uint *)(param_2 + 0x4c);
      if ((uVar20 & 1) == 0) {
        uVar13 = 100;
      }
      uVar20 = (uint)*(byte *)(param_2 + 0x7c);
      local_168 = &DAT_01d1e584;
      do {
        local_a0 = (undefined **)0x0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar20) {
        case 0:
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_0175ff28;
          if (local_84 != (undefined **)0x0) {
            local_38 = local_84;
            local_34 = local_80;
            local_30 = local_7c;
            local_2c[0] = local_78;
            if (local_7c == (undefined **)0x0) {
              FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
              local_8c = local_84;
              local_90 = local_88;
              (*(code *)local_38[4])(local_2c,local_34,local_30);
              goto LAB_01760564;
            }
            bVar3 = *(byte *)local_80;
            (*(code *)local_84[4])(local_2c,local_80,local_7c);
            uVar20 = (uint)(byte)(bVar3 - 0x30);
            if (uVar20 < 10) {
LAB_0175fcd4:
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar20 = uVar20 | *puVar15 << 4;
                uVar8 = *(uint *)(param_2 + 0x5c) << 4 | *puVar15 >> 0x1c;
LAB_017604bc:
                *puVar15 = uVar20;
                *(uint *)(param_2 + 0x5c) = uVar8;
                local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
                uVar2 = 1;
                break;
              }
            }
            else if ((byte)(bVar3 + 0x9f) < 6) {
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar9 = *puVar15;
                uVar8 = *(uint *)(param_2 + 0x5c) << 4 | uVar9 >> 0x1c;
                bVar3 = bVar3 + 0xa9;
LAB_017604b0:
                uVar20 = (uint)bVar3 + uVar9 * 0x10;
                uVar8 = uVar8 + CARRY4((uint)bVar3,uVar9 * 0x10);
                goto LAB_017604bc;
              }
            }
            else {
              if (5 < (byte)(bVar3 + 0xbf)) {
                uVar14 = 0x2b;
                uVar16 = 0x14;
                pcVar12 = "Invalid chunk size line: missing";
                goto LAB_01760558;
              }
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar9 = *puVar15;
                uVar8 = *(uint *)(param_2 + 0x5c) << 4 | uVar9 >> 0x1c;
                bVar3 = bVar3 - 0x37;
                goto LAB_017604b0;
              }
            }
LAB_017605f0:
            uVar14 = 0x1c;
            uVar16 = 0x15;
            pcVar12 = "invalid chunk size: overflow";
            goto LAB_01760558;
          }
LAB_0175ffd8:
          local_90 = local_80;
          local_8c = local_7c;
          goto LAB_01760564;
        case 1:
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 != (undefined **)&DAT_00000001) {
            if (local_84 == (undefined **)0x0) goto LAB_0175ffd8;
            local_38 = local_84;
            local_34 = local_80;
            local_30 = local_7c;
            local_2c[0] = local_78;
            if (local_7c == (undefined **)0x0) {
              FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
              local_8c = local_84;
              local_90 = local_88;
              (*(code *)local_38[4])(local_2c,local_34,local_30);
              goto LAB_01760564;
            }
            bVar3 = *(byte *)local_80;
            (*(code *)local_84[4])(local_2c,local_80,local_7c);
            uVar20 = (uint)(byte)(bVar3 - 0x30);
            if (uVar20 < 10) goto LAB_0175fcd4;
            if ((byte)(bVar3 + 0x9f) < 6) {
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar9 = *puVar15;
                uVar8 = *(uint *)(param_2 + 0x5c) << 4 | uVar9 >> 0x1c;
                bVar3 = bVar3 + 0xa9;
                goto LAB_017604b0;
              }
            }
            else {
              if (5 < (byte)(bVar3 + 0xbf)) {
                uVar14 = 0x25;
                uVar16 = 0x14;
                if (bVar3 < 0x20) {
                  if (bVar3 != 9) {
                    pcVar12 = "Invalid chunk size line: Invalid Size";
                    goto joined_r0x0175fb4c;
                  }
                }
                else if (bVar3 != 0x20) {
                  pcVar12 = "Invalid chunk size line: Invalid Size";
                  if (bVar3 == 0x3b) goto LAB_01760430;
                  goto LAB_01760558;
                }
                goto LAB_01760344;
              }
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar9 = *puVar15;
                uVar8 = *(uint *)(param_2 + 0x5c) << 4 | uVar9 >> 0x1c;
                bVar3 = bVar3 - 0x37;
                goto LAB_017604b0;
              }
            }
            goto LAB_017605f0;
          }
          goto LAB_0175ff28;
        case 2:
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 != (undefined **)&DAT_00000001) {
            if (local_84 == (undefined **)0x0) goto LAB_0175ffd8;
            local_38 = local_84;
            local_34 = local_80;
            local_30 = local_7c;
            local_2c[0] = local_78;
            if (local_7c == (undefined **)0x0) {
              FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
              local_8c = local_84;
              local_90 = local_88;
              (*(code *)local_38[4])(local_2c,local_34,local_30);
              goto LAB_01760564;
            }
            bVar3 = *(byte *)local_80;
            (*(code *)local_84[4])(local_2c,local_80,local_7c);
            uVar14 = 0x25;
            uVar16 = 0x14;
            if (bVar3 < 0x20) {
              if (bVar3 == 9) {
LAB_01760344:
                local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
                uVar2 = 2;
                break;
              }
              pcVar12 = "Invalid chunk size linear white space";
joined_r0x0175fb4c:
              uVar16 = 0x14;
              uVar14 = 0x25;
              if (bVar3 == 0xd) goto LAB_0175fbd0;
            }
            else {
              if (bVar3 == 0x3b) {
LAB_01760430:
                local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
                uVar2 = 3;
                break;
              }
              pcVar12 = "Invalid chunk size linear white space";
              if (bVar3 == 0x20) goto LAB_01760344;
            }
LAB_01760558:
            FUN_019a18a8(&local_90,uVar16,pcVar12,uVar14);
            goto LAB_01760564;
          }
          goto LAB_0175ff28;
        case 3:
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 != (undefined **)&DAT_00000001) {
            if (local_84 == (undefined **)0x0) goto LAB_0175ffd8;
            local_38 = local_84;
            local_34 = local_80;
            local_30 = local_7c;
            local_2c[0] = local_78;
            if (local_7c != (undefined **)0x0) {
              bVar3 = *(byte *)local_80;
              (*(code *)local_84[4])(local_2c,local_80,local_7c);
              uVar16 = 0x15;
              if (bVar3 == 10) {
                uVar14 = 0x28;
                pcVar12 = "invalid chunk extension contains newline";
              }
              else {
                if (bVar3 == 0xd) {
LAB_0175fbd0:
                  uVar2 = 4;
                  local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
                  break;
                }
                uVar14 = 0x1b;
                uVar20 = *puVar19 + 1;
                iVar5 = *(int *)(param_2 + 100) + (uint)(0xfffffffe < *puVar19);
                *puVar19 = uVar20;
                *(int *)(param_2 + 100) = iVar5;
                pcVar12 = "chunk extensions over limit";
                if (iVar5 == 0 && uVar20 >> 0xe == 0) goto LAB_01760430;
              }
              goto LAB_01760558;
            }
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01760564;
          }
          goto LAB_0175ff28;
        case 4:
          uVar20 = *puVar15;
          iVar5 = *(int *)(param_2 + 0x5c);
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_0175ff28;
          if (local_84 == (undefined **)0x0) goto LAB_0175ffd8;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01760564;
          }
          bVar3 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          if (bVar3 != 10) {
            uVar14 = 0x15;
            uVar16 = 0x14;
            pcVar12 = "Invalid chunk size LF";
            goto LAB_01760558;
          }
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar2 = 5;
          if (uVar20 == 0 && iVar5 == 0) {
            uVar2 = 10;
          }
          break;
        case 5:
          ppuVar17 = (undefined **)*puVar15;
          iVar5 = *(int *)(param_2 + 0x5c);
          ppuVar18 = ppuVar17;
          if (iVar5 != 0) {
            ppuVar18 = (undefined **)&DAT_ffffffff;
          }
          FUN_01725e4c(&local_88,iVar22,param_3,ppuVar18);
          ppuVar1 = local_80;
          ppuVar18 = local_84;
          if (local_88 != (undefined **)&DAT_00000001) {
            if (local_84 == (undefined **)0x0) {
              local_90 = local_80;
              local_8c = local_7c;
            }
            else {
              local_38 = local_84;
              *(undefined4 *)((uint)&local_38 | 4) = local_80;
              ((undefined4 *)((uint)&local_38 | 4))[1] = local_7c;
              local_2c[0] = local_78;
              if (local_7c == (undefined **)0x0) {
                *puVar15 = 0;
                *(undefined4 *)(param_2 + 0x5c) = 0;
                FUN_01753ba0(&local_88);
                local_8c = local_84;
                local_90 = local_88;
                (*(code *)ppuVar18[4])(local_2c,ppuVar1,0);
              }
              else {
                local_a0 = local_84;
                local_9c = local_34;
                local_98 = local_30;
                ppuStack_94 = local_78;
                *puVar15 = (int)ppuVar17 - (int)local_7c;
                *(uint *)(param_2 + 0x5c) = iVar5 - (uint)(ppuVar17 < local_7c);
                uVar2 = 5;
                if (ppuVar17 == local_7c && iVar5 == 0) {
                  uVar2 = 6;
                }
                local_90._0_2_ = CONCAT11(uVar2,4);
              }
            }
            goto LAB_01760564;
          }
          goto LAB_0175ff28;
        case 6:
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_0175ff28;
          if (local_84 == (undefined **)0x0) goto LAB_0175ffd8;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01760564;
          }
          bVar3 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          if (bVar3 != 0xd) {
            uVar14 = 0x15;
            uVar16 = 0x14;
            pcVar12 = "Invalid chunk body CR";
            goto LAB_01760558;
          }
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar2 = 7;
          break;
        case 7:
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_0175ff28;
          if (local_84 == (undefined **)0x0) goto LAB_0175ffd8;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01760564;
          }
          bVar3 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          if (bVar3 != 10) {
            uVar14 = 0x15;
            uVar16 = 0x14;
            pcVar12 = "Invalid chunk body LF";
            goto LAB_01760558;
          }
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar2 = 0;
          break;
        case 8:
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 != (undefined **)&DAT_00000001) {
            if (local_84 == (undefined **)0x0) goto LAB_0175ffd8;
            local_38 = local_84;
            local_34 = local_80;
            local_30 = local_7c;
            local_2c[0] = local_78;
            if (local_7c != (undefined **)0x0) {
              bVar3 = *(byte *)local_80;
              (*(code *)local_84[4])(local_2c,local_80,local_7c);
              if (*piVar21 != 0) {
                local_88 = (undefined **)CONCAT31(local_88._1_3_,bVar3);
                FUN_01284394(piVar21,&local_88,1);
                if (*piVar21 != 0) {
                  if (uVar6 <= *puVar10) goto LAB_017603e4;
                  local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
                  uVar2 = 8;
                  if (bVar3 == 0xd) {
                    uVar2 = 9;
                  }
                  break;
                }
              }
              local_168 = &DAT_01d1e574;
LAB_01760bc8:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("trailers_buf is None",0x14,local_168);
            }
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01760564;
          }
          goto LAB_0175ff28;
        case 9:
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 != (undefined **)&DAT_00000001) {
            if (local_84 == (undefined **)0x0) goto LAB_0175ffd8;
            local_38 = local_84;
            local_34 = local_80;
            local_30 = local_7c;
            local_2c[0] = local_78;
            if (local_7c != (undefined **)0x0) {
              bVar3 = *(byte *)local_80;
              (*(code *)local_84[4])(local_2c,local_80,local_7c);
              if (bVar3 == 10) {
                uVar14 = 0x1d;
                uVar16 = 0x15;
                if (*(uint *)(param_2 + 0x78) < uVar13) {
                  *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) + 1;
                  if (*(int *)(param_2 + 0x68) == 0) goto LAB_01760bc8;
                  local_88 = (undefined **)CONCAT31(local_88._1_3_,10);
                  FUN_01284394(piVar21,&local_88,1,0x1d);
                  if (*piVar21 == 0) goto LAB_01760bc8;
                  uVar14 = 0x1f;
                  pcVar12 = "chunk trailers bytes over limit";
                  if (*puVar10 < uVar6) {
                    local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
                    uVar2 = 10;
                    break;
                  }
                }
                else {
                  pcVar12 = "chunk trailers count overflow";
                }
              }
              else {
                uVar14 = 0x16;
                uVar16 = 0x14;
                pcVar12 = "Invalid trailer end LF";
              }
              goto LAB_01760558;
            }
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01760564;
          }
LAB_0175ff28:
          local_90 = (undefined **)CONCAT31(local_90._1_3_,5);
LAB_01760564:
          if ((char)local_90 != '\x05') goto LAB_01760574;
          local_128 = (undefined **)&DAT_00000005;
          goto LAB_017609d4;
        case 10:
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_0175ff28;
          if (local_84 == (undefined **)0x0) goto LAB_0175ffd8;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01760564;
          }
          bVar3 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          if (bVar3 == 0xd) {
            if (*piVar21 != 0) {
              local_88 = (undefined **)CONCAT31(local_88._1_3_,0xd);
              FUN_01284394(piVar21,&local_88,1);
              if (uVar6 <= *puVar10) goto LAB_017603e4;
            }
            local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
            uVar2 = 0xb;
          }
          else {
            if (*piVar21 == 0) {
              iVar5 = thunk_FUN_01be5118(0x40);
              if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,0x40);
              }
              local_44 = 0;
              local_3c = 1;
              local_40 = 0x40;
              local_88 = (undefined **)CONCAT31(local_88._1_3_,bVar3);
              local_48 = iVar5;
              FUN_01284394(&local_48,&local_88,1);
              if (*piVar21 != 0) {
                FUN_012840cc(piVar21);
              }
              *piVar21 = local_48;
              *(undefined4 *)(param_2 + 0x6c) = local_44;
              *(undefined4 *)(param_2 + 0x70) = local_40;
              *(undefined4 *)(param_2 + 0x74) = local_3c;
            }
            else {
              local_88 = (undefined **)CONCAT31(local_88._1_3_,bVar3);
              FUN_01284394(piVar21,&local_88,1);
              if (uVar6 <= *puVar10) {
LAB_017603e4:
                uVar14 = 0x1f;
                uVar16 = 0x15;
                pcVar12 = "chunk trailers bytes over limit";
                goto LAB_01760558;
              }
            }
            local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
            uVar2 = 8;
          }
          break;
        case 0xb:
          FUN_01725e4c(&local_88,iVar22,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_0175ff28;
          if (local_84 == (undefined **)0x0) goto LAB_0175ffd8;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01760564;
          }
          bVar3 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          uVar16 = 0x14;
          uVar14 = 0x14;
          pcVar12 = "Invalid chunk end LF";
          if (bVar3 != 10) goto LAB_01760558;
          if (*piVar21 != 0) {
            local_88 = (undefined **)CONCAT31(local_88._1_3_,10);
            FUN_01284394(piVar21,&local_88,1,0x14);
            if (uVar6 <= *puVar10) goto LAB_017603e4;
          }
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar2 = 0xc;
          break;
        case 0xc:
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar2 = 0xc;
        }
        local_90._0_2_ = CONCAT11(uVar2,(char)local_90);
LAB_01760574:
        if (((uint)local_90 & 0xff) != 4) {
          local_120 = local_90;
          local_124 = (undefined **)0x0;
          local_128 = (undefined **)&SUB_00000004;
          local_11c = local_8c;
LAB_01760a2c:
          if (local_a0 != (undefined **)0x0) {
            (*(code *)local_a0[4])(&ppuStack_94,local_9c,local_98);
          }
          goto LAB_01760a54;
        }
        *(char *)(param_2 + 0x7c) = (char)((uint)local_90 >> 8);
        uVar20 = ((uint)local_90 & 0xffff) >> 8;
        if (uVar20 == 0xc) {
          ppuVar18 = (undefined **)*piVar21;
          if (ppuVar18 == (undefined **)0x0) {
            local_124 = (undefined **)0x0;
            local_114 = (undefined **)0x0;
            local_118 = (undefined **)0x0;
            local_128 = (undefined **)&DAT_00000003;
            local_11c = (undefined **)&DAT_00000001;
            local_120 = &PTR_FUN_01d193c8;
          }
          else if (*(uint *)(param_2 + 0x78) < uVar13) {
            local_34 = (undefined **)*puVar10;
            local_30 = *(undefined ***)(param_2 + 0x70);
            local_2c[0] = *(undefined ***)(param_2 + 0x74);
            *piVar21 = 0;
            local_38 = ppuVar18;
            FUN_014261c8(&local_88,ppuVar18,local_34);
            if (local_88 == (undefined **)&DAT_00000003 && local_84 == (undefined **)0x0) {
              local_124 = (undefined **)0x0;
              local_128 = (undefined **)&SUB_00000004;
            }
            else {
              local_128 = local_88;
              local_124 = local_84;
              local_118 = local_78;
              local_114 = local_74;
              uStack_110 = uStack_70;
              uStack_10c = uStack_6c;
              uStack_108 = uStack_68;
              uStack_104 = uStack_64;
              local_100 = local_60;
              uStack_fc = uStack_5c;
              uStack_f8 = uStack_58;
              uStack_f4 = uStack_54;
              uStack_f0 = uStack_50;
              uStack_ec = uStack_4c;
            }
            local_11c = local_7c;
            local_120 = local_80;
            FUN_012840cc(&local_38);
          }
          else {
            FUN_019a18a8(&local_88,0x15,"chunk trailers count overflow",0x1d);
            local_120 = local_88;
            local_128 = (undefined **)&SUB_00000004;
            local_11c = local_84;
LAB_017609d4:
            local_124 = (undefined **)0x0;
          }
          goto LAB_01760a2c;
        }
      } while (local_a0 == (undefined **)0x0);
      local_120 = local_a0;
      local_11c = local_9c;
      local_118 = local_98;
      local_114 = ppuStack_94;
      local_124 = (undefined **)0x0;
      local_128 = (undefined **)&DAT_00000003;
    }
    else {
      if (*(char *)(param_2 + 0x4c) != '\0') goto LAB_01760690;
      FUN_01725e4c(&local_88,iVar22,param_3,0x2000);
      local_124 = (undefined **)0x0;
      local_128 = (undefined **)&DAT_00000005;
      if (local_88 == (undefined **)0x0) {
        if (local_84 == (undefined **)0x0) {
          local_120 = local_80;
          goto LAB_01760998;
        }
        local_128 = (undefined **)&DAT_00000003;
        local_114 = local_78;
        local_120 = local_84;
        local_11c = local_80;
        *(bool *)(param_2 + 0x4c) = local_7c == (undefined **)0x0;
        local_118 = local_7c;
      }
    }
LAB_01760a54:
    if (local_128 == (undefined **)&DAT_00000005 && local_124 == (undefined **)0x0) {
      *param_1 = 6;
      param_1[1] = 0;
      return;
    }
    if (local_128 == (undefined **)&SUB_00000004 && local_124 == (undefined **)0x0) {
      local_128 = (undefined **)&SUB_00000004;
      puVar4 = (undefined *)0x4;
LAB_01760ab4:
      local_124 = (undefined **)0x0;
      local_e8 = local_118;
      ppuStack_e4 = local_114;
      uStack_e0 = uStack_110;
      uStack_dc = uStack_10c;
      uStack_d8 = uStack_108;
      uStack_d4 = uStack_104;
      local_d0 = local_100;
      uStack_cc = uStack_fc;
      uStack_c8 = uStack_f8;
      uStack_c4 = uStack_f4;
      uStack_c0 = uStack_f0;
      uStack_bc = uStack_ec;
    }
    else {
      local_80 = local_120;
      local_7c = local_11c;
      local_88 = local_128;
      local_84 = local_124;
      if (local_128 == (undefined **)&DAT_00000003 && local_124 == (undefined **)0x0)
      goto LAB_017606e8;
      local_e8 = local_118;
      ppuStack_e4 = local_114;
      uStack_e0 = uStack_110;
      uStack_dc = uStack_10c;
      uStack_d8 = uStack_108;
      uStack_d4 = uStack_104;
      puVar4 = (undefined *)0x4;
      local_d0 = local_100;
      uStack_cc = uStack_fc;
      uStack_c8 = uStack_f8;
      uStack_c4 = uStack_f4;
      uStack_c0 = uStack_f0;
      uStack_bc = uStack_ec;
    }
  }
  local_78 = local_e8;
  local_74 = ppuStack_e4;
  uStack_70 = uStack_e0;
  uStack_6c = uStack_dc;
  uStack_68 = uStack_d8;
  uStack_64 = uStack_d4;
  local_60 = local_d0;
  uStack_5c = uStack_cc;
  uStack_58 = uStack_c8;
  uStack_54 = uStack_c4;
  uStack_50 = uStack_c0;
  uStack_4c = uStack_bc;
  local_88 = local_128;
  local_84 = local_124;
  local_80 = local_120;
  local_7c = local_11c;
  FUN_0172f038(ppuVar7);
  *ppuVar7 = puVar4;
  *(undefined4 *)(param_2 + 0x44) = 0;
  FUN_0187246c(param_2);
  FUN_0175f2ec(param_2,param_3);
  *param_1 = local_88;
  param_1[1] = local_84;
  param_1[2] = local_80;
  param_1[3] = local_7c;
  param_1[4] = local_78;
  param_1[5] = local_74;
  param_1[6] = uStack_70;
  param_1[7] = uStack_6c;
  param_1[8] = uStack_68;
  param_1[9] = uStack_64;
LAB_01760b78:
  param_1[10] = local_60;
  param_1[0xb] = uStack_5c;
  param_1[0xc] = uStack_58;
  param_1[0xd] = uStack_54;
  param_1[0xe] = uStack_50;
  param_1[0xf] = uStack_4c;
  return;
}

