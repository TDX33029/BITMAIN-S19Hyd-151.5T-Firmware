// FUN_00cce790 @ 00cce790 size=2732 calls_out=20 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cce790(uint *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  char *******pppppppcVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  char *******pppppppcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  char *******pppppppcVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  char *******pppppppcVar25;
  char *******pppppppcVar26;
  char *******pppppppcVar27;
  char *******unaff_r11;
  int local_164;
  char *******local_160;
  char *******local_15c;
  int local_158;
  int local_150;
  char *******local_14c;
  char *******local_148;
  int local_144;
  byte *local_114;
  uint local_108;
  uint local_104;
  uint local_100;
  char *******local_f8;
  char *******local_f4;
  int local_f0;
  char *******local_ec;
  char *******local_e8;
  int local_e4;
  byte local_e0 [4];
  int local_dc;
  char *******pppppppcStack_d8;
  int iStack_d4;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  char ******local_b0;
  undefined4 local_ac;
  int local_a8;
  char *******local_a4;
  char ******local_a0;
  undefined4 local_9c;
  int local_98;
  char *******local_94;
  int local_90;
  char *******local_88;
  char *******local_84;
  int local_80;
  char *******local_7c;
  char *******local_78;
  int local_74;
  char *******local_70;
  char *******local_6c;
  int local_68;
  char *******local_64;
  char *******pppppppcStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int local_54 [2];
  int local_4c;
  char *******local_48;
  char *******local_44;
  int local_40;
  char *******local_3c;
  char *******local_38;
  int local_34;
  undefined4 uStack_30;
  undefined1 uStack_25;
  
  if (*param_2 != '\x04') {
    uVar10 = FUN_00f36124(param_2,&uStack_25,&DAT_01873d98);
    *param_1 = 0x80000000;
    param_1[1] = uVar10;
    FUN_00c01f94(param_2);
    return;
  }
  iVar6 = *(int *)(param_2 + 4);
  pbVar17 = *(byte **)(param_2 + 8);
  uVar11 = *(uint *)(param_2 + 0xc);
  uVar10 = 0xaaaa;
  if (uVar11 < 0xaaaa) {
    uVar10 = uVar11;
  }
  pbVar7 = pbVar17 + uVar11 * 0x18;
  if (uVar11 == 0) {
    local_104 = 4;
    uVar10 = 0;
  }
  else {
    local_104 = thunk_FUN_016d4a50(uVar10 * 0x18);
    if (local_104 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar10 * 0x18);
    }
  }
  uVar12 = (uint)&local_c8 | 1;
  uVar13 = (uint)&local_48 | 1;
  local_100 = 0;
  puVar14 = (uint *)((uint)&local_70 | 4);
  puVar15 = (undefined4 *)((uint)&local_48 | 4);
  local_114 = pbVar17;
  local_108 = uVar10;
  do {
    if (local_114 == pbVar7) {
      pbVar16 = pbVar7;
LAB_00ccf0bc:
      *param_1 = local_108;
      param_1[1] = local_104;
      param_1[2] = local_100;
      if (local_108 != 0x80000000) {
        local_c8 = *param_1;
        uStack_c4 = param_1[1];
        uStack_c0 = param_1[2];
        if (pbVar7 != pbVar16) {
          uVar10 = FUN_00f2c2f0(uVar11,&DAT_0188738c,&DAT_018ab990);
          *param_1 = 0x80000000;
          param_1[1] = uVar10;
          FUN_00d4fe54(&local_c8);
        }
      }
LAB_00ccf18c:
      FUN_00ce0380(pbVar16,((uint)((int)pbVar7 - (int)pbVar16) >> 3) * -0x55555555);
      if (iVar6 != 0) {
        thunk_FUN_016d3fb4(pbVar17);
      }
      return;
    }
    pbVar16 = local_114 + 0x18;
    bVar1 = *local_114;
    if (bVar1 == 6) {
      goto LAB_00ccf0bc;
    }
    local_e0[0] = bVar1;
    FUN_016dd1aa((uint)local_e0 | 1,local_114 + 1,0x17);
    iVar2 = iStack_d4;
    pppppppcVar25 = pppppppcStack_d8;
    iVar8 = local_dc;
    if (bVar1 != 4) {
      if (bVar1 == 5) {
        pppppppcVar20 = (char *******)&DAT_80000000;
        local_94 = pppppppcStack_d8;
        local_a4 = pppppppcStack_d8;
        local_c8 = CONCAT31(local_c8._1_3_,6);
        local_98 = local_dc;
        local_90 = 0;
        if (local_dc != 0) {
          local_90 = iStack_d4;
        }
        local_a8 = local_dc;
        local_b0 = (char ******)(uint)(local_dc != 0);
        local_9c = 0;
        local_ac = 0;
        local_a0 = local_b0;
        pppppppcVar25 = (char *******)&DAT_80000000;
LAB_00cce94c:
        FUN_00c3b8fc(local_54,&local_b0);
        pppppppcVar27 = (char *******)&local_48;
        pppppppcVar26 = pppppppcVar25;
        if (local_54[0] != 0) {
          puVar18 = (undefined4 *)(local_54[0] + local_4c * 0x18);
          iVar8 = local_54[0] + local_4c * 0xc;
          unaff_r11 = *(char ********)(iVar8 + 0x10c);
          pppppppcVar26 = *(char ********)(iVar8 + 0x110);
          pppppppcVar27 = *(char ********)(iVar8 + 0x114);
          uVar19 = puVar18[1];
          uVar21 = puVar18[2];
          uVar22 = puVar18[3];
          uVar23 = puVar18[4];
          uVar24 = puVar18[5];
          *puVar15 = *puVar18;
          puVar15[1] = uVar19;
          puVar15[2] = uVar21;
          puVar15[3] = uVar22;
          puVar15[4] = uVar23;
          puVar15[5] = uVar24;
          local_70 = local_48;
          local_6c = local_44;
          local_68 = local_40;
          local_64 = local_3c;
          pppppppcStack_60 = local_38;
          iStack_5c = local_34;
          uStack_58 = uStack_30;
        }
        if (local_54[0] == 0 || unaff_r11 == (char *******)&DAT_80000000) {
LAB_00ccec24:
          if (pppppppcVar20 != (char *******)&DAT_80000000) {
            if (pppppppcVar25 != (char *******)&DAT_80000000) {
              local_74 = local_164;
              local_78 = local_160;
              local_80 = local_158;
              local_84 = local_15c;
              local_88 = pppppppcVar20;
              local_7c = pppppppcVar25;
              if (local_90 != 0) {
                local_15c = (char *******)FUN_00f2c2f0(iVar2,&DAT_01887430,&DAT_018ab990);
                FUN_00c2db64(&local_88);
                pppppppcVar20 = (char *******)&DAT_80000000;
              }
              while( true ) {
                FUN_00c3b8fc(&local_48,&local_b0);
                iVar8 = local_40;
                pppppppcVar27 = local_48;
                if (local_48 == (char *******)0x0) break;
                local_70 = &local_b0;
                if (local_48[local_40 * 3 + 0x43] != (char ******)0x0) {
                  thunk_FUN_016d3fb4(local_48[local_40 * 3 + 0x44]);
                }
                FUN_00c436d0(pppppppcVar27 + iVar8 * 6);
              }
              local_150 = local_158;
              local_144 = local_164;
              local_148 = local_160;
              pppppppcVar27 = local_15c;
              local_14c = pppppppcVar25;
              goto joined_r0x00cceea8;
            }
            local_6c = (char *******)&DAT_00000010;
            local_70 = (char *******)&DAT_005654c0;
            local_44 = (char *******)&DAT_0157d360;
            local_48 = (char *******)&local_70;
            pppppppcVar27 = (char *******)FUN_00f56780(&DAT_0057a25d,&local_48);
            goto joined_r0x00ccece4;
          }
          local_6c = (char *******)&DAT_0000000f;
          local_70 = (char *******)&DAT_00354680;
          local_44 = (char *******)&DAT_0157d360;
          local_48 = (char *******)&local_70;
          pppppppcVar27 = (char *******)FUN_00f56780(&DAT_0057a25d,&local_48);
LAB_00ccec70:
          pppppppcVar20 = (char *******)0x0;
          goto joined_r0x00ccec78;
        }
        if ((char)local_c8 != '\x06') {
          FUN_00d4fc54(&local_c8);
        }
        local_c8 = *puVar14;
        uStack_c4 = puVar14[1];
        uStack_c0 = puVar14[2];
        uStack_bc = puVar14[3];
        uStack_b8 = puVar14[4];
        uStack_b4 = puVar14[5];
        if (pppppppcVar27 == (char *******)&DAT_00000010) {
          iVar8 = thunk_FUN_016dd50a(pppppppcVar26,&DAT_005654c0,0x10);
          if (iVar8 != 0) goto LAB_00ccea40;
          iVar8 = 1;
        }
        else if ((pppppppcVar27 == (char *******)&DAT_0000000f) &&
                (iVar8 = thunk_FUN_016dd50a(pppppppcVar26,&DAT_00354680,0xf), iVar8 == 0)) {
          iVar8 = 0;
        }
        else {
LAB_00ccea40:
          iVar8 = 2;
        }
        if (unaff_r11 != (char *******)0x0) {
          thunk_FUN_016d3fb4(pppppppcVar26);
        }
        cVar3 = (char)local_c8;
        if (iVar8 != 2) {
          if (iVar8 != 0) {
            if (iVar8 != 1) goto LAB_00ccec24;
            if (pppppppcVar25 != (char *******)&DAT_80000000) {
              local_6c = (char *******)&DAT_00000010;
              local_70 = (char *******)&DAT_005654c0;
              local_44 = (char *******)&DAT_0157d360;
              local_48 = (char *******)&local_70;
              pppppppcVar27 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_48);
              goto joined_r0x00ccf02c;
            }
            local_c8 = CONCAT31(local_c8._1_3_,6);
            if (cVar3 == '\x06') {
              pppppppcVar27 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
            }
            else {
              local_48 = (char *******)CONCAT31(local_48._1_3_,cVar3);
              FUN_016dd1aa(uVar13,uVar12,0x17);
              FUN_00ccf4d0(&local_70,&local_48);
              local_160 = local_6c;
              if (local_70 != (char *******)&DAT_80000000) break;
              pppppppcVar27 = local_6c;
            }
            goto LAB_00ccec8c;
          }
          if (pppppppcVar20 != (char *******)&DAT_80000000) {
            local_6c = (char *******)&DAT_0000000f;
            local_70 = (char *******)&DAT_00354680;
            local_44 = (char *******)&DAT_0157d360;
            local_48 = (char *******)&local_70;
            pppppppcVar27 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_48);
            goto joined_r0x00ccec78;
          }
          local_c8 = CONCAT31(local_c8._1_3_,6);
          if (cVar3 != '\x06') {
            local_48 = (char *******)CONCAT31(local_48._1_3_,cVar3);
            FUN_016dd1aa(uVar13,uVar12,0x17);
            FUN_00ccf7fc(&local_70,&local_48);
            pppppppcVar27 = local_6c;
            if (local_70 == (char *******)&DAT_80000000) goto LAB_00ccec70;
            local_158 = local_68;
            local_15c = local_6c;
            pppppppcVar20 = local_70;
            goto LAB_00cce94c;
          }
          pppppppcVar27 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
          goto LAB_00ccec70;
        }
        local_c8 = CONCAT31(local_c8._1_3_,6);
        if (cVar3 != '\x06') {
          local_48 = (char *******)CONCAT31(local_48._1_3_,cVar3);
          FUN_016dd1aa(uVar13,uVar12,0x17);
          FUN_00c01f94(&local_48);
          goto LAB_00cce94c;
        }
        pppppppcVar27 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
joined_r0x00ccec78:
        if (pppppppcVar25 != (char *******)&DAT_80000000) {
joined_r0x00ccf02c:
          if (pppppppcVar25 != (char *******)0x0) {
            thunk_FUN_016d3fb4(local_160);
          }
        }
LAB_00ccec8c:
        pppppppcVar20 = (char *******)((uint)pppppppcVar20 & 0x7fffffff);
joined_r0x00ccece4:
        if (pppppppcVar20 != (char *******)0x0) {
          thunk_FUN_016d3fb4(local_15c);
        }
        while( true ) {
          FUN_00c3b8fc(&local_48,&local_b0);
          iVar8 = local_40;
          pppppppcVar25 = local_48;
          if (local_48 == (char *******)0x0) break;
          local_70 = &local_b0;
          if (local_48[local_40 * 3 + 0x43] != (char ******)0x0) {
            thunk_FUN_016d3fb4(local_48[local_40 * 3 + 0x44]);
          }
          FUN_00c436d0(pppppppcVar25 + iVar8 * 6);
        }
        pppppppcVar20 = (char *******)&DAT_80000000;
joined_r0x00cceea8:
        if ((char)local_c8 != '\x06') {
          FUN_00c01f94(&local_c8);
        }
        goto LAB_00cceeb4;
      }
      pppppppcVar27 = (char *******)FUN_00f36124(local_e0,&uStack_25,&DAT_01873e38);
      if ((bVar1 & 6) != 4) {
        FUN_00c01f94(local_e0);
      }
