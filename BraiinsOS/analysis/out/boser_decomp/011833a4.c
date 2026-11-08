// FUN_011833a4 @ 011833a4 size=5912 calls_out=15 calls_in=1
// strings: HTTP/1.1 100 Continue   | Invalid chunk end LF | chunk trailers bytes over limit | Invalid chunk size linear white space | unexpected EOF during chunk size line | unexpected EOF during chunk size line

/* WARNING: Removing unreachable block (ram,0x01183c84) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011833a4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int *piVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  int *piVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  undefined **extraout_r12;
  undefined *local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_13c;
  uint local_138;
  undefined4 local_134;
  undefined **local_118;
  undefined **local_114;
  undefined **local_110;
  undefined **local_10c;
  undefined **local_108;
  undefined **local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined **local_d8;
  undefined **ppuStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined **local_a0;
  undefined **ppuStack_9c;
  undefined **ppuStack_98;
  undefined **ppuStack_94;
  undefined **local_90;
  undefined **local_8c;
  undefined **local_88;
  undefined **ppuStack_84;
  undefined4 local_80;
  undefined **local_7c;
  undefined **local_78;
  undefined **local_74;
  undefined **local_70;
  undefined **local_6c;
  undefined **local_68;
  undefined **local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined **local_38;
  undefined **local_34;
  undefined **local_30;
  undefined **local_2c [2];
  
  ppuVar6 = (undefined **)(param_2 + 0x40);
  puVar9 = (uint *)(param_2 + 0x6c);
  puVar20 = (uint *)(param_2 + 0x60);
  piVar19 = (int *)(param_2 + 0x68);
  puVar10 = (uint *)(param_2 + 0x58);
  piVar11 = (int *)(param_2 + 0x50);
  puVar3 = *ppuVar6;
  while (puVar3 == (undefined *)0x1) {
    if (*(int *)(param_2 + 0x90) == 3) {
      FUN_01ac6cbc(param_2 + 0x128,"HTTP/1.1 100 Continue\r\n\r\n",0x19);
    }
    uVar12 = *(uint *)(param_2 + 0x48);
    iVar4 = 1;
    if (1 < uVar12) {
      iVar4 = uVar12 - 2;
    }
    if ((iVar4 == 0) || (iVar4 != 1)) {
      local_134 = *(undefined4 *)(param_2 + 100);
      local_138 = *puVar10;
      local_13c = *(undefined4 *)(param_2 + 0x5c);
      local_144 = *(undefined4 *)(param_2 + 0x4c);
      local_148 = *(undefined4 *)(param_2 + 0x50);
      local_14c = *(undefined4 *)(param_2 + 0x54);
      uVar22 = *puVar20;
      local_a0 = (undefined **)*piVar19;
      ppuStack_9c = *(undefined ***)(param_2 + 0x6c);
      ppuStack_98 = *(undefined ***)(param_2 + 0x70);
      ppuStack_94 = *(undefined ***)(param_2 + 0x74);
      local_a4 = *(undefined2 *)(param_2 + 0x7d);
      local_a2 = *(undefined1 *)(param_2 + 0x7f);
      uVar5 = *(undefined1 *)(param_2 + 0x7c);
      local_150 = *(undefined **)(param_2 + 0x78);
    }
    else {
      uVar22 = *puVar20;
      local_138 = *puVar10;
      local_13c = *(undefined4 *)(param_2 + 0x5c);
      local_134 = *(undefined4 *)(param_2 + 100);
      uVar5 = *(undefined1 *)(param_2 + 0x7c);
      if (*(int *)(param_2 + 0x68) == 0) {
        local_78 = (undefined **)0x0;
      }
      else {
        FUN_012841fc(&local_78,*(int *)(param_2 + 0x68),*puVar9);
      }
      local_144 = *(undefined4 *)(param_2 + 0x4c);
      local_148 = *(undefined4 *)(param_2 + 0x50);
      local_14c = *(undefined4 *)(param_2 + 0x54);
      local_150 = *(undefined **)(param_2 + 0x78);
      local_a0 = local_78;
      ppuStack_9c = local_74;
      ppuStack_98 = local_70;
      ppuStack_94 = local_6c;
    }
    FUN_0172f038(ppuVar6);
    *ppuVar6 = (undefined *)0x2;
    *(undefined4 *)(param_2 + 0x44) = 0;
    *puVar10 = local_138;
    *(undefined4 *)(param_2 + 0x5c) = local_13c;
    *puVar20 = uVar22;
    *(undefined4 *)(param_2 + 100) = local_134;
    *(uint *)(param_2 + 0x48) = uVar12;
    *(undefined4 *)(param_2 + 0x4c) = local_144;
    *(undefined4 *)(param_2 + 0x50) = local_148;
    *(undefined4 *)(param_2 + 0x54) = local_14c;
    *piVar19 = (int)local_a0;
    *(undefined ***)(param_2 + 0x6c) = ppuStack_9c;
    *(undefined ***)(param_2 + 0x70) = ppuStack_98;
    *(undefined ***)(param_2 + 0x74) = ppuStack_94;
    *(undefined1 *)(param_2 + 0x7c) = uVar5;
    *(undefined **)(param_2 + 0x78) = local_150;
    *(undefined2 *)(param_2 + 0x7d) = local_a4;
    *(undefined1 *)(param_2 + 0x7f) = local_a2;
    puVar3 = (undefined *)0x2;
  }
  if (puVar3 != (undefined *)0x2) {
    local_74 = (undefined **)&LAB_00a604d0;
    local_78 = ppuVar6;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00575a12,&local_78,&DAT_01d209f8);
  }
  uVar12 = *(uint *)(param_2 + 0x48);
  iVar4 = 1;
  iVar21 = param_2 + 0x100;
  if (1 < uVar12) {
    iVar4 = uVar12 - 2;
  }
  if (iVar4 == 0) {
    ppuVar18 = (undefined **)*piVar11;
    uVar12 = *(uint *)(param_2 + 0x54);
    if (ppuVar18 != (undefined **)0x0 || uVar12 != 0) {
      FUN_00eac38c(&local_78,iVar21,param_3,ppuVar18);
      ppuVar17 = local_74;
      local_114 = (undefined **)0x0;
      local_118 = (undefined **)&DAT_00000005;
      if (local_78 == (undefined **)0x0) {
        if (local_74 != (undefined **)0x0) {
          local_2c[0] = local_68;
          local_34 = local_70;
          local_38 = local_74;
          local_30 = local_6c;
          if (uVar12 == 0 && (local_6c <= ppuVar18) <= uVar12) {
            iVar4 = 0;
            iVar21 = 0;
          }
          else {
            if (local_6c == (undefined **)0x0) {
              FUN_0187ab80(&local_78,0,uVar12 - (local_6c > ppuVar18));
              local_114 = (undefined **)0x0;
              local_10c = local_74;
              local_110 = local_78;
              (*(code *)ppuVar17[4])(local_2c,local_70,0);
              local_118 = (undefined **)&SUB_00000004;
              goto LAB_01184988;
            }
            iVar4 = (int)ppuVar18 - (int)local_6c;
            iVar21 = uVar12 - (ppuVar18 < local_6c);
          }
          *piVar11 = iVar4;
          *(int *)(param_2 + 0x54) = iVar21;
          local_110 = local_74;
          local_10c = local_70;
          local_108 = local_6c;
          local_104 = local_68;
          goto LAB_011845e0;
        }
        local_110 = local_70;
LAB_011848cc:
        local_114 = (undefined **)0x0;
        local_118 = (undefined **)&SUB_00000004;
        local_10c = local_6c;
      }
      goto LAB_01184988;
    }
LAB_011845c0:
    local_104 = (undefined **)0x0;
    local_10c = (undefined **)&DAT_00000001;
    local_108 = (undefined **)0x0;
    local_110 = &PTR_FUN_01c17e3c;
LAB_011845e0:
    local_74 = (undefined **)0x0;
    local_78 = (undefined **)&DAT_00000003;
    local_70 = local_110;
    local_6c = local_10c;
LAB_01184618:
    iVar4 = 1;
    if (1 < *(uint *)(param_2 + 0x48)) {
      iVar4 = *(uint *)(param_2 + 0x48) - 2;
    }
    local_50 = local_f0;
    uStack_4c = uStack_ec;
    uStack_48 = uStack_e8;
    uStack_44 = uStack_e4;
    uStack_40 = uStack_e0;
    uStack_3c = uStack_dc;
    if (iVar4 == 0) {
      if (!(*piVar11 == 0 && *(int *)(param_2 + 0x54) == 0)) goto LAB_011846f8;
LAB_01184648:
      if (local_108 != (undefined **)0x0) {
        local_118 = (undefined **)&DAT_00000003;
        puVar3 = (undefined *)0x3;
        local_110 = local_70;
        local_10c = local_6c;
        goto LAB_011849e8;
      }
      puVar3 = (undefined *)0x3;
    }
    else {
      if (iVar4 != 1) {
        if (*(char *)(param_2 + 0x4c) == '\0') goto LAB_011846f8;
        goto LAB_01184648;
      }
      if (*(char *)(param_2 + 0x7c) == '\f') goto LAB_01184648;
LAB_011846f8:
      if (local_108 != (undefined **)0x0) {
        *param_1 = local_78;
        param_1[1] = local_74;
        param_1[2] = local_70;
        param_1[3] = local_6c;
        param_1[4] = local_108;
        param_1[5] = local_104;
        param_1[6] = uStack_100;
        param_1[7] = uStack_fc;
        param_1[8] = uStack_f8;
        param_1[9] = uStack_f4;
        goto LAB_01184aa0;
      }
      puVar3 = (undefined *)0x4;
    }
    local_10c = (undefined **)0x118482c;
    local_68 = local_108;
    local_64 = local_104;
    uStack_60 = uStack_100;
    uStack_5c = uStack_fc;
    uStack_58 = uStack_f8;
    uStack_54 = uStack_f4;
    FUN_01139d4c(&local_78);
    local_114 = (undefined **)0x0;
    local_118 = (undefined **)&DAT_00000005;
    local_110 = extraout_r12;
  }
  else {
    if (iVar4 == 1) {
      uVar22 = *(uint *)(param_2 + 0x54);
      if (*(int *)(param_2 + 0x50) == 0) {
        uVar22 = 0x4000;
      }
      uVar14 = *(uint *)(param_2 + 0x4c);
      if ((uVar12 & 1) == 0) {
        uVar14 = 100;
      }
      uVar12 = (uint)*(byte *)(param_2 + 0x7c);
      local_150 = &DAT_01d1e584;
      do {
        local_90 = (undefined **)0x0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar12) {
        case 0:
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) {
LAB_01183e3c:
            uVar12 = 5;
            local_80 = (undefined **)CONCAT31(local_80._1_3_,5);
          }
          else {
            if (local_74 == (undefined **)0x0) goto LAB_01183eec;
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c == (undefined **)0x0) {
              FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
              ppuVar18 = local_78;
              local_7c = local_74;
              local_80 = local_78;
              (*(code *)local_38[4])(local_2c,local_34,local_30);
              goto LAB_0118424c;
            }
            bVar2 = *(byte *)local_70;
            (*(code *)local_74[4])(local_2c,local_70,local_6c);
            uVar12 = (uint)(byte)(bVar2 - 0x30);
            if (uVar12 < 10) {
LAB_01183bec:
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar12 = uVar12 | *puVar10 << 4;
                uVar7 = *(uint *)(param_2 + 0x5c) << 4 | *puVar10 >> 0x1c;
LAB_01184400:
                *puVar10 = uVar12;
                *(uint *)(param_2 + 0x5c) = uVar7;
                local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
                uVar5 = 1;
                break;
              }
            }
            else if ((byte)(bVar2 + 0x9f) < 6) {
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar8 = *puVar10;
                uVar7 = *(uint *)(param_2 + 0x5c) << 4 | uVar8 >> 0x1c;
                bVar2 = bVar2 + 0xa9;
LAB_011843f4:
                uVar12 = (uint)bVar2 + uVar8 * 0x10;
                uVar7 = uVar7 + CARRY4((uint)bVar2,uVar8 * 0x10);
                goto LAB_01184400;
              }
            }
            else {
              if (5 < (byte)(bVar2 + 0xbf)) {
                uVar15 = 0x2b;
                uVar16 = 0x14;
                pcVar13 = "Invalid chunk size line: missing";
                goto LAB_0118448c;
              }
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar8 = *puVar10;
                uVar7 = *(uint *)(param_2 + 0x5c) << 4 | uVar8 >> 0x1c;
                bVar2 = bVar2 - 0x37;
                goto LAB_011843f4;
              }
            }
LAB_01184520:
            uVar15 = 0x1c;
            uVar16 = 0x15;
            pcVar13 = "invalid chunk size: overflow";
LAB_0118448c:
            FUN_019a18a8(&local_80,uVar16,pcVar13,uVar15);
            uVar12 = (uint)local_80 & 0xff;
          }
          goto LAB_0118449c;
        case 1:
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 != (undefined **)0x0) {
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c == (undefined **)0x0) {
              FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
              ppuVar18 = local_78;
              local_7c = local_74;
              local_80 = local_78;
              (*(code *)local_38[4])(local_2c,local_34,local_30);
              goto LAB_0118424c;
            }
            bVar2 = *(byte *)local_70;
            (*(code *)local_74[4])(local_2c,local_70,local_6c);
            uVar12 = (uint)(byte)(bVar2 - 0x30);
            if (uVar12 < 10) goto LAB_01183bec;
            if ((byte)(bVar2 + 0x9f) < 6) {
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar8 = *puVar10;
                uVar7 = *(uint *)(param_2 + 0x5c) << 4 | uVar8 >> 0x1c;
                bVar2 = bVar2 + 0xa9;
                goto LAB_011843f4;
              }
            }
            else {
              if (5 < (byte)(bVar2 + 0xbf)) {
                uVar15 = 0x25;
                uVar16 = 0x14;
                if (bVar2 < 0x20) {
                  if (bVar2 != 9) {
                    pcVar13 = "Invalid chunk size line: Invalid Size";
                    goto joined_r0x01183a64;
                  }
                }
                else if (bVar2 != 0x20) {
                  pcVar13 = "Invalid chunk size line: Invalid Size";
                  if (bVar2 == 0x3b) goto LAB_0118437c;
                  goto LAB_0118448c;
                }
                goto LAB_01184294;
              }
              if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
                uVar8 = *puVar10;
                uVar7 = *(uint *)(param_2 + 0x5c) << 4 | uVar8 >> 0x1c;
                bVar2 = bVar2 - 0x37;
                goto LAB_011843f4;
              }
            }
            goto LAB_01184520;
          }
          goto LAB_01183eec;
        case 2:
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 != (undefined **)0x0) {
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c == (undefined **)0x0) {
              FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
              ppuVar18 = local_78;
              local_7c = local_74;
              local_80 = local_78;
              (*(code *)local_38[4])(local_2c,local_34,local_30);
              goto LAB_0118424c;
            }
            bVar2 = *(byte *)local_70;
            (*(code *)local_74[4])(local_2c,local_70,local_6c);
            uVar15 = 0x25;
            uVar16 = 0x14;
            if (bVar2 < 0x20) {
              if (bVar2 == 9) {
LAB_01184294:
                local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
                uVar5 = 2;
                break;
              }
              pcVar13 = "Invalid chunk size linear white space";
joined_r0x01183a64:
              uVar16 = 0x14;
              uVar15 = 0x25;
              if (bVar2 == 0xd) goto LAB_01183ae8;
            }
            else {
              if (bVar2 == 0x3b) {
LAB_0118437c:
                local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
                uVar5 = 3;
                break;
              }
              pcVar13 = "Invalid chunk size linear white space";
              if (bVar2 == 0x20) goto LAB_01184294;
            }
            goto LAB_0118448c;
          }
          goto LAB_01183eec;
        case 3:
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 == (undefined **)0x0) goto LAB_01183eec;
          local_38 = local_74;
          local_34 = local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c != (undefined **)0x0) {
            bVar2 = *(byte *)local_70;
            (*(code *)local_74[4])(local_2c,local_70,local_6c);
            uVar16 = 0x15;
            if (bVar2 == 10) {
              uVar15 = 0x28;
              pcVar13 = "invalid chunk extension contains newline";
            }
            else {
              if (bVar2 == 0xd) {
LAB_01183ae8:
                uVar5 = 4;
                local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
                break;
              }
              uVar15 = 0x1b;
              uVar12 = *puVar20 + 1;
              iVar4 = *(int *)(param_2 + 100) + (uint)(0xfffffffe < *puVar20);
              *puVar20 = uVar12;
              *(int *)(param_2 + 100) = iVar4;
              pcVar13 = "chunk extensions over limit";
              if (iVar4 == 0 && uVar12 >> 0xe == 0) goto LAB_0118437c;
            }
            goto LAB_0118448c;
          }
          FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
          ppuVar18 = local_78;
          local_7c = local_74;
          local_80 = local_78;
          (*(code *)local_38[4])(local_2c,local_34,local_30);
LAB_0118424c:
          uVar12 = (uint)ppuVar18 & 0xff;
          goto LAB_0118449c;
        case 4:
          uVar12 = *puVar10;
          iVar4 = *(int *)(param_2 + 0x5c);
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 == (undefined **)0x0) goto LAB_01183eec;
          local_38 = local_74;
          local_34 = local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            ppuVar18 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_0118424c;
          }
          bVar2 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          if (bVar2 != 10) {
            uVar15 = 0x15;
            uVar16 = 0x14;
            pcVar13 = "Invalid chunk size LF";
            goto LAB_0118448c;
          }
          local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
          uVar5 = 5;
          if (uVar12 == 0 && iVar4 == 0) {
            uVar5 = 10;
          }
          break;
        case 5:
          ppuVar17 = (undefined **)*puVar10;
          iVar4 = *(int *)(param_2 + 0x5c);
          ppuVar18 = ppuVar17;
          if (iVar4 != 0) {
            ppuVar18 = (undefined **)&DAT_ffffffff;
          }
          FUN_00eac38c(&local_78,iVar21,param_3,ppuVar18);
          ppuVar1 = local_70;
          ppuVar18 = local_74;
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 == (undefined **)0x0) {
            uVar12 = (uint)local_70 & 0xff;
            local_80 = local_70;
            local_7c = local_6c;
          }
          else {
            local_38 = local_74;
            *(undefined4 *)((uint)&local_38 | 4) = local_70;
            ((undefined4 *)((uint)&local_38 | 4))[1] = local_6c;
            local_2c[0] = local_68;
            if (local_6c == (undefined **)0x0) {
              *puVar10 = 0;
              *(undefined4 *)(param_2 + 0x5c) = 0;
              FUN_0187ab80(&local_78);
              ppuVar17 = local_78;
              local_7c = local_74;
              local_80 = local_78;
              (*(code *)ppuVar18[4])(local_2c,ppuVar1,0);
              uVar12 = (uint)ppuVar17 & 0xff;
            }
            else {
              local_90 = local_74;
              local_8c = local_34;
              local_88 = local_30;
              ppuStack_84 = local_68;
              *puVar10 = (int)ppuVar17 - (int)local_6c;
              *(uint *)(param_2 + 0x5c) = iVar4 - (uint)(ppuVar17 < local_6c);
              uVar12 = 4;
              uVar5 = 5;
              if (ppuVar17 == local_6c && iVar4 == 0) {
                uVar5 = 6;
              }
              local_80._0_2_ = CONCAT11(uVar5,4);
            }
          }
          goto LAB_0118449c;
        case 6:
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 == (undefined **)0x0) goto LAB_01183eec;
          local_38 = local_74;
          local_34 = local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            ppuVar18 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_0118424c;
          }
          bVar2 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          if (bVar2 != 0xd) {
            uVar15 = 0x15;
            uVar16 = 0x14;
            pcVar13 = "Invalid chunk body CR";
            goto LAB_0118448c;
          }
          local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
          uVar5 = 7;
          break;
        case 7:
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 == (undefined **)0x0) goto LAB_01183eec;
          local_38 = local_74;
          local_34 = local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            ppuVar18 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_0118424c;
          }
          bVar2 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          if (bVar2 != 10) {
            uVar15 = 0x15;
            uVar16 = 0x14;
            pcVar13 = "Invalid chunk body LF";
            goto LAB_0118448c;
          }
          local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
          uVar5 = 0;
          break;
        case 8:
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 != (undefined **)0x0) {
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c != (undefined **)0x0) {
              bVar2 = *(byte *)local_70;
              (*(code *)local_74[4])(local_2c,local_70,local_6c);
              if (*piVar19 != 0) {
                local_78 = (undefined **)CONCAT31(local_78._1_3_,bVar2);
                FUN_01284394(piVar19,&local_78,1);
                if (*piVar19 != 0) {
                  if (uVar22 <= *puVar9) goto LAB_01184330;
                  local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
                  uVar5 = 8;
                  if (bVar2 == 0xd) {
                    uVar5 = 9;
                  }
                  break;
                }
              }
              local_150 = &DAT_01d1e574;
LAB_01184ae4:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("trailers_buf is None",0x14,local_150);
            }
            FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            ppuVar18 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_0118424c;
          }
          goto LAB_01183eec;
        case 9:
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 != (undefined **)0x0) {
            local_38 = local_74;
            local_34 = local_70;
            local_30 = local_6c;
            local_2c[0] = local_68;
            if (local_6c != (undefined **)0x0) {
              bVar2 = *(byte *)local_70;
              (*(code *)local_74[4])(local_2c,local_70,local_6c);
              if (bVar2 == 10) {
                uVar15 = 0x1d;
                uVar16 = 0x15;
                if (*(uint *)(param_2 + 0x78) < uVar14) {
                  *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) + 1;
                  if (*(int *)(param_2 + 0x68) == 0) goto LAB_01184ae4;
                  local_78 = (undefined **)CONCAT31(local_78._1_3_,10);
                  FUN_01284394(piVar19,&local_78,1,0x1d);
                  if (*piVar19 == 0) goto LAB_01184ae4;
                  uVar15 = 0x1f;
                  pcVar13 = "chunk trailers bytes over limit";
                  if (*puVar9 < uVar22) {
                    local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
                    uVar5 = 10;
                    break;
                  }
                }
                else {
                  pcVar13 = "chunk trailers count overflow";
                }
              }
              else {
                uVar15 = 0x16;
                uVar16 = 0x14;
                pcVar13 = "Invalid trailer end LF";
              }
              goto LAB_0118448c;
            }
            FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            ppuVar18 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_0118424c;
          }
LAB_01183eec:
          uVar12 = (uint)local_70 & 0xff;
          local_80 = local_70;
          local_7c = local_6c;
LAB_0118449c:
          if (uVar12 != 5) goto LAB_011844a8;
          local_118 = (undefined **)&DAT_00000005;
          goto LAB_01184908;
        case 10:
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 == (undefined **)0x0) goto LAB_01183eec;
          local_38 = local_74;
          local_34 = local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            ppuVar18 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_0118424c;
          }
          bVar2 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          if (bVar2 == 0xd) {
            if (*piVar19 != 0) {
              local_78 = (undefined **)CONCAT31(local_78._1_3_,0xd);
              FUN_01284394(piVar19,&local_78,1);
              if (uVar22 <= *puVar9) goto LAB_01184330;
            }
            local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
            uVar5 = 0xb;
          }
          else {
            if (*piVar19 == 0) {
              ppuVar18 = (undefined **)thunk_FUN_01be5118(0x40);
              if (ppuVar18 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,0x40);
              }
              local_74 = (undefined **)0x0;
              local_6c = (undefined **)&DAT_00000001;
              local_70 = (undefined **)&DAT_00000040;
              local_38 = (undefined **)CONCAT31(local_38._1_3_,bVar2);
              local_78 = ppuVar18;
              FUN_01284394(&local_78,&local_38,1);
              *piVar19 = (int)local_78;
              *(undefined ***)(param_2 + 0x6c) = local_74;
              *(undefined ***)(param_2 + 0x70) = local_70;
              *(undefined ***)(param_2 + 0x74) = local_6c;
            }
            else {
              local_78 = (undefined **)CONCAT31(local_78._1_3_,bVar2);
              FUN_01284394(piVar19,&local_78,1);
              if (uVar22 <= *puVar9) {
LAB_01184330:
                uVar15 = 0x1f;
                uVar16 = 0x15;
                pcVar13 = "chunk trailers bytes over limit";
                goto LAB_0118448c;
              }
            }
            local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
            uVar5 = 8;
          }
          break;
        case 0xb:
          FUN_00eac38c(&local_78,iVar21,param_3,1);
          if (local_78 == (undefined **)&DAT_00000001) goto LAB_01183e3c;
          if (local_74 == (undefined **)0x0) goto LAB_01183eec;
          local_38 = local_74;
          local_34 = local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_019a18a8(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            ppuVar18 = local_78;
            local_7c = local_74;
            local_80 = local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_0118424c;
          }
          bVar2 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          uVar16 = 0x14;
          uVar15 = 0x14;
          pcVar13 = "Invalid chunk end LF";
          if (bVar2 != 10) goto LAB_0118448c;
          if (*piVar19 != 0) {
            local_78 = (undefined **)CONCAT31(local_78._1_3_,10);
            FUN_01284394(piVar19,&local_78,1,0x14);
            if (uVar22 <= *puVar9) goto LAB_01184330;
          }
          local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
          uVar5 = 0xc;
          break;
        case 0xc:
          local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
          uVar5 = 0xc;
        }
        local_80._0_2_ = CONCAT11(uVar5,(undefined1)local_80);
LAB_011844a8:
        uVar12 = ((uint)local_80 & 0xffff) >> 8;
        if (((uint)local_80 & 0xff) != 4) {
          local_110 = local_80;
          local_114 = (undefined **)0x0;
          local_118 = (undefined **)&SUB_00000004;
          local_10c = local_7c;
LAB_01184960:
          if (local_90 != (undefined **)0x0) {
            (*(code *)local_90[4])(&ppuStack_84,local_8c,local_88);
          }
          goto LAB_01184988;
        }
        *(char *)(param_2 + 0x7c) = (char)(((uint)local_80 & 0xffff) >> 8);
        if (uVar12 == 0xc) {
          ppuVar18 = (undefined **)*piVar19;
          if (ppuVar18 == (undefined **)0x0) {
            local_114 = (undefined **)0x0;
            local_104 = (undefined **)0x0;
            local_108 = (undefined **)0x0;
            local_118 = (undefined **)&DAT_00000003;
            local_10c = (undefined **)&DAT_00000001;
            local_110 = &PTR_FUN_01c17e3c;
          }
          else if (*(uint *)(param_2 + 0x78) < uVar14) {
            local_34 = (undefined **)*puVar9;
            local_30 = *(undefined ***)(param_2 + 0x70);
            local_2c[0] = *(undefined ***)(param_2 + 0x74);
            *piVar19 = 0;
            local_38 = ppuVar18;
            FUN_014261c8(&local_78,ppuVar18,local_34);
            if (local_78 == (undefined **)&DAT_00000003 && local_74 == (undefined **)0x0) {
              local_114 = (undefined **)0x0;
              local_118 = (undefined **)&SUB_00000004;
            }
            else {
              local_118 = local_78;
              local_114 = local_74;
              local_108 = local_68;
              local_104 = local_64;
              uStack_100 = uStack_60;
              uStack_fc = uStack_5c;
              uStack_f8 = uStack_58;
              uStack_f4 = uStack_54;
              local_f0 = local_50;
              uStack_ec = uStack_4c;
              uStack_e8 = uStack_48;
              uStack_e4 = uStack_44;
              uStack_e0 = uStack_40;
              uStack_dc = uStack_3c;
            }
            local_10c = local_6c;
            local_110 = local_70;
            FUN_012840cc(&local_38);
          }
          else {
            FUN_019a18a8(&local_78,0x15,"chunk trailers count overflow",0x1d);
            local_110 = local_78;
            local_118 = (undefined **)&SUB_00000004;
            local_10c = local_74;
LAB_01184908:
            local_114 = (undefined **)0x0;
          }
          goto LAB_01184960;
        }
      } while (local_90 == (undefined **)0x0);
      local_110 = local_90;
      local_10c = local_8c;
      local_108 = local_88;
      local_104 = ppuStack_84;
      local_114 = (undefined **)0x0;
      local_118 = (undefined **)&DAT_00000003;
    }
    else {
      if (*(char *)(param_2 + 0x4c) != '\0') goto LAB_011845c0;
      FUN_00eac38c(&local_78,iVar21,param_3,0x2000);
      local_114 = (undefined **)0x0;
      local_118 = (undefined **)&DAT_00000005;
      if (local_78 == (undefined **)0x0) {
        if (local_74 == (undefined **)0x0) {
          local_110 = local_70;
          goto LAB_011848cc;
        }
        local_118 = (undefined **)&DAT_00000003;
        local_110 = local_74;
        local_10c = local_70;
        *(bool *)(param_2 + 0x4c) = local_6c == (undefined **)0x0;
        local_104 = local_68;
        local_108 = local_6c;
      }
    }
LAB_01184988:
    if (local_118 == (undefined **)&DAT_00000005 && local_114 == (undefined **)0x0) {
      *param_1 = 6;
      param_1[1] = 0;
      return;
    }
    if (local_118 == (undefined **)&SUB_00000004 && local_114 == (undefined **)0x0) {
      local_118 = (undefined **)&SUB_00000004;
      puVar3 = (undefined *)0x4;
LAB_011849e8:
      local_114 = (undefined **)0x0;
      local_d8 = local_108;
      ppuStack_d4 = local_104;
      uStack_d0 = uStack_100;
      uStack_cc = uStack_fc;
      uStack_c8 = uStack_f8;
      uStack_c4 = uStack_f4;
      local_c0 = local_f0;
      uStack_bc = uStack_ec;
      uStack_b8 = uStack_e8;
      uStack_b4 = uStack_e4;
      uStack_b0 = uStack_e0;
      uStack_ac = uStack_dc;
    }
    else {
      local_70 = local_110;
      local_6c = local_10c;
      local_78 = local_118;
      local_74 = local_114;
      if (local_118 == (undefined **)&DAT_00000003 && local_114 == (undefined **)0x0)
      goto LAB_01184618;
      local_d8 = local_108;
      ppuStack_d4 = local_104;
      uStack_d0 = uStack_100;
      uStack_cc = uStack_fc;
      uStack_c8 = uStack_f8;
      uStack_c4 = uStack_f4;
      puVar3 = (undefined *)0x4;
      local_c0 = local_f0;
      uStack_bc = uStack_ec;
      uStack_b8 = uStack_e8;
      uStack_b4 = uStack_e4;
      uStack_b0 = uStack_e0;
      uStack_ac = uStack_dc;
    }
  }
  local_68 = local_d8;
  local_64 = ppuStack_d4;
  uStack_60 = uStack_d0;
  uStack_5c = uStack_cc;
  uStack_58 = uStack_c8;
  uStack_54 = uStack_c4;
  local_50 = local_c0;
  uStack_4c = uStack_bc;
  uStack_48 = uStack_b8;
  uStack_44 = uStack_b4;
  uStack_40 = uStack_b0;
  uStack_3c = uStack_ac;
  local_78 = local_118;
  local_74 = local_114;
  local_70 = local_110;
  local_6c = local_10c;
  FUN_0172f038(ppuVar6);
  *ppuVar6 = puVar3;
  *(undefined4 *)(param_2 + 0x44) = 0;
  FUN_01182fb4(param_2,param_3);
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  param_1[3] = local_6c;
  param_1[4] = local_68;
  param_1[5] = local_64;
  param_1[6] = uStack_60;
  param_1[7] = uStack_5c;
  param_1[8] = uStack_58;
  param_1[9] = uStack_54;
LAB_01184aa0:
  param_1[10] = local_50;
  param_1[0xb] = uStack_4c;
  param_1[0xc] = uStack_48;
  param_1[0xd] = uStack_44;
  param_1[0xe] = uStack_40;
  param_1[0xf] = uStack_3c;
  return;
}

