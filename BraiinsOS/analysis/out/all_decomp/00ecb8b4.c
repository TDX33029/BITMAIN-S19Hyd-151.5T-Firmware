// FUN_00ecb8b4 @ 00ecb8b4 size=3356 calls_out=16 calls_in=0
// strings: dn_ip_addr | up_ip_addr | server_sigstruct ServerIntroduction with 4 elements | server_ts | server_ts | server_ts

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ecb8b4(uint *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint **ppuVar4;
  char cVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 ******ppppppuVar15;
  undefined4 ******ppppppuVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  uint *puVar21;
  uint unaff_r8;
  uint unaff_r10;
  uint unaff_r11;
  bool bVar22;
  bool bVar23;
  undefined4 ******local_14c;
  undefined4 ******local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_110;
  uint local_108;
  char *local_f0;
  char *local_ec;
  undefined4 local_e8;
  char *local_e4;
  undefined4 *local_e0;
  uint *puStack_dc;
  undefined4 ******local_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  uint *local_a0;
  undefined4 ******local_9c;
  undefined2 local_98;
  uint *local_90;
  undefined4 ******local_8c;
  undefined2 local_88;
  uint *local_80;
  undefined4 ******local_7c;
  undefined8 local_78;
  undefined2 local_70;
  uint *local_68;
  undefined4 ******local_64;
  undefined2 local_60;
  uint *local_58;
  undefined4 ******local_54;
  undefined2 local_50;
  undefined4 local_48;
  undefined4 *local_44;
  uint *local_40;
  undefined4 ******local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 auStack_29 [5];
  
  bVar1 = *param_2;
  if (bVar1 != 4) {
    if (bVar1 == 5) {
      local_c0 = *(int *)(param_2 + 4);
      local_bc = *(undefined4 *)(param_2 + 8);
      iVar18 = *(int *)(param_2 + 0xc);
      local_e0 = (undefined4 *)CONCAT31(local_e0._1_3_,6);
      local_a8 = 0;
      if (local_c0 != 0) {
        local_a8 = iVar18;
      }
      local_c8 = (uint)(local_c0 != 0);
      uVar11 = (uint)&local_48 | 1;
      uVar12 = (uint)&local_e0 | 1;
      local_110 = 3;
      bVar23 = false;
      local_b4 = 0;
      local_c4 = 0;
      local_108 = 3;
      puVar21 = (uint *)0x80000001;
      ppppppuVar16 = &local_d8;
      local_b8 = local_c8;
      local_b0 = local_c0;
      local_ac = local_bc;
LAB_00ecb994:
LAB_00ecb99c:
      FUN_00a40f64(&local_80,&local_c8);
      if (local_80 != (uint *)0x0) {
        puVar17 = local_80 + (int)(uint *)local_78 * 6;
        unaff_r11 = local_80[(int)(uint *)local_78 * 3 + 0x43];
        unaff_r10 = local_80[(int)(uint *)local_78 * 3 + 0x44];
        unaff_r8 = local_80[(int)(uint *)local_78 * 3 + 0x45];
        local_44 = (undefined4 *)*puVar17;
        local_40 = (uint *)puVar17[1];
        local_3c = (undefined4 ******)puVar17[2];
        local_38 = puVar17[3];
        uStack_34 = puVar17[4];
        uStack_30 = puVar17[5];
      }
      if (local_80 == (uint *)0x0 || unaff_r11 == 0x80000000) {
        uVar10 = 2;
        if (local_108 != 3) {
          local_60 = local_98;
          local_64 = local_9c;
          local_68 = local_a0;
          if (local_110 == 3) goto LAB_00ecbe5c;
LAB_00ecbdcc:
          uVar10 = (undefined1)local_110;
          local_50 = local_88;
          local_54 = local_8c;
          local_58 = local_90;
          if (!bVar23) goto LAB_00ecbdf4;
LAB_00ecbe68:
          if (puVar21 == (uint *)0x80000001) {
            puVar21 = (uint *)&DAT_80000000;
          }
          *(undefined2 *)(param_1 + 0xd) = local_50;
          *(uint **)((int)param_1 + 0x1b) = local_68;
          param_1[10] = (uint)local_14c;
          param_1[0xb] = (uint)local_58;
          param_1[0xc] = (uint)local_54;
          *(short *)((int)param_1 + 0x26) = (short)local_140;
          *(undefined4 *******)((int)param_1 + 0x17) = local_148;
          *(short *)((int)param_1 + 0x15) = (short)local_13c;
          *(undefined1 *)(param_1 + 5) = (undefined1)local_108;
          param_1[1] = local_134;
          param_1[4] = local_144;
          *param_1 = local_138;
          param_1[3] = (uint)ppppppuVar16;
          *(undefined2 *)((int)param_1 + 0x23) = local_60;
          *(undefined4 *******)((int)param_1 + 0x1f) = local_64;
          *(undefined1 *)((int)param_1 + 0x25) = uVar10;
          param_1[2] = (uint)puVar21;
          if (local_a8 != 0) {
            uVar11 = FUN_00f2c2f0(iVar18,&DAT_01887430,&DAT_018ab990);
            *param_1 = uVar11;
            param_1[2] = 0x80000001;
            if (((uint)puVar21 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(ppppppuVar16);
            }
          }
          while( true ) {
            FUN_00a40f64(&local_48,&local_c8);
            puVar21 = local_40;
            ppuVar4 = local_48;
            if (local_48 == (uint **)0x0) break;
            local_80 = &local_c8;
            if (local_48[(int)local_40 * 3 + 0x43] != (uint *)0x0) {
              thunk_FUN_016d3fb4(local_48[(int)local_40 * 3 + 0x44]);
            }
            FUN_00e9e9b8(ppuVar4 + (int)puVar21 * 6);
          }
          goto LAB_00ecc010;
        }
        local_108._0_1_ = 2;
        if (local_110 != 3) goto LAB_00ecbdcc;
LAB_00ecbe5c:
        if (bVar23) goto LAB_00ecbe68;
LAB_00ecbdf4:
        local_7c = (undefined4 ******)&DAT_00000009;
        local_44 = &DAT_0157d360;
        local_48 = &local_80;
        local_80 = (uint *)0x35a563;
        ppppppuVar15 = (undefined4 ******)FUN_00f56780(&DAT_0057a25d,&local_48);
        goto LAB_00ecbf98;
      }
      if ((char)local_e0 != '\x06') {
        FUN_005c37bc(&local_e0);
      }
      local_e0 = local_44;
      puStack_dc = local_40;
      local_d8 = local_3c;
      uStack_d4 = local_38;
      local_d0 = uStack_34;
      uStack_cc = uStack_30;
      if (unaff_r8 == 9) {
        iVar13 = thunk_FUN_016dd50a(unaff_r10,"server_ts",9);
        if (iVar13 != 0) goto LAB_00ecba8c;
        unaff_r8 = 2;
      }
      else if (unaff_r8 == 10) {
        iVar13 = thunk_FUN_016dd50a(unaff_r10,"dn_ip_addr",10);
        if (iVar13 == 0) {
          unaff_r8 = 0;
        }
        else {
          iVar13 = thunk_FUN_016dd50a(unaff_r10,"up_ip_addr",10);
          if (iVar13 == 0) {
            unaff_r8 = 1;
          }
          else {
            iVar13 = thunk_FUN_016dd50a(unaff_r10,
                                        "server_sigstruct ServerIntroduction with 4 elements",10);
            if (iVar13 != 0) goto LAB_00ecba8c;
            unaff_r8 = 3;
          }
        }
      }
      else {
LAB_00ecba8c:
        unaff_r8 = 4;
      }
      if (unaff_r11 != 0) {
        thunk_FUN_016d3fb4(unaff_r10);
      }
      cVar3 = (char)local_e0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(unaff_r8) {
      case 0:
        goto switchD_00ecbb04_caseD_0;
      case 1:
        if (local_110 != 3) {
          local_7c = (undefined4 ******)&DAT_0000000a;
          local_44 = &DAT_0157d360;
          local_48 = &local_80;
          local_80 = (uint *)0x35a559;
          ppppppuVar15 = (undefined4 ******)FUN_00f56780(&DAT_00582dbd,&local_48);
          goto LAB_00ecbf98;
        }
        bVar22 = (char)local_e0 == '\x06';
        local_e0 = (undefined4 *)CONCAT31(local_e0._1_3_,6);
        if (bVar22) {
          ppppppuVar15 = (undefined4 ******)FUN_00e956c4(&DAT_00565810,0x10);
          goto LAB_00ecbf98;
        }
        local_48 = (uint **)CONCAT31(local_48._1_3_,cVar3);
        FUN_016dd1aa(uVar11,uVar12,0x17);
        FUN_00ea9520(&local_80,&local_48);
        if (((uint)local_80 & 1) != 0) goto LAB_00ecc16c;
        local_14c = local_7c;
        local_140 = (uint)local_80 >> 0x10;
        local_90 = (uint *)local_78;
        local_8c = local_78._4_4_;
        local_110 = (uint)local_80 >> 8 & 0xff;
        local_88 = local_70;
        goto LAB_00ecb994;
      case 2:
        if (bVar23) {
          local_7c = (undefined4 ******)&DAT_00000009;
          local_44 = &DAT_0157d360;
          local_48 = &local_80;
          local_80 = (uint *)0x35a563;
          ppppppuVar15 = (undefined4 ******)FUN_00f56780(&DAT_00582dbd,&local_48);
          goto LAB_00ecbf98;
        }
        uVar19 = (uint)local_e0 & 0xff;
        local_e0 = (undefined4 *)CONCAT31(local_e0._1_3_,6);
        if (uVar19 == 6) {
          uVar11 = FUN_00e956c4(&DAT_00565810,0x10);
        }
        else {
          local_48 = (uint **)CONCAT31(local_48._1_3_,cVar3);
          FUN_016dd1aa(uVar11,uVar12,0x17);
          if (uVar19 == 2) {
            if (local_d8 == (undefined4 ******)0x0) {
LAB_00ecbc00:
              local_134 = uStack_cc;
              local_138 = local_d0;
              bVar23 = true;
              goto LAB_00ecb994;
            }
            if (local_d8 == (undefined4 ******)&DAT_00000001) {
              if (uStack_cc < 0x80000000) goto LAB_00ecbc00;
              local_78 = CONCAT44(local_78._4_4_,local_d0);
              local_80 = (uint *)CONCAT31(local_80._1_3_,2);
              uVar11 = FUN_0157cd6c(&local_80,auStack_29,&DAT_0187be88);
            }
            else {
              local_78 = CONCAT44(uStack_cc,local_d0);
              local_80 = (uint *)CONCAT31(local_80._1_3_,3);
              uVar11 = FUN_0157cc00(&local_80,auStack_29,&DAT_0187be88);
            }
          }
          else {
            uVar11 = FUN_00f36124(&local_48,auStack_29,&DAT_0187be88);
            FUN_005c37bc(&local_48);
          }
        }
        param_1[2] = 0x80000001;
        *param_1 = uVar11;
        goto joined_r0x00ecc220;
      case 3:
        if (puVar21 != (uint *)0x80000001) {
          local_7c = (undefined4 ******)&DAT_0000000a;
          local_44 = &DAT_0157d360;
          local_48 = &local_80;
          local_80 = (uint *)0x35a56c;
          ppppppuVar15 = (undefined4 ******)FUN_00f56780(&DAT_00582dbd,&local_48);
          goto LAB_00ecbf98;
        }
        local_e0 = (undefined4 *)CONCAT31(local_e0._1_3_,6);
        if (cVar3 == '\x06') {
          ppppppuVar16 = (undefined4 ******)FUN_00e956c4(&DAT_00565810,0x10);
        }
        else {
          local_48 = (uint **)CONCAT31(local_48._1_3_,cVar3);
          FUN_016dd1aa(uVar11,uVar12,0x17);
          FUN_00ea9850(&local_80,&local_48);
          if (local_80 != (uint *)0x80000001) {
            local_144 = (uint)(uint *)local_78;
            puVar21 = local_80;
            ppppppuVar16 = local_7c;
            goto LAB_00ecb994;
          }
          ppppppuVar16 = local_7c;
        }
        param_1[2] = 0x80000001;
        *param_1 = (uint)ppppppuVar16;
        goto LAB_00ecbfc0;
      default:
        uVar19 = (uint)local_e0 & 0xff;
        local_e0 = (undefined4 *)CONCAT31(local_e0._1_3_,6);
        if (uVar19 != 6) goto code_r0x00ecbac0;
        ppppppuVar15 = (undefined4 ******)FUN_00e956c4(&DAT_00565810,0x10);
        goto LAB_00ecbf98;
      }
    }
    uVar11 = FUN_00f36124(param_2,auStack_29,&DAT_0187bec8);
    *param_1 = uVar11;
    param_1[2] = 0x80000001;
    bVar23 = (bVar1 & 6) != 4;
    goto joined_r0x00ecc034;
  }
  local_e8 = *(undefined4 *)(param_2 + 4);
  pcVar20 = *(char **)(param_2 + 8);
  iVar18 = *(int *)(param_2 + 0xc);
  local_e4 = pcVar20 + iVar18 * 0x18;
  local_f0 = pcVar20;
  local_ec = pcVar20;
  if (iVar18 == 0) {
LAB_00ecbd80:
    puVar14 = (undefined4 *)FUN_00f2c2f0(0,&DAT_0187bee0,&DAT_018ab990);
  }
  else {
    local_ec = pcVar20 + 0x18;
    if (*pcVar20 == '\x06') goto LAB_00ecbd80;
    uVar11 = (uint)&local_e0 | 1;
    local_e0 = (undefined4 *)CONCAT31(local_e0._1_3_,*pcVar20);
    FUN_016dd1aa(uVar11,pcVar20 + 1,0x17);
    FUN_00ea9520(&local_48,&local_e0);
    puVar14 = local_44;
    if (((uint)local_48 & 1) == 0) {
      cVar3 = local_48._1_1_;
      uVar6 = local_48._2_2_;
      local_80 = local_40;
      local_7c = local_3c;
      local_78 = CONCAT62(local_78._2_6_,(undefined2)local_38);
      if (local_48._1_1_ == '\x03') goto LAB_00ecbd80;
      local_60 = (undefined2)local_38;
      local_64 = local_3c;
      local_68 = local_40;
      if (iVar18 != 1) {
        local_ec = pcVar20 + 0x30;
        if (pcVar20[0x18] != '\x06') {
          local_e0 = (undefined4 *)CONCAT31(local_e0._1_3_,pcVar20[0x18]);
          FUN_016dd1aa(uVar11,pcVar20 + 0x19,0x17);
          FUN_00ea9520(&local_48,&local_e0);
          puVar8 = local_44;
          if (((uint)local_48 & 1) != 0) goto LAB_00ecbf7c;
          cVar5 = local_48._1_1_;
          uVar7 = local_48._2_2_;
          local_58 = local_40;
          local_54 = local_3c;
          local_50 = (undefined2)local_38;
          if (local_48._1_1_ != '\x03') {
            if (iVar18 != 2) {
              cVar2 = pcVar20[0x30];
              local_ec = pcVar20 + 0x48;
              if (cVar2 != '\x06') {
                local_e0 = (undefined4 *)CONCAT31(local_e0._1_3_,cVar2);
                FUN_016dd1aa(uVar11,pcVar20 + 0x31,0x17);
                if (cVar2 != '\x02') {
                  ppppppuVar16 = (undefined4 ******)FUN_00f36124(&local_e0,auStack_29,&DAT_0187be88)
                  ;
                  FUN_005c37bc(&local_e0);
LAB_00ecc288:
                  *param_1 = (uint)ppppppuVar16;
                  param_1[2] = 0x80000001;
                  FUN_00ef9724(&local_f0);
                  return;
                }
                local_48 = *(uint ***)(pcVar20 + 0x38);
                local_44 = *(undefined4 **)(pcVar20 + 0x3c);
                local_40 = *(uint **)(pcVar20 + 0x40);
                local_3c = *(undefined4 *******)(pcVar20 + 0x44);
                FUN_00e766c8(&local_80,&local_48);
                if (local_80 == (uint *)&DAT_00000001) {
                  ppppppuVar16 = local_7c;
                  goto LAB_00ecc288;
                }
                if (iVar18 != 3) {
                  local_ec = pcVar20 + 0x60;
                  uVar12 = (uint)(uint *)local_78;
                  uVar19 = (uint)local_78._4_4_;
                  if (pcVar20[0x48] != '\x06') {
                    local_e0 = (undefined4 *)CONCAT31(local_e0._1_3_,pcVar20[0x48]);
                    FUN_016dd1aa(uVar11,pcVar20 + 0x49,0x17);
                    FUN_00ea9850(&local_48,&local_e0);
                    puVar9 = local_44;
                    ppuVar4 = local_48;
                    if (local_48 == (uint **)0x80000001) {
                      *param_1 = (uint)local_44;
                      param_1[2] = 0x80000001;
                      FUN_00ef9724(&local_f0);
                      return;
                    }
                    param_1[1] = uVar19;
                    param_1[0xc] = (uint)local_54;
                    *(undefined2 *)((int)param_1 + 0x26) = uVar7;
                    *(char *)((int)param_1 + 0x25) = cVar5;
                    *(undefined2 *)(param_1 + 0xd) = local_50;
                    param_1[4] = (uint)local_40;
                    *param_1 = uVar12;
                    *(undefined2 *)((int)param_1 + 0x23) = local_60;
                    *(undefined4 *******)((int)param_1 + 0x1f) = local_64;
                    *(uint **)((int)param_1 + 0x1b) = local_68;
                    param_1[10] = (uint)puVar8;
                    param_1[0xb] = (uint)local_58;
                    *(undefined4 **)((int)param_1 + 0x17) = puVar14;
                    *(undefined2 *)((int)param_1 + 0x15) = uVar6;
                    *(char *)(param_1 + 5) = cVar3;
                    param_1[3] = (uint)local_44;
                    param_1[2] = (uint)local_48;
                    if (iVar18 != 4) {
                      uVar11 = FUN_00f2c2f0(iVar18,&DAT_0188738c,&DAT_018ab990);
                      *param_1 = uVar11;
                      param_1[2] = 0x80000001;
                      if (((uint)ppuVar4 & 0x7fffffff) != 0) {
                        thunk_FUN_016d3fb4(puVar9);
                        FUN_00ef9724(&local_f0);
                        return;
                      }
                    }
                    goto LAB_00ecc0c8;
                  }
                }
                puVar14 = (undefined4 *)FUN_00f2c2f0(3,&DAT_0187bee0,&DAT_018ab990);
                goto LAB_00ecc0bc;
              }
            }
            puVar14 = (undefined4 *)FUN_00f2c2f0(2,&DAT_0187bee0,&DAT_018ab990);
            goto LAB_00ecc0bc;
          }
        }
      }
      puVar14 = (undefined4 *)FUN_00f2c2f0(1,&DAT_0187bee0,&DAT_018ab990);
    }
    else {
LAB_00ecbf7c:
      puVar14 = local_44;
    }
  }
LAB_00ecc0bc:
  *param_1 = (uint)puVar14;
  param_1[2] = 0x80000001;
LAB_00ecc0c8:
  FUN_00ef9724(&local_f0);
  return;
code_r0x00ecbac0:
  FUN_016dd1aa(uVar11,uVar12,0x17);
  local_48 = (uint **)CONCAT31(local_48._1_3_,cVar3);
  FUN_005c37bc(&local_48);
  goto LAB_00ecb99c;
switchD_00ecbb04_caseD_0:
  if (local_108 == 3) {
    bVar22 = (char)local_e0 == '\x06';
    local_e0 = (undefined4 *)CONCAT31(local_e0._1_3_,6);
    if (bVar22) {
      ppppppuVar15 = (undefined4 ******)FUN_00e956c4(&DAT_00565810,0x10);
    }
    else {
      local_48 = (uint **)CONCAT31(local_48._1_3_,cVar3);
      FUN_016dd1aa(uVar11,uVar12,0x17);
      FUN_00ea9520(&local_80,&local_48);
      if (((uint)local_80 & 1) == 0) {
        local_148 = local_7c;
        local_13c = (uint)local_80 >> 0x10;
        local_a0 = (uint *)local_78;
        local_9c = local_78._4_4_;
        local_108 = (uint)local_80 >> 8 & 0xff;
        local_98 = local_70;
        goto LAB_00ecb994;
      }
LAB_00ecc16c:
      ppppppuVar15 = local_7c;
    }
  }
  else {
    local_7c = (undefined4 ******)&DAT_0000000a;
    local_44 = &DAT_0157d360;
    local_48 = &local_80;
    local_80 = (uint *)0x35a54f;
    ppppppuVar15 = (undefined4 ******)FUN_00f56780(&DAT_00582dbd,&local_48);
  }
LAB_00ecbf98:
  param_1[2] = 0x80000001;
  *param_1 = (uint)ppppppuVar15;
joined_r0x00ecc220:
  if ((-0x7fffffff < (int)puVar21) && (puVar21 != (uint *)0x0)) {
    thunk_FUN_016d3fb4(ppppppuVar16);
  }
LAB_00ecbfc0:
  while( true ) {
    FUN_00a40f64(&local_48,&local_c8);
    puVar21 = local_40;
    ppuVar4 = local_48;
    if (local_48 == (uint **)0x0) break;
    local_80 = &local_c8;
    if (local_48[(int)local_40 * 3 + 0x43] != (uint *)0x0) {
      thunk_FUN_016d3fb4(local_48[(int)local_40 * 3 + 0x44]);
    }
    FUN_00e9e9b8(ppuVar4 + (int)puVar21 * 6);
  }
LAB_00ecc010:
  if ((char)local_e0 != '\x06') {
    FUN_005c37bc(&local_e0);
  }
  bVar23 = false;
joined_r0x00ecc034:
  if (!bVar23) {
    return;
  }
  FUN_005c37bc(param_2);
  return;
}

