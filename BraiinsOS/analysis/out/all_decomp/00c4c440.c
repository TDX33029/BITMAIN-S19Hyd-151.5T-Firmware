// FUN_00c4c440 @ 00c4c440 size=2268 calls_out=16 calls_in=2
// strings: secs_since_epoch | nanos_since_epoch | overflow deserializing SystemTime | secs_since_epoch | secs_since_epoch | nanos_since_epoch

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c4c440(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined4 uVar14;
  char *******pppppppcVar15;
  char *******pppppppcVar16;
  undefined4 uVar17;
  char *******pppppppcVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  byte *pbVar21;
  char *******pppppppcVar22;
  char *******unaff_r10;
  char *******pppppppcVar23;
  undefined4 *puVar24;
  bool bVar25;
  ulonglong uVar26;
  char *******local_e8;
  byte local_d8;
  char *******local_d4;
  char *******local_c4;
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
  char *******local_6c;
  char *******local_68;
  char *******local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54 [2];
  int local_4c;
  char *******local_48;
  char *******local_44;
  char *******local_40;
  char *******local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_25;
  
  bVar1 = *param_2;
  if (bVar1 != 4) {
    if (bVar1 == 5) {
      local_90 = *(int *)(param_2 + 4);
      local_8c = *(undefined4 *)(param_2 + 8);
      iVar10 = *(int *)(param_2 + 0xc);
      local_b0 = CONCAT31(local_b0._1_3_,6);
      local_78 = 0;
      if (local_90 != 0) {
        local_78 = iVar10;
      }
      local_98 = (char ******)(uint)(local_90 != 0);
      uVar5 = (uint)&local_48 | 1;
      puVar8 = (undefined4 *)((uint)&local_70 | 4);
      puVar9 = (undefined4 *)((uint)&local_48 | 4);
      bVar2 = false;
      local_84 = 0;
      local_94 = 0;
      bVar25 = false;
      iVar6 = 5;
      pbVar21 = param_2;
      puVar24 = param_1;
      local_88 = local_98;
      local_80 = local_90;
      local_7c = local_8c;
LAB_00c4c510:
      FUN_00c3b8fc(local_54,&local_98);
      if (local_54[0] != 0) {
        puVar11 = (undefined4 *)(local_54[0] + local_4c * 0x18);
        iVar6 = local_54[0] + local_4c * 0xc;
        pbVar21 = *(byte **)(iVar6 + 0x10c);
        puVar24 = *(undefined4 **)(iVar6 + 0x110);
        iVar6 = *(int *)(iVar6 + 0x114);
        uVar12 = puVar11[1];
        uVar14 = puVar11[2];
        uVar17 = puVar11[3];
        uVar19 = puVar11[4];
        uVar20 = puVar11[5];
        *puVar9 = *puVar11;
        puVar9[1] = uVar12;
        puVar9[2] = uVar14;
        puVar9[3] = uVar17;
        puVar9[4] = uVar19;
        puVar9[5] = uVar20;
        local_70 = local_48;
        local_6c = local_44;
        local_68 = local_40;
        local_64 = local_3c;
        uStack_60 = uStack_38;
        uStack_5c = uStack_34;
        uStack_58 = uStack_30;
      }
      if (!(local_54[0] == 0 || pbVar21 == &DAT_80000000)) {
        if ((char)local_b0 != '\x06') {
          FUN_00d4fc54(&local_b0);
        }
        local_b0 = *puVar8;
        uStack_ac = puVar8[1];
        uStack_a8 = puVar8[2];
        uStack_a4 = puVar8[3];
        uStack_a0 = puVar8[4];
        uStack_9c = puVar8[5];
        if (iVar6 == 0x10) {
          iVar7 = thunk_FUN_016dd50a(puVar24,"secs_since_epoch",0x10);
          bVar13 = false;
          bVar4 = 0;
          if (iVar7 != 0) goto LAB_00c4c704;
        }
        else if ((iVar6 == 0x11) &&
                (iVar7 = thunk_FUN_016dd50a(puVar24,"nanos_since_epoch",0x11), iVar7 == 0)) {
          bVar13 = false;
          bVar4 = 1;
        }
        else {
LAB_00c4c704:
          local_e8 = (char *******)FUN_00c49874(puVar24,iVar6,&DAT_0187338c);
          bVar13 = true;
          bVar4 = local_d8;
        }
        local_d8 = bVar4;
        if (pbVar21 != (byte *)0x0) {
          thunk_FUN_016d3fb4(puVar24);
        }
        if (bVar13) goto LAB_00c4ca14;
        if (local_d8 == 2) goto LAB_00c4c7f4;
        cVar3 = (char)local_b0;
        if ((local_d8 & 1) != 0) {
          if (bVar2) {
            local_6c = (char *******)&DAT_00000011;
            local_44 = (char *******)&DAT_0157d360;
            local_48 = (char *******)&local_70;
            local_70 = (char *******)0x359488;
            local_e8 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_48);
          }
          else {
            local_b0 = CONCAT31(local_b0._1_3_,6);
            if (cVar3 == '\x06') {
              uVar12 = FUN_00c4c3ec(&DAT_00565810,0x10);
              uVar26 = CONCAT44(uVar12,1);
            }
            else {
              local_48 = (char *******)CONCAT31(local_48._1_3_,cVar3);
              FUN_016dd1aa(uVar5,(uint)&local_b0 | 1,0x17);
              uVar26 = FUN_00c64b70(&local_48);
            }
            unaff_r10 = (char *******)(uVar26 >> 0x20);
            if ((uVar26 & 1) == 0) goto code_r0x00c4c6f4;
            local_e8 = unaff_r10;
          }
          goto LAB_00c4ca14;
        }
        if (bVar25) {
          local_6c = (char *******)&DAT_00000010;
          local_44 = (char *******)&DAT_0157d360;
          local_48 = (char *******)&local_70;
          local_70 = (char *******)0x5649e0;
          local_e8 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_48);
          goto LAB_00c4ca14;
        }
        local_b0 = CONCAT31(local_b0._1_3_,6);
        if (cVar3 == '\x06') {
          local_6c = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
        }
        else {
          local_48 = (char *******)CONCAT31(local_48._1_3_,cVar3);
          FUN_016dd1aa(uVar5,(uint)&local_b0 | 1,0x17);
          FUN_00c64da8(&local_70,&local_48);
          if (local_70 == (char *******)0x0) {
            local_d4 = local_68;
            local_c4 = local_64;
            bVar25 = true;
            goto LAB_00c4c510;
          }
        }
        local_e8 = local_6c;
        goto LAB_00c4ca14;
      }
LAB_00c4c7f4:
      if (bVar25) {
        if (bVar2) {
          uVar5 = (uint)((ulonglong)((uint)unaff_r10 >> 9) * 0x44b83 >> 0x20);
          bVar25 = CARRY4((uint)local_d4,uVar5 >> 7);
          if (!CARRY4((uint)local_c4,(uint)bVar25)) {
            if (unaff_r10 < (char *******)0x3b9aca00) {
              local_e8 = local_d4;
            }
            else {
              uVar5 = uVar5 >> 7;
              local_e8 = (char *******)((int)local_d4 + uVar5);
              bVar25 = CARRY4((uint)local_c4,(uint)CARRY4((uint)local_d4,uVar5));
              local_c4 = (char *******)((int)local_c4 + (uint)CARRY4((uint)local_d4,uVar5));
              if (bVar25) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
              }
              unaff_r10 = unaff_r10 + uVar5 * -250000000;
            }
            if (local_78 != 0) {
              local_e8 = (char *******)FUN_00f2c2f0(iVar10,&DAT_01887430,&DAT_018ab990);
              unaff_r10 = (char *******)&DAT_3b9aca00;
            }
            while( true ) {
              FUN_00c3b8fc(&local_48,&local_98);
              pppppppcVar22 = local_40;
              pppppppcVar15 = local_48;
              if (local_48 == (char *******)0x0) break;
              local_70 = &local_98;
              if (local_48[(int)local_40 * 3 + 0x43] != (char ******)0x0) {
                thunk_FUN_016d3fb4(local_48[(int)local_40 * 3 + 0x44]);
              }
              FUN_00c436d0(pppppppcVar15 + (int)pppppppcVar22 * 6);
            }
            pppppppcVar16 = unaff_r10;
            unaff_r10 = local_c4;
            goto joined_r0x00c4c8f0;
          }
          local_e8 = (char *******)
                     FUN_00c4c3ec("overflow deserializing SystemTime epoch offsetan array of length 16"
                                  ,0x2e,(char *)((int)local_c4 + (uint)bVar25));
          unaff_r10 = local_c4;
        }
        else {
          local_6c = (char *******)&DAT_00000011;
          local_44 = (char *******)&DAT_0157d360;
          local_48 = (char *******)&local_70;
          local_70 = (char *******)0x359488;
          local_e8 = (char *******)FUN_00f56780(&DAT_0057a25d,&local_48);
        }
      }
      else {
        local_6c = (char *******)&DAT_00000010;
        local_44 = (char *******)&DAT_0157d360;
        local_48 = (char *******)&local_70;
        local_70 = (char *******)0x5649e0;
        local_e8 = (char *******)FUN_00f56780(&DAT_0057a25d,&local_48);
      }
