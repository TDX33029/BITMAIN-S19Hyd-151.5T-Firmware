// FUN_00c4b958 @ 00c4b958 size=2220 calls_out=16 calls_in=3
// strings: nanos | nanos | nanos | overflow deserializing Duration | nanos | nanos

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c4b958(uint *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  char *******pppppppcVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char ******ppppppcVar13;
  undefined4 uVar14;
  char ******ppppppcVar15;
  undefined4 uVar16;
  bool bVar17;
  undefined4 uVar18;
  char ******ppppppcVar19;
  byte *pbVar20;
  int unaff_r10;
  int unaff_r11;
  bool bVar21;
  bool bVar22;
  ulonglong uVar23;
  uint local_f4;
  uint local_e8;
  byte local_d4;
  uint local_c4;
  uint local_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char ******local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  char ******local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  char *******local_70;
  char ******local_6c;
  uint local_68;
  char ******local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54 [2];
  int local_4c;
  char *******local_48;
  undefined4 *local_44;
  uint local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_25;
  
  bVar1 = *param_2;
  if (bVar1 != 4) {
    if (bVar1 == 5) {
      local_90 = *(int *)(param_2 + 4);
      local_8c = *(undefined4 *)(param_2 + 8);
      iVar9 = *(int *)(param_2 + 0xc);
      local_b0 = CONCAT31(local_b0._1_3_,6);
      local_78 = 0;
      if (local_90 != 0) {
        local_78 = iVar9;
      }
      local_98 = (char ******)(uint)(local_90 != 0);
      uVar5 = (uint)&local_48 | 1;
      puVar7 = (undefined4 *)((uint)&local_70 | 4);
      puVar8 = (undefined4 *)((uint)&local_48 | 4);
      bVar22 = false;
      local_84 = 0;
      local_94 = 0;
      bVar21 = false;
      pbVar20 = param_2;
      local_88 = local_98;
      local_80 = local_90;
      local_7c = local_8c;
LAB_00c4ba18:
      FUN_00c3b8fc(local_54,&local_98);
      if (local_54[0] != 0) {
        puVar10 = (undefined4 *)(local_54[0] + local_4c * 0x18);
        iVar6 = local_54[0] + local_4c * 0xc;
        unaff_r10 = *(int *)(iVar6 + 0x10c);
        pbVar20 = *(byte **)(iVar6 + 0x110);
        unaff_r11 = *(int *)(iVar6 + 0x114);
        uVar11 = puVar10[1];
        uVar12 = puVar10[2];
        uVar14 = puVar10[3];
        uVar16 = puVar10[4];
        uVar18 = puVar10[5];
        *puVar8 = *puVar10;
        puVar8[1] = uVar11;
        puVar8[2] = uVar12;
        puVar8[3] = uVar14;
        puVar8[4] = uVar16;
        puVar8[5] = uVar18;
        local_70 = local_48;
        local_6c = (char ******)local_44;
        local_68 = local_40;
        local_64 = (char ******)local_3c;
        uStack_60 = uStack_38;
        uStack_5c = uStack_34;
        uStack_58 = uStack_30;
      }
      if (local_54[0] == 0 || unaff_r10 == -0x80000000) {
LAB_00c4bcd8:
        if (bVar21) {
          if (!bVar22) {
            local_6c = (char ******)0x5;
            local_44 = &DAT_0157d360;
            local_48 = (char *******)&local_70;
            local_70 = (char *******)0x359483;
            uVar5 = FUN_00f56780(&DAT_0057a25d,&local_48);
            goto LAB_00c4c13c;
          }
          uVar5 = (uint)((ulonglong)(local_e8 >> 9) * 0x44b83 >> 0x20);
          bVar21 = CARRY4(local_c0,uVar5 >> 7);
          if (CARRY4(local_c4,(uint)bVar21)) {
            uVar5 = FUN_00c4c3ec("overflow deserializing Duration",0x1f,local_c4 + bVar21);
            goto LAB_00c4c13c;
          }
          if (999999999 < local_e8) {
            uVar5 = uVar5 >> 7;
            bVar22 = CARRY4(local_c0,uVar5);
            local_c0 = local_c0 + uVar5;
            bVar21 = CARRY4(local_c4,(uint)bVar22);
            local_c4 = local_c4 + bVar22;
            if (bVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
            }
            local_e8 = local_e8 + uVar5 * -1000000000;
          }
          *param_1 = local_c0;
          param_1[1] = local_c4;
          param_1[2] = local_e8;
          if (local_78 != 0) {
            uVar5 = FUN_00f2c2f0(iVar9,&DAT_01887430,&DAT_018ab990);
            param_1[2] = (uint)&DAT_3b9aca00;
            *param_1 = uVar5;
          }
          while( true ) {
            FUN_00c3b8fc(&local_48,&local_98);
            uVar5 = local_40;
            pppppppcVar3 = local_48;
            if (local_48 == (char *******)0x0) break;
            local_70 = &local_98;
            if (local_48[local_40 * 3 + 0x43] != (char ******)0x0) {
              thunk_FUN_016d3fb4(local_48[local_40 * 3 + 0x44]);
            }
            FUN_00c436d0(pppppppcVar3 + uVar5 * 6);
          }
          goto LAB_00c4bf90;
        }
        local_44 = &DAT_0157d360;
        local_48 = (char *******)&local_70;
        local_6c = (char ******)0x4;
        local_70 = (char *******)&DAT_005688f0;
        uVar5 = FUN_00f56780(&DAT_0057a25d,&local_48);
LAB_00c4c13c:
        param_1[2] = (uint)&DAT_3b9aca00;
        *param_1 = uVar5;
        goto LAB_00c4bf40;
      }
      if ((char)local_b0 != '\x06') {
        FUN_00d4fc54(&local_b0);
      }
      local_b0 = *puVar7;
      uStack_ac = puVar7[1];
      uStack_a8 = puVar7[2];
      uStack_a4 = puVar7[3];
      uStack_a0 = puVar7[4];
      uStack_9c = puVar7[5];
      if (unaff_r11 == 4) {
        bVar17 = false;
        bVar4 = 0;
        if (*(int *)pbVar20 != 0x73636573) goto LAB_00c4bc08;
      }
      else if ((unaff_r11 == 5) && (iVar6 = thunk_FUN_016dd50a(pbVar20,"nanos",5), iVar6 == 0)) {
        bVar17 = false;
        bVar4 = 1;
      }
      else {
LAB_00c4bc08:
        local_f4 = FUN_00c49874(pbVar20,unaff_r11,&DAT_0187337c);
        bVar17 = true;
        bVar4 = local_d4;
      }
      local_d4 = bVar4;
      if (unaff_r10 != 0) {
        thunk_FUN_016d3fb4(pbVar20);
      }
      if (bVar17) {
        param_1[2] = (uint)&DAT_3b9aca00;
        goto LAB_00c4bf04;
      }
      if (local_d4 == 2) goto LAB_00c4bcd8;
      cVar2 = (char)local_b0;
      if ((local_d4 & 1) == 0) {
        if (bVar21) {
          local_44 = &DAT_0157d360;
          local_48 = (char *******)&local_70;
          local_6c = (char ******)0x4;
          local_70 = (char *******)&DAT_005688f0;
          uVar5 = FUN_00f56780(&DAT_00582dbd,&local_48);
          goto LAB_00c4c13c;
        }
        local_b0 = CONCAT31(local_b0._1_3_,6);
        if (cVar2 == '\x06') {
          local_6c = (char ******)FUN_00c4c3ec(&DAT_00565810,0x10);
        }
        else {
          local_48 = (char *******)CONCAT31(local_48._1_3_,cVar2);
          FUN_016dd1aa(uVar5,(uint)&local_b0 | 1,0x17);
          FUN_00c64da8(&local_70,&local_48);
          if (local_70 == (char *******)0x0) {
            local_c0 = local_68;
            local_c4 = (uint)local_64;
            bVar21 = true;
            goto LAB_00c4ba18;
          }
        }
        param_1[2] = (uint)&DAT_3b9aca00;
        *param_1 = (uint)local_6c;
        goto LAB_00c4bf40;
      }
      if (bVar22) {
        local_6c = (char ******)0x5;
        local_44 = &DAT_0157d360;
        local_48 = (char *******)&local_70;
        local_70 = (char *******)0x359483;
        uVar5 = FUN_00f56780(&DAT_00582dbd,&local_48);
        goto LAB_00c4c13c;
      }
      local_b0 = CONCAT31(local_b0._1_3_,6);
      if (cVar2 == '\x06') {
        uVar11 = FUN_00c4c3ec(&DAT_00565810,0x10);
        uVar23 = CONCAT44(uVar11,1);
      }
      else {
        local_48 = (char *******)CONCAT31(local_48._1_3_,cVar2);
        FUN_016dd1aa(uVar5,(uint)&local_b0 | 1,0x17);
        uVar23 = FUN_00c64b70(&local_48);
      }
      local_e8 = (uint)(uVar23 >> 0x20);
      if ((uVar23 & 1) == 0) goto code_r0x00c4bbf8;
      param_1[2] = (uint)&DAT_3b9aca00;
      local_f4 = local_e8;
LAB_00c4bf04:
      *param_1 = local_f4;
LAB_00c4bf40:
      while( true ) {
        FUN_00c3b8fc(&local_48,&local_98);
        uVar5 = local_40;
        pppppppcVar3 = local_48;
        if (local_48 == (char *******)0x0) break;
        local_70 = &local_98;
        if (local_48[local_40 * 3 + 0x43] != (char ******)0x0) {
          thunk_FUN_016d3fb4(local_48[local_40 * 3 + 0x44]);
        }
        FUN_00c436d0(pppppppcVar3 + uVar5 * 6);
      }
LAB_00c4bf90:
      if ((char)local_b0 != '\x06') {
        FUN_00c01f94(&local_b0);
      }
    }
    else {
      uVar5 = FUN_00f36124(param_2,&uStack_25,&DAT_01873e88);
      param_1[2] = (uint)&DAT_3b9aca00;
      *param_1 = uVar5;
    }
    if ((bVar1 & 6) == 4) {
      return;
    }
    FUN_00c01f94(param_2);
    return;
  }
  iVar9 = *(int *)(param_2 + 0xc);
  ppppppcVar13 = *(char *******)(param_2 + 8);
  iVar6 = *(int *)(param_2 + 4);
  ppppppcVar19 = ppppppcVar13 + iVar9 * 6;
  local_6c = ppppppcVar13;
  local_70 = (char *******)ppppppcVar13;
  local_68 = iVar6;
  local_64 = ppppppcVar19;
  if (iVar9 == 0) {
LAB_00c4bc78:
    ppppppcVar15 = local_6c;
    local_44 = (undefined4 *)FUN_00f2c2f0(0,&uStack_25,&DAT_01873e88);
  }
  else {
    ppppppcVar15 = ppppppcVar13 + 6;
    local_6c = ppppppcVar15;
    if (*(char *)ppppppcVar13 == '\x06') goto LAB_00c4bc78;
    uVar5 = (uint)&local_b0 | 1;
    local_b0 = CONCAT31(local_b0._1_3_,*(char *)ppppppcVar13);
    FUN_016dd1aa(uVar5,(char *)((int)ppppppcVar13 + 1),0x17);
    FUN_00c64da8(&local_48,&local_b0);
    if (local_48 == (char *******)&DAT_00000001) goto LAB_00c4bc8c;
    ppppppcVar15 = ppppppcVar19;
    if (iVar9 == 1) {
LAB_00c4be48:
      local_44 = (undefined4 *)FUN_00f2c2f0(1,&uStack_25,&DAT_01873e88);
    }
    else {
      ppppppcVar15 = ppppppcVar13 + 0xc;
      local_6c = ppppppcVar15;
      if (*(char *)(ppppppcVar13 + 6) == '\x06') goto LAB_00c4be48;
      local_b0 = CONCAT31(local_b0._1_3_,*(char *)(ppppppcVar13 + 6));
      FUN_016dd1aa(uVar5,(char *)((int)ppppppcVar13 + 0x19),0x17);
      uVar23 = FUN_00c64b70(&local_b0);
      local_44 = (undefined4 *)(uVar23 >> 0x20);
      uVar5 = (int)uVar23 + 1;
      if (uVar5 != 2) {
        if ((uVar5 & 1) == 0) goto LAB_00c4be48;
        uVar5 = (uint)((ulonglong)((uint)local_44 >> 9) * 0x44b83 >> 0x20);
        bVar21 = CARRY4(local_40,uVar5 >> 7);
        if (!CARRY4(local_3c,(uint)bVar21)) {
          if (uVar23 < 0x3b9aca0000000000) {
            *param_1 = local_40;
            param_1[1] = local_3c;
            param_1[2] = (uint)local_44;
            if (local_44 == (undefined4 *)&DAT_3b9aca00) goto LAB_00c4bca0;
          }
          else {
            uVar5 = uVar5 >> 7;
            if (CARRY4(local_3c,(uint)CARRY4(local_40,uVar5))) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
            }
            local_44 = local_44 + uVar5 * -250000000;
            *param_1 = local_40 + uVar5;
            param_1[1] = local_3c + CARRY4(local_40,uVar5);
            param_1[2] = (uint)local_44;
          }
          if (ppppppcVar19 != ppppppcVar15) {
            uVar5 = FUN_00f2c2f0(iVar9,&DAT_0188738c,&DAT_018ab990);
            *param_1 = uVar5;
            local_44 = (undefined4 *)&DAT_3b9aca00;
          }
          param_1[2] = (uint)local_44;
          goto LAB_00c4bca0;
        }
        local_44 = (undefined4 *)
                   FUN_00c4c3ec("overflow deserializing Duration",0x1f,1,local_3c + bVar21);
      }
    }
  }
LAB_00c4bc8c:
  param_1[2] = (uint)&DAT_3b9aca00;
  *param_1 = (uint)local_44;
LAB_00c4bca0:
  FUN_00ce0380(ppppppcVar15,((uint)((int)ppppppcVar19 - (int)ppppppcVar15) >> 3) * -0x55555555);
  if (iVar6 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(ppppppcVar13);
  return;
code_r0x00c4bbf8:
  bVar22 = true;
  goto LAB_00c4ba18;
}

