// FUN_00c64ee0 @ 00c64ee0 size=2480 calls_out=16 calls_in=1
// strings: chip_params_setstruct Profile with 4 elementsstruct Registry with 2 elementsstruct ChainProfile with 4 elementsstruct Configuration with 3 elementsstruct MultiConfiguration with 7 elementsstruct McrDatastruct McrData with 4 elements | voltage | chip_params_setstruct Profile with 4 elementsstruct Registry with 2 elementsstruct ChainProfile with 4 elementsstruct Configuration with 3 elementsstruct MultiConfiguration with 7 elementsstruct McrDatastruct McrData with 4 elements | chip_params_setstruct Profile with 4 elementsstruct Registry with 2 elementsstruct ChainProfile with 4 elementsstruct Configuration with 3 elementsstruct MultiConfiguration with 7 elementsstruct McrDatastruct McrData with 4 elements | voltage | voltage

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c64ee0(double *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  char *******pppppppcVar3;
  char *******pppppppcVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  char *******pppppppcVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char *******pppppppcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 unaff_r8;
  int unaff_r10;
  char *******pppppppcVar19;
  int unaff_r11;
  char *******pppppppcVar20;
  bool bVar21;
  uint in_fpscr;
  double unaff_d9;
  double dVar22;
  ulonglong uVar23;
  int local_114;
  char *******local_110;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  char ******local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 local_c4;
  char ******local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  char *******local_a8;
  char *******pppppppcStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char *******local_90;
  char *******local_8c;
  int local_88;
  char *******local_80;
  char *******local_7c;
  int local_78;
  char *******local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_64 [2];
  int local_5c;
  char *******local_58;
  char *******local_54;
  int local_50;
  char *******local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_39;
  
  bVar1 = *param_2;
  if (bVar1 != 4) {
    if (bVar1 == 5) {
      local_c8 = *(int *)(param_2 + 4);
      local_c4 = *(undefined4 *)(param_2 + 8);
      iVar11 = *(int *)(param_2 + 0xc);
      local_e8 = CONCAT31(local_e8._1_3_,6);
      local_b0 = 0;
      if (local_c8 != 0) {
        local_b0 = iVar11;
      }
      local_d0 = (char ******)(uint)(local_c8 != 0);
      uVar5 = (uint)&local_58 | 1;
      puVar6 = (undefined4 *)((uint)&local_80 | 4);
      puVar7 = (undefined4 *)((uint)&local_58 | 4);
      uVar10 = (uint)&local_e8 | 1;
      bVar21 = false;
      local_bc = 0;
      local_cc = 0;
      local_90 = (char *******)0x80000000;
      local_c0 = local_d0;
      local_b8 = local_c8;
      local_b4 = local_c4;
      pppppppcVar9 = (char *******)&DAT_80000000;
LAB_00c64fb4:
      FUN_00c3b8fc(local_64,&local_d0);
      if (local_64[0] != 0) {
        puVar12 = (undefined4 *)(local_64[0] + local_5c * 0x18);
        iVar8 = local_64[0] + local_5c * 0xc;
        unaff_r10 = *(int *)(iVar8 + 0x10c);
        unaff_r8 = *(undefined4 *)(iVar8 + 0x110);
        unaff_r11 = *(int *)(iVar8 + 0x114);
        uVar13 = puVar12[1];
        uVar14 = puVar12[2];
        uVar16 = puVar12[3];
        uVar17 = puVar12[4];
        uVar18 = puVar12[5];
        *puVar7 = *puVar12;
        puVar7[1] = uVar13;
        puVar7[2] = uVar14;
        puVar7[3] = uVar16;
        puVar7[4] = uVar17;
        puVar7[5] = uVar18;
        local_80 = local_58;
        local_7c = local_54;
        local_78 = local_50;
        local_74 = local_4c;
        uStack_70 = uStack_48;
        uStack_6c = uStack_44;
        uStack_68 = uStack_40;
      }
      if (local_64[0] == 0 || unaff_r10 == -0x80000000) {
LAB_00c65254:
        local_88 = local_114;
        local_8c = local_110;
        if (pppppppcVar9 != (char *******)&DAT_80000000) {
          if (!bVar21) {
            local_7c = (char *******)&DAT_00000007;
            local_54 = (char *******)&DAT_0157d360;
            local_58 = (char *******)&local_80;
            local_80 = (char *******)0x359e14;
            local_90 = pppppppcVar9;
            uVar13 = FUN_00f56780(&DAT_0057a25d,&local_58);
            pppppppcVar19 = local_110 + 4;
            *(undefined4 *)(param_1 + 1) = 0x80000000;
            *(undefined4 *)param_1 = uVar13;
            for (; local_114 != 0; local_114 = local_114 + -1) {
              if (pppppppcVar19[-4] != (char ******)0x0) {
                thunk_FUN_016d3fb4(pppppppcVar19[-3]);
              }
              if (pppppppcVar19[-1] != (char ******)0x0) {
                thunk_FUN_016d3fb4(*pppppppcVar19);
              }
              pppppppcVar19 = pppppppcVar19 + 6;
            }
            goto joined_r0x00c65448;
          }
          *param_1 = unaff_d9;
          *(char ********)(param_1 + 1) = pppppppcVar9;
          *(char ********)((int)param_1 + 0xc) = local_110;
          *(int *)(param_1 + 2) = local_114;
          local_90 = pppppppcVar9;
          if (pppppppcVar9 != (char *******)&DAT_80000000) {
            local_a8 = *(char ********)param_1;
            pppppppcStack_a4 = *(char ********)((int)param_1 + 4);
            iStack_a0 = *(int *)(param_1 + 1);
            uStack_9c = *(undefined4 *)((int)param_1 + 0xc);
            uStack_98 = *(undefined4 *)(param_1 + 2);
            uStack_94 = *(undefined4 *)((int)param_1 + 0x14);
            if (local_b0 != 0) {
              uVar13 = FUN_00f2c2f0(iVar11,&DAT_01887430,&DAT_018ab990);
              *(undefined4 *)param_1 = uVar13;
              *(undefined4 *)(param_1 + 1) = 0x80000000;
              FUN_00b9d938(&local_a8);
            }
            while (FUN_00c3b8fc(&local_58,&local_d0), iVar11 = local_50, pppppppcVar9 = local_58,
                  local_58 != (char *******)0x0) {
              local_80 = &local_d0;
              if (local_58[local_50 * 3 + 0x43] != (char ******)0x0) {
                thunk_FUN_016d3fb4(local_58[local_50 * 3 + 0x44]);
              }
              FUN_00c436d0(pppppppcVar9 + iVar11 * 6);
            }
            goto LAB_00c654a4;
          }
          goto LAB_00c65454;
        }
        local_7c = (char *******)&DAT_0000000f;
        local_54 = (char *******)&DAT_0157d360;
        local_58 = (char *******)&local_80;
        local_80 = (char *******)0x357c2f;
        local_90 = pppppppcVar9;
        pppppppcVar9 = (char *******)FUN_00f56780(&DAT_0057a25d,&local_58);
      }
      else {
        if ((char)local_e8 != '\x06') {
          FUN_00d4fc54(&local_e8);
        }
        local_e8 = *puVar6;
        uStack_e4 = puVar6[1];
        uStack_e0 = puVar6[2];
        uStack_dc = puVar6[3];
        uStack_d8 = puVar6[4];
        uStack_d4 = puVar6[5];
        if (unaff_r11 == 7) {
          iVar8 = thunk_FUN_016dd50a(unaff_r8,"voltage",7);
          if (iVar8 != 0) goto LAB_00c6508c;
          iVar8 = 1;
        }
        else if ((unaff_r11 == 0xf) &&
                (iVar8 = thunk_FUN_016dd50a(unaff_r8,
                                            "chip_params_setstruct Profile with 4 elementsstruct Registry with 2 elementsstruct ChainProfile with 4 elementsstruct Configuration with 3 elementsstruct MultiConfiguration with 7 elementsstruct McrDatastruct McrData with 4 elements"
                                            ,0xf), iVar8 == 0)) {
          iVar8 = 0;
        }
        else {
LAB_00c6508c:
          iVar8 = 2;
        }
        if (unaff_r10 != 0) {
          thunk_FUN_016d3fb4(unaff_r8);
        }
        cVar2 = (char)local_e8;
        if (iVar8 == 2) {
          local_e8 = CONCAT31(local_e8._1_3_,6);
          if (cVar2 != '\x06') goto code_r0x00c650bc;
          local_88 = local_114;
          local_8c = local_110;
          local_90 = pppppppcVar9;
          uVar13 = FUN_00c4c3ec(&DAT_00565810,0x10);
LAB_00c65650:
          *(undefined4 *)(param_1 + 1) = 0x80000000;
          *(undefined4 *)param_1 = uVar13;
          if (pppppppcVar9 != (char *******)&DAT_80000000) {
            pppppppcVar19 = local_110 + 4;
            for (; local_114 != 0; local_114 = local_114 + -1) {
              if (pppppppcVar19[-4] != (char ******)0x0) {
                thunk_FUN_016d3fb4(pppppppcVar19[-3]);
              }
              if (pppppppcVar19[-1] != (char ******)0x0) {
                thunk_FUN_016d3fb4(*pppppppcVar19);
              }
              pppppppcVar19 = pppppppcVar19 + 6;
            }
joined_r0x00c65448:
            if (pppppppcVar9 != (char *******)0x0) {
              thunk_FUN_016d3fb4(local_110);
            }
          }
LAB_00c65454:
          while (FUN_00c3b8fc(&local_58,&local_d0), iVar11 = local_50, pppppppcVar9 = local_58,
                local_58 != (char *******)0x0) {
            local_80 = &local_d0;
            if (local_58[local_50 * 3 + 0x43] != (char ******)0x0) {
              thunk_FUN_016d3fb4(local_58[local_50 * 3 + 0x44]);
            }
            FUN_00c436d0(pppppppcVar9 + iVar11 * 6);
          }
LAB_00c654a4:
          if ((char)local_e8 != '\x06') {
            FUN_00c01f94(&local_e8);
          }
          goto LAB_00c654b8;
        }
        if (iVar8 != 0) {
          if (iVar8 != 1) goto LAB_00c65254;
          if (bVar21) {
            local_88 = local_114;
            local_8c = local_110;
            local_7c = (char *******)&DAT_00000007;
            local_54 = (char *******)&DAT_0157d360;
            local_58 = (char *******)&local_80;
            local_80 = (char *******)0x359e14;
            local_90 = pppppppcVar9;
            uVar13 = FUN_00f56780(&DAT_00582dbd,&local_58);
            goto LAB_00c65650;
          }
          bVar21 = (char)local_e8 == '\x06';
          local_e8 = CONCAT31(local_e8._1_3_,6);
          if (bVar21) {
            local_88 = local_114;
            local_8c = local_110;
            local_90 = pppppppcVar9;
            uVar13 = FUN_00c4c3ec(&DAT_00565810,0x10);
            goto LAB_00c65650;
          }
          local_58 = (char *******)CONCAT31(local_58._1_3_,cVar2);
          FUN_016dd1aa(uVar5,uVar10,0x17);
          uVar23 = FUN_00c64b70(&local_58);
          uVar13 = (undefined4)(uVar23 >> 0x20);
          if ((uVar23 & 1) != 0) {
            local_88 = local_114;
            local_8c = local_110;
            local_90 = pppppppcVar9;
            goto LAB_00c65650;
          }
          bVar21 = true;
          dVar22 = (double)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
          unaff_d9 = dVar22 / 1000.0;
          goto LAB_00c64fb4;
        }
        if (pppppppcVar9 != (char *******)&DAT_80000000) {
          local_88 = local_114;
          local_8c = local_110;
          local_7c = (char *******)&DAT_0000000f;
          local_54 = (char *******)&DAT_0157d360;
          local_58 = (char *******)&local_80;
          local_80 = (char *******)0x357c2f;
          local_90 = pppppppcVar9;
          uVar13 = FUN_00f56780(&DAT_00582dbd,&local_58);
          goto LAB_00c65650;
        }
        local_e8 = CONCAT31(local_e8._1_3_,6);
        if (cVar2 == '\x06') {
          local_88 = local_114;
          local_8c = local_110;
          local_90 = (char *******)&DAT_80000000;
          pppppppcVar9 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
          goto LAB_00c652ac;
        }
        local_58 = (char *******)CONCAT31(local_58._1_3_,cVar2);
        FUN_016dd1aa(uVar5,uVar10,0x17);
        FUN_00c4e9c8(&local_80,&local_58);
        if (local_80 != (char *******)&DAT_80000000) {
          local_114 = local_78;
          local_110 = local_7c;
          pppppppcVar9 = local_80;
          goto LAB_00c64fb4;
        }
        local_88 = local_114;
        local_8c = local_110;
        local_90 = (char *******)&DAT_80000000;
        pppppppcVar9 = local_7c;
      }
LAB_00c652ac:
      *(undefined4 *)(param_1 + 1) = 0x80000000;
      *(char ********)param_1 = pppppppcVar9;
      goto LAB_00c65454;
    }
    uVar13 = FUN_00f36124(param_2,&uStack_39,&DAT_01873e58);
    *(undefined4 *)(param_1 + 1) = 0x80000000;
    *(undefined4 *)param_1 = uVar13;
    goto LAB_00c654b8;
  }
  iVar8 = *(int *)(param_2 + 0xc);
  iVar11 = *(int *)(param_2 + 4);
  pppppppcVar19 = *(char ********)(param_2 + 8);
  pppppppcVar9 = pppppppcVar19 + iVar8 * 6;
  local_54 = pppppppcVar19;
  local_58 = pppppppcVar19;
  local_50 = iVar11;
  local_4c = pppppppcVar9;
  if (iVar8 == 0) {
LAB_00c651fc:
    pppppppcVar20 = local_54;
    uVar13 = FUN_00f2c2f0(0,&DAT_01877808,&DAT_018ab990);
    *(undefined4 *)(param_1 + 1) = 0x80000000;
    *(undefined4 *)param_1 = uVar13;
  }
  else {
    pppppppcVar20 = pppppppcVar19 + 6;
    local_54 = pppppppcVar20;
    if (*(char *)pppppppcVar19 == '\x06') goto LAB_00c651fc;
    uVar5 = (uint)&local_e8 | 1;
    local_e8 = CONCAT31(local_e8._1_3_,*(char *)pppppppcVar19);
    FUN_016dd1aa(uVar5,(char *)((int)pppppppcVar19 + 1),0x17);
    FUN_00c4e9c8(&local_80,&local_e8);
    pppppppcVar4 = local_7c;
    pppppppcVar3 = local_80;
    if (local_80 == (char *******)&DAT_80000000) {
      *(undefined4 *)(param_1 + 1) = 0x80000000;
      *(char ********)param_1 = local_7c;
    }
    else {
      local_a8 = local_80;
      pppppppcStack_a4 = local_7c;
      iStack_a0 = local_78;
      if (iVar8 == 1) {
LAB_00c65510:
        uVar13 = FUN_00f2c2f0(1,&DAT_01877808,&DAT_018ab990);
      }
      else {
        pppppppcVar20 = pppppppcVar19 + 0xc;
        local_54 = pppppppcVar20;
        if (*(char *)(pppppppcVar19 + 6) == '\x06') goto LAB_00c65510;
        local_e8 = CONCAT31(local_e8._1_3_,*(char *)(pppppppcVar19 + 6));
        FUN_016dd1aa(uVar5,(char *)((int)pppppppcVar19 + 0x19),0x17);
        uVar23 = FUN_00c64b70(&local_e8);
        uVar13 = (undefined4)(uVar23 >> 0x20);
        if ((uVar23 & 1) == 0) {
          dVar22 = (double)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
          *(char ********)(param_1 + 1) = local_a8;
          *(char ********)((int)param_1 + 0xc) = pppppppcStack_a4;
          *(int *)(param_1 + 2) = iStack_a0;
          *param_1 = dVar22 / 1000.0;
          if (local_a8 != (char *******)&DAT_80000000) {
            local_e8 = *(undefined4 *)param_1;
            uStack_e4 = *(undefined4 *)((int)param_1 + 4);
            uStack_e0 = *(undefined4 *)(param_1 + 1);
            uStack_dc = *(undefined4 *)((int)param_1 + 0xc);
            uStack_d8 = *(undefined4 *)(param_1 + 2);
            uStack_d4 = *(undefined4 *)((int)param_1 + 0x14);
            if (iVar8 != 2) {
              uVar13 = FUN_00f2c2f0(iVar8,&DAT_0188738c,&DAT_018ab990);
              *(undefined4 *)param_1 = uVar13;
              *(undefined4 *)(param_1 + 1) = 0x80000000;
              FUN_00d4fec0(&local_e8);
            }
          }
          goto LAB_00c65224;
        }
      }
      pppppppcVar15 = pppppppcVar4 + 4;
      *(undefined4 *)(param_1 + 1) = 0x80000000;
      *(undefined4 *)param_1 = uVar13;
      for (iVar8 = local_78; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (pppppppcVar15[-4] != (char ******)0x0) {
          thunk_FUN_016d3fb4(pppppppcVar15[-3]);
        }
        if (pppppppcVar15[-1] != (char ******)0x0) {
          thunk_FUN_016d3fb4(*pppppppcVar15);
        }
        pppppppcVar15 = pppppppcVar15 + 6;
      }
      if (pppppppcVar3 != (char *******)0x0) {
        thunk_FUN_016d3fb4(pppppppcVar4);
      }
    }
  }
LAB_00c65224:
  FUN_00ce0380(pppppppcVar20,((uint)((int)pppppppcVar9 - (int)pppppppcVar20) >> 3) * -0x55555555);
  if (iVar11 != 0) {
    thunk_FUN_016d3fb4(pppppppcVar19);
  }
LAB_00c654b8:
  if ((bVar1 & 6) != 4) {
    FUN_00c01f94(param_2);
  }
  return;
code_r0x00c650bc:
  local_58 = (char *******)CONCAT31(local_58._1_3_,cVar2);
  FUN_016dd1aa(uVar5,uVar10,0x17);
  FUN_00c01f94(&local_58);
  goto LAB_00c64fb4;
}

