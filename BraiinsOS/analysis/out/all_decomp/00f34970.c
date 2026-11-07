// FUN_00f34970 @ 00f34970 size=4276 calls_out=23 calls_in=1
// strings: private | share_ratio_bp | pools | share_ratio_bp | pools | private

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f34970(undefined4 *param_1,char *param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  char ****ppppcVar5;
  ushort uVar6;
  char *****pppppcVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  char *****pppppcVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  char *****pppppcVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char *****pppppcVar23;
  bool bVar24;
  char *****pppppcVar25;
  undefined4 uVar26;
  char *****pppppcVar27;
  char *****unaff_r6;
  undefined4 uVar28;
  char *****pppppcVar29;
  char *pcVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  int iVar33;
  char *****pppppcVar34;
  undefined2 *puVar35;
  char *****local_190;
  char *****local_18c;
  uint local_178;
  char *****local_170;
  uint local_168;
  char *****local_164;
  char *****local_160;
  char *****local_15c;
  char *****local_158;
  char *****local_150;
  char *****local_148;
  uint local_140;
  char *****local_13c;
  char *****local_120;
  byte *local_110;
  char *****local_104;
  int local_100;
  char *****local_fc;
  char *****local_f8;
  char *****local_f4;
  char *****local_f0;
  char *****local_ec;
  undefined4 local_e8;
  byte local_e0 [4];
  char *****local_dc;
  char *****local_d8;
  int local_d4;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  char ****local_b0;
  char *****local_ac;
  char *****local_a8;
  char *****local_a4;
  char ****local_a0;
  undefined4 local_9c;
  char *****local_98;
  char *****local_94;
  int local_90;
  char *****local_84;
  char *****local_80;
  char *****local_7c;
  char *****local_78;
  undefined2 local_74;
  undefined1 local_72;
  char *****local_70;
  char *****local_6c;
  char *****local_68;
  char *****local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54 [2];
  int local_4c;
  undefined4 local_48;
  char *****local_44;
  char *****local_40;
  char *****local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_29 [5];
  
  local_38 = CONCAT13(local_38._3_1_,CONCAT12(local_38._2_1_,(undefined2)local_38));
  if (*param_2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00f33f88(param_2);
    return;
  }
  if (*param_2 != '\x04') {
    pppppcVar34 = (char *****)FUN_00f36124(param_2,auStack_29,&DAT_0187e8e8);
    iVar33 = 0;
    goto LAB_00f35938;
  }
  iVar8 = *(int *)(param_2 + 4);
  pbVar18 = *(byte **)(param_2 + 8);
  pppppcVar25 = *(char ******)(param_2 + 0xc);
  pbVar9 = pbVar18 + (int)pppppcVar25 * 0x18;
  local_100 = 4;
  local_104 = (char *****)0x0;
  if (pppppcVar25 != (char *****)0x0) {
    local_100 = thunk_FUN_016d4a50((int)pppppcVar25 * 0x14);
    local_104 = pppppcVar25;
    if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,(int)pppppcVar25 * 0x14);
    }
  }
  uVar13 = (uint)&local_c8 | 1;
  uVar14 = (uint)&local_48 | 1;
  puVar15 = (uint *)((uint)&local_70 | 4);
  puVar16 = (undefined4 *)((uint)&local_48 | 4);
  local_140 = 0;
  local_fc = (char *****)0x0;
  local_178 = 0;
  local_110 = pbVar18;