LAB_00ccf120:
      uVar10 = local_104;
      *param_1 = 0x80000000;
      param_1[1] = (uint)pppppppcVar27;
      puVar15 = (undefined4 *)(local_104 + 0x10);
      for (uVar11 = local_100; uVar11 != 0; uVar11 = uVar11 - 1) {
        if (puVar15[-4] != 0) {
          thunk_FUN_016d3fb4(puVar15[-3]);
        }
        if (puVar15[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar15);
        }
        puVar15 = puVar15 + 6;
      }
      if (local_108 != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
      goto LAB_00ccf18c;
    }
    unaff_r11 = pppppppcStack_d8 + iStack_d4 * 6;
    local_68 = local_dc;
    local_6c = pppppppcStack_d8;
    local_70 = pppppppcStack_d8;
    local_64 = unaff_r11;
    if (iStack_d4 == 0) {
LAB_00ccebc0:
      pppppppcVar26 = local_6c;
      pppppppcVar27 = (char *******)FUN_00f2c2f0(0,&DAT_018777e0,&DAT_018ab990);
LAB_00ccebdc:
      pppppppcVar20 = (char *******)&DAT_80000000;
    }
    else {
      pppppppcVar26 = pppppppcStack_d8 + 6;
      local_6c = pppppppcVar26;
      if (*(char *)pppppppcStack_d8 == '\x06') goto LAB_00ccebc0;
      local_c8 = CONCAT31(local_c8._1_3_,*(char *)pppppppcStack_d8);
      FUN_016dd1aa(uVar12,(char *)((int)pppppppcStack_d8 + 1),0x17);
      FUN_00ccf7fc(&local_48,&local_c8);
      iVar5 = local_40;
      pppppppcVar27 = local_44;
      pppppppcVar20 = local_48;
      if (local_48 == (char *******)&DAT_80000000) goto LAB_00ccebdc;
      if (iVar2 == 1) {
LAB_00cceda4:
        pppppppcVar9 = (char *******)FUN_00f2c2f0(1,&DAT_018777e0,&DAT_018ab990);
joined_r0x00ccedcc:
        if (pppppppcVar20 == (char *******)0x0) {
          pppppppcVar20 = (char *******)&DAT_80000000;
          pppppppcVar27 = pppppppcVar9;
        }
        else {
          pppppppcVar20 = (char *******)&DAT_80000000;
          thunk_FUN_016d3fb4(pppppppcVar27);
          pppppppcVar27 = pppppppcVar9;
        }
      }
      else {
        pppppppcVar26 = pppppppcVar25 + 0xc;
        local_6c = pppppppcVar26;
        if (*(char *)(pppppppcVar25 + 6) == '\x06') goto LAB_00cceda4;
        local_c8 = CONCAT31(local_c8._1_3_,*(char *)(pppppppcVar25 + 6));
        FUN_016dd1aa(uVar12,(char *)((int)pppppppcVar25 + 0x19),0x17);
        FUN_00ccf4d0(&local_88,&local_c8);
        pppppppcVar9 = local_84;
        pppppppcVar4 = local_88;
        if (local_88 == (char *******)&DAT_80000000) goto joined_r0x00ccedcc;
        local_144 = local_80;
        local_34 = local_80;
        local_38 = local_84;
        local_3c = local_88;
        local_48 = pppppppcVar20;
        local_44 = pppppppcVar27;
        local_40 = iVar5;
        if (iVar2 != 2) {
          pppppppcVar27 = (char *******)FUN_00f2c2f0(iVar2,&DAT_0188738c,&DAT_018ab990);
          FUN_00d4c1a4(&local_48);
          pppppppcVar20 = (char *******)&DAT_80000000;
        }
        local_148 = pppppppcVar9;
        local_14c = pppppppcVar4;
        local_150 = iVar5;
      }
    }
    FUN_00ce0380(pppppppcVar26,((uint)((int)unaff_r11 - (int)pppppppcVar26) >> 3) * -0x55555555);
    if (iVar8 != 0) {
      thunk_FUN_016d3fb4(pppppppcVar25);
    }
LAB_00cceeb4:
    uVar10 = local_100;
    if ((int)pppppppcVar20 < -0x7ffffffe) goto LAB_00ccf120;
    local_e4 = local_144;
    local_e8 = local_148;
    local_ec = local_14c;
    local_f0 = local_150;
    local_f8 = pppppppcVar20;
    local_f4 = pppppppcVar27;
    if (local_100 == local_108) {
      FUN_009b6c80(&local_108);
    }
    puVar18 = (undefined4 *)(local_104 + uVar10 * 0x18);
    *puVar18 = local_f8;
    puVar18[1] = local_f4;
    puVar18[2] = local_f0;
    puVar18[3] = local_ec;
    puVar18[4] = local_e8;
    puVar18[5] = local_e4;
    local_100 = uVar10 + 1;
    local_114 = pbVar16;
  } while( true );
  local_164 = local_68;
  pppppppcVar25 = local_70;
  goto LAB_00cce94c;
}

