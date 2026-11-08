// FUN_00c66504 @ 00c66504 size=2292 calls_out=15 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c66504(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  char *******pppppppcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  char ******ppppppcVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char ******ppppppcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 unaff_r9;
  int unaff_r10;
  int unaff_r11;
  char ******ppppppcVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined4 local_118;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined4 *local_104;
  undefined4 *local_e4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint uStack_c0;
  uint uStack_bc;
  char ******local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  char ******local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  char *******local_70;
  char ******local_6c;
  undefined4 *local_68;
  char ******local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54 [2];
  int local_4c;
  char *******local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_25;
  
  bVar1 = *param_2;
  if (bVar1 != 4) {
    if (bVar1 == 5) {
      local_b0 = *(int *)(param_2 + 4);
      local_ac = *(undefined4 *)(param_2 + 8);
      iVar11 = *(int *)(param_2 + 0xc);
      local_d0 = CONCAT31(local_d0._1_3_,6);
      local_98 = 0;
      if (local_b0 != 0) {
        local_98 = iVar11;
      }
      local_b8 = (char ******)(uint)(local_b0 != 0);
      uVar5 = (uint)&local_48 | 1;
      puVar6 = (uint *)((uint)&local_70 | 4);
      puVar7 = (undefined4 *)((uint)&local_48 | 4);
      uVar10 = (uint)&local_d0 | 1;
      local_e4 = (undefined4 *)0x0;
      local_a4 = 0;
      local_b4 = 0;
      bVar4 = false;
      local_a8 = local_b8;
      local_a0 = local_b0;
      local_9c = local_ac;
LAB_00c665e4:
      FUN_00c3b8fc(local_54,&local_b8);
      if (local_54[0] != 0) {
        puVar12 = (undefined4 *)(local_54[0] + local_4c * 0x18);
        iVar8 = local_54[0] + local_4c * 0xc;
        unaff_r10 = *(int *)(iVar8 + 0x10c);
        unaff_r9 = *(undefined4 *)(iVar8 + 0x110);
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
        local_70 = local_48;
        local_6c = (char ******)local_44;
        local_68 = local_40;
        local_64 = (char ******)local_3c;
        uStack_60 = uStack_38;
        uStack_5c = uStack_34;
        uStack_58 = uStack_30;
      }
      if (local_54[0] == 0 || unaff_r10 == -0x80000000) {
LAB_00c668a4:
        uStack_74 = local_10c;
        local_7c = local_104;
        local_80 = local_e4;
        if (local_e4 != (undefined4 *)0x0) {
          if (!bVar4) {
            local_6c = (char ******)0x7;
            local_44 = &DAT_0157d360;
            local_48 = (char *******)&local_70;
            local_70 = (char *******)&DAT_00410ff9;
            uVar13 = FUN_00f56780(&DAT_0057a25d,&local_48);
            *param_1 = 1;
            param_1[1] = uVar13;
            FUN_00c47c6c(&local_7c);
            goto LAB_00c66abc;
          }
          param_1[1] = local_104;
          param_1[2] = local_108;
          local_90 = param_1[1];
          param_1[3] = local_10c;
          param_1[4] = local_118;
          uStack_8c = param_1[2];
          uStack_88 = param_1[3];
          uStack_84 = param_1[4];
          *param_1 = 0;
          if (local_98 == 0) {
            *param_1 = 0;
          }
          else {
            uVar13 = FUN_00f2c2f0(iVar11,&DAT_01887430,&DAT_018ab990);
            *param_1 = 1;
            param_1[1] = uVar13;
            FUN_00c47c6c(&local_90);
          }
          while( true ) {
            FUN_00c3b8fc(&local_48,&local_b8);
            puVar7 = local_40;
            pppppppcVar3 = local_48;
            if (local_48 == (char *******)0x0) break;
            local_70 = &local_b8;
            if (local_48[(int)local_40 * 3 + 0x43] != (char ******)0x0) {
              thunk_FUN_016d3fb4(local_48[(int)local_40 * 3 + 0x44]);
            }
            FUN_00c436d0(pppppppcVar3 + (int)puVar7 * 6);
          }
          goto LAB_00c66b2c;
        }
        local_6c = (char ******)0x6;
        local_44 = &DAT_0157d360;
        local_48 = (char *******)&local_70;
        local_70 = (char *******)&DAT_0035456d;
        uVar13 = FUN_00f56780(&DAT_0057a25d,&local_48);
        *param_1 = 1;
        param_1[1] = uVar13;
LAB_00c66abc:
        uVar5 = (uint)local_e4 ^ 1;
        goto LAB_00c66ac4;
      }
      if ((char)local_d0 != '\x06') {
        FUN_00d4fc54(&local_d0);
      }
      local_d0 = *puVar6;
      local_cc = puVar6[1];
      local_c8 = puVar6[2];
      local_c4 = puVar6[3];
      uStack_c0 = puVar6[4];
      uStack_bc = puVar6[5];
      if (unaff_r11 == 7) {
        iVar8 = thunk_FUN_016dd50a(unaff_r9,&DAT_00410ff9,7);
        if (iVar8 != 0) goto LAB_00c666bc;
        iVar8 = 1;
      }
      else if ((unaff_r11 == 6) &&
              (iVar8 = thunk_FUN_016dd50a(unaff_r9,&DAT_0035456d,6), iVar8 == 0)) {
        iVar8 = 0;
      }
      else {
LAB_00c666bc:
        iVar8 = 2;
      }
      if (unaff_r10 != 0) {
        thunk_FUN_016d3fb4(unaff_r9);
      }
      cVar2 = (char)local_d0;
      if (iVar8 != 2) {
        if (iVar8 != 0) {
          if (iVar8 != 1) goto LAB_00c668a4;
          if (bVar4) {
            uStack_74 = local_10c;
            local_7c = local_104;
            local_80 = local_e4;
            local_6c = (char ******)0x7;
            local_44 = &DAT_0157d360;
            local_48 = (char *******)&local_70;
            local_70 = (char *******)&DAT_00410ff9;
            uVar13 = FUN_00f56780(&DAT_00582dbd,&local_48);
            goto LAB_00c66c1c;
          }
          local_d0 = CONCAT31(local_d0._1_3_,6);
          if (cVar2 == '\x06') {
            uVar13 = FUN_00c4c3ec(&DAT_00565810,0x10);
            uVar20 = CONCAT44(uVar13,1);
          }
          else {
            local_48 = (char *******)CONCAT31(local_48._1_3_,cVar2);
            FUN_016dd1aa(uVar5,uVar10,0x17);
            uVar20 = FUN_00c64c8c(&local_48);
          }
          local_118 = (undefined4)(uVar20 >> 0x20);
          if ((uVar20 & 1) != 0) {
            uVar5 = 1;
            *param_1 = 1;
            param_1[1] = local_118;
            uStack_74 = local_10c;
            local_7c = local_104;
            local_80 = local_e4;
            goto LAB_00c66ac4;
          }
          bVar4 = true;
          goto LAB_00c665e4;
        }
        if (local_e4 != (undefined4 *)0x0) {
          uStack_74 = local_10c;
          local_7c = local_104;
          local_80 = local_e4;
          local_6c = (char ******)0x6;
          local_44 = &DAT_0157d360;
          local_48 = (char *******)&local_70;
          local_70 = (char *******)&DAT_0035456d;
          uVar13 = FUN_00f56780(&DAT_00582dbd,&local_48);
          local_e4 = (undefined4 *)0x1;
          *param_1 = 1;
          param_1[1] = uVar13;
          uVar5 = 1;
          goto LAB_00c66ac4;
        }
        local_d0 = CONCAT31(local_d0._1_3_,6);
        if (cVar2 == '\x06') {
          ppppppcVar9 = (char ******)FUN_00c4c3ec(&DAT_00565810,0x10);
        }
        else {
          local_48 = (char *******)CONCAT31(local_48._1_3_,cVar2);
          FUN_016dd1aa(uVar5,uVar10,0x17);
          FUN_00c395f8(&local_70,&local_48);
          local_104 = local_6c;
          if (local_70 != (char *******)&DAT_00000001) {
            local_108 = local_68;
            local_10c = local_64;
            local_e4 = (undefined4 *)0x1;
            goto LAB_00c665e4;
          }
          ppppppcVar9 = local_6c;
        }
        *param_1 = 1;
        param_1[1] = ppppppcVar9;
        goto LAB_00c66adc;
      }
      local_d0 = CONCAT31(local_d0._1_3_,6);
      if (cVar2 != '\x06') goto code_r0x00c666ec;
      uStack_74 = local_10c;
      local_7c = local_104;
      local_80 = local_e4;
      uVar13 = FUN_00c4c3ec(&DAT_00565810,0x10);
LAB_00c66c1c:
      uVar5 = 1;
      *param_1 = 1;
      param_1[1] = uVar13;
LAB_00c66ac4:
      puVar7 = (undefined4 *)0x0;
      if (uVar5 != 0) {
        puVar7 = local_e4;
      }
      if (uVar5 != 0 && puVar7 != (undefined4 *)0x0) {
        FUN_00c47c6c(&local_7c);
      }
LAB_00c66adc:
      while( true ) {
        FUN_00c3b8fc(&local_48,&local_b8);
        puVar7 = local_40;
        pppppppcVar3 = local_48;
        if (local_48 == (char *******)0x0) break;
        local_70 = &local_b8;
        if (local_48[(int)local_40 * 3 + 0x43] != (char ******)0x0) {
          thunk_FUN_016d3fb4(local_48[(int)local_40 * 3 + 0x44]);
        }
        FUN_00c436d0(pppppppcVar3 + (int)puVar7 * 6);
      }
LAB_00c66b2c:
      if ((char)local_d0 != '\x06') {
        FUN_00c01f94(&local_d0);
      }
    }
    else {
      uVar13 = FUN_00f36124(param_2,&uStack_25,&DAT_01873ea8);
      *param_1 = 1;
      param_1[1] = uVar13;
    }
    if ((bVar1 & 6) == 4) {
      return;
    }
    FUN_00c01f94(param_2);
    return;
  }
  iVar11 = *(int *)(param_2 + 0xc);
  ppppppcVar9 = *(char *******)(param_2 + 8);
  iVar8 = *(int *)(param_2 + 4);
  ppppppcVar19 = ppppppcVar9 + iVar11 * 6;
  local_6c = ppppppcVar9;
  local_70 = (char *******)ppppppcVar9;
  local_68 = (undefined4 *)iVar8;
  local_64 = ppppppcVar19;
  if (iVar11 == 0) {
LAB_00c6684c:
    ppppppcVar15 = local_6c;
    local_44 = (undefined4 *)FUN_00f2c2f0(0,&DAT_01878044,&DAT_018ab990);
  }
  else {
    ppppppcVar15 = ppppppcVar9 + 6;
    local_6c = ppppppcVar15;
    if (*(char *)ppppppcVar9 == '\x06') goto LAB_00c6684c;
    uVar5 = (uint)&local_d0 | 1;
    local_d0 = CONCAT31(local_d0._1_3_,*(char *)ppppppcVar9);
    FUN_016dd1aa(uVar5,(char *)((int)ppppppcVar9 + 1),0x17);
    FUN_00c395f8(&local_48,&local_d0);
    if (local_48 != (char *******)&DAT_00000001) {
      local_78 = local_3c;
      local_7c = local_40;
      local_80 = local_44;
      if (iVar11 == 1) {
LAB_00c66a34:
        uVar13 = FUN_00f2c2f0(1,&DAT_01878044,&DAT_018ab990);
      }
      else {
        ppppppcVar15 = ppppppcVar9 + 0xc;
        local_6c = ppppppcVar15;
        if (*(char *)(ppppppcVar9 + 6) == '\x06') goto LAB_00c66a34;
        local_d0 = CONCAT31(local_d0._1_3_,*(char *)(ppppppcVar9 + 6));
        FUN_016dd1aa(uVar5,(char *)((int)ppppppcVar9 + 0x19),0x17);
        uVar21 = FUN_00c64c8c(&local_d0);
        uVar13 = (undefined4)((ulonglong)uVar21 >> 0x20);
        uVar5 = (int)uVar21 + 1;
        if (uVar5 != 2) {
          if ((uVar5 & 1) != 0) {
            param_1[1] = local_80;
            param_1[3] = local_78;
            param_1[2] = local_7c;
            param_1[4] = uVar13;
            local_d0 = param_1[1];
            local_cc = param_1[2];
            local_c8 = param_1[3];
            local_c4 = param_1[4];
            *param_1 = 0;
            if (iVar11 == 2) {
              *param_1 = 0;
            }
            else {
              uVar13 = FUN_00f2c2f0(iVar11,&DAT_0188738c,&DAT_018ab990);
              *param_1 = 1;
              param_1[1] = uVar13;
              FUN_00c47c6c(&local_d0);
            }
            goto LAB_00c66870;
          }
          goto LAB_00c66a34;
        }
      }
      *param_1 = 1;
      param_1[1] = uVar13;
      FUN_00c47c6c(&local_80);
      goto LAB_00c66870;
    }
  }
  *param_1 = 1;
  param_1[1] = local_44;
LAB_00c66870:
  FUN_00ce0380(ppppppcVar15,((uint)((int)ppppppcVar19 - (int)ppppppcVar15) >> 3) * -0x55555555);
  if (iVar8 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(ppppppcVar9);
  return;
code_r0x00c666ec:
  local_48 = (char *******)CONCAT31(local_48._1_3_,cVar2);
  FUN_016dd1aa(uVar5,uVar10,0x17);
  FUN_00c01f94(&local_48);
  goto LAB_00c665e4;
}