LAB_00f34a88:
  pppppcVar34 = local_fc;
  if (local_110 == pbVar9) {
    pbVar17 = pbVar9;
  }
  else {
    pbVar17 = local_110 + 0x18;
    bVar2 = *local_110;
    if (bVar2 != 6) {
      local_e0[0] = bVar2;
      FUN_016dd1aa((uint)local_e0 | 1,local_110 + 1,0x17);
      iVar33 = local_d4;
      pppppcVar27 = local_d8;
      pppppcVar34 = local_dc;
      if (bVar2 == 4) {
        local_68 = local_dc;
        local_6c = local_d8;
        pppppcVar29 = local_d8 + local_d4 * 6;
        local_70 = local_d8;
        local_64 = pppppcVar29;
        if (local_d4 == 0) {
LAB_00f34e38:
          pppppcVar23 = local_6c;
          pppppcVar12 = (char *****)FUN_00f2c2f0(0,&DAT_0187e810,&DAT_018ab990);
LAB_00f34e54:
          local_148 = pppppcVar12;
          local_168 = 2;
        }
        else {
          pppppcVar23 = local_d8 + 6;
          local_6c = pppppcVar23;
          if (*(char *)local_d8 == '\x06') goto LAB_00f34e38;
          local_c8 = CONCAT31(local_c8._1_3_,*(char *)local_d8);
          FUN_016dd1aa(uVar13,(char *)((int)local_d8 + 1),0x17);
          FUN_00f2d284(&local_48,&local_c8);
          pppppcVar7 = local_44;
          local_148 = local_48;
          if (local_48 == (char *****)0x0) {
            pppppcVar12 = local_44;
            goto LAB_00f34e54;
          }
          local_13c = local_44;
          if (iVar33 == 1) {
LAB_00f34fbc:
            uVar32 = 1;
LAB_00f34fc0:
            pppppcVar12 = (char *****)FUN_00f2c2f0(uVar32,&DAT_0187e810,&DAT_018ab990);
LAB_00f34fd8:
            if (pppppcVar7 != (char *****)0x0) {
              pppppcVar20 = (char *****)0x0;
              do {
                *(char *)((int)local_148 + (int)pppppcVar20) = '\0';
                pppppcVar20 = (char *****)((int)pppppcVar20 + 1);
              } while (pppppcVar7 != pppppcVar20);
              thunk_FUN_016d3fb4();
            }
            goto LAB_00f34e54;
          }
          pppppcVar23 = pppppcVar27 + 0xc;
          cVar3 = *(char *)(pppppcVar27 + 6);
          local_6c = pppppcVar23;
          if (cVar3 == '\x06') goto LAB_00f34fbc;
          local_c8 = CONCAT31(local_c8._1_3_,cVar3);
          FUN_016dd1aa(uVar13,(char *)((int)pppppcVar27 + 0x19),0x17);
          if (cVar3 == '\x01') {
            local_140 = local_c8 >> 8 & 0xff;
          }
          else {
            local_18c = (char *****)FUN_00f36124(&local_c8,auStack_29,&DAT_0187e908);
          }
          FUN_00f3615c(&local_c8);
          if (cVar3 != '\x01') {
            pppppcVar12 = local_18c;
            goto LAB_00f34fd8;
          }
          if (iVar33 == 2) {
LAB_00f3528c:
            uVar32 = 2;
            goto LAB_00f34fc0;
          }
          pppppcVar23 = pppppcVar27 + 0x12;
          local_6c = pppppcVar23;
          if (*(char *)(pppppcVar27 + 0xc) == '\x06') goto LAB_00f3528c;
          local_c8 = CONCAT31(local_c8._1_3_,*(char *)(pppppcVar27 + 0xc));
          FUN_016dd1aa(uVar13,(char *)((int)pppppcVar27 + 0x31),0x17);
          FUN_00f362e0(&local_48,&local_c8);
          if ((short)local_48 != 0) {
            pppppcVar12 = local_44;
            goto LAB_00f34fd8;
          }
          if (iVar33 == 3) {
LAB_00f35320:
            uVar32 = 3;
            goto LAB_00f34fc0;
          }
          uVar6 = local_48._2_2_;
          pppppcVar12 = (char *****)(uint)local_48._2_2_;
          pppppcVar23 = pppppcVar27 + 0x18;
          local_6c = pppppcVar23;
          if (*(char *)(pppppcVar27 + 0x12) == '\x06') goto LAB_00f35320;
          local_c8 = CONCAT31(local_c8._1_3_,*(char *)(pppppcVar27 + 0x12));
          FUN_016dd1aa(uVar13,(char *)((int)pppppcVar27 + 0x49),0x17);
          FUN_00f2e6bc(&local_84,&local_c8);
          pppppcVar20 = local_84;
          if (local_84 == (char *****)0x0) {
            pppppcVar12 = local_80;
            goto LAB_00f34fd8;
          }
          local_158 = local_80;
          local_3c = local_80;
          local_38._0_3_ = CONCAT12((char)local_140,uVar6);
          local_40 = local_84;
          local_48 = local_148;
          local_44 = pppppcVar7;
          if (iVar33 == 4) {
            local_168 = local_140;
          }
          else {
            local_148 = (char *****)FUN_00f2c2f0(iVar33,&DAT_0188738c,&DAT_018ab990);
            FUN_00f2c34c(&local_48);
            local_168 = 2;
          }
          local_160 = pppppcVar20;
          local_164 = local_13c;
          local_15c = pppppcVar12;
        }
        iVar33 = ((uint)((int)pppppcVar29 - (int)pppppcVar23) >> 3) * -0x55555555 + 1;
        while (iVar33 = iVar33 + -1, iVar33 != 0) {
          FUN_00f3615c(pppppcVar23);
          pppppcVar23 = pppppcVar23 + 6;
        }
        if (pppppcVar34 != (char *****)0x0) {
          thunk_FUN_016d3fb4(pppppcVar27);
        }
        goto LAB_00f355a8;
      }
      if (bVar2 == 5) {
        local_9c = 0;
        local_94 = local_d8;
        local_a4 = local_d8;
        local_150 = (char *****)0x0;
        local_c8 = CONCAT31(local_c8._1_3_,6);
        local_98 = local_dc;
        local_90 = 0;
        if (local_dc != (char *****)0x0) {
          local_90 = local_d4;
        }
        local_a8 = local_dc;
        local_b0 = (char ****)(uint)(local_dc != (char *****)0x0);
        local_168 = 2;
        local_ac = (char *****)0x0;
        local_148 = (char *****)0x0;
        bVar4 = false;
        local_a0 = local_b0;
LAB_00f34b44:
        puVar35 = &local_74;
        uVar32 = 0;
        FUN_00f2cd78(local_54,&local_b0);
        pppppcVar34 = &local_b0;
        if (local_54[0] != 0) {
          puVar19 = (undefined4 *)(local_54[0] + local_4c * 0x18);
          iVar10 = local_54[0] + local_4c * 0xc;
          pppppcVar34 = *(char ******)(iVar10 + 0x10c);
          puVar35 = *(undefined2 **)(iVar10 + 0x110);
          uVar32 = *(undefined4 *)(iVar10 + 0x114);
          uVar21 = puVar19[1];
          uVar22 = puVar19[2];
          uVar26 = puVar19[3];
          uVar28 = puVar19[4];
          uVar31 = puVar19[5];
          *puVar16 = *puVar19;
          puVar16[1] = uVar21;
          puVar16[2] = uVar22;
          puVar16[3] = uVar26;
          puVar16[4] = uVar28;
          puVar16[5] = uVar31;
          local_70 = local_48;
          local_6c = local_44;
          local_68 = local_40;
          local_64 = local_3c;
          uStack_60 = local_38;
          uStack_5c = uStack_34;
          uStack_58 = uStack_30;
        }
        if (local_54[0] == 0 || pppppcVar34 == (char *****)&DAT_80000000) {
switchD_00f34c9c_caseD_4:
          if (local_148 == (char *****)0x0) {
            local_6c = (char *****)&DAT_00000004;
            local_70 = (char *****)&DAT_00568d68;
            local_44 = (char *****)&DAT_0157d360;
            local_48 = (char *****)&local_70;
            local_120 = (char *****)FUN_00f56780(&DAT_0057a25d,&local_48);
            bVar24 = true;
            local_148 = (char *****)0x0;
          }
          else {
            if (local_168 != 2) {
              if (!bVar4) {
                local_6c = (char *****)&DAT_0000000e;
                local_70 = (char *****)0x35bea7;
                local_44 = (char *****)&DAT_0157d360;
                local_48 = (char *****)&local_70;
                local_120 = (char *****)FUN_00f56780(&DAT_0057a25d,&local_48);
                goto LAB_00f351a8;
              }
              if (local_150 == (char *****)0x0) {
                local_6c = (char *****)&DAT_00000005;
                local_70 = (char *****)0x35bebb;
                local_44 = (char *****)&DAT_0157d360;
                local_48 = (char *****)&local_70;
                local_120 = (char *****)FUN_00f56780(&DAT_0057a25d,&local_48);
                goto LAB_00f351a8;
              }
              local_168 = local_168 & 1;
              local_74 = SUB42(local_13c,0);
              local_78 = local_170;
              local_72 = (undefined1)local_168;
              local_7c = local_150;
              local_84 = local_148;
              local_80 = unaff_r6;
              if (local_90 != 0) {
                local_148 = (char *****)FUN_00f2c2f0(iVar33,&DAT_01887430,&DAT_018ab990);
                FUN_00f2c34c(&local_84);
                local_168 = 2;
              }
              while( true ) {
                FUN_00f2cd78(&local_48,&local_b0);
                pppppcVar27 = local_40;
                pppppcVar34 = local_48;
                if (local_48 == (char *****)0x0) break;
                local_70 = &local_b0;
                if (local_48[(int)local_40 * 3 + 0x43] != (char ****)0x0) {
                  thunk_FUN_016d3fb4(local_48[(int)local_40 * 3 + 0x44]);
                }
                FUN_00f2cf28(pppppcVar34 + (int)pppppcVar27 * 6);
              }
              local_164 = unaff_r6;
              local_15c = local_13c;
              local_158 = local_170;
              local_160 = local_150;
              goto joined_r0x00f3515c;
            }
            local_6c = (char *****)&DAT_00000007;
            local_70 = (char *****)0x35bea0;
            local_44 = (char *****)&DAT_0157d360;
            local_48 = (char *****)&local_70;
            local_120 = (char *****)FUN_00f56780(&DAT_0057a25d,&local_48);
LAB_00f351a8:
            pppppcVar34 = unaff_r6;
            pppppcVar27 = local_148;
            if (unaff_r6 == (char *****)0x0) {
              unaff_r6 = (char *****)0x0;
              bVar24 = false;
            }
            else {
              do {
                *(char *)pppppcVar27 = '\0';
                pppppcVar34 = (char *****)((int)pppppcVar34 + -1);
                pppppcVar27 = (char *****)((int)pppppcVar27 + 1);
              } while (pppppcVar34 != (char *****)0x0);
              thunk_FUN_016d3fb4(local_148);
              bVar24 = false;
            }
          }
          goto LAB_00f351ec;
        }
        FUN_00f30340(&local_c8);
        local_c8 = *puVar15;
        uStack_c4 = puVar15[1];
        uStack_c0 = puVar15[2];
        uStack_bc = puVar15[3];
        uStack_b8 = puVar15[4];
        uStack_b4 = puVar15[5];
        FUN_00f33b4c(&local_48,puVar35,uVar32);
        if (pppppcVar34 != (char *****)0x0) {
          thunk_FUN_016d3fb4(puVar35);
        }
        bVar24 = true;
        if ((char)local_48 != '\0') {
          local_120 = local_44;
          goto LAB_00f351ec;
        }
        cVar3 = (char)local_c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uint)local_48 >> 8 & 0xff) {
        case 0:
          if (local_148 != (char *****)0x0) {
            local_6c = (char *****)&DAT_00000004;
            local_70 = (char *****)&DAT_00568d68;
            local_44 = (char *****)&DAT_0157d360;
            local_48 = (char *****)&local_70;
            local_120 = (char *****)FUN_00f56780(&DAT_00582dbd,&local_48);
            goto LAB_00f351ec;
          }
          local_c8 = CONCAT31(local_c8._1_3_,6);
          if (cVar3 == '\x06') {
            local_120 = (char *****)FUN_00f2c790();
          }
          else {
            local_48 = (char *****)CONCAT31(local_48._1_3_,cVar3);
            FUN_016dd1aa(uVar14,uVar13,0x17);
            FUN_00f2d284(&local_70,&local_48);
            local_148 = local_70;
            if (local_70 != (char *****)0x0) {
              unaff_r6 = local_6c;
              goto LAB_00f34b44;
            }
            local_120 = local_6c;
          }
          local_148 = (char *****)0x0;
          goto LAB_00f351ec;
        case 1:
          if (local_168 == 2) {
            uVar11 = local_c8 & 0xff;
            local_c8 = CONCAT31(local_c8._1_3_,6);
            if (uVar11 != 6) goto code_r0x00f34d88;
            local_190 = (char *****)FUN_00f2c790();
            bVar24 = true;
            local_120 = local_190;
          }
          else {
            local_6c = (char *****)&DAT_00000007;
            local_70 = (char *****)0x35bea0;
            local_44 = (char *****)&DAT_0157d360;
            local_48 = (char *****)&local_70;
            local_120 = (char *****)FUN_00f56780(&DAT_00582dbd,&local_48);
            bVar24 = true;
          }
          goto LAB_00f351ec;
        case 2:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xf35a40);
          (*pcVar1)();
        case 3:
          goto switchD_00f34c9c_caseD_3;
        case 4:
          goto switchD_00f34c9c_caseD_4;
        default:
          if (bVar4) {
            local_6c = (char *****)&DAT_0000000e;
            local_70 = (char *****)0x35bea7;
            local_44 = (char *****)&DAT_0157d360;
            local_48 = (char *****)&local_70;
            local_120 = (char *****)FUN_00f56780(&DAT_00582dbd,&local_48);
            goto LAB_00f351ec;
          }
          uVar11 = local_c8 & 0xff;
          local_c8 = CONCAT31(local_c8._1_3_,6);
          if (uVar11 == 6) {
            local_6c = (char *****)FUN_00f2c790();
          }
          else {
            local_48 = (char *****)CONCAT31(local_48._1_3_,cVar3);
            FUN_016dd1aa(uVar14,uVar13,0x17);
            FUN_00f362e0(&local_70,&local_48);
            if ((short)local_70 == 0) {
              local_13c = (char *****)((uint)local_70 >> 0x10);
              bVar4 = true;
              goto LAB_00f34b44;
            }
          }
          local_120 = local_6c;
          goto LAB_00f351ec;
        }
      }
      local_148 = (char *****)FUN_00f36124(local_e0,auStack_29,&DAT_0187e958);
      if ((bVar2 & 6) != 4) {
        FUN_00f3615c(local_e0);
      }
      goto LAB_00f35860;
    }
  }
  iVar33 = local_100;
  if (local_fc < local_104) {
    if (local_fc != (char *****)0x0) {
      iVar10 = (int)local_fc * 0x14;
      iVar33 = thunk_FUN_016d4ea4(local_100,iVar10);
      if (iVar33 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar10);
      }
      goto LAB_00f35834;
    }
    thunk_FUN_016d3fb4(local_100);
    iVar33 = 4;
  }
  else {
LAB_00f35834:
    if (&DAT_0000ffff < pppppcVar34) {
      pcVar30 = (char *)((int)pppppcVar34 + 1);
      iVar10 = iVar33;
      while (pcVar30 = pcVar30 + -1, pcVar30 != (char *)0x0) {
        FUN_00f2c34c(iVar10);
        iVar10 = iVar10 + 0x14;
      }
      thunk_FUN_016d3fb4(iVar33);
      local_148 = (char *****)FUN_00f2c2f0(pppppcVar34,"",&DAT_018abad0);
      goto LAB_00f358c4;
    }
  }
  if (pbVar9 != pbVar17) {
    local_148 = (char *****)FUN_00f2c2f0(pppppcVar25,&DAT_0188738c,&DAT_018ab990);
    FUN_00f30098(iVar33,pppppcVar34);
    goto LAB_00f358c4;
  }
  goto LAB_00f358e8;
