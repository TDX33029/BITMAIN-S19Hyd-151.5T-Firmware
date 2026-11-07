// FUN_00f2e6bc @ 00f2e6bc size=4032 calls_out=22 calls_in=1
// strings: user-- | user--

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f2e6bc(int *param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int ******ppppppiVar4;
  int *******pppppppiVar5;
  int *******pppppppiVar6;
  int *******pppppppiVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int *******pppppppiVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  int *******pppppppiVar20;
  int *******pppppppiVar21;
  undefined4 uVar22;
  char cVar23;
  undefined4 uVar24;
  int *******pppppppiVar25;
  int *******pppppppiVar26;
  undefined4 uVar27;
  char *pcVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int *******unaff_r8;
  int iVar31;
  int *******pppppppiVar32;
  int *******unaff_r10;
  int *******pppppppiVar33;
  int *******local_17c;
  int *******local_164;
  int *******local_15c;
  int *******local_158;
  int *******local_154;
  int *******local_150;
  int *******local_14c;
  int *******local_140;
  char local_124;
  int *******local_11c;
  int *******local_118;
  byte *local_110;
  int *******local_104;
  int local_100;
  int *******local_fc;
  int *******local_f8;
  int *******local_f4;
  int *******local_f0;
  int *******local_ec;
  int *******local_e8;
  int *******local_e4;
  byte local_e0 [4];
  int *******local_dc;
  int *******local_d8;
  int local_d4;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  int ******local_b0;
  int *******local_ac;
  int *******local_a8;
  int *******local_a4;
  int ******local_a0;
  undefined4 local_9c;
  int *******local_98;
  int *******local_94;
  int local_90;
  int *******local_88;
  int *******local_84;
  int *******local_80;
  int *******local_7c;
  int *******local_78;
  int *******local_74;
  int *******local_70;
  int *******local_6c;
  int *******local_68;
  int *******local_64;
  int *******pppppppiStack_60;
  int *******pppppppiStack_5c;
  undefined4 uStack_58;
  int local_54 [2];
  int local_4c;
  int *******local_48;
  int *******local_44;
  int *******local_40;
  int *******local_3c;
  int *******local_38;
  int *******local_34;
  undefined4 uStack_30;
  undefined1 uStack_25;
  
  cVar23 = *param_2;
  if (cVar23 != '\x04') {
    local_11c = (int *******)FUN_00f36124(param_2,&uStack_25,&DAT_0187e8d8);
    iVar31 = 0;
    goto LAB_00f2f59c;
  }
  pppppppiVar26 = *(int ********)(param_2 + 0xc);
  iVar13 = *(int *)(param_2 + 4);
  pbVar8 = *(byte **)(param_2 + 8);
  pbVar9 = pbVar8 + (int)pppppppiVar26 * 0x18;
  local_100 = 4;
  local_104 = (int *******)0x0;
  if (pppppppiVar26 != (int *******)0x0) {
    local_100 = thunk_FUN_016d4a50((int)pppppppiVar26 * 0x18);
    local_104 = pppppppiVar26;
    if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,(int)pppppppiVar26 * 0x18);
    }
  }
  uVar14 = (uint)&local_c8 | 1;
  uVar15 = (uint)&local_48 | 1;
  puVar16 = (uint *)((uint)&local_70 | 4);
  puVar17 = (undefined4 *)((uint)&local_48 | 4);
  local_fc = (int *******)0x0;
  local_110 = pbVar8;
