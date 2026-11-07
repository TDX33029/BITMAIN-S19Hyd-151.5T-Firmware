// FUN_0145f450 @ 0145f450 size=6872 calls_out=16 calls_in=1
// strings: HTTP/1.1 100 Continue   | HTTP/1.1 100 Continue   | HTTP/1.1 100 Continue   | HTTP/1.1 100 Continue   | HTTP/1.1 100 Continue   | HTTP/1.1 100 Continue  

/* WARNING: Removing unreachable block (ram,0x01460a60) */
/* WARNING: Removing unreachable block (ram,0x01460c3c) */
/* WARNING: Removing unreachable block (ram,0x01460c98) */
/* WARNING: Removing unreachable block (ram,0x0145fdec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0145f450(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  undefined **ppuVar9;
  char cVar10;
  undefined1 uVar11;
  byte *pbVar12;
  int *piVar13;
  uint uVar14;
  byte *extraout_r1;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  char *pcVar18;
  undefined *puVar19;
  uint *puVar20;
  undefined4 uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  int iVar26;
  undefined **ppuVar27;
  uint uVar28;
  undefined **extraout_r12;
  undefined4 uVar29;
  uint local_148;
  uint local_144;
  undefined *local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_12c;
  uint local_128;
  byte *local_108;
  undefined **local_104;
  undefined1 local_100;
  char cStack_ff;
  undefined2 uStack_fe;
  undefined2 local_fc;
  undefined2 uStack_fa;
  undefined **local_f8;
  undefined **local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  undefined **ppuStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 local_94;
  undefined1 local_92;
  undefined **local_90;
  byte *local_8c;
  undefined **local_88;
  undefined **local_84;
  undefined4 local_80;
  undefined **local_7c;
  byte *local_78;
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
  byte *local_34;
  undefined **local_30;
  undefined **local_2c [2];
  
  pbVar12 = (byte *)(param_2 + 0x40);
  iVar4 = *(int *)pbVar12;
  puVar15 = (uint *)(param_2 + 0x6c);
  piVar16 = (int *)(param_2 + 0x68);
  puVar22 = (uint *)(param_2 + 0x60);
  puVar20 = (uint *)(param_2 + 0x58);
  piVar13 = (int *)(param_2 + 0x50);
  if (iVar4 == 1) {
    if (*(int *)(param_2 + 0x90) == 3) {
      iVar4 = *(int *)(param_2 + 0x110);
      if ((uint)(*(int *)(param_2 + 0x108) - iVar4) < 0x19) {
        FUN_0148d72c(param_2 + 0x108,iVar4,0x19,1,1);
        iVar4 = *(int *)(param_2 + 0x110);
      }
      FUN_016dd1aa(*(int *)(param_2 + 0x10c) + iVar4,"HTTP/1.1 100 Continue\r\n\r\n",0x19);
      *(int *)(param_2 + 0x110) = *(int *)(param_2 + 0x110) + 0x19;
    }
    uVar28 = *(uint *)(param_2 + 0x48);
    iVar4 = 1;
    if (1 < uVar28) {
      iVar4 = uVar28 - 2;
    }
    if ((iVar4 == 0) || (iVar4 != 1)) {
      local_92 = *(undefined1 *)(param_2 + 0x7f);
      local_134 = *(undefined4 *)(param_2 + 0x4c);
      local_138 = *(undefined4 *)(param_2 + 0x50);
      local_13c = *(undefined4 *)(param_2 + 0x54);
      local_12c = *(int *)(param_2 + 0x68);
      local_144 = *(uint *)(param_2 + 0x6c);
      local_94 = *(undefined2 *)(param_2 + 0x7d);
      uVar24 = *(uint *)(param_2 + 0x70);
      local_148 = *(uint *)(param_2 + 0x74);
      local_128 = *puVar20;
      uVar21 = *(undefined4 *)(param_2 + 0x5c);
      uVar23 = *puVar22;
      uVar29 = *(undefined4 *)(param_2 + 100);
      local_140 = *(undefined **)(param_2 + 0x78);
      uVar11 = *(undefined1 *)(param_2 + 0x7c);
    }
    else {
      iVar4 = *(int *)(param_2 + 0x68);
      uVar11 = *(undefined1 *)(param_2 + 0x7c);
      uVar23 = *puVar22;
      uVar29 = *(undefined4 *)(param_2 + 100);
      local_128 = *puVar20;
      uVar21 = *(undefined4 *)(param_2 + 0x5c);
      if (iVar4 == 0) {
        local_12c = 0;
        uVar24 = param_2;
      }
      else {
        local_144 = *puVar15;
        uVar5 = 0;
        if ((int)local_144 < 0) {
LAB_01460f60:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar5,local_144);
        }
        if (local_144 == 0) {
          local_12c = 1;
          uVar24 = 0;
        }
        else {
          local_12c = thunk_FUN_016d4a50(local_144);
          uVar24 = local_144;
          if (local_12c == 0) {
            uVar5 = 1;
            goto LAB_01460f60;
          }
        }
        FUN_016dd1aa(local_12c,iVar4,local_144);
        uVar6 = 0x20 - LZCOUNT(uVar24 >> 10);
        if (6 < uVar6) {
          uVar6 = 7;
        }
        local_148 = uVar6 << 2 | 1;
      }
      uVar28 = uVar28 & 1;
      local_134 = *(undefined4 *)(param_2 + 0x4c);
      local_138 = *(undefined4 *)(param_2 + 0x50);
      local_13c = *(undefined4 *)(param_2 + 0x54);
      local_140 = *(undefined **)(param_2 + 0x78);
    }
    if (*(int *)pbVar12 == 1) {
      uVar6 = *(uint *)(param_2 + 0x48);
joined_r0x0145f6e0:
      if ((uVar6 < 2) && (*(int *)(param_2 + 0x68) != 0)) {
        piVar25 = *(int **)(param_2 + 0x74);
        if (((uint)piVar25 & 1) == 0) {
          piVar7 = piVar25 + 4;
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar7;
            bVar1 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar1);
          *piVar7 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            if (*piVar25 != 0) {
              thunk_FUN_016d3fb4(piVar25[1]);
            }
            goto LAB_0145f774;
          }
        }
        else if (*(int *)(param_2 + 0x70) + ((uint)piVar25 >> 5) != 0) {
          piVar25 = (int *)(*(int *)(param_2 + 0x68) - ((uint)piVar25 >> 5));
LAB_0145f774:
          thunk_FUN_016d3fb4(piVar25);
        }
      }
    }
    else if (*(int *)pbVar12 == 2) {
      uVar6 = *(uint *)(param_2 + 0x48);
      goto joined_r0x0145f6e0;
    }
    iVar4 = 2;
    pbVar12[0] = 2;
    pbVar12[1] = 0;
    pbVar12[2] = 0;
    pbVar12[3] = 0;
    *(undefined4 *)(param_2 + 0x44) = 0;
    *(uint *)(param_2 + 0x70) = uVar24;
    *puVar20 = local_128;
    *puVar22 = uVar23;
    *(undefined4 *)(param_2 + 0x4c) = local_134;
    *(undefined4 *)(param_2 + 0x50) = local_138;
    *(undefined4 *)(param_2 + 0x54) = local_13c;
    *(undefined1 *)(param_2 + 0x7c) = uVar11;
    *(int *)(param_2 + 0x68) = local_12c;
    *(uint *)(param_2 + 0x6c) = local_144;
    *(uint *)(param_2 + 0x74) = local_148;
    *(uint *)(param_2 + 0x48) = uVar28;
    *(undefined **)(param_2 + 0x78) = local_140;
    *(undefined2 *)(param_2 + 0x7d) = local_94;
    *(undefined1 *)(param_2 + 0x7f) = local_92;
    *(undefined4 *)(param_2 + 0x5c) = uVar21;
    *(undefined4 *)(param_2 + 100) = uVar29;
  }
  if (iVar4 != 2) {
    local_74 = (undefined **)&LAB_006a3218;
    local_78 = pbVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00570def,&local_78,&DAT_018a4538);
  }
  uVar28 = *(uint *)(param_2 + 0x48);
  iVar4 = 1;
  iVar26 = param_2 + 0x100;
  if (1 < uVar28) {
    iVar4 = uVar28 - 2;
  }
  if (iVar4 == 0) {
    ppuVar27 = (undefined **)*piVar13;
    uVar28 = *(uint *)(param_2 + 0x54);
    if (ppuVar27 == (undefined **)0x0 && uVar28 == 0) goto LAB_0146081c;
    FUN_014ce2d0(&local_78,iVar26,param_3,ppuVar27);
    ppuVar9 = local_74;
    if (local_78 == &DAT_00000001) goto LAB_01460ed8;
    uStack_fe = (undefined2)((uint)local_70 >> 0x10);
    if (local_74 == (undefined **)0x0) {
      local_100 = SUB41(local_70,0);
      cStack_ff = (char)((uint)local_70 >> 8);
      local_104 = (undefined **)0x0;
      local_108 = &DAT_00000004;
      local_fc = SUB42(local_6c,0);
      uStack_fa = (undefined2)((uint)local_6c >> 0x10);
      goto LAB_01460894;
    }
    local_2c[0] = local_68;
    local_34 = (byte *)local_70;
    local_38 = local_74;
    local_30 = local_6c;
    if (uVar28 == 0 && (local_6c <= ppuVar27) <= uVar28) {
      iVar4 = 0;
      iVar26 = 0;
    }
    else {
      if (local_6c == (undefined **)0x0) {
        FUN_014b3b88(&local_78,uVar28 - (local_6c > ppuVar27));
        local_fc = SUB42(local_74,0);
        uStack_fa = (undefined2)((uint)local_74 >> 0x10);
        local_100 = SUB41(local_78,0);
        cStack_ff = (char)((uint)local_78 >> 8);
        uStack_fe = (undefined2)((uint)local_78 >> 0x10);
        local_104 = (undefined **)0x0;
        local_108 = &DAT_00000004;
        (*(code *)ppuVar9[4])(local_2c,local_70,0);
        goto LAB_01460894;
      }
      iVar4 = (int)ppuVar27 - (int)local_6c;
      iVar26 = uVar28 - (ppuVar27 < local_6c);
    }
    *piVar13 = iVar4;
    *(int *)(param_2 + 0x54) = iVar26;
    local_f8 = local_6c;
    local_f4 = local_68;
  }
  else {
    if (iVar4 == 1) {
      uVar24 = *(uint *)(param_2 + 0x54);
      if (*(int *)(param_2 + 0x50) == 0) {
        uVar24 = 0x4000;
      }
      uVar23 = *(uint *)(param_2 + 0x4c);
      if ((uVar28 & 1) == 0) {
        uVar23 = 100;
      }
      cVar10 = *(char *)(param_2 + 0x7c);
      local_140 = &DAT_018a4998;
LAB_0145f8c4:
      local_90 = (undefined **)0x0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(cVar10) {
      case '\0':
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 == &DAT_00000001) break;
        if (local_74 == (undefined **)0x0) {
LAB_01460110:
          uVar28 = (uint)local_70 & 0xff;
          local_80 = local_70;
          local_7c = local_6c;
          goto joined_r0x01460140;
        }
        local_38 = local_74;
        local_34 = (byte *)local_70;
        local_30 = local_6c;
        local_2c[0] = local_68;
        if (local_6c == (undefined **)0x0) {
          FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
          pbVar8 = local_78;
          local_7c = local_74;
          local_80 = (undefined **)local_78;
          (*(code *)local_38[4])(local_2c,local_34,local_30);
LAB_01460478:
          uVar28 = (uint)pbVar8 & 0xff;
          goto joined_r0x01460140;
        }
        bVar3 = *(byte *)local_70;
        (*(code *)local_74[4])(local_2c,local_70,local_6c);
        uVar28 = (uint)(byte)(bVar3 - 0x30);
        if (uVar28 < 10) {
LAB_0145fd54:
          if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
            uVar28 = uVar28 | *puVar20 << 4;
            uVar14 = *(uint *)(param_2 + 0x5c) << 4 | *puVar20 >> 0x1c;
LAB_01460678:
            *puVar20 = uVar28;
            *(uint *)(param_2 + 0x5c) = uVar14;
            local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
            cVar10 = '\x01';
            goto LAB_01460688;
          }
        }
        else if ((byte)(bVar3 + 0x9f) < 6) {
          if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
            uVar6 = *puVar20;
            uVar14 = *(uint *)(param_2 + 0x5c) << 4 | uVar6 >> 0x1c;
            bVar3 = bVar3 + 0xa9;
LAB_0146066c:
            uVar28 = (uint)bVar3 + uVar6 * 0x10;
            uVar14 = uVar14 + CARRY4((uint)bVar3,uVar6 * 0x10);
            goto LAB_01460678;
          }
        }
        else {
          if (5 < (byte)(bVar3 + 0xbf)) {
            uVar21 = 0x2b;
            uVar29 = 0x14;
            pcVar18 = "Invalid chunk size line: missing size digit";
            goto LAB_01460700;
          }
          if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
            uVar6 = *puVar20;
            uVar14 = *(uint *)(param_2 + 0x5c) << 4 | uVar6 >> 0x1c;
            bVar3 = bVar3 - 0x37;
            goto LAB_0146066c;
          }
        }
LAB_01460788:
        uVar21 = 0x1c;
        uVar29 = 0x15;
        pcVar18 = "invalid chunk size: overflow";
LAB_01460700:
        FUN_015e79d4(&local_80,uVar29,pcVar18,uVar21);
        uVar28 = (uint)local_80 & 0xff;
        if (uVar28 == 5) goto LAB_01460a64;
LAB_01460718:
        if (uVar28 == 4) {
          *(char *)(param_2 + 0x7c) = local_80._1_1_;
          cVar10 = local_80._1_1_;
          if (local_80._1_1_ != '\f') goto LAB_01460730;
          goto LAB_01460d14;
        }
        local_104 = (undefined **)0x0;
        local_108 = &DAT_00000004;
        uVar21 = *(undefined4 *)((uint)&local_80 | 2);
        cStack_ff = local_80._1_1_;
        uStack_fa = *(undefined2 *)((undefined4 *)((uint)&local_80 | 2) + 1);
        local_100 = (undefined1)uVar28;
        uStack_fe = (undefined2)uVar21;
        local_fc = (undefined2)((uint)uVar21 >> 0x10);
        goto LAB_01460ea4;
      case '\x01':
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 != &DAT_00000001) {
          if (local_74 == (undefined **)0x0) goto LAB_01460110;
          local_38 = local_74;
          local_34 = (byte *)local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pbVar8 = local_78;
            local_7c = local_74;
            local_80 = (undefined **)local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01460478;
          }
          bVar3 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          uVar28 = (uint)(byte)(bVar3 - 0x30);
          if (uVar28 < 10) goto LAB_0145fd54;
          if ((byte)(bVar3 + 0x9f) < 6) {
            if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
              uVar6 = *puVar20;
              uVar14 = *(uint *)(param_2 + 0x5c) << 4 | uVar6 >> 0x1c;
              bVar3 = bVar3 + 0xa9;
              goto LAB_0146066c;
            }
          }
          else {
            if (5 < (byte)(bVar3 + 0xbf)) {
              uVar21 = 0x25;
              uVar29 = 0x14;
              if (bVar3 < 0x20) {
                if (bVar3 != 9) {
                  pcVar18 = "Invalid chunk size line: Invalid Size";
                  goto joined_r0x0145fbcc;
                }
              }
              else if (bVar3 != 0x20) {
                pcVar18 = "Invalid chunk size line: Invalid Size";
                if (bVar3 == 0x3b) goto LAB_014605ec;
                goto LAB_01460700;
              }
              goto LAB_014604cc;
            }
            if (*(uint *)(param_2 + 0x5c) < 0x10000000) {
              uVar6 = *puVar20;
              uVar14 = *(uint *)(param_2 + 0x5c) << 4 | uVar6 >> 0x1c;
              bVar3 = bVar3 - 0x37;
              goto LAB_0146066c;
            }
          }
          goto LAB_01460788;
        }
        break;
      case '\x02':
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 != &DAT_00000001) {
          if (local_74 == (undefined **)0x0) goto LAB_01460110;
          local_38 = local_74;
          local_34 = (byte *)local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pbVar8 = local_78;
            local_7c = local_74;
            local_80 = (undefined **)local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01460478;
          }
          bVar3 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          uVar21 = 0x25;
          uVar29 = 0x14;
          if (bVar3 < 0x20) {
            if (bVar3 == 9) {
LAB_014604cc:
              cVar10 = '\x02';
              local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
              goto LAB_01460688;
            }
            pcVar18 = "Invalid chunk size linear white space";
joined_r0x0145fbcc:
            uVar29 = 0x14;
            uVar21 = 0x25;
            if (bVar3 == 0xd) goto LAB_0145fc50;
          }
          else {
            if (bVar3 == 0x3b) {
LAB_014605ec:
              cVar10 = '\x03';
              local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
              goto LAB_01460688;
            }
            pcVar18 = "Invalid chunk size linear white space";
            if (bVar3 == 0x20) goto LAB_014604cc;
          }
          goto LAB_01460700;
        }
        break;
      case '\x03':
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 != &DAT_00000001) {
          if (local_74 == (undefined **)0x0) goto LAB_01460110;
          local_38 = local_74;
          local_34 = (byte *)local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pbVar8 = local_78;
            local_7c = local_74;
            local_80 = (undefined **)local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01460478;
          }
          bVar3 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          uVar29 = 0x15;
          if (bVar3 == 10) {
            uVar21 = 0x28;
            pcVar18 = "invalid chunk extension contains newline";
          }
          else {
            if (bVar3 == 0xd) {
LAB_0145fc50:
              cVar10 = '\x04';
              local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
              goto LAB_01460688;
            }
            uVar21 = 0x1b;
            uVar28 = *puVar22 + 1;
            iVar4 = *(int *)(param_2 + 100) + (uint)(0xfffffffe < *puVar22);
            *puVar22 = uVar28;
            *(int *)(param_2 + 100) = iVar4;
            pcVar18 = "chunk extensions over limit";
            if (iVar4 == 0 && uVar28 >> 0xe == 0) goto LAB_014605ec;
          }
          goto LAB_01460700;
        }
        break;
      case '\x04':
        uVar28 = *puVar20;
        iVar4 = *(int *)(param_2 + 0x5c);
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 != &DAT_00000001) {
          if (local_74 == (undefined **)0x0) goto LAB_01460110;
          local_38 = local_74;
          local_34 = (byte *)local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pbVar8 = local_78;
            local_7c = local_74;
            local_80 = (undefined **)local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01460478;
          }
          bVar3 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          if (bVar3 == 10) {
            cVar10 = '\x05';
            local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
            if (uVar28 == 0 && iVar4 == 0) {
              cVar10 = '\n';
            }
            goto LAB_01460688;
          }
          uVar21 = 0x15;
          uVar29 = 0x14;
          pcVar18 = "Invalid chunk size LF";
          goto LAB_01460700;
        }
        break;
      case '\x05':
        ppuVar9 = (undefined **)*puVar20;
        iVar4 = *(int *)(param_2 + 0x5c);
        ppuVar27 = ppuVar9;
        if (iVar4 != 0) {
          ppuVar27 = (undefined **)0xffffffff;
        }
        FUN_014ce2d0(&local_78,iVar26,param_3,ppuVar27);
        ppuVar2 = local_70;
        ppuVar27 = local_74;
        if (local_78 == &DAT_00000001) break;
        if (local_74 == (undefined **)0x0) {
          uVar28 = (uint)local_70 & 0xff;
          local_80 = local_70;
          local_7c = local_6c;
        }
        else {
          local_38 = local_74;
          *(undefined4 *)((uint)&local_38 | 4) = local_70;
          ((undefined4 *)((uint)&local_38 | 4))[1] = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            *puVar20 = 0;
            *(undefined4 *)(param_2 + 0x5c) = 0;
            FUN_014b3b88(&local_78);
            pbVar8 = local_78;
            local_7c = local_74;
            local_80 = (undefined **)local_78;
            (*(code *)ppuVar27[4])(local_2c,ppuVar2,0);
            goto LAB_01460478;
          }
          *puVar20 = (int)ppuVar9 - (int)local_6c;
          *(uint *)(param_2 + 0x5c) = iVar4 - (uint)(ppuVar9 < local_6c);
          uVar11 = 5;
          uVar28 = 4;
          if (ppuVar9 == local_6c && iVar4 == 0) {
            uVar11 = 6;
          }
          local_80._0_2_ = CONCAT11(uVar11,4);
          local_90 = local_74;
          local_8c = local_34;
          local_88 = local_30;
          local_84 = local_68;
        }
joined_r0x01460140:
        if (uVar28 != 5) goto LAB_01460718;
        goto LAB_01460a64;
      case '\x06':
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 != &DAT_00000001) {
          if (local_74 == (undefined **)0x0) goto LAB_01460110;
          local_38 = local_74;
          local_34 = (byte *)local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pbVar8 = local_78;
            local_7c = local_74;
            local_80 = (undefined **)local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01460478;
          }
          bVar3 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          if (bVar3 == 0xd) {
            cVar10 = '\a';
            local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
            goto LAB_01460688;
          }
          uVar21 = 0x15;
          uVar29 = 0x14;
          pcVar18 = "Invalid chunk body CR";
          goto LAB_01460700;
        }
        break;
      case '\a':
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 != &DAT_00000001) {
          if (local_74 == (undefined **)0x0) goto LAB_01460110;
          local_38 = local_74;
          local_34 = (byte *)local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pbVar8 = local_78;
            local_7c = local_74;
            local_80 = (undefined **)local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01460478;
          }
          bVar3 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          if (bVar3 == 10) {
            cVar10 = '\0';
            local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
            goto LAB_01460688;
          }
          uVar21 = 0x15;
          uVar29 = 0x14;
          pcVar18 = "Invalid chunk body LF";
          goto LAB_01460700;
        }
        break;
      case '\b':
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 == &DAT_00000001) break;
        if (local_74 == (undefined **)0x0) goto LAB_01460110;
        local_38 = local_74;
        local_34 = (byte *)local_70;
        local_30 = local_6c;
        local_2c[0] = local_68;
        if (local_6c == (undefined **)0x0) {
          FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
          pbVar8 = local_78;
          local_7c = local_74;
          local_80 = (undefined **)local_78;
          (*(code *)local_38[4])(local_2c,local_34,local_30);
          goto LAB_01460478;
        }
        bVar3 = *(byte *)local_70;
        (*(code *)local_74[4])(local_2c,local_70,local_6c);
        if (*piVar16 == 0) {
          local_140 = &DAT_018a4988;
          goto LAB_01460f44;
        }
        iVar4 = *(int *)(param_2 + 0x6c);
        if (*(int *)(param_2 + 0x70) == iVar4) {
          FUN_00f5f538(piVar16,1);
          iVar4 = *(int *)(param_2 + 0x6c);
          iVar17 = *(int *)(param_2 + 0x70);
          *(byte *)(*(int *)(param_2 + 0x68) + iVar4) = bVar3;
          if (iVar17 == iVar4) {
            local_74 = (undefined **)0x0;
            local_78 = (byte *)0x1;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_78);
          }
        }
        else {
          *(byte *)(*piVar16 + iVar4) = bVar3;
        }
        *puVar15 = iVar4 + 1U;
        if (uVar24 <= iVar4 + 1U) goto LAB_014605a0;
        cVar10 = '\b';
        local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
        if (bVar3 == 0xd) {
          cVar10 = '\t';
        }
LAB_01460688:
        *(char *)(param_2 + 0x7c) = cVar10;
LAB_01460730:
        if (local_90 != (undefined **)0x0) goto LAB_014609e8;
        goto LAB_0145f8c4;
      case '\t':
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 != &DAT_00000001) {
          if (local_74 == (undefined **)0x0) goto LAB_01460110;
          local_38 = local_74;
          local_34 = (byte *)local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pbVar8 = local_78;
            local_7c = local_74;
            local_80 = (undefined **)local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01460478;
          }
          bVar3 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          if (bVar3 == 10) {
            uVar21 = 0x1d;
            uVar29 = 0x15;
            if (*(uint *)(param_2 + 0x78) < uVar23) {
              *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) + 1;
              if (*(int *)(param_2 + 0x68) == 0) {
LAB_01460f44:
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8("trailers_buf is None",0x14,local_140);
              }
              local_78 = (byte *)CONCAT31(local_78._1_3_,10);
              FUN_00f60054(piVar16,&local_78,1,0x1d);
              if (*piVar16 == 0) goto LAB_01460f44;
              uVar21 = 0x1f;
              pcVar18 = "chunk trailers bytes over limit";
              if (*puVar15 < uVar24) {
                cVar10 = '\n';
                local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
                goto LAB_01460688;
              }
            }
            else {
              pcVar18 = "chunk trailers count overflow";
            }
          }
          else {
            uVar21 = 0x16;
            uVar29 = 0x14;
            pcVar18 = "Invalid trailer end LF";
          }
          goto LAB_01460700;
        }
        break;
      case '\n':
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 != &DAT_00000001) {
          if (local_74 == (undefined **)0x0) goto LAB_01460110;
          local_38 = local_74;
          local_34 = (byte *)local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pbVar8 = local_78;
            local_7c = local_74;
            local_80 = (undefined **)local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01460478;
          }
          bVar3 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          if (bVar3 == 0xd) {
            if (*piVar16 != 0) {
              local_78 = (byte *)CONCAT31(local_78._1_3_,0xd);
              FUN_00f60054(piVar16,&local_78,1);
              if (uVar24 <= *puVar15) {
LAB_014605a0:
                uVar21 = 0x1f;
                uVar29 = 0x15;
                pcVar18 = "chunk trailers bytes over limit";
                goto LAB_01460700;
              }
            }
            cVar10 = '\v';
            local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
          }
          else {
            if (*piVar16 == 0) {
              pbVar8 = (byte *)thunk_FUN_016d4a50(0x40);
              if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,0x40);
              }
              local_6c = (undefined **)&DAT_00000001;
              local_70 = (undefined **)&DAT_00000040;
              local_74 = (undefined **)0x0;
              local_38 = (undefined **)CONCAT31(local_38._1_3_,bVar3);
              local_78 = pbVar8;
              FUN_00f60054(&local_78,&local_38,1);
              *piVar16 = (int)local_78;
              *(undefined ***)(param_2 + 0x6c) = local_74;
              *(undefined ***)(param_2 + 0x70) = local_70;
              *(undefined ***)(param_2 + 0x74) = local_6c;
            }
            else {
              local_78 = (byte *)CONCAT31(local_78._1_3_,bVar3);
              FUN_00f60054(piVar16,&local_78,1);
              if (uVar24 <= *puVar15) goto LAB_014605a0;
            }
            cVar10 = '\b';
            local_80 = (undefined **)CONCAT31(local_80._1_3_,4);
          }
          goto LAB_01460688;
        }
        break;
      case '\v':
        FUN_014ce2d0(&local_78,iVar26,param_3,1);
        if (local_78 != &DAT_00000001) {
          if (local_74 == (undefined **)0x0) goto LAB_01460110;
          local_38 = local_74;
          local_34 = (byte *)local_70;
          local_30 = local_6c;
          local_2c[0] = local_68;
          if (local_6c == (undefined **)0x0) {
            FUN_015e79d4(&local_78,0x25,"unexpected EOF during chunk size line",0x25);
            pbVar8 = local_78;
            local_7c = local_74;
            local_80 = (undefined **)local_78;
            (*(code *)local_38[4])(local_2c,local_34,local_30);
            goto LAB_01460478;
          }
          bVar3 = *(byte *)local_70;
          (*(code *)local_74[4])(local_2c,local_70,local_6c);
          uVar29 = 0x14;
          uVar21 = 0x14;
          pcVar18 = "Invalid chunk end LF";
          if (bVar3 != 10) goto LAB_01460700;
          if (*piVar16 != 0) {
            local_78 = (byte *)CONCAT31(local_78._1_3_,10);
            FUN_00f60054(piVar16,&local_78,1,0x14);
            if (uVar24 <= *puVar15) goto LAB_014605a0;
          }
          goto switchD_0145f8d8_caseD_c;
        }
        break;
      case '\f':
switchD_0145f8d8_caseD_c:
        *(undefined1 *)(param_2 + 0x7c) = 0xc;
LAB_01460d14:
        ppuVar27 = (undefined **)*piVar16;
        if (ppuVar27 == (undefined **)0x0) {
          local_104 = (undefined **)0x0;
          local_f4 = (undefined **)0x0;
          local_f8 = (undefined **)0x0;
          local_108 = (byte *)0x3;
          local_fc = 1;
          uStack_fa = 0;
          local_100 = 0x74;
          cStack_ff = 'I';
          uStack_fe = 0x18a;
          goto LAB_01460ea4;
        }
        if (uVar23 <= *(uint *)(param_2 + 0x78)) {
          FUN_015e79d4(&local_78,0x15,"chunk trailers count overflow",0x1d);
          local_100 = SUB41(local_78,0);
          cStack_ff = (char)((uint)local_78 >> 8);
          uStack_fe = (undefined2)((uint)local_78 >> 0x10);
          local_104 = (undefined **)0x0;
          local_fc = SUB42(local_74,0);
          uStack_fa = (undefined2)((uint)local_74 >> 0x10);
          local_108 = &DAT_00000004;
          goto LAB_01460ea4;
        }
        local_34 = (byte *)*puVar15;
        local_30 = *(undefined ***)(param_2 + 0x70);
        local_2c[0] = *(undefined ***)(param_2 + 0x74);
        *piVar16 = 0;
        local_38 = ppuVar27;
        FUN_010ba778(&local_78,ppuVar27);
        ppuVar9 = local_2c[0];
        local_100 = SUB41(local_70,0);
        cStack_ff = (char)((uint)local_70 >> 8);
        uStack_fe = (undefined2)((uint)local_70 >> 0x10);
        local_fc = SUB42(local_6c,0);
        uStack_fa = (undefined2)((uint)local_6c >> 0x10);
        if (local_78 == (byte *)0x3 && local_74 == (undefined **)0x0) {
          local_104 = (undefined **)0x0;
          local_108 = &DAT_00000004;
        }
        else {
          local_108 = local_78;
          local_104 = local_74;
          local_f8 = local_68;
          local_f4 = local_64;
          uStack_f0 = uStack_60;
          uStack_ec = uStack_5c;
          uStack_e8 = uStack_58;
          uStack_e4 = uStack_54;
          local_e0 = local_50;
          uStack_dc = uStack_4c;
          uStack_d8 = uStack_48;
          uStack_d4 = uStack_44;
          uStack_d0 = uStack_40;
          uStack_cc = uStack_3c;
        }
        if (((uint)local_2c[0] & 1) != 0) {
          if ((undefined1 *)((int)local_30 + ((uint)local_2c[0] >> 5)) == (undefined1 *)0x0)
          goto LAB_01460ea4;
          ppuVar9 = (undefined **)((int)ppuVar27 - ((uint)local_2c[0] >> 5));
          goto LAB_01460ea0;
        }
        ppuVar27 = local_2c[0] + 4;
        DataMemoryBarrier(0xb);
        do {
          puVar19 = *ppuVar27;
          bVar1 = (bool)hasExclusiveAccess(ppuVar27);
        } while (!bVar1);
        *ppuVar27 = puVar19 + -1;
        if (puVar19 == (undefined *)0x1) {
          DataMemoryBarrier(0xb);
          if (*local_2c[0] != (undefined *)0x0) {
            thunk_FUN_016d3fb4(local_2c[0][1]);
          }
LAB_01460ea0:
          thunk_FUN_016d3fb4(ppuVar9);
        }
LAB_01460ea4:
        if (local_90 != (undefined **)0x0) {
          (*(code *)local_90[4])(&local_84,local_8c,local_88);
        }
        goto LAB_01460ec4;
      }
      local_80 = (undefined **)CONCAT31(local_80._1_3_,5);
LAB_01460a64:
      local_104 = (undefined **)0x0;
      local_108 = &DAT_00000005;
      goto LAB_01460ea4;
    }
    if (*(char *)(param_2 + 0x4c) == '\0') {
      FUN_014ce2d0(&local_78,iVar26,param_3,0x2000);
      if (local_78 == &DAT_00000001) {
LAB_01460ed8:
        *param_1 = 6;
        param_1[1] = 0;
        return;
      }
      uStack_fa = (undefined2)((uint)local_70 >> 0x10);
      uStack_fe = uStack_fa;
      if (local_74 == (undefined **)0x0) {
        local_104 = (undefined **)0x0;
        local_108 = &DAT_00000004;
        local_100 = SUB41(local_70,0);
        cStack_ff = (char)((uint)local_70 >> 8);
        local_fc = SUB42(local_6c,0);
        uStack_fa = (undefined2)((uint)local_6c >> 0x10);
      }
      else {
        local_104 = (undefined **)0x0;
        *(bool *)(param_2 + 0x4c) = local_6c == (undefined **)0x0;
        local_108 = (byte *)0x3;
        local_f4 = local_68;
        local_f8 = local_6c;
        local_fc = SUB42(local_70,0);
        local_100 = SUB41(local_74,0);
        cStack_ff = (char)((uint)local_74 >> 8);
        uStack_fe = (undefined2)((uint)local_74 >> 0x10);
      }
      goto LAB_01460894;
    }
LAB_0146081c:
    local_70 = (undefined **)&DAT_00000001;
    local_74 = &PTR_LAB_018a4974;
    local_f4 = (undefined **)0x0;
    local_f8 = (undefined **)0x0;
  }
  local_104 = (undefined **)0x0;
  local_108 = (byte *)0x3;
LAB_014608d8:
  local_68 = local_f8;
  local_64 = local_f4;
  uStack_60 = uStack_f0;
  uStack_5c = uStack_ec;
  uStack_58 = uStack_e8;
  uStack_54 = uStack_e4;
  local_50 = local_e0;
  uStack_4c = uStack_dc;
  uStack_48 = uStack_d8;
  uStack_44 = uStack_d4;
  uStack_40 = uStack_d0;
  uStack_3c = uStack_cc;
  if (local_108 == (byte *)0x3 && local_104 == (undefined **)0x0) {
    iVar4 = 1;
    if (1 < *(uint *)(param_2 + 0x48)) {
      iVar4 = *(uint *)(param_2 + 0x48) - 2;
    }
    if (iVar4 == 0) {
      if (*piVar13 != 0 || *(int *)(param_2 + 0x54) != 0) goto LAB_014609a8;
LAB_01460940:
      if (local_f8 != (undefined **)0x0) {
        iVar4 = 3;
        local_108 = (byte *)0x3;
        local_c8 = local_f8;
        ppuStack_c4 = local_f4;
        uStack_c0 = uStack_f0;
        uStack_bc = uStack_ec;
        uStack_b8 = uStack_e8;
        uStack_b4 = uStack_e4;
        local_b0 = local_e0;
        uStack_ac = uStack_dc;
        uStack_a8 = uStack_d8;
        uStack_a4 = uStack_d4;
        uStack_a0 = uStack_d0;
        uStack_9c = uStack_cc;
        local_104 = (undefined **)0x0;
        goto LAB_01460adc;
      }
      iVar4 = 3;
    }
    else {
      if (iVar4 != 1) {
        if (*(char *)(param_2 + 0x4c) == '\0') goto LAB_014609a8;
        goto LAB_01460940;
      }
      if (*(char *)(param_2 + 0x7c) == '\f') goto LAB_01460940;
LAB_014609a8:
      if (local_f8 != (undefined **)0x0) {
        *param_1 = local_108;
        param_1[1] = local_104;
        param_1[2] = local_74;
        param_1[3] = local_70;
        param_1[4] = local_f8;
        param_1[5] = local_f4;
        param_1[6] = uStack_f0;
        param_1[7] = uStack_ec;
        param_1[8] = uStack_e8;
        param_1[9] = uStack_e4;
        param_1[10] = local_e0;
        param_1[0xb] = uStack_dc;
        param_1[0xc] = uStack_d8;
        param_1[0xd] = uStack_d4;
        param_1[0xe] = uStack_d0;
        param_1[0xf] = uStack_cc;
        return;
      }
      iVar4 = 4;
    }
    ppuVar27 = local_74 + 4;
    local_78 = local_108;
    ppuVar9 = local_74;
    local_74 = local_104;
    local_6c = local_70;
    local_70 = ppuVar9;
    (*(code *)*ppuVar27)(&local_64,local_6c,0);
    local_108 = &DAT_00000005;
    local_70 = (undefined **)extraout_r1;
    local_104 = (undefined **)0x0;
    local_74 = extraout_r12;
  }
  else {
    iVar4 = 4;
    local_c8 = local_f8;
    ppuStack_c4 = local_f4;
    uStack_c0 = uStack_f0;
    uStack_bc = uStack_ec;
    uStack_b8 = uStack_e8;
    uStack_b4 = uStack_e4;
    local_b0 = local_e0;
    uStack_ac = uStack_dc;
    uStack_a8 = uStack_d8;
    uStack_a4 = uStack_d4;
    uStack_a0 = uStack_d0;
    uStack_9c = uStack_cc;
  }
  goto LAB_01460adc;
LAB_014609e8:
  local_104 = (undefined **)0x0;
  local_108 = (byte *)0x3;
  local_100 = SUB41(local_90,0);
  cStack_ff = (char)((uint)local_90 >> 8);
  uStack_fe = (undefined2)((uint)local_90 >> 0x10);
  local_fc = SUB42(local_8c,0);
  uStack_fa = (undefined2)((uint)local_8c >> 0x10);
  local_f8 = local_88;
  local_f4 = local_84;
LAB_01460ec4:
  if (local_108 == &DAT_00000005 && local_104 == (undefined **)0x0) goto LAB_01460ed8;
LAB_01460894:
  local_74 = (undefined **)CONCAT22(uStack_fe,CONCAT11(cStack_ff,local_100));
  local_70 = (undefined **)CONCAT22(uStack_fa,local_fc);
  if (local_108 != &DAT_00000004 || local_104 != (undefined **)0x0) goto LAB_014608d8;
  iVar4 = 4;
  local_108 = &DAT_00000004;
  local_c8 = local_f8;
  ppuStack_c4 = local_f4;
  uStack_c0 = uStack_f0;
  uStack_bc = uStack_ec;
  uStack_b8 = uStack_e8;
  uStack_b4 = uStack_e4;
  local_104 = (undefined **)0x0;
  local_b0 = local_e0;
  uStack_ac = uStack_dc;
  uStack_a8 = uStack_d8;
  uStack_a4 = uStack_d4;
  uStack_a0 = uStack_d0;
  uStack_9c = uStack_cc;
LAB_01460adc:
  local_68 = local_c8;
  local_64 = ppuStack_c4;
  uStack_60 = uStack_c0;
  uStack_5c = uStack_bc;
  uStack_58 = uStack_b8;
  uStack_54 = uStack_b4;
  local_50 = local_b0;
  uStack_4c = uStack_ac;
  uStack_48 = uStack_a8;
  uStack_44 = uStack_a4;
  uStack_40 = uStack_a0;
  uStack_3c = uStack_9c;
  local_78 = local_108;
  local_6c = local_70;
  if (*(int *)pbVar12 == 1) {
    uVar28 = *(uint *)(param_2 + 0x48);
  }
  else {
    ppuVar27 = local_104;
    local_70 = local_74;
    if (*(int *)pbVar12 != 2) goto LAB_01460bd8;
    uVar28 = *(uint *)(param_2 + 0x48);
  }
  ppuVar27 = local_104;
  local_70 = local_74;
  if ((uVar28 < 2) && (ppuVar27 = local_104, local_70 = local_74, *(int *)(param_2 + 0x68) != 0)) {
    piVar13 = *(int **)(param_2 + 0x74);
    if (((uint)piVar13 & 1) == 0) {
      piVar16 = piVar13 + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar26 = *piVar16;
        bVar1 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar1);
      *piVar16 = iVar26 + -1;
      ppuVar27 = local_104;
      local_70 = local_74;
      if (iVar26 != 1) goto LAB_01460bd8;
      DataMemoryBarrier(0xb);
      ppuVar27 = local_104;
      local_70 = local_74;
      if (*piVar13 != 0) {
        local_70 = local_74;
        local_74 = local_104;
        thunk_FUN_016d3fb4(piVar13[1]);
        ppuVar27 = local_74;
      }
    }
    else {
      ppuVar27 = local_104;
      local_70 = local_74;
      if (*(int *)(param_2 + 0x70) + ((uint)piVar13 >> 5) == 0) goto LAB_01460bd8;
      piVar13 = (int *)(*(int *)(param_2 + 0x68) - ((uint)piVar13 >> 5));
      ppuVar27 = local_104;
      local_70 = local_74;
    }
    local_74 = ppuVar27;
    thunk_FUN_016d3fb4(piVar13);
    ppuVar27 = local_74;
  }
LAB_01460bd8:
  local_74 = ppuVar27;
  *(int *)pbVar12 = iVar4;
  *(undefined4 *)(param_2 + 0x44) = 0;
  FUN_0145f218(param_2);
  FUN_0145f338(param_2,param_3);
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
  param_1[10] = local_50;
  param_1[0xb] = uStack_4c;
  param_1[0xc] = uStack_48;
  param_1[0xd] = uStack_44;
  param_1[0xe] = uStack_40;
  param_1[0xf] = uStack_3c;
  return;
}