switchD_00f34c9c_caseD_3:
  if (local_150 != (char *****)0x0) {
    local_6c = (char *****)&DAT_00000005;
    local_70 = (char *****)0x35bebb;
    local_44 = (char *****)&DAT_0157d360;
    local_48 = (char *****)&local_70;
    local_120 = (char *****)FUN_00f56780(&DAT_00582dbd,&local_48);
    bVar24 = true;
    goto LAB_00f351f8;
  }
  local_c8 = CONCAT31(local_c8._1_3_,6);
  if (cVar3 == '\x06') {
    local_120 = (char *****)FUN_00f2c790();
  }
  else {
    local_48 = (char *****)CONCAT31(local_48._1_3_,cVar3);
    FUN_016dd1aa(uVar14,uVar13,0x17);
    FUN_00f2e6bc(&local_70,&local_48);
    if (local_70 != (char *****)0x0) {
      local_150 = local_70;
      local_170 = local_6c;
      goto LAB_00f34b44;
    }
    local_120 = local_6c;
  }
  if (local_148 != (char *****)0x0) goto LAB_00f35210;
  goto LAB_00f35414;
code_r0x00f34d88:
  local_48 = (char *****)CONCAT31(local_48._1_3_,cVar3);
  FUN_016dd1aa(uVar14,uVar13,0x17);
  if (uVar11 == 1) {
    local_178 = (uint)local_48 >> 8 & 0xff;
  }
  else {
    local_190 = (char *****)FUN_00f36124(&local_48,auStack_29,&DAT_0187e908);
  }
  FUN_00f3615c(&local_48);
  local_168 = local_178;
  if (uVar11 != 1) goto LAB_00f355f8;
  goto LAB_00f34b44;