LAB_00c4ca14:
      pppppppcVar16 = (char *******)&DAT_3b9aca00;
      while( true ) {
        FUN_00c3b8fc(&local_48,&local_98);
        pppppppcVar22 = local_40;
        pppppppcVar15 = local_48;
        if (local_48 == (char *******)0x0) break;
        local_70 = &local_98;
        if (local_48[(int)local_40 * 3 + 0x43] != (char ******)0x0) {
          thunk_FUN_016d3fb4(local_48[(int)local_40 * 3 + 0x44]);
        }
        FUN_00c436d0(pppppppcVar15 + (int)pppppppcVar22 * 6);
      }
joined_r0x00c4c8f0:
      local_48 = (char *******)0x0;
      if ((char)local_b0 != '\x06') {
        local_48 = (char *******)0x0;
        FUN_00c01f94(&local_b0);
      }
    }
    else {
      local_e8 = (char *******)FUN_00f36124(param_2,&uStack_25,&DAT_01873e28);
      pppppppcVar16 = (char *******)&DAT_3b9aca00;
    }
    local_c4 = unaff_r10;
    if ((bVar1 & 6) != 4) {
      FUN_00c01f94(param_2);
    }
    goto joined_r0x00c4c7d4;
  }
  iVar10 = *(int *)(param_2 + 0xc);
  pppppppcVar15 = *(char ********)(param_2 + 8);
  pppppppcVar23 = *(char ********)(param_2 + 4);
  pppppppcVar22 = pppppppcVar15 + iVar10 * 6;
  local_6c = pppppppcVar15;
  local_70 = pppppppcVar15;
  local_68 = pppppppcVar23;
  local_64 = pppppppcVar22;
  if (iVar10 == 0) {
LAB_00c4c774:
    pppppppcVar18 = local_6c;
    local_40 = (char *******)FUN_00f2c2f0(0,&uStack_25,&DAT_01873e28);
LAB_00c4c788:
LAB_00c4c78c:
    pppppppcVar16 = (char *******)&DAT_3b9aca00;
    local_e8 = local_40;
  }
  else {
    pppppppcVar18 = pppppppcVar15 + 6;
    local_6c = pppppppcVar18;
    if (*(char *)pppppppcVar15 == '\x06') goto LAB_00c4c774;
    uVar5 = (uint)&local_b0 | 1;
    local_b0 = CONCAT31(local_b0._1_3_,*(char *)pppppppcVar15);
    FUN_016dd1aa(uVar5,(char *)((int)pppppppcVar15 + 1),0x17);
    FUN_00c64da8(&local_48,&local_b0);
    if (local_48 == (char *******)&DAT_00000001) {
      local_40 = local_44;
      goto LAB_00c4c78c;
    }
    pppppppcVar18 = pppppppcVar22;
    if (iVar10 == 1) {
LAB_00c4c994:
      local_40 = (char *******)FUN_00f2c2f0(1,&uStack_25,&DAT_01873e28);
      goto LAB_00c4c788;
    }
    pppppppcVar18 = pppppppcVar15 + 0xc;
    local_c4 = local_3c;
    local_6c = pppppppcVar18;
    if (*(char *)(pppppppcVar15 + 6) == '\x06') goto LAB_00c4c994;
    local_b0 = CONCAT31(local_b0._1_3_,*(char *)(pppppppcVar15 + 6));
    FUN_016dd1aa(uVar5,(char *)((int)pppppppcVar15 + 0x19),0x17);
    uVar26 = FUN_00c64b70(&local_b0);
    pppppppcVar16 = (char *******)(uVar26 >> 0x20);
    uVar5 = (int)uVar26 + 1;
    if (uVar5 == 2) {
      local_40 = pppppppcVar16;
      goto LAB_00c4c78c;
    }
    if ((uVar5 & 1) == 0) goto LAB_00c4c994;
    uVar5 = (uint)((ulonglong)((uint)pppppppcVar16 >> 9) * 0x44b83 >> 0x20);
    bVar25 = CARRY4((uint)local_40,uVar5 >> 7);
    if (CARRY4((uint)local_3c,(uint)bVar25)) {
      local_40 = (char *******)
                 FUN_00c4c3ec("overflow deserializing SystemTime epoch offsetan array of length 16",
                              0x2e,(char *)((int)local_3c + (uint)bVar25));
      goto LAB_00c4c788;
    }
    if (uVar26 < 0x3b9aca0000000000) {
      if (pppppppcVar16 == (char *******)&DAT_3b9aca00) goto LAB_00c4c78c;
    }
    else {
      uVar5 = uVar5 >> 7;
      bVar25 = CARRY4((uint)local_40,uVar5);
      local_40 = (char *******)((int)local_40 + uVar5);
      local_c4 = (char *******)((int)local_3c + (uint)bVar25);
      if (CARRY4((uint)local_3c,(uint)bVar25)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
      }
      pppppppcVar16 = pppppppcVar16 + uVar5 * -250000000;
    }
    local_e8 = local_40;
    if (pppppppcVar22 != pppppppcVar18) {
      local_40 = (char *******)FUN_00f2c2f0(iVar10,&DAT_0188738c,&DAT_018ab990);
      goto LAB_00c4c78c;
    }
  }
  FUN_00ce0380(pppppppcVar18,((uint)((int)pppppppcVar22 - (int)pppppppcVar18) >> 3) * -0x55555555);
  if (pppppppcVar23 != (char *******)0x0) {
    thunk_FUN_016d3fb4(pppppppcVar15);
  }
joined_r0x00c4c7d4:
  if (pppppppcVar16 == (char *******)&DAT_3b9aca00) {
    *param_1 = local_e8;
    param_1[2] = &DAT_3b9aca00;
    return;
  }
  if ((int)local_c4 < 0) {
    uVar12 = FUN_00c4c3ec("overflow deserializing SystemTime",0x21);
    *param_1 = uVar12;
    param_1[2] = &DAT_3b9aca00;
    return;
  }
  *param_1 = local_e8;
  param_1[1] = local_c4;
  param_1[2] = pppppppcVar16;
  return;
code_r0x00c4c6f4:
  bVar2 = true;
  goto LAB_00c4c510;
}

