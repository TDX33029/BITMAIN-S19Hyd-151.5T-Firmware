// FUN_010ba778 @ 010ba778 size=2228 calls_out=19 calls_in=3
// strings: Partial header

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010ba778(int *param_1,undefined4 *******param_2,int param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 *******pppppppuVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 *******pppppppuVar8;
  undefined4 *******pppppppuVar9;
  undefined4 ******ppppppuVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined4 *******pppppppuVar17;
  undefined4 *******pppppppuVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  bool bVar28;
  bool bVar29;
  int local_130;
  int local_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int local_11c;
  int local_118;
  uint local_114;
  int local_110;
  int local_10c;
  uint local_108;
  int local_104;
  int local_100;
  int local_fc;
  uint local_f8;
  int iStack_f4;
  undefined4 *******local_ec;
  undefined4 *******local_e8;
  undefined4 *******local_e4;
  undefined4 *******local_e0;
  undefined4 *******apppppppuStack_dc [2];
  undefined1 auStack_d4 [12];
  undefined4 *******local_c8;
  undefined4 *******pppppppuStack_c4;
  undefined4 *******pppppppuStack_c0;
  undefined4 *******pppppppuStack_bc;
  undefined4 *******pppppppuStack_b8;
  undefined1 auStack_b4 [12];
  undefined4 *******local_a8;
  uint local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char local_98;
  undefined2 local_97;
  undefined1 local_95;
  undefined4 *******local_90;
  undefined4 *******local_8c;
  undefined4 *******local_88;
  undefined4 *******local_84 [2];
  undefined2 local_7c;
  undefined1 local_7a;
  undefined4 *******local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *******local_68;
  undefined4 *******local_64;
  undefined4 *******local_60;
  undefined4 *******local_5c;
  undefined4 *******pppppppuStack_58;
  undefined4 *******local_50;
  undefined4 *******local_4c;
  undefined4 *******local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  
  uVar7 = 0;
  local_100 = 4;
  local_10c = 4;
  uVar24 = param_4 * 0x10;
  bVar29 = 0xffffffe < param_4;
  bVar28 = param_4 == 0xfffffff;
  if (param_4 < 0x10000000) {
    bVar29 = 0x7ffffffb < uVar24;
    bVar28 = uVar24 == 0x7ffffffc;
  }
  local_12c = 0;
  local_130 = 0;
  local_f8 = local_f8 & 0xffff0000;
  local_fc = 0;
  local_104 = 0;
  local_108 = 0;
  local_110 = 0;
  local_114 = 0;
  local_118 = 2;
  if (bVar29 && !bVar28) {
LAB_010ba7cc:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,uVar24);
  }
  if (uVar24 == 0) {
    pppppppuVar8 = (undefined4 *******)&DAT_00000004;
    uVar24 = 0;
    pppppppuVar9 = pppppppuVar8;
    if (1 < param_4) goto LAB_010ba818;
LAB_010ba854:
    if (param_4 == 0) {
      param_4 = 0;
      goto LAB_010ba878;
    }
    param_4 = 1;
    pppppppuVar9 = pppppppuVar8;
  }
  else {
    pppppppuVar8 = (undefined4 *******)thunk_FUN_016d4a50(uVar24);
    if (pppppppuVar8 == (undefined4 *******)0x0) {
      uVar7 = 4;
      goto LAB_010ba7cc;
    }
    pppppppuVar9 = pppppppuVar8;
    uVar24 = param_4;
    if (param_4 < 2) goto LAB_010ba854;
LAB_010ba818:
    iVar21 = param_4 - 1;
    pppppppuVar8 = pppppppuVar9;
    do {
      *pppppppuVar8 = (undefined4 ******)0x1;
      pppppppuVar8[1] = (undefined4 ******)0x0;
      iVar21 = iVar21 + -1;
      pppppppuVar8[2] = (undefined4 ******)0x1;
      pppppppuVar8[3] = (undefined4 ******)0x0;
      pppppppuVar8 = pppppppuVar8 + 4;
    } while (iVar21 != 0);
  }
  *pppppppuVar8 = (undefined4 ******)0x1;
  pppppppuVar8[1] = (undefined4 ******)0x0;
  pppppppuVar8[2] = (undefined4 ******)0x1;
  pppppppuVar8[3] = (undefined4 ******)0x0;
  pppppppuVar8 = pppppppuVar9;