LAB_00f355f8:
  bVar24 = true;
  local_120 = local_190;
LAB_00f351ec:
  pppppcVar34 = (char *****)0x0;
  if (local_150 != (char *****)0x0) {
LAB_00f351f8:
    pppppcVar34 = (char *****)FUN_00d98314(local_150,local_170);
  }
  if (bVar24) {
    pppppcVar34 = local_148;
  }
  if (bVar24 && pppppcVar34 != (char *****)0x0) {
LAB_00f35210:
    if (unaff_r6 != (char *****)0x0) {
      pppppcVar34 = (char *****)0x0;
      do {
        *(char *)((int)local_148 + (int)pppppcVar34) = '\0';
        pppppcVar34 = (char *****)((int)pppppcVar34 + 1);
      } while (unaff_r6 != pppppcVar34);
      thunk_FUN_016d3fb4();
    }
  }
LAB_00f35414:
  do {
    ppppcVar5 = local_b0;
    if (local_90 == 0) break;
    local_90 = local_90 + -1;
    if (local_b0 != (char ****)0x1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af368);
    }
    pppppcVar34 = local_a8;
    pppppcVar27 = local_a4;
    if (local_ac == (char *****)0x0) {
      for (; pppppcVar27 != (char *****)0x0; pppppcVar27 = (char *****)((int)pppppcVar27 + -1)) {
        pppppcVar34 = (char *****)pppppcVar34[0x66];
      }
      pppppcVar27 = (char *****)0x0;
      pppppcVar29 = (char *****)0x0;
      local_b0 = (char ****)0x1;
      if (*(short *)((int)pppppcVar34 + 0x192) == 0) goto LAB_00f35494;
LAB_00f35454:
      pppppcVar23 = pppppcVar34;
    }
    else {
      pppppcVar34 = local_ac;
      pppppcVar29 = local_a8;
      if (local_a4 < (char *****)(uint)*(ushort *)((int)local_ac + 0x192)) goto LAB_00f35454;
LAB_00f35494:
      do {
        pppppcVar23 = (char *****)pppppcVar34[0x42];
        if (pppppcVar23 == (char *****)0x0) {
          thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af358);
        }
        pppppcVar27 = (char *****)(uint)*(ushort *)(pppppcVar34 + 100);
        thunk_FUN_016d3fb4();
        pppppcVar29 = (char *****)((int)pppppcVar29 + 1);
        pppppcVar34 = pppppcVar23;
      } while ((char *****)(uint)*(ushort *)((int)pppppcVar23 + 0x192) <= pppppcVar27);
    }
    if (pppppcVar29 == (char *****)0x0) {
      local_a4 = (char *****)((int)pppppcVar27 + 1);
      local_ac = pppppcVar23;
    }
    else {
      pppppcVar34 = pppppcVar23 + (int)((int)pppppcVar27 + 0x67);
      do {
        local_ac = (char *****)*pppppcVar34;
        pppppcVar29 = (char *****)((int)pppppcVar29 + -1);
        pppppcVar34 = local_ac + 0x66;
      } while (pppppcVar29 != (char *****)0x0);
      local_a4 = (char *****)0x0;
    }
    local_a8 = (char *****)0x0;
    local_48 = &local_b0;
    if (pppppcVar23[(int)pppppcVar27 * 3 + 0x43] != (char ****)0x0) {
      thunk_FUN_016d3fb4(pppppcVar23[(int)pppppcVar27 * 3 + 0x44]);
    }
    FUN_00f2cf28(pppppcVar23 + (int)pppppcVar27 * 6);
  } while( true );
  local_b0 = (char ****)0x0;
  if (((uint)ppppcVar5 & 1) != 0) {
    pppppcVar34 = local_ac;
    pppppcVar29 = local_a8;
    pppppcVar27 = local_a4;
    if (local_ac == (char *****)0x0) {
      for (; pppppcVar34 = pppppcVar29, pppppcVar27 != (char *****)0x0;
          pppppcVar27 = (char *****)((int)pppppcVar27 + -1)) {
        pppppcVar29 = (char *****)pppppcVar34[0x66];
      }
    }
    pppppcVar27 = pppppcVar34;
    pppppcVar29 = (char *****)pppppcVar34[0x42];
    if ((char *****)pppppcVar34[0x42] != (char *****)0x0) {
      do {
        pppppcVar34 = pppppcVar29;
        thunk_FUN_016d3fb4(pppppcVar27);
        pppppcVar27 = pppppcVar34;
        pppppcVar29 = (char *****)pppppcVar34[0x42];
      } while ((char *****)pppppcVar34[0x42] != (char *****)0x0);
    }
    thunk_FUN_016d3fb4(pppppcVar34);
  }
  local_168 = 2;
  local_148 = local_120;
