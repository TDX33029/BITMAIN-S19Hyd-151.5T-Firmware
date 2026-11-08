// FUN_00a5ead0 @ 00a5ead0 size=5856 calls_out=16 calls_in=1
// strings: HTTP/1.1 100 Continue   | 0  KeepAlive | Invalid chunk end LF | chunk trailers bytes over limit | Invalid chunk size linear white space | unexpected EOF during chunk size line

/* WARNING: Removing unreachable block (ram,0x00a5f3ac) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a5ead0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  byte bVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  undefined1 uVar21;
  undefined4 uVar22;
  undefined **extraout_r12;
  undefined *local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_14c;
  uint local_148;
  undefined4 local_144;
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
  
  ppuVar5 = (undefined **)(param_2 + 0x40);
  puVar8 = (uint *)(param_2 + 0x6c);
  piVar13 = (int *)(param_2 + 0x68);
  puVar18 = (uint *)(param_2 + 0x60);
  puVar19 = (uint *)(param_2 + 0x58);
  piVar9 = (int *)(param_2 + 0x50);
  puVar2 = *ppuVar5;
  while (puVar2 == (undefined *)0x1) {
    if (*(int *)(param_2 + 0x90) == 3) {
      FUN_01ac6d2c(param_2 + 0x118,"HTTP/1.1 100 Continue\r\n\r\n","0\r\n\r\nKeepAlive");
    }
    uVar6 = *(uint *)(param_2 + 0x48);
    iVar3 = 1;
    if (1 < uVar6) {
      iVar3 = uVar6 - 2;
    }
    if ((iVar3 == 0) || (iVar3 != 1)) {
      local_144 = *(undefined4 *)(param_2 + 100);
      local_148 = *puVar19;
      local_14c = *(undefined4 *)(param_2 + 0x5c);
      local_154 = *(undefined4 *)(param_2 + 0x4c);
      local_158 = *(undefined4 *)(param_2 + 0x50);
      local_15c = *(undefined4 *)(param_2 + 0x54);
      uVar4 = *puVar18;
      local_b0 = (undefined **)*piVar13;
      ppuStack_ac = *(undefined ***)(param_2 + 0x6c);
      ppuStack_a8 = *(undefined ***)(param_2 + 0x70);
      ppuStack_a4 = *(undefined ***)(param_2 + 0x74);
      local_b4 = *(undefined2 *)(param_2 + 0x7d);
      local_b2 = *(undefined1 *)(param_2 + 0x7f);
      local_160 = *(undefined **)(param_2 + 0x78);
      uVar21 = *(undefined1 *)(param_2 + 0x7c);
    }
    else {
      uVar21 = *(undefined1 *)(param_2 + 0x7c);
      uVar4 = *puVar18;
      local_144 = *(undefined4 *)(param_2 + 100);
      local_148 = *puVar19;
      local_14c = *(undefined4 *)(param_2 + 0x5c);
      if (*(int *)(param_2 + 0x68) == 0) {
        local_88 = (undefined **)0x0;
      }
      else {
        FUN_012841fc(&local_88,*(int *)(param_2 + 0x68),*puVar8);
      }
      local_154 = *(undefined4 *)(param_2 + 0x4c);
      local_158 = *(undefined4 *)(param_2 + 0x50);
      local_15c = *(undefined4 *)(param_2 + 0x54);
      local_160 = *(undefined **)(param_2 + 0x78);
      local_b0 = local_88;
      ppuStack_ac = local_84;
      ppuStack_a8 = local_80;
      ppuStack_a4 = local_7c;
    }
    FUN_0172f038(ppuVar5);
    *ppuVar5 = (undefined *)0x2;
    *(undefined4 *)(param_2 + 0x44) = 0;
    *puVar19 = local_148;
    *(undefined4 *)(param_2 + 0x5c) = local_14c;
    *puVar18 = uVar4;
    *(undefined4 *)(param_2 + 100) = local_144;
    *(uint *)(param_2 + 0x48) = uVar6;
    *(undefined4 *)(param_2 + 0x4c) = local_154;
    *(undefined4 *)(param_2 + 0x50) = local_158;
    *(undefined4 *)(param_2 + 0x54) = local_15c;
    *piVar13 = (int)local_b0;
    *(undefined ***)(param_2 + 0x6c) = ppuStack_ac;
    *(undefined ***)(param_2 + 0x70) = ppuStack_a8;
    *(undefined ***)(param_2 + 0x74) = ppuStack_a4;
    *(undefined **)(param_2 + 0x78) = local_160;
    *(undefined1 *)(param_2 + 0x7c) = uVar21;
    *(undefined2 *)(param_2 + 0x7d) = local_b4;
    *(undefined1 *)(param_2 + 0x7f) = local_b2;
    puVar2 = (undefined *)0x2;
  }
  if (puVar2 != (undefined *)0x2) {
    local_84 = (undefined **)&LAB_00a604d0;
    local_88 = ppuVar5;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00575a12,&local_88,&DAT_01d209f8);
  }
  uVar6 = *(uint *)(param_2 + 0x48);
  iVar3 = 1;
  iVar20 = param_2 + 0x100;
  if (1 < uVar6) {
    iVar3 = uVar6 - 2;
  }
  if (iVar3 == 0) {
    ppuVar16 = (undefined **)*piVar9;
    uVar6 = *(uint *)(param_2 + 0x54);
    if (ppuVar16 != (undefined **)0x0 || uVar6 != 0) {
      FUN_00a799f0(&local_88,iVar20,param_3,ppuVar16);
      ppuVar15 = local_84;
      local_124 = (undefined **)0x0;
      local_128 = (undefined **)&DAT_00000005;
      if (local_88 == (undefined **)0x0) {
        if (local_84 != (undefined **)0x0) {
          local_2c[0] = local_78;
          local_34 = local_80;
          local_38 = local_84;
          local_30 = local_7c;
          if (uVar6 == 0 && (local_7c <= ppuVar16) <= uVar6) {
            iVar3 = 0;
            iVar20 = 0;
          }
          else {
            if (local_7c == (undefined **)0x0) {
              FUN_0187ab80(&local_88,0,uVar6 - (local_7c > ppuVar16));
              local_124 = (undefined **)0x0;
              local_11c = local_84;
              local_120 = local_88;
              (*(code *)ppuVar15[4])(local_2c,local_80,0);
              local_128 = (undefined **)&SUB_00000004;
              goto LAB_00a6005c;
            }
            iVar3 = (int)ppuVar16 - (int)local_7c;
            iVar20 = uVar6 - (ppuVar16 < local_7c);
          }
          *piVar9 = iVar3;
          *(int *)(param_2 + 0x54) = iVar20;
          local_120 = local_84;
          local_11c = local_80;
          local_118 = local_7c;
          local_114 = local_78;
          goto LAB_00a5fcb8;
        }
        local_120 = local_80;
LAB_00a5ffa0:
        local_124 = (undefined **)0x0;
        local_128 = (undefined **)&SUB_00000004;
        local_11c = local_7c;
      }
      goto LAB_00a6005c;
    }
LAB_00a5fc98:
    local_114 = (undefined **)0x0;
    local_11c = (undefined **)&DAT_00000001;
    local_118 = (undefined **)0x0;
    local_120 = &PTR_FUN_01c0c918;
LAB_00a5fcb8:
    local_84 = (undefined **)0x0;
    local_88 = (undefined **)&DAT_00000003;
    local_80 = local_120;
    local_7c = local_11c;
LAB_00a5fcf0:
    iVar3 = 1;
    if (1 < *(uint *)(param_2 + 0x48)) {
      iVar3 = *(uint *)(param_2 + 0x48) - 2;
    }
    local_60 = local_100;
    uStack_5c = uStack_fc;
    uStack_58 = uStack_f8;
    uStack_54 = uStack_f4;
    uStack_50 = uStack_f0;
    uStack_4c = uStack_ec;
    if (iVar3 == 0) {
      if (!(*piVar9 == 0 && *(int *)(param_2 + 0x54) == 0)) goto LAB_00a5fdc8;
LAB_00a5fd20:
      if (local_118 != (undefined **)0x0) {
        puVar2 = (undefined *)0x3;
        local_128 = (undefined **)&DAT_00000003;
        local_120 = local_80;
        local_11c = local_7c;
        goto LAB_00a600b8;
      }
      puVar2 = (undefined *)0x3;
    }
    else {
      if (iVar3 != 1) {
        if (*(char *)(param_2 + 0x4c) == '\0') goto LAB_00a5fdc8;
        goto LAB_00a5fd20;
      }
      if (*(char *)(param_2 + 0x7c) == '\f') goto LAB_00a5fd20;
LAB_00a5fdc8:
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
        goto LAB_00a60184;
      }
      puVar2 = (undefined *)0x4;
    }
    local_11c = (undefined **)0xa5ff00;
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
    if (iVar3 == 1) {
      uVar4 = (uint)*(byte *)(param_2 + 0x7c);
      uVar11 = *(uint *)(param_2 + 0x4c);
      uVar17 = *(uint *)(param_2 + 0x54);
      if (*(int *)(param_2 + 0x50) == 0) {
        uVar17 = 0x4000;
      }
      if ((uVar6 & 1) == 0) {
        uVar11 = 100;
      }
      local_160 = &DAT_01d1e584;
      do {
        local_a0 = (undefined **)0x0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar4) {
        case 0:
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) {
LAB_00a5f560:
            local_90 = (undefined **)CONCAT31(local_90._1_3_,5);
          }
          else if (local_84 == (undefined **)0x0) {
LAB_00a5f610:
            local_90 = local_80;
            local_8c = local_7c;
          }
          else {
            local_38 = local_84;
            local_34 = local_80;
            local_30 = local_7c;
            local_2c[0] = local_78;
            if (local_7c != (undefined **)0x0) {
              bVar14 = *(byte *)local_80;
              (*(code *)local_84[4])(local_2c,local_80,local_7c);
              uVar6 = (uint)(byte)(bVar14 - 0x30);
              if (uVar6 < 10) {
LAB_00a5f310:
                if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                  uVar6 = uVar6 | *puVar19 << 4;
                  uVar4 = *(uint *)(param_2 + 0x5c) << 4 | *puVar19 >> 0x1c;
                  goto LAB_00a5fb28;
                }
              }
              else {
                if ((byte)(bVar14 + 0x9f) < 6) {
                  uVar6 = *(uint *)(param_2 + 0x5c);
                  goto joined_r0x00a5f9b8;
                }
                if (5 < (byte)(bVar14 + 0xbf)) {
                  uVar12 = 0x2b;
                  uVar22 = 0x14;
                  pcVar10 = "Invalid chunk size line: missing";
                  goto LAB_00a5fa9c;
                }
LAB_00a5fafc:
                if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                  uVar7 = *puVar19;
                  uVar4 = *(uint *)(param_2 + 0x5c) << 4 | uVar7 >> 0x1c;
                  bVar14 = bVar14 - 0x37;
                  goto LAB_00a5fb1c;
                }
              }
LAB_00a5fbfc:
              uVar12 = 0x1c;
              uVar22 = 0x15;
              pcVar10 = "invalid chunk size: overflow";
              goto LAB_00a5fa9c;
            }
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
          }
          goto LAB_00a5faa8;
        case 1:
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) goto LAB_00a5f610;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_00a5faa8;
          }
          bVar14 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          uVar6 = (uint)(byte)(bVar14 - 0x30);
          if (uVar6 < 10) goto LAB_00a5f310;
          if (5 < (byte)(bVar14 + 0x9f)) {
            if ((byte)(bVar14 + 0xbf) < 6) goto LAB_00a5fafc;
            uVar12 = 0x25;
            uVar22 = 0x14;
            if (bVar14 < 0x20) {
              if (bVar14 != 9) {
                pcVar10 = "Invalid chunk size line: Invalid Size";
                goto joined_r0x00a5f188;
              }
            }
            else if (bVar14 != 0x20) {
              pcVar10 = "Invalid chunk size line: Invalid Size";
              if (bVar14 == 0x3b) goto LAB_00a5fa60;
              goto LAB_00a5fa9c;
            }
            goto LAB_00a5f974;
          }
          uVar6 = *(uint *)(param_2 + 0x5c);
joined_r0x00a5f9b8:
          if (0xfffffff < uVar6) goto LAB_00a5fbfc;
          uVar7 = *puVar19;
          uVar4 = uVar6 << 4 | uVar7 >> 0x1c;
          bVar14 = bVar14 + 0xa9;
LAB_00a5fb1c:
          uVar6 = (uint)bVar14 + uVar7 * 0x10;
          uVar4 = uVar4 + CARRY4((uint)bVar14,uVar7 * 0x10);
LAB_00a5fb28:
          *puVar19 = uVar6;
          *(uint *)(param_2 + 0x5c) = uVar4;
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar21 = 1;
          break;
        case 2:
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) goto LAB_00a5f610;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_00a5faa8;
          }
          bVar14 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          uVar12 = 0x25;
          uVar22 = 0x14;
          if (bVar14 < 0x20) {
            if (bVar14 == 9) {
LAB_00a5f974:
              local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
              uVar21 = 2;
              break;
            }
            pcVar10 = "Invalid chunk size linear white space";
joined_r0x00a5f188:
            uVar22 = 0x14;
            uVar12 = 0x25;
            if (bVar14 == 0xd) goto LAB_00a5f20c;
          }
          else {
            if (bVar14 == 0x3b) {
LAB_00a5fa60:
              local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
              uVar21 = 3;
              break;
            }
            pcVar10 = "Invalid chunk size linear white space";
            if (bVar14 == 0x20) goto LAB_00a5f974;
          }
LAB_00a5fa9c:
          FUN_019a18a8(&local_90,uVar22,pcVar10,uVar12);
          goto LAB_00a5faa8;
        case 3:
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) goto LAB_00a5f610;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c != (undefined **)0x0) {
            bVar14 = *(byte *)local_80;
            (*(code *)local_84[4])(local_2c,local_80,local_7c);
            uVar22 = 0x15;
            if (bVar14 == 10) {
              uVar12 = 0x28;
              pcVar10 = "invalid chunk extension contains newline";
            }
            else {
              if (bVar14 == 0xd) {
LAB_00a5f20c:
                uVar21 = 4;
                local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
                break;
              }
              uVar12 = 0x1b;
              uVar6 = *puVar18 + 1;
              iVar3 = *(int *)(param_2 + 100) + (uint)(0xfffffffe < *puVar18);
              *puVar18 = uVar6;
              *(int *)(param_2 + 100) = iVar3;
              pcVar10 = "chunk extensions over limit";
              if (iVar3 == 0 && uVar6 >> 0xe == 0) goto LAB_00a5fa60;
            }
            goto LAB_00a5fa9c;
          }
          FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
          local_8c = local_84;
          local_90 = local_88;
          (*(code *)local_38[4])(local_2c,local_34,local_30);
          goto LAB_00a5faa8;
        case 4:
          uVar6 = *puVar19;
          iVar3 = *(int *)(param_2 + 0x5c);
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) goto LAB_00a5f610;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_00a5faa8;
          }
          bVar14 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          if (bVar14 != 10) {
            uVar12 = 0x15;
            uVar22 = 0x14;
            pcVar10 = "Invalid chunk size LF";
            goto LAB_00a5fa9c;
          }
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar21 = 5;
          if (uVar6 == 0 && iVar3 == 0) {
            uVar21 = 10;
          }
          break;
        case 5:
          ppuVar15 = (undefined **)*puVar19;
          iVar3 = *(int *)(param_2 + 0x5c);
          ppuVar16 = ppuVar15;
          if (iVar3 != 0) {
            ppuVar16 = (undefined **)&DAT_ffffffff;
          }
          FUN_00a799f0(&local_88,iVar20,param_3,ppuVar16);
          ppuVar1 = local_80;
          ppuVar16 = local_84;
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) {
            local_90 = local_80;
            local_8c = local_7c;
          }
          else {
            *(undefined4 *)((uint)&local_38 | 4) = local_80;
            ((undefined4 *)((uint)&local_38 | 4))[1] = local_7c;
            local_38 = local_84;
            local_2c[0] = local_78;
            if (local_7c == (undefined **)0x0) {
              *puVar19 = 0;
              *(undefined4 *)(param_2 + 0x5c) = 0;
              FUN_0187ab80(&local_88);
              local_8c = local_84;
              local_90 = local_88;
              (*(code *)ppuVar16[4])(local_2c,ppuVar1,0);
            }
            else {
              local_a0 = local_84;
              local_9c = local_34;
              local_98 = local_30;
              ppuStack_94 = local_78;
              *puVar19 = (int)ppuVar15 - (int)local_7c;
              *(uint *)(param_2 + 0x5c) = iVar3 - (uint)(ppuVar15 < local_7c);
              uVar21 = 5;
              if (ppuVar15 == local_7c && iVar3 == 0) {
                uVar21 = 6;
              }
              local_90._0_2_ = CONCAT11(uVar21,4);
            }
          }
          goto LAB_00a5faa8;
        case 6:
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) goto LAB_00a5f610;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_00a5faa8;
          }
          bVar14 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          if (bVar14 != 0xd) {
            uVar12 = 0x15;
            uVar22 = 0x14;
            pcVar10 = "Invalid chunk body CR";
            goto LAB_00a5fa9c;
          }
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar21 = 7;
          break;
        case 7:
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) goto LAB_00a5f610;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_00a5faa8;
          }
          bVar14 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          if (bVar14 != 10) {
            uVar12 = 0x15;
            uVar22 = 0x14;
            pcVar10 = "Invalid chunk body LF";
            goto LAB_00a5fa9c;
          }
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar21 = 0;
          break;
        case 8:
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) goto LAB_00a5f610;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c != (undefined **)0x0) {
            bVar14 = *(byte *)local_80;
            (*(code *)local_84[4])(local_2c,local_80,local_7c);
            if (*piVar13 != 0) {
              local_88 = (undefined **)CONCAT31(local_88._1_3_,bVar14);
              FUN_01284394(piVar13,&local_88,1);
              if (*piVar13 != 0) {
                if (uVar17 <= *puVar8) goto LAB_00a5fa14;
                local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
                uVar21 = 8;
                if (bVar14 == 0xd) {
                  uVar21 = 9;
                }
                break;
              }
            }
            local_160 = &DAT_01d1e574;
LAB_00a601d4:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("trailers_buf is None",0x14,local_160);
          }
          FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
          local_8c = local_84;
          local_90 = local_88;
          (*(code *)local_38[4])(local_2c,local_34,local_30);
          goto LAB_00a5faa8;
        case 9:
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) goto LAB_00a5f610;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c != (undefined **)0x0) {
            bVar14 = *(byte *)local_80;
            (*(code *)local_84[4])(local_2c,local_80,local_7c);
            if (bVar14 == 10) {
              uVar12 = 0x1d;
              uVar22 = 0x15;
              if (*(uint *)(param_2 + 0x78) < uVar11) {
                *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) + 1;
                if (*(int *)(param_2 + 0x68) == 0) goto LAB_00a601d4;
                local_88 = (undefined **)CONCAT31(local_88._1_3_,10);
                FUN_01284394(piVar13,&local_88,1,0x1d);
                if (*piVar13 == 0) goto LAB_00a601d4;
                uVar12 = 0x1f;
                pcVar10 = "chunk trailers bytes over limit";
                if (*puVar8 < uVar17) {
                  local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
                  uVar21 = 10;
                  break;
                }
              }
              else {
                pcVar10 = "chunk trailers count overflow";
              }
            }
            else {
              uVar12 = 0x16;
              uVar22 = 0x14;
              pcVar10 = "Invalid trailer end LF";
            }
            goto LAB_00a5fa9c;
          }
          FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
          local_8c = local_84;
          local_90 = local_88;
          (*(code *)local_38[4])(local_2c,local_34,local_30);
LAB_00a5faa8:
          if ((char)local_90 != '\x05') goto LAB_00a5fab8;
          local_128 = (undefined **)&DAT_00000005;
          goto LAB_00a5ffdc;
        case 10:
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) goto LAB_00a5f610;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_00a5faa8;
          }
          bVar14 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          if (bVar14 == 0xd) {
            if (*piVar13 != 0) {
              local_88 = (undefined **)CONCAT31(local_88._1_3_,0xd);
              FUN_01284394(piVar13,&local_88,1);
              if (uVar17 <= *puVar8) goto LAB_00a5fa14;
            }
            local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
            uVar21 = 0xb;
          }
          else {
            if (*piVar13 == 0) {
              iVar3 = thunk_FUN_01be5118(0x40);
              if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,0x40);
              }
              local_44 = 0;
              local_3c = 1;
              local_40 = 0x40;
              local_88 = (undefined **)CONCAT31(local_88._1_3_,bVar14);
              local_48 = iVar3;
              FUN_01284394(&local_48,&local_88,1);
              if (*piVar13 != 0) {
                FUN_012840cc(piVar13);
              }
              *piVar13 = local_48;
              *(undefined4 *)(param_2 + 0x6c) = local_44;
              *(undefined4 *)(param_2 + 0x70) = local_40;
              *(undefined4 *)(param_2 + 0x74) = local_3c;
            }
            else {
              local_88 = (undefined **)CONCAT31(local_88._1_3_,bVar14);
              FUN_01284394(piVar13,&local_88,1);
              if (uVar17 <= *puVar8) {
LAB_00a5fa14:
                uVar12 = 0x1f;
                uVar22 = 0x15;
                pcVar10 = "chunk trailers bytes over limit";
                goto LAB_00a5fa9c;
              }
            }
            local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
            uVar21 = 8;
          }
          break;
        case 0xb:
          FUN_00a799f0(&local_88,iVar20,param_3,1);
          if (local_88 == (undefined **)&DAT_00000001) goto LAB_00a5f560;
          if (local_84 == (undefined **)0x0) goto LAB_00a5f610;
          local_38 = local_84;
          local_34 = local_80;
          local_30 = local_7c;
          local_2c[0] = local_78;
          if (local_7c == (undefined **)0x0) {
            FUN_019a18a8(&local_88,0x25,"unexpected EOF during chunk size line",0x25);
            local_8c = local_84;
            local_90 = local_88;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_00a5faa8;
          }
          bVar14 = *(byte *)local_80;
          (*(code *)local_84[4])(local_2c,local_80,local_7c);
          uVar22 = 0x14;
          uVar12 = 0x14;
          pcVar10 = "Invalid chunk end LF";
          if (bVar14 != 10) goto LAB_00a5fa9c;
          if (*piVar13 != 0) {
            local_88 = (undefined **)CONCAT31(local_88._1_3_,10);
            FUN_01284394(piVar13,&local_88,1,0x14);
            if (uVar17 <= *puVar8) goto LAB_00a5fa14;
          }
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar21 = 0xc;
          break;
        case 0xc:
          local_90 = (undefined **)CONCAT31(local_90._1_3_,4);
          uVar21 = 0xc;
        }
        local_90._0_2_ = CONCAT11(uVar21,(char)local_90);
LAB_00a5fab8:
        if (((uint)local_90 & 0xff) != 4) {
          local_120 = local_90;
          local_124 = (undefined **)0x0;
          local_128 = (undefined **)&SUB_00000004;
          local_11c = local_8c;
LAB_00a60034:
          if (local_a0 != (undefined **)0x0) {
            (*(code *)local_a0[4])(&ppuStack_94,local_9c,local_98);
          }
          goto LAB_00a6005c;
        }
        *(char *)(param_2 + 0x7c) = (char)((uint)local_90 >> 8);
        uVar4 = ((uint)local_90 & 0xffff) >> 8;
        if (uVar4 == 0xc) {
          ppuVar16 = (undefined **)*piVar13;
          if (ppuVar16 == (undefined **)0x0) {
            local_124 = (undefined **)0x0;
            local_114 = (undefined **)0x0;
            local_118 = (undefined **)0x0;
            local_128 = (undefined **)&DAT_00000003;
            local_11c = (undefined **)&DAT_00000001;
            local_120 = &PTR_FUN_01c0c918;
          }
          else if (*(uint *)(param_2 + 0x78) < uVar11) {
            local_34 = (undefined **)*puVar8;
            local_30 = *(undefined ***)(param_2 + 0x70);
            local_2c[0] = *(undefined ***)(param_2 + 0x74);
            *piVar13 = 0;
            local_38 = ppuVar16;
            FUN_014261c8(&local_88,ppuVar16,local_34);
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
LAB_00a5ffdc:
            local_124 = (undefined **)0x0;
          }
          goto LAB_00a60034;
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
      if (*(char *)(param_2 + 0x4c) != '\0') goto LAB_00a5fc98;
      FUN_00a799f0(&local_88,iVar20,param_3,0x2000);
      local_124 = (undefined **)0x0;
      local_128 = (undefined **)&DAT_00000005;
      if (local_88 == (undefined **)0x0) {
        if (local_84 == (undefined **)0x0) {
          local_120 = local_80;
          goto LAB_00a5ffa0;
        }
        local_128 = (undefined **)&DAT_00000003;
        local_114 = local_78;
        local_120 = local_84;
        local_11c = local_80;
        *(bool *)(param_2 + 0x4c) = local_7c == (undefined **)0x0;
        local_118 = local_7c;
      }
    }
LAB_00a6005c:
    if (local_128 == (undefined **)&DAT_00000005 && local_124 == (undefined **)0x0) {
      *param_1 = 6;
      param_1[1] = 0;
      return;
    }
    if (local_128 == (undefined **)&SUB_00000004 && local_124 == (undefined **)0x0) {
      puVar2 = (undefined *)0x4;
      local_128 = (undefined **)&SUB_00000004;
LAB_00a600b8:
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
      goto LAB_00a5fcf0;
      puVar2 = (undefined *)0x4;
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
  FUN_0172f038(ppuVar5);
  *ppuVar5 = puVar2;
  *(undefined4 *)(param_2 + 0x44) = 0;
  FUN_0187246c(param_2);
  FUN_00a5e8fc(param_2,param_3);
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
LAB_00a60184:
  param_1[10] = local_60;
  param_1[0xb] = uStack_5c;
  param_1[0xc] = uStack_58;
  param_1[0xd] = uStack_54;
  param_1[0xe] = uStack_50;
  param_1[0xf] = uStack_4c;
  return;
}