LAB_00f2e7b4:
  pppppppiVar32 = local_fc;
  if (local_110 == pbVar9) {
    pbVar18 = pbVar9;
  }
  else {
    pbVar18 = local_110 + 0x18;
    bVar1 = *local_110;
    if (bVar1 != 6) {
      local_e0[0] = bVar1;
      FUN_016dd1aa((uint)local_e0 | 1,local_110 + 1,0x17);
      iVar31 = local_d4;
      pppppppiVar33 = local_d8;
      pppppppiVar32 = local_dc;
      if (bVar1 == 4) {
        local_68 = local_dc;
        local_6c = local_d8;
        pppppppiVar21 = local_d8 + local_d4 * 6;
        local_70 = local_d8;
        local_64 = pppppppiVar21;
        if (local_d4 == 0) {
LAB_00f2eb94:
          pppppppiVar25 = local_6c;
          local_11c = (int *******)FUN_00f2c2f0(0,&DAT_0187e7f8,&DAT_018ab990);
LAB_00f2ebb0:
          local_118 = (int *******)0x0;
        }
        else {
          pppppppiVar25 = local_d8 + 6;
          local_6c = pppppppiVar25;
          if (*(char *)local_d8 == '\x06') goto LAB_00f2eb94;
          local_c8 = CONCAT31(local_c8._1_3_,*(char *)local_d8);
          FUN_016dd1aa(uVar14,(char *)((int)local_d8 + 1),0x17);
          FUN_00f2d284(&local_48,&local_c8);
          pppppppiVar6 = local_44;
          pppppppiVar5 = local_48;
          if (local_48 != (int *******)0x0) {
            if (iVar31 == 1) {
LAB_00f2ed50:
              local_11c = (int *******)FUN_00f2c2f0(1,&DAT_0187e7f8,&DAT_018ab990);
            }
            else {
              pppppppiVar25 = pppppppiVar33 + 0xc;
              local_6c = pppppppiVar25;
              if (*(char *)(pppppppiVar33 + 6) == '\x06') goto LAB_00f2ed50;
              local_c8 = CONCAT31(local_c8._1_3_,*(char *)(pppppppiVar33 + 6));
              FUN_016dd1aa(uVar14,(char *)((int)pppppppiVar33 + 0x19),0x17);
              FUN_00f2d284(&local_48,&local_c8);
              pppppppiVar7 = local_44;
              pppppppiVar12 = local_48;
              if (local_48 == (int *******)0x0) {
                local_11c = local_44;
              }
              else {
                if (iVar31 == 2) {
LAB_00f2ee8c:
                  local_11c = (int *******)FUN_00f2c2f0(2,&DAT_0187e7f8,&DAT_018ab990);
                  pppppppiVar20 = local_70;
                }
                else {
                  pppppppiVar25 = pppppppiVar33 + 0x12;
                  local_6c = pppppppiVar25;
                  if (*(char *)(pppppppiVar33 + 0xc) == '\x06') goto LAB_00f2ee8c;
                  local_c8 = CONCAT31(local_c8._1_3_,*(char *)(pppppppiVar33 + 0xc));
                  FUN_016dd1aa(uVar14,(char *)((int)pppppppiVar33 + 0x31),0x17);
                  FUN_00f35ec4(&local_88,&local_c8);
                  pppppppiVar20 = local_84;
                  if (local_88 == (int *******)0x0) {
                    local_150 = local_80;
                    local_34 = local_80;
                    local_38 = local_84;
                    local_3c = pppppppiVar7;
                    local_40 = pppppppiVar12;
                    if (iVar31 == 3) {
                      local_14c = local_84;
                      local_154 = pppppppiVar7;
                      local_158 = pppppppiVar12;
                      local_11c = pppppppiVar6;
                      local_118 = pppppppiVar5;
                      local_48 = pppppppiVar5;
                      local_44 = pppppppiVar6;
                    }
                    else {
                      local_48 = pppppppiVar5;
                      local_44 = pppppppiVar6;
                      local_11c = (int *******)FUN_00f2c2f0(iVar31,&DAT_0188738c,&DAT_018ab990);
                      FUN_00d983b4(&local_48);
                      local_118 = (int *******)0x0;
                      local_154 = pppppppiVar7;
                      local_14c = pppppppiVar20;
                      local_158 = pppppppiVar12;
                    }
                    goto LAB_00f2ebb4;
                  }
                  local_11c = local_84;
                  pppppppiVar20 = local_70;
                }
                local_70 = pppppppiVar20;
                if (pppppppiVar7 != (int *******)0x0) {
                  pppppppiVar20 = (int *******)0x0;
                  do {
                    *(char *)((int)pppppppiVar12 + (int)pppppppiVar20) = '\0';
                    pppppppiVar20 = (int *******)((int)pppppppiVar20 + 1);
                  } while (pppppppiVar7 != pppppppiVar20);
                  thunk_FUN_016d3fb4();
                }
              }
            }
            if (pppppppiVar6 != (int *******)0x0) {
              pppppppiVar12 = (int *******)0x0;
              do {
                *(char *)((int)pppppppiVar5 + (int)pppppppiVar12) = '\0';
                pppppppiVar12 = (int *******)((int)pppppppiVar12 + 1);
              } while (pppppppiVar6 != pppppppiVar12);
              thunk_FUN_016d3fb4(pppppppiVar5);
            }
            goto LAB_00f2ebb0;
          }
          local_118 = (int *******)0x0;
          local_11c = local_44;
          local_48 = pppppppiVar5;
          local_44 = pppppppiVar6;
        }
LAB_00f2ebb4:
        iVar31 = ((uint)((int)pppppppiVar21 - (int)pppppppiVar25) >> 3) * -0x55555555 + 1;
        while (iVar31 = iVar31 + -1, iVar31 != 0) {
          FUN_00f3615c(pppppppiVar25);
          pppppppiVar25 = pppppppiVar25 + 6;
        }
        if (pppppppiVar32 != (int *******)0x0) {
          thunk_FUN_016d3fb4(pppppppiVar33);
        }
        goto LAB_00f2f1c4;
      }
      if (bVar1 == 5) {
        local_9c = 0;
        local_94 = local_d8;
        local_a4 = local_d8;
        local_c8 = CONCAT31(local_c8._1_3_,6);
        local_98 = local_dc;
        local_90 = 0;
        if (local_dc != (int *******)0x0) {
          local_90 = local_d4;
        }
        local_a8 = local_dc;
        local_b0 = (int ******)(uint)(local_dc != (int *******)0x0);
        local_ac = (int *******)0x0;
        local_140 = (int *******)0x0;
        local_118 = (int *******)0x0;
        local_a0 = local_b0;
        bVar3 = false;
LAB_00f2e868:
        FUN_00f2cd78(local_54,&local_b0);
        pppppppiVar32 = unaff_r10;
        pppppppiVar33 = &local_b0;
        if (local_54[0] != 0) {
          puVar19 = (undefined4 *)(local_54[0] + local_4c * 0x18);
          iVar10 = local_54[0] + local_4c * 0xc;
          pppppppiVar33 = *(int ********)(iVar10 + 0x10c);
          pppppppiVar32 = *(int ********)(iVar10 + 0x110);
          unaff_r8 = *(int ********)(iVar10 + 0x114);
          uVar22 = puVar19[1];
          uVar24 = puVar19[2];
          uVar27 = puVar19[3];
          uVar29 = puVar19[4];
          uVar30 = puVar19[5];
          *puVar17 = *puVar19;
          puVar17[1] = uVar22;
          puVar17[2] = uVar24;
          puVar17[3] = uVar27;
          puVar17[4] = uVar29;
          puVar17[5] = uVar30;
          local_70 = local_48;
          local_6c = local_44;
          local_68 = local_40;
          local_64 = local_3c;
          pppppppiStack_60 = local_38;
          pppppppiStack_5c = local_34;
          uStack_58 = uStack_30;
        }
        if (local_54[0] == 0 || pppppppiVar33 == (int *******)&DAT_80000000) {
          if (local_118 == (int *******)0x0) {
LAB_00f2eefc:
            local_6c = (int *******)0x3;
            local_70 = (int *******)0x40971e;
            local_44 = (int *******)&DAT_0157d360;
            local_48 = (int *******)&local_70;
            pppppppiVar32 = (int *******)FUN_00f56780(&DAT_0057a25d,&local_48);
            bVar2 = true;
            local_118 = (int *******)0x0;
          }
          else {
LAB_00f2ec1c:
            if (local_140 != (int *******)0x0) {
              local_7c = local_15c;
              local_80 = local_140;
              local_84 = local_11c;
              local_14c = (int *******)0x0;
              if (bVar3) {
                local_14c = local_164;
              }
              local_88 = local_118;
              local_78 = local_14c;
              local_74 = unaff_r10;
              if (local_90 != 0) {
                local_11c = (int *******)FUN_00f2c2f0(iVar31,&DAT_01887430,&DAT_018ab990);
                FUN_00d983b4(&local_88);
                local_118 = (int *******)0x0;
              }
              while( true ) {
                FUN_00f2cd78(&local_48,&local_b0);
                pppppppiVar33 = local_40;
                pppppppiVar32 = local_48;
                if (local_48 == (int *******)0x0) break;
                local_70 = &local_b0;
                if (local_48[(int)local_40 * 3 + 0x43] != (int ******)0x0) {
                  thunk_FUN_016d3fb4(local_48[(int)local_40 * 3 + 0x44]);
                }
                FUN_00f2cf28(pppppppiVar32 + (int)pppppppiVar33 * 6);
              }
              local_154 = local_15c;
              local_158 = local_140;
              local_150 = unaff_r10;
              goto joined_r0x00f2ecfc;
            }
            local_6c = (int *******)&DAT_00000004;
            local_70 = (int *******)0x568198;
            local_44 = (int *******)&DAT_0157d360;
            local_48 = (int *******)&local_70;
            pppppppiVar32 = (int *******)FUN_00f56780(&DAT_0057a25d,&local_48);
            pppppppiVar33 = local_11c;
            pppppppiVar21 = local_118;
            if (local_11c == (int *******)0x0) {
              local_11c = (int *******)0x0;
            }
            else {
              do {
                *(char *)pppppppiVar21 = '\0';
                pppppppiVar33 = (int *******)((int)pppppppiVar33 + -1);
                pppppppiVar21 = (int *******)((int)pppppppiVar21 + 1);
              } while (pppppppiVar33 != (int *******)0x0);
              thunk_FUN_016d3fb4(local_118);
            }
            local_140 = (int *******)0x0;
            bVar2 = false;
          }
LAB_00f2ef4c:
          pppppppiVar33 = (int *******)0x0;
          if (bVar3) {
            pppppppiVar33 = local_164;
          }
          if ((bVar3 && pppppppiVar33 != (int *******)0x0) && (unaff_r10 != (int *******)0x0)) {
            pppppppiVar21 = (int *******)0x0;
            do {
              *(char *)((int)pppppppiVar33 + (int)pppppppiVar21) = '\0';
              pppppppiVar21 = (int *******)((int)pppppppiVar21 + 1);
            } while (unaff_r10 != pppppppiVar21);
            thunk_FUN_016d3fb4();
          }
          pppppppiVar33 = local_11c;
          local_11c = pppppppiVar32;
          goto LAB_00f2ef98;
        }
        FUN_00f30340(&local_c8);
        local_c8 = *puVar16;
        uStack_c4 = puVar16[1];
        uStack_c0 = puVar16[2];
        uStack_bc = puVar16[3];
        uStack_b8 = puVar16[4];
        uStack_b4 = puVar16[5];
        if (unaff_r8 == (int *******)0x3) {
          iVar10 = thunk_FUN_016dd50a(pppppppiVar32,"url",3);
          cVar23 = '\0';
          if (iVar10 != 0) goto LAB_00f2ea78;
joined_r0x00f2e944:
          bVar2 = false;
          local_124 = cVar23;
        }
        else {
          if (unaff_r8 == (int *******)&DAT_00000004) {
            if (*pppppppiVar32 == (int ******)0x72657375) {
              bVar2 = false;
              local_124 = '\x01';
              goto joined_r0x00f2e944;
            }
          }
          else if ((unaff_r8 == (int *******)&DAT_00000008) &&
                  (iVar10 = thunk_FUN_016dd50a(pppppppiVar32,&DAT_0056aa78,8), iVar10 == 0)) {
            cVar23 = '\x02';
            goto joined_r0x00f2e944;
          }
LAB_00f2ea78:
          local_17c = (int *******)FUN_00f2c294(pppppppiVar32,unaff_r8,&DAT_0187e848,3);
          bVar2 = true;
        }
joined_r0x00f2e944:
        if (pppppppiVar33 != (int *******)0x0) {
          thunk_FUN_016d3fb4(pppppppiVar32);
        }
        if (bVar2) {
          bVar2 = true;
          pppppppiVar32 = local_17c;
          goto LAB_00f2ef4c;
        }
        cVar23 = (char)local_c8;
        if (local_124 == '\0') {
          if (local_118 != (int *******)0x0) {
            local_6c = (int *******)0x3;
            local_70 = (int *******)0x40971e;
            local_44 = (int *******)&DAT_0157d360;
            local_48 = (int *******)&local_70;
            pppppppiVar32 = (int *******)FUN_00f56780(&DAT_00582dbd,&local_48);
LAB_00f2f368:
            bVar2 = true;
            goto LAB_00f2ef4c;
          }
          uVar11 = local_c8 & 0xff;
          local_c8 = CONCAT31(local_c8._1_3_,6);
          if (uVar11 == 6) {
            pppppppiVar32 = (int *******)FUN_00f2c790();
          }
          else {
            local_48 = (int *******)CONCAT31(local_48._1_3_,cVar23);
            FUN_016dd1aa(uVar15,uVar14,0x17);
            FUN_00f2d284(&local_70,&local_48);
            local_118 = local_70;
            if (local_70 != (int *******)0x0) {
              local_11c = local_6c;
              goto LAB_00f2e868;
            }
            pppppppiVar32 = local_6c;
          }
          bVar2 = true;
          local_118 = (int *******)0x0;
          goto LAB_00f2ef4c;
        }
        if (local_124 != '\x01') {
          if (local_124 != '\x02') {
            if (local_118 == (int *******)0x0) goto LAB_00f2eefc;
            goto LAB_00f2ec1c;
          }
          if (bVar3) {
            local_6c = (int *******)&DAT_00000008;
            local_70 = (int *******)&DAT_0056aa78;
            local_44 = (int *******)&DAT_0157d360;
            local_48 = (int *******)&local_70;
            pppppppiVar32 = (int *******)FUN_00f56780(&DAT_00582dbd,&local_48);
            goto LAB_00f2f368;
          }
          uVar11 = local_c8 & 0xff;
          local_c8 = CONCAT31(local_c8._1_3_,6);
          pppppppiVar33 = local_11c;
          if (uVar11 == 6) {
            pppppppiVar32 = (int *******)FUN_00f2c790();
            bVar2 = true;
            local_11c = pppppppiVar32;
            goto LAB_00f2ef98;
          }
          local_48 = (int *******)CONCAT31(local_48._1_3_,cVar23);
          FUN_016dd1aa(uVar15,uVar14,0x17);
          if (uVar11 != 0) goto code_r0x00f2eaec;
          FUN_00f33f88(&local_48);
          bVar3 = true;
          local_164 = (int *******)0x0;
          goto LAB_00f2e868;
        }
        if (local_140 != (int *******)0x0) {
          local_6c = (int *******)&DAT_00000004;
          local_70 = (int *******)0x568198;
          local_44 = (int *******)&DAT_0157d360;
          local_48 = (int *******)&local_70;
          pppppppiVar32 = (int *******)FUN_00f56780(&DAT_00582dbd,&local_48);
          goto LAB_00f2f368;
        }
        local_c8 = CONCAT31(local_c8._1_3_,6);
        if (cVar23 == '\x06') {
          pppppppiVar32 = (int *******)FUN_00f2c790();
        }
        else {
          local_48 = (int *******)CONCAT31(local_48._1_3_,cVar23);
          FUN_016dd1aa(uVar15,uVar14,0x17);
          FUN_00f2d284(&local_70,&local_48);
          local_140 = local_70;
          if (local_70 != (int *******)0x0) {
            local_15c = local_6c;
            goto LAB_00f2e868;
          }
          pppppppiVar32 = local_6c;
        }
        bVar2 = true;
        local_140 = (int *******)0x0;
        goto LAB_00f2ef4c;
      }
      local_11c = (int *******)FUN_00f36124(local_e0,&uStack_25,&DAT_0187e948);
      if ((bVar1 & 6) != 4) {
        FUN_00f3615c(local_e0);
      }
      goto LAB_00f2f4c4;
    }
  }
  iVar31 = local_100;
  if (local_fc < local_104) {
    if (local_fc != (int *******)0x0) {
      iVar10 = (int)local_fc * 0x18;
      iVar31 = thunk_FUN_016d4ea4(local_100,iVar10);
      if (iVar31 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar10);
      }
      goto LAB_00f2f490;
    }
    thunk_FUN_016d3fb4(local_100);
    iVar31 = 4;
  }
  else {
LAB_00f2f490:
    if (&DAT_0000ffff < pppppppiVar32) {
      pcVar28 = (char *)((int)pppppppiVar32 + 1);
      iVar10 = iVar31;
      while (pcVar28 = pcVar28 + -1, pcVar28 != (char *)0x0) {
        FUN_00d983b4(iVar10);
        iVar10 = iVar10 + 0x18;
      }
      thunk_FUN_016d3fb4(iVar31);
      local_11c = (int *******)FUN_00f2c2f0(pppppppiVar32,"",&DAT_018abad0);
      goto LAB_00f2f524;
    }
  }
  if (pbVar9 != pbVar18) {
    local_11c = (int *******)FUN_00f2c2f0(pppppppiVar26,&DAT_0188738c,&DAT_018ab990);
    FUN_00f3010c(iVar31,pppppppiVar32);
    goto LAB_00f2f524;
  }
  local_11c = pppppppiVar32;
  goto LAB_00f2f548;