joined_r0x00f3515c:
  if ((char)local_c8 != '\x06') {
    FUN_00f33f88(&local_c8);
  }
LAB_00f355a8:
  pppppcVar34 = local_fc;
  if ((local_168 & 0xfe) != 2) {
    local_ec = local_158;
    local_f0 = local_160;
    local_e8._0_3_ = CONCAT12((char)local_168,(short)local_15c);
    local_f4 = local_164;
    local_f8 = local_148;
    if (local_fc == local_104) {
      FUN_00f30480(&local_104);
    }
    puVar19 = (undefined4 *)(local_100 + (int)pppppcVar34 * 0x14);
    *puVar19 = local_f8;
    puVar19[1] = local_f4;
    puVar19[2] = local_f0;
    puVar19[3] = local_ec;
    puVar19[4] = local_e8;
    local_fc = (char *****)((int)pppppcVar34 + 1);
    unaff_r6 = local_ec;
    local_110 = pbVar17;
    goto LAB_00f34a88;
  }
LAB_00f35860:
  iVar33 = local_100;
  pcVar30 = (char *)((int)local_fc + 1);
  iVar10 = local_100;
  while (pcVar30 = pcVar30 + -1, pcVar30 != (char *)0x0) {
    FUN_00f2c34c(iVar10);
    iVar10 = iVar10 + 0x14;
  }
  if (local_104 != (char *****)0x0) {
    thunk_FUN_016d3fb4(iVar33);
  }
LAB_00f358c4:
  iVar33 = 0;
  pppppcVar34 = local_148;
LAB_00f358e8:
  iVar10 = ((uint)((int)pbVar9 - (int)pbVar17) >> 3) * -0x55555555 + 1;
  while (iVar10 = iVar10 + -1, iVar10 != 0) {
    FUN_00f3615c(pbVar17);
    pbVar17 = pbVar17 + 0x18;
  }
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(pbVar18);
  }
LAB_00f35938:
  if (*param_2 != '\x04') {
    FUN_00f3615c();
  }
  if (iVar33 == 0) {
    *param_1 = 1;
    param_1[1] = pppppcVar34;
    return;
  }
  param_1[2] = pppppcVar34;
  *param_1 = 0;
  param_1[1] = iVar33;
  return;
}