LAB_010ba878:
  local_4c = (undefined4 *******)((int)param_2 + param_3);
  local_78 = (undefined4 *******)0x0;
  local_a8 = pppppppuVar8;
  local_a4 = param_4;
  local_50 = param_2;
  local_48 = param_2;
  FUN_010a74b0(&local_68,&local_a8,&local_50,&local_78);
  if (local_68 == (undefined4 *******)&SUB_00000002) {
    FUN_010bdc2c(&local_50,(uint)local_64 & 0xff);
  }
  else {
    if (((uint)local_68 & 1) == 0) {
      if (local_a4 == 0) {
LAB_010baf10:
        *param_1 = local_130;
        param_1[1] = local_12c;
        param_1[2] = iStack_128;
        param_1[3] = iStack_124;
        param_1[4] = iStack_120;
        param_1[5] = local_11c;
        param_1[6] = local_118;
        param_1[7] = local_114;
        param_1[8] = local_110;
        param_1[9] = local_10c;
        param_1[10] = local_108;
        param_1[0xb] = local_104;
        param_1[0xc] = local_100;
        param_1[0xd] = local_fc;
        param_1[0xe] = local_f8;
        param_1[0xf] = iStack_f4;
        if (uVar24 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(pppppppuVar8);
        return;
      }
      pppppppuVar17 = local_a8 + local_a4 * 4;
      pppppppuVar9 = local_a8;
LAB_010ba990:
      local_ec = pppppppuVar9;
      FUN_0109fc24(&local_50,*pppppppuVar9,pppppppuVar9[1]);
      if (local_50 != (undefined4 *******)&DAT_00000001) {
        local_e8 = local_4c;
        local_e4 = local_48;
        local_e0 = local_44;
        apppppppuStack_dc[0] = local_40;
        if (local_ec[3] == (undefined4 ******)0x0) {
          local_60 = (undefined4 *******)0x0;
          local_64 = (undefined4 *******)&DAT_00000001;
          local_68 = (undefined4 *******)0x0;
          FUN_00f5ef18(&local_50,&local_68);
        }
        else {
          ppppppuVar10 = (undefined4 ******)0x0;
          do {
            bVar1 = *(byte *)((int)local_ec[2] + (int)ppppppuVar10);
            if (bVar1 < 0x20) {
              if (bVar1 != 9) goto LAB_010bae88;
            }
            else if (bVar1 == 0x7f) {
LAB_010bae88:
              local_a8 = &local_ec;
              local_64 = (undefined4 *******)FUN_010bb160;
              local_68 = &local_a8;
              FUN_00600d2c(auStack_b4,&DAT_0056b7de,&local_68);
              FUN_01650c14(&local_68,0x14,auStack_b4);
              *param_1 = 3;
              param_1[1] = 0;
              param_1[2] = (int)local_68;
              param_1[3] = (int)local_64;
              if (local_e8 != (undefined4 *******)0x0) {
                (*(code *)local_e8[4])(apppppppuStack_dc,local_e4,local_e0);
              }
              goto LAB_010ba914;
            }
            ppppppuVar10 = (undefined4 ******)((int)ppppppuVar10 + 1);
          } while (local_ec[3] != ppppppuVar10);
          FUN_00f5eea8(&local_50);
        }
        local_40 = (undefined4 *******)((uint)local_40 & 0xffffff00);
        local_c8 = local_50;
        pppppppuStack_c4 = local_4c;
        pppppppuStack_c0 = local_48;
        pppppppuStack_bc = local_44;
        pppppppuStack_b8 = local_40;
        local_90 = local_e8;
        local_8c = local_e4;
        local_88 = local_e0;
        local_84[0] = apppppppuStack_dc[0];
        iVar21 = FUN_010b1088(&local_130);
        if (iVar21 == 0) {
          pppppppuVar9 = pppppppuVar9 + 4;
          uVar6 = FUN_010b0a24(&local_130,&local_90);
          pppppppuVar5 = local_88;
          pppppppuVar18 = local_8c;
          uVar26 = local_108;
          iVar27 = local_10c;
          uVar19 = local_114;
          iVar21 = local_118;
          uVar25 = (uint)uVar6;
          uVar20 = 0;
          uVar4 = (ushort)local_f8;
          uVar22 = local_f8 & 0xffff;
          bVar28 = local_90 == (undefined4 *******)0x0;
          uVar11 = (uint)local_8c & 0xff;
          uVar23 = uVar22 & uVar25;
LAB_010baaec:
          do {
            uVar12 = uVar23;
            uVar23 = 0;
          } while (uVar19 <= uVar12);
          puVar13 = (ushort *)(iVar21 + uVar12 * 4);
          uVar23 = (uint)*puVar13;
          if (uVar23 == 0xffff) {
            local_68 = local_90;
            local_64 = local_8c;
            local_60 = local_88;
            local_5c = local_84[0];
            local_50 = local_c8;
            local_4c = pppppppuStack_c4;
            local_48 = pppppppuStack_c0;
            local_44 = pppppppuStack_bc;
            local_40 = pppppppuStack_b8;
            iVar21 = FUN_0145da44(&local_130,uVar25,&local_68);
            if (iVar21 != 0) goto LAB_010bafe8;
            if (local_114 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar12,local_114,&DAT_018a6354);
            }
            puVar16 = (undefined2 *)(local_118 + uVar12 * 4);
            *puVar16 = (short)uVar26;
            puVar16[1] = uVar6;
            goto LAB_010bad80;
          }
          uVar3 = puVar13[1];
          if ((uVar12 - (uVar4 & uVar3) & uVar22) < uVar20) {
            local_5c = local_84[0];
            local_68 = local_90;
            local_64 = local_8c;
            local_60 = local_88;
            local_50 = local_c8;
            local_4c = pppppppuStack_c4;
            local_48 = pppppppuStack_c0;
            local_44 = pppppppuStack_bc;
            local_40 = pppppppuStack_b8;
            bVar28 = local_130 != 2;
            bVar29 = local_12c != 0;
            iVar21 = FUN_0145da44(&local_130,uVar25,&local_68);
            if (iVar21 == 0) {
              uVar23 = 0;
              uVar19 = uVar26 & 0xffff;
              while( true ) {
                do {
                  uVar26 = uVar12;
                  uVar12 = 0;
                } while (local_114 <= uVar26);
                puVar13 = (ushort *)(local_118 + uVar26 * 4);
                uVar4 = *puVar13;
                uVar6 = (ushort)uVar25;
                if (uVar4 == 0xffff) break;
                *puVar13 = (ushort)uVar19;
                uVar25 = (uint)puVar13[1];
                uVar23 = uVar23 + 1;
                puVar13[1] = uVar6;
                uVar19 = (uint)uVar4;
                uVar12 = uVar26 + 1;
              }
              puVar13[1] = uVar6;
              *puVar13 = (ushort)uVar19;
              if ((uVar20 >> 9 != 0 && (bVar28 || bVar29) || 0x7f < uVar23) &&
                  (local_130 == 0 && local_12c == 0)) {
                local_130 = 1;
                local_12c = 0;
              }
              goto LAB_010bad80;
            }
            goto LAB_010bafe8;
          }
          if (uVar3 == uVar25) {
            if (uVar26 <= uVar23) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar23,uVar26,&DAT_018a6344);
            }
            iVar14 = uVar23 * 0x34 + iVar27;
            if ((*(int *)(iVar14 + 0x20) != 0) != bVar28) {
              if (*(int *)(iVar14 + 0x20) == 0) {
                if (*(byte *)(iVar14 + 0x24) == uVar11) goto LAB_010bab98;
              }
              else if ((*(undefined4 ********)(iVar14 + 0x28) == pppppppuVar5) &&
                      (iVar14 = thunk_FUN_016dd50a(*(undefined4 *)(iVar14 + 0x24),pppppppuVar18),
                      iVar14 == 0)) goto LAB_010bab98;
            }
          }
          uVar20 = uVar20 + 1;
          uVar23 = uVar12 + 1;
          goto LAB_010baaec;
        }
        (*(code *)local_c8[4])(&pppppppuStack_bc,pppppppuStack_c4,pppppppuStack_c0);
        if (local_90 != (undefined4 *******)0x0) {
          (*(code *)local_90[4])(local_84,local_8c,local_88);
        }
        goto LAB_010bafe8;
      }
      local_a8 = &local_ec;
      local_64 = (undefined4 *******)FUN_010bb160;
      local_68 = &local_a8;
      FUN_00600d2c(auStack_d4,&DAT_0056e017,&local_68);
      FUN_01650c14(&local_68,0x14,auStack_d4);
      pppppppuVar9 = local_68;
      pppppppuVar17 = local_64;
      goto LAB_010ba8fc;
    }
    FUN_015e79d4(&local_50,0x14,"Partial header",0xe);
  }
  pppppppuVar9 = local_50;
  pppppppuVar17 = local_4c;