code_r0x00f2eaec:
  FUN_00f2d284(&local_70,&local_48);
  if (local_70 != (int *******)0x0) {
    local_164 = local_70;
    unaff_r10 = local_6c;
  }
  else {
    local_164 = local_6c;
  }
  bVar2 = true;
  bVar3 = bVar2;
  if (local_70 == (int *******)0x0) goto LAB_00f2f31c;
  goto LAB_00f2e868;
LAB_00f2f31c:
  local_11c = local_164;
LAB_00f2ef98:
  if ((local_140 != (int *******)0x0) && (local_15c != (int *******)0x0)) {
    pppppppiVar32 = (int *******)0x0;
    do {
      *(char *)((int)local_140 + (int)pppppppiVar32) = '\0';
      pppppppiVar32 = (int *******)((int)pppppppiVar32 + 1);
    } while (local_15c != pppppppiVar32);
    thunk_FUN_016d3fb4();
  }
  if (((bool)(bVar2 & local_118 != (int *******)0x0)) && (pppppppiVar33 != (int *******)0x0)) {
    pppppppiVar32 = (int *******)0x0;
    do {
      *(char *)((int)local_118 + (int)pppppppiVar32) = '\0';
      pppppppiVar32 = (int *******)((int)pppppppiVar32 + 1);
    } while (pppppppiVar33 != pppppppiVar32);
    thunk_FUN_016d3fb4();
  }
  while (ppppppiVar4 = local_b0, local_90 != 0) {
    local_90 = local_90 + -1;
    if (local_b0 != (int ******)0x1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af368);
    }
    pppppppiVar32 = local_a8;
    pppppppiVar33 = local_a4;
    if (local_ac == (int *******)0x0) {
      for (; pppppppiVar33 != (int *******)0x0;
          pppppppiVar33 = (int *******)((int)pppppppiVar33 + -1)) {
        pppppppiVar32 = (int *******)pppppppiVar32[0x66];
      }
      pppppppiVar33 = (int *******)0x0;
      pppppppiVar21 = (int *******)0x0;
      local_b0 = (int ******)0x1;
      if (*(short *)((int)pppppppiVar32 + 0x192) != 0) goto LAB_00f2f068;
LAB_00f2f0a8:
      do {
        pppppppiVar25 = (int *******)pppppppiVar32[0x42];
        if (pppppppiVar25 == (int *******)0x0) {
          thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af358);
        }
        pppppppiVar33 = (int *******)(uint)*(ushort *)(pppppppiVar32 + 100);
        thunk_FUN_016d3fb4();
        pppppppiVar21 = (int *******)((int)pppppppiVar21 + 1);
        pppppppiVar32 = pppppppiVar25;
      } while ((int *******)(uint)*(ushort *)((int)pppppppiVar25 + 0x192) <= pppppppiVar33);
    }
    else {
      pppppppiVar32 = local_ac;
      pppppppiVar21 = local_a8;
      if ((int *******)(uint)*(ushort *)((int)local_ac + 0x192) <= local_a4) goto LAB_00f2f0a8;
LAB_00f2f068:
      pppppppiVar25 = pppppppiVar32;
    }
    if (pppppppiVar21 == (int *******)0x0) {
      local_a4 = (int *******)((int)pppppppiVar33 + 1);
      local_ac = pppppppiVar25;
    }
    else {
      pppppppiVar32 = pppppppiVar25 + (int)((int)pppppppiVar33 + 0x67);
      do {
        local_ac = (int *******)*pppppppiVar32;
        pppppppiVar21 = (int *******)((int)pppppppiVar21 + -1);
        pppppppiVar32 = local_ac + 0x66;
      } while (pppppppiVar21 != (int *******)0x0);
      local_a4 = (int *******)0x0;
    }
    local_a8 = (int *******)0x0;
    local_48 = &local_b0;
    if (pppppppiVar25[(int)pppppppiVar33 * 3 + 0x43] != (int ******)0x0) {
      thunk_FUN_016d3fb4(pppppppiVar25[(int)pppppppiVar33 * 3 + 0x44]);
    }
    FUN_00f2cf28(pppppppiVar25 + (int)pppppppiVar33 * 6);
  }
  local_b0 = (int ******)0x0;
  if (((uint)ppppppiVar4 & 1) != 0) {
    pppppppiVar32 = local_ac;
    pppppppiVar21 = local_a8;
    pppppppiVar33 = local_a4;
    if (local_ac == (int *******)0x0) {
      for (; pppppppiVar32 = pppppppiVar21, pppppppiVar33 != (int *******)0x0;
          pppppppiVar33 = (int *******)((int)pppppppiVar33 + -1)) {
        pppppppiVar21 = (int *******)pppppppiVar32[0x66];
      }
    }
    pppppppiVar33 = pppppppiVar32;
    pppppppiVar21 = (int *******)pppppppiVar32[0x42];
    if ((int *******)pppppppiVar32[0x42] != (int *******)0x0) {
      do {
        pppppppiVar32 = pppppppiVar21;
        thunk_FUN_016d3fb4(pppppppiVar33);
        pppppppiVar33 = pppppppiVar32;
        pppppppiVar21 = (int *******)pppppppiVar32[0x42];
      } while ((int *******)pppppppiVar32[0x42] != (int *******)0x0);
    }
    thunk_FUN_016d3fb4(pppppppiVar32);
  }
  local_118 = (int *******)0x0;
