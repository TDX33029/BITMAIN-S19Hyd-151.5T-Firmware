// FUN_00c4e9c8 @ 00c4e9c8 size=1568 calls_out=15 calls_in=1
// strings: inner | inner | inner | inner | inner

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c4e9c8(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined4 *******pppppppuVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 ******ppppppuVar14;
  undefined4 uVar15;
  undefined4 ******ppppppuVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 ******ppppppuVar19;
  int local_e8;
  undefined4 *******local_d8;
  undefined4 *******local_c0;
  undefined4 *puStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 ******local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 ******local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 *******local_74;
  undefined4 *local_70;
  int local_6c;
  undefined4 *******local_68;
  undefined4 *local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c [2];
  int local_44;
  undefined4 *******local_40;
  undefined4 ******local_3c;
  int local_38;
  undefined4 ******local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  bVar1 = *param_2;
  if (bVar1 != 4) {
    if (bVar1 == 5) {
      local_a0 = *(int *)(param_2 + 4);
      local_9c = *(undefined4 *)(param_2 + 8);
      iVar11 = *(int *)(param_2 + 0xc);
      local_c0 = (undefined4 *******)CONCAT31(local_c0._1_3_,6);
      local_88 = 0;
      if (local_a0 != 0) {
        local_88 = iVar11;
      }
      local_a8 = (undefined4 ******)(uint)(local_a0 != 0);
      local_94 = 0;
      local_a4 = 0;
      uVar5 = (uint)&local_40 | 1;
      puVar6 = (undefined4 *)((uint)&local_68 | 4);
      puVar7 = (undefined4 *)((uint)&local_40 | 4);
      local_d8 = (undefined4 *******)&DAT_80000000;
      local_98 = local_a8;
      local_90 = local_a0;
      local_8c = local_9c;
      puVar9 = (undefined4 *)0x80000000;
LAB_00c4ea80:
      while( true ) {
        FUN_00c3b8fc(local_4c,&local_a8);
        if (local_4c[0] != 0) {
          puVar10 = (undefined4 *)(local_4c[0] + local_44 * 0x18);
          iVar8 = local_4c[0] + local_44 * 0xc;
          unaff_r10 = *(int *)(iVar8 + 0x10c);
          unaff_r11 = *(undefined4 *)(iVar8 + 0x110);
          unaff_r9 = *(int *)(iVar8 + 0x114);
          uVar12 = puVar10[1];
          uVar13 = puVar10[2];
          uVar15 = puVar10[3];
          uVar17 = puVar10[4];
          uVar18 = puVar10[5];
          *puVar7 = *puVar10;
          puVar7[1] = uVar12;
          puVar7[2] = uVar13;
          puVar7[3] = uVar15;
          puVar7[4] = uVar17;
          puVar7[5] = uVar18;
          local_68 = local_40;
          local_64 = local_3c;
          local_60 = local_38;
          local_5c = local_34;
          uStack_58 = uStack_30;
          uStack_54 = uStack_2c;
          uStack_50 = uStack_28;
        }
        if (local_4c[0] == 0 || unaff_r10 == -0x80000000) break;
        if ((char)local_c0 != '\x06') {
          FUN_00d4fc54(&local_c0);
        }
        local_c0 = (undefined4 *******)*puVar6;
        puStack_bc = (undefined4 *)puVar6[1];
        iStack_b8 = puVar6[2];
        uStack_b4 = puVar6[3];
        uStack_b0 = puVar6[4];
        uStack_ac = puVar6[5];
        bVar2 = true;
        if (unaff_r9 == 5) {
          iVar8 = thunk_FUN_016dd50a(unaff_r11,"inner",5);
          bVar2 = false;
          if (iVar8 != 0) {
            bVar2 = true;
          }
        }
        if (unaff_r10 != 0) {
          thunk_FUN_016d3fb4(unaff_r11);
        }
        cVar3 = (char)local_c0;
        if (!bVar2) {
          if (local_d8 != (undefined4 *******)&DAT_80000000) {
            local_6c = local_e8;
            local_74 = local_d8;
            local_64 = (undefined4 *)0x5;
            local_3c = (undefined4 ******)&DAT_0157d360;
            local_40 = &local_68;
            local_68 = (undefined4 *******)0x40a3ff;
            local_70 = puVar9;
            uVar12 = FUN_00f56780(&DAT_00582dbd,&local_40);
            *param_1 = 0x80000000;
            param_1[1] = uVar12;
            goto LAB_00c4ee9c;
          }
          local_c0 = (undefined4 *******)CONCAT31(local_c0._1_3_,6);
          if (cVar3 == '\x06') {
            local_6c = local_e8;
            local_74 = local_d8;
            local_70 = puVar9;
            puVar9 = (undefined4 *)FUN_00c4c3ec(&DAT_00565810,0x10);
          }
          else {
            local_40 = (undefined4 *******)CONCAT31(local_40._1_3_,cVar3);
            FUN_016dd1aa(uVar5,(uint)&local_c0 | 1,0x17);
            FUN_00cce790(&local_68,&local_40);
            local_d8 = local_68;
            puVar9 = local_64;
            if (local_68 != (undefined4 *******)&DAT_80000000) goto code_r0x00c4ebd0;
          }
          goto LAB_00c4ecd4;
        }
        local_c0 = (undefined4 *******)CONCAT31(local_c0._1_3_,6);
        if (cVar3 == '\x06') {
          local_6c = local_e8;
          local_74 = local_d8;
          local_70 = puVar9;
          uVar12 = FUN_00c4c3ec(&DAT_00565810,0x10);
          *param_1 = 0x80000000;
          param_1[1] = uVar12;
          if (local_d8 != (undefined4 *******)&DAT_80000000) {
LAB_00c4ee9c:
            puVar6 = puVar9 + 4;
            for (; local_e8 != 0; local_e8 = local_e8 + -1) {
              if (puVar6[-4] != 0) {
                thunk_FUN_016d3fb4(puVar6[-3]);
              }
              if (puVar6[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar6);
              }
              puVar6 = puVar6 + 6;
            }
            if (local_d8 != (undefined4 *******)0x0) {
              thunk_FUN_016d3fb4(puVar9);
            }
          }
          goto LAB_00c4ece4;
        }
        local_40 = (undefined4 *******)CONCAT31(local_40._1_3_,cVar3);
        FUN_016dd1aa(uVar5,(uint)&local_c0 | 1,0x17);
        FUN_00c01f94(&local_40);
      }
      local_6c = local_e8;
      local_74 = local_d8;
      if (local_d8 != (undefined4 *******)&DAT_80000000) {
        param_1[1] = puVar9;
        param_1[2] = local_e8;
        *param_1 = local_d8;
        uStack_80 = *param_1;
        uStack_7c = param_1[1];
        uStack_78 = param_1[2];
        local_70 = puVar9;
        if (local_88 != 0) {
          uVar12 = FUN_00f2c2f0(iVar11,&DAT_01887430,&DAT_018ab990);
          *param_1 = 0x80000000;
          param_1[1] = uVar12;
          FUN_00c2daf8(&uStack_80);
        }
        while (FUN_00c3b8fc(&local_40,&local_a8), iVar11 = local_38, pppppppuVar4 = local_40,
              local_40 != (undefined4 *******)0x0) {
          local_68 = &local_a8;
          if (local_40[local_38 * 3 + 0x43] != (undefined4 ******)0x0) {
            thunk_FUN_016d3fb4(local_40[local_38 * 3 + 0x44]);
          }
          FUN_00c436d0(pppppppuVar4 + iVar11 * 6);
        }
        goto LAB_00c4eda8;
      }
      local_64 = (undefined4 *)0x5;
      local_3c = (undefined4 ******)&DAT_0157d360;
      local_40 = &local_68;
      local_68 = (undefined4 *******)0x40a3ff;
      local_70 = puVar9;
      puVar9 = (undefined4 *)FUN_00f56780(&DAT_0057a25d,&local_40);
LAB_00c4ecd4:
      *param_1 = 0x80000000;
      param_1[1] = puVar9;
LAB_00c4ece4:
      while (FUN_00c3b8fc(&local_40,&local_a8), iVar11 = local_38, pppppppuVar4 = local_40,
            local_40 != (undefined4 *******)0x0) {
        local_68 = &local_a8;
        if (local_40[local_38 * 3 + 0x43] != (undefined4 ******)0x0) {
          thunk_FUN_016d3fb4(local_40[local_38 * 3 + 0x44]);
        }
        FUN_00c436d0(pppppppuVar4 + iVar11 * 6);
      }
LAB_00c4eda8:
      if ((char)local_c0 != '\x06') {
        FUN_00c01f94(&local_c0);
      }
    }
    else {
      uVar12 = FUN_00f36124(param_2,&local_c0,&DAT_01873e78);
      *param_1 = 0x80000000;
      param_1[1] = uVar12;
    }
    if ((bVar1 & 6) == 4) {
      return;
    }
    FUN_00c01f94(param_2);
    return;
  }
  iVar11 = *(int *)(param_2 + 0xc);
  ppppppuVar14 = *(undefined4 *******)(param_2 + 8);
  iVar8 = *(int *)(param_2 + 4);
  ppppppuVar19 = ppppppuVar14 + iVar11 * 6;
  local_3c = ppppppuVar14;
  local_40 = (undefined4 *******)ppppppuVar14;
  local_38 = iVar8;
  local_34 = ppppppuVar19;
  if (iVar11 == 0) {
LAB_00c4ec20:
    ppppppuVar16 = local_3c;
    local_64 = (undefined4 *)FUN_00f2c2f0(0,&DAT_018777e8,&DAT_018ab990);
  }
  else {
    ppppppuVar16 = ppppppuVar14 + 6;
    local_3c = ppppppuVar16;
    if (*(char *)ppppppuVar14 == '\x06') goto LAB_00c4ec20;
    local_c0 = (undefined4 *******)CONCAT31(local_c0._1_3_,*(char *)ppppppuVar14);
    FUN_016dd1aa((uint)&local_c0 | 1,(char *)((int)ppppppuVar14 + 1),0x17);
    FUN_00cce790(&local_68,&local_c0);
    if (local_68 != (undefined4 *******)&DAT_80000000) {
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      local_c0 = local_68;
      puStack_bc = local_64;
      iStack_b8 = local_60;
      if (iVar11 != 1) {
        uVar12 = FUN_00f2c2f0(iVar11,&DAT_0188738c,&DAT_018ab990);
        *param_1 = 0x80000000;
        param_1[1] = uVar12;
        FUN_00d4c138(&local_c0);
      }
      goto LAB_00c4ec44;
    }
  }
  *param_1 = 0x80000000;
  param_1[1] = local_64;
LAB_00c4ec44:
  FUN_00ce0380(ppppppuVar16,((uint)((int)ppppppuVar19 - (int)ppppppuVar16) >> 3) * -0x55555555);
  if (iVar8 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(ppppppuVar14);
  return;
code_r0x00c4ebd0:
  local_e8 = local_60;
  goto LAB_00c4ea80;
}