LAB_010ba8fc:
  param_1[2] = (int)pppppppuVar9;
  *param_1 = 3;
  param_1[1] = 0;
  param_1[3] = (int)pppppppuVar17;
LAB_010ba914:
  if (uVar24 != 0) {
    thunk_FUN_016d3fb4(pppppppuVar8);
  }
  FUN_00a517d8(&local_130);
  return;
LAB_010bab98:
  local_68 = local_c8;
  local_64 = pppppppuStack_c4;
  local_60 = pppppppuStack_c0;
  local_5c = pppppppuStack_bc;
  pppppppuStack_58 = pppppppuStack_b8;
  piVar15 = (int *)(iVar27 + uVar23 * 0x34);
  if (*piVar15 != 0) {
    pppppppuVar18 = (undefined4 *******)piVar15[1];
    while( true ) {
      FUN_010b1bc4(&local_50,iVar27,uVar26,&local_104,pppppppuVar18);
      pppppppuVar18 = local_44;
      if (local_48 != (undefined4 *******)&DAT_00000001) break;
      (*(code *)local_40[4])(auStack_34,uStack_3c,uStack_38);
      uVar26 = local_108;
      iVar27 = local_10c;
    }
    (*(code *)local_40[4])(auStack_34,uStack_3c,uStack_38);
    uVar26 = local_108;
  }
  if (uVar26 <= uVar23) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar23,uVar26,&DAT_018a63b4);
  }
  iVar21 = uVar23 * 0x34 + local_10c;
  local_78 = *(undefined4 ********)(iVar21 + 0xc);
  uStack_74 = *(uint *)(iVar21 + 0x10);
  uStack_70 = *(undefined4 *)(iVar21 + 0x14);
  uStack_6c = *(undefined4 *)(iVar21 + 0x18);
  local_7c = *(undefined2 *)(iVar21 + 0x1d);
  local_7a = *(undefined1 *)(iVar21 + 0x1f);
  cVar2 = *(char *)(iVar21 + 0x1c);
  *(undefined4 ********)(iVar21 + 0xc) = local_68;
  *(undefined4 ********)(iVar21 + 0x10) = local_64;
  *(undefined4 ********)(iVar21 + 0x14) = local_60;
  *(undefined4 ********)(iVar21 + 0x18) = local_5c;
  *(undefined4 ********)(iVar21 + 0x1c) = pppppppuStack_58;
  if (local_90 != (undefined4 *******)0x0) {
    (*(code *)local_90[4])(local_84,local_8c,local_88);
  }
  if (cVar2 == '\x03') {
LAB_010bafe8:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0040929f,0x17,&local_50,&DAT_018a62e4,&DAT_018a6184);
  }
  local_95 = local_7a;
  local_97 = local_7c;
  local_a8 = local_78;
  local_a4 = uStack_74;
  uStack_a0 = uStack_70;
  uStack_9c = uStack_6c;
  local_98 = cVar2;
  if (cVar2 != '\x02') {
    (*(code *)local_78[4])(&uStack_9c,uStack_74,uStack_70);
  }
LAB_010bad80:
  if (pppppppuVar9 == pppppppuVar17) goto LAB_010baf10;
  goto LAB_010ba990;
}