joined_r0x00f2ecfc:
  if ((char)local_c8 != '\x06') {
    FUN_00f33f88(&local_c8);
  }
LAB_00f2f1c4:
  unaff_r8 = local_fc;
  if (local_118 != (int *******)0x0) {
    local_e4 = local_150;
    local_e8 = local_14c;
    local_ec = local_154;
    local_f0 = local_158;
    local_f4 = local_11c;
    local_f8 = local_118;
    if (local_fc == local_104) {
      FUN_00f30420(&local_104);
    }
    puVar19 = (undefined4 *)(local_100 + (int)unaff_r8 * 0x18);
    *puVar19 = local_f8;
    puVar19[1] = local_f4;
    puVar19[2] = local_f0;
    puVar19[3] = local_ec;
    puVar19[4] = local_e8;
    puVar19[5] = local_e4;
    local_fc = (int *******)((int)unaff_r8 + 1);
    local_110 = pbVar18;
    goto LAB_00f2e7b4;
  }
LAB_00f2f4c4:
  pcVar28 = (char *)((int)local_fc + 1);
  iVar31 = local_100;
  while (pcVar28 = pcVar28 + -1, pcVar28 != (char *)0x0) {
    FUN_00d983b4(iVar31);
    iVar31 = iVar31 + 0x18;
  }
  if (local_104 != (int *******)0x0) {
    thunk_FUN_016d3fb4(local_100);
  }
LAB_00f2f524:
  iVar31 = 0;
LAB_00f2f548:
  iVar10 = ((uint)((int)pbVar9 - (int)pbVar18) >> 3) * -0x55555555 + 1;
  while (iVar10 = iVar10 + -1, iVar10 != 0) {
    FUN_00f3615c(pbVar18);
    pbVar18 = pbVar18 + 0x18;
  }
  if (iVar13 != 0) {
    thunk_FUN_016d3fb4(pbVar8);
  }
  cVar23 = *param_2;
LAB_00f2f59c:
  if (cVar23 != '\x04') {
    FUN_00f3615c(param_2);
  }
  *param_1 = iVar31;
  param_1[1] = (int)local_11c;
  return;
}

