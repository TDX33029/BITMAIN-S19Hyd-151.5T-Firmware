// FUN_00fbfdb4 @ 00fbfdb4 size=3504 calls_out=16 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fbfdb4(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined *puVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  uint *puVar28;
  uint uVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  bool bVar34;
  uint *local_d7c;
  uint *local_d74;
  uint local_d3c;
  uint *local_d38;
  uint *puStack_d34;
  uint *puStack_d30;
  uint *puStack_d2c;
  uint *local_d28;
  uint uStack_d24;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  uint *local_d18;
  uint *puStack_d14;
  uint *puStack_d10;
  uint *puStack_d0c;
  uint *puStack_d08;
  int iStack_d04;
  uint *local_d00;
  uint *puStack_cfc;
  uint *puStack_cf8;
  uint *puStack_cf4;
  uint *puStack_cf0;
  int iStack_cec;
  uint *local_ce8;
  uint *local_ce4;
  uint *local_ce0;
  uint *puStack_cdc;
  uint *local_cd8;
  uint local_cd4;
  undefined4 local_cd0;
  undefined4 local_ccc;
  undefined4 local_cc8;
  undefined *local_cc4;
  undefined4 local_cc0;
  uint *local_ad8;
  uint *puStack_ad4;
  uint *local_ad0;
  uint *local_acc;
  uint *local_ac8;
  int iStack_ac4;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  uint *local_ab8;
  uint *local_ab4;
  uint *local_ab0;
  char local_aa8 [536];
  undefined1 auStack_890 [504];
  uint *local_698;
  uint *puStack_694;
  uint *puStack_690;
  uint *puStack_68c;
  uint *local_688;
  uint uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  uint *local_480;
  uint *local_47c;
  uint *local_478;
  uint *local_474;
  uint *local_470;
  int local_46c;
  undefined4 uStack_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined *local_45c;
  undefined4 local_458;
  undefined1 auStack_268 [512];
  uint *local_68;
  uint *puStack_64;
  uint *puStack_60;
  uint *puStack_5c;
  uint *local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *puStack_3c;
  uint *local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 < 0) {
    FUN_00fc0dd4((uint)&local_480 | 4,param_2);
    FUN_016dd1aa(&local_698,&local_46c,0x1fc);
    uVar18 = (uint)local_470 >> 8;
    uVar30 = 0xd;
    puVar17 = local_478;
    puVar15 = local_47c;
    puVar28 = local_474;
LAB_00fbff70:
    *(short *)((int)param_1 + 0x11) = (short)uVar18;
    *(char *)((int)param_1 + 0x13) = (char)(uVar18 >> 0x10);
    *(char *)(param_1 + 4) = (char)local_470;
    FUN_016dd1aa(param_1 + 5,&local_698,0x1fc);
    *param_1 = uVar30;
    param_1[1] = puVar15;
    param_1[2] = puVar17;
    param_1[3] = puVar28;
    return;
  }
  uVar29 = param_2[2];
  bVar34 = 0x3ffffffe < uVar29;
  bVar33 = uVar29 == 0x3fffffff;
  uVar18 = uVar29 * 4;
  if (uVar29 < 0x40000000) {
    bVar34 = 0x7ffffffb < uVar18;
    bVar33 = uVar18 == 0x7ffffffc;
  }
  if (bVar34 && !bVar33) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar18);
  }
  iVar27 = param_2[1];
  bVar1 = *(byte *)((int)param_2 + 0x1d);
  if (uVar18 == 0) {
    puVar15 = (uint *)&DAT_00000004;
    local_d3c = 0;
  }
  else {
    puVar15 = (uint *)thunk_FUN_016d4a50(uVar18);
    local_d3c = uVar29;
    if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar18);
    }
  }
  FUN_016dd1aa(puVar15,iVar27,uVar18);
  if ((uint *)(uint)bVar1 != (uint *)&SUB_00000002) {
    puVar17 = (uint *)thunk_FUN_016d4a50(1);
    if (puVar17 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,1);
    }
    *(undefined1 *)puVar17 = 2;
    uVar30 = 0xc;
    uVar18 = 0;
    if (local_d3c != 0) {
      uVar18 = thunk_FUN_016d3fb4(puVar15);
    }
    local_470 = (uint *)(uint)bVar1;
    puVar15 = (uint *)1;
    puVar28 = (uint *)1;
    goto LAB_00fbff70;
  }
  FUN_015a6814(&local_ce8,param_2[4],param_2[5],0);
  local_48 = local_ce4;
  local_44 = local_ce0;
  local_40 = puStack_cdc;
  if (local_ce8 == (uint *)&DAT_00000001) {
    local_478 = local_ce0;
    local_47c = local_ce4;
    puVar16 = (undefined4 *)((uint)&local_480 | 4);
    local_474 = puStack_cdc;
    local_698 = (uint *)*puVar16;
    puStack_694 = (uint *)puVar16[1];
    puStack_690 = (uint *)puVar16[2];
    puStack_68c = (uint *)puVar16[3];
    local_688 = (uint *)puVar16[4];
    uStack_684 = puVar16[5];
    uStack_680 = puVar16[6];
    uStack_67c = puVar16[7];
    FUN_016dd1aa(param_1 + 9,&local_45c,0x1ec);
    param_1[1] = local_698;
    param_1[2] = puStack_694;
    param_1[3] = puStack_690;
    param_1[4] = puStack_68c;
    param_1[5] = local_688;
    param_1[6] = uStack_684;
    param_1[7] = uStack_680;
    param_1[8] = uStack_67c;
    *param_1 = 4;
LAB_00fbff24:
    if (local_d3c == 0) {
      return;
    }
    goto LAB_00fc0a78;
  }
  local_46c = param_2[6];
  puVar16 = (undefined4 *)((uint)&local_480 | 4);
  local_474 = local_ce0;
  local_470 = puStack_cdc;
  local_d38 = (uint *)*puVar16;
  puStack_d34 = (uint *)puVar16[1];
  puStack_d30 = (uint *)puVar16[2];
  puStack_d2c = (uint *)puVar16[3];
  local_d28 = (uint *)puVar16[4];
  uStack_d24 = puVar16[5];
  uStack_d20 = puVar16[6];
  uStack_d1c = puVar16[7];
  local_478 = (uint *)0x0;
  local_47c = (uint *)&DAT_00000004;
  local_480 = (uint *)0x0;
  local_698 = local_d38;
  puStack_694 = puStack_d34;
  puStack_690 = puStack_d30;
  puStack_68c = puStack_d2c;
  local_688 = local_d28;
  uStack_684 = uStack_d24;
  uStack_680 = uStack_d20;
  uStack_67c = uStack_d1c;
  FUN_0127ac28(&local_480);
  puVar9 = local_47c;
  puVar17 = local_480;
  *local_47c = 1;
  local_478 = (uint *)0x0;
  local_47c = (uint *)&DAT_00000004;
  local_480 = (uint *)0x0;
  FUN_0127ac28(&local_480);
  puVar10 = local_47c;
  puVar28 = local_480;
  *local_47c = 2;
  local_478 = (uint *)0x0;
  local_47c = (uint *)&DAT_00000004;
  local_480 = (uint *)0x0;
  FUN_0127ac28(&local_480);
  puVar11 = local_47c;
  puVar4 = local_480;
  *local_47c = 3;
  local_478 = (uint *)0x0;
  local_47c = (uint *)&DAT_00000004;
  local_480 = (uint *)0x0;
  FUN_0127ac28(&local_480);
  puVar12 = local_47c;
  puVar5 = local_480;
  *local_47c = 5;
  local_478 = (uint *)0x0;
  local_47c = (uint *)&DAT_00000004;
  local_480 = (uint *)0x0;
  FUN_0127ac28(&local_480);
  puVar13 = local_47c;
  puVar6 = local_480;
  *local_47c = 6;
  local_478 = (uint *)0x0;
  local_47c = (uint *)&DAT_00000004;
  local_480 = (uint *)0x0;
  FUN_0127ac28(&local_480);
  puVar14 = local_47c;
  puVar7 = local_480;
  *local_47c = 7;
  if (uVar29 == 0) {
LAB_00fc019c:
    FUN_00fc0dd4(&local_480,&local_d38);
    local_ad8 = local_480;
    puStack_ad4 = local_47c;
    local_ad0 = local_478;
    local_acc = local_474;
    local_ac8 = local_470;
    iStack_ac4 = local_46c;
    uStack_ac0 = uStack_468;
    uStack_abc = local_464;
    if (local_480 == (uint *)0x8000000e) {
      if (local_474 != (uint *)&DAT_00000004) {
        local_ce0 = local_474;
        local_ce4 = (uint *)&DAT_00000004;
        local_d74 = (uint *)&DAT_00000006;
        goto LAB_00fc0980;
      }
      FUN_00fc8130(&local_480,local_478);
      puVar8 = local_47c;
      if (local_480 != (uint *)&DAT_00000010) {
        local_d74 = local_480;
        FUN_016dd1aa(&local_ce0,&local_478,0x208);
        local_ce4 = puVar8;
        goto LAB_00fc0980;
      }
      if (local_acc < &SUB_00000002) {
        uVar30 = 1;
        puVar22 = &DAT_01881404;
        goto LAB_00fc0b58;
      }
      puVar21 = local_ad0 + 8;
      if (*puVar21 != 0x80000001) {
        FUN_00fc0dd4((uint)&local_480 | 4,puVar21);
        local_45c = (undefined *)((uint)local_45c & 0xffffff00);
        local_d74 = (uint *)&DAT_00000008;
LAB_00fc0740:
        uVar3 = local_47c._0_1_;
        FUN_016dd1aa((uint)&local_ce8 | 5,(uint)&local_480 | 5,0x20b);
        local_ce4 = (uint *)CONCAT31(local_ce4._1_3_,uVar3);
        goto LAB_00fc0980;
      }
      cVar2 = (char)local_ad0[0xc];
      if (cVar2 == '\0') goto LAB_00fc071c;
      uVar18 = 1;
      if (cVar2 != '\x01') {
        uVar18 = local_ad0[0xb];
      }
      if (cVar2 == '\x01' || uVar18 == 0) {
        uVar18 = 0;
LAB_00fc0244:
        if (local_acc == (uint *)&SUB_00000002) {
          uVar30 = 2;
          puVar22 = &DAT_01881414;
LAB_00fc0b58:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar30,local_acc,puVar22);
        }
        puVar21 = local_ad0 + 0x10;
        if (*puVar21 == 0x80000001) {
          cVar2 = (char)local_ad0[0x14];
          if (cVar2 != '\0') {
            uVar32 = 0;
            uVar19 = 1;
            if (cVar2 != '\x01') {
              uVar19 = local_ad0[0x13];
            }
            if (cVar2 == '\x01' || uVar19 == 0) {
LAB_00fc0284:
              local_ab0 = (uint *)0x0;
              local_ab4 = (uint *)&DAT_00000008;
              local_ab8 = (uint *)0x0;
              if (local_acc < &DAT_00000004) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(3,local_acc,&DAT_01881424);
              }
              if (local_ad0[0x18] == 0x8000000e) {
                if (local_ad0[0x1b] != 0) {
                  iVar27 = local_ad0[0x1b] << 5;
                  uVar19 = local_ad0[0x1a];
                  iVar25 = 0;
                  local_d7c = (uint *)&DAT_00000008;
                  do {
                    puVar21 = local_ab0;
                    FUN_00fc0dd4(&local_48,uVar19);
                    local_68 = local_48;
                    puStack_64 = local_44;
                    puStack_60 = local_40;
                    puStack_5c = puStack_3c;
                    local_58 = local_38;
                    iStack_54 = iStack_34;
                    uStack_50 = uStack_30;
                    uStack_4c = uStack_2c;
                    FUN_00fc1a14(&local_480);
                    cVar2 = (char)local_480;
                    if ((char)local_480 == '\x0e') {
                      FUN_016dd1aa((uint)&local_698 | 7,&local_478,0x210);
                      FUN_016dd1aa(&local_ce8,(uint)&local_698 | 7,0x210);
                      FUN_00fbd084(&local_68);
                      local_d74 = local_ce8;
                      FUN_00fc2784(&local_ab8);
                      puVar16 = (undefined4 *)((uint)&local_ce8 | 4);
                      if (local_d74 == (uint *)&DAT_00000010) goto LAB_00fc07e4;
                      goto LAB_00fc0988;
                    }
                    FUN_016dd1aa(&local_698,(uint)&local_480 | 1,0x217);
                    FUN_016dd1aa(auStack_890,auStack_268,0x1f8);
                    FUN_016dd1aa((uint)local_aa8 | 1,&local_698,0x217);
                    local_aa8[0] = cVar2;
                    FUN_00fbd084(&local_68);
                    if (puVar21 == local_ab8) {
                      FUN_00fc4a38(&local_ab8);
                      local_d7c = local_ab4;
                    }
                    uVar19 = uVar19 + 0x20;
                    FUN_016dd1aa((undefined1 *)((int)local_d7c + iVar25),local_aa8,0x410);
                    local_ab0 = (uint *)((int)puVar21 + 1);
                    iVar25 = iVar25 + 0x410;
                    iVar27 = iVar27 + -0x20;
                  } while (iVar27 != 0);
                }
                local_ce4 = local_ab8;
                local_ce0 = local_ab4;
                puStack_cdc = local_ab0;
                local_cd0 = CONCAT31(local_cd0._1_3_,(char)uVar18);
                puVar16 = (undefined4 *)((uint)&local_ce8 | 4);
                local_cd8 = puVar8;
                local_cd4 = uVar32;
LAB_00fc07e4:
                local_d00 = (uint *)*puVar16;
                puStack_cfc = (uint *)puVar16[1];
                puStack_cf8 = (uint *)puVar16[2];
                puStack_cf4 = (uint *)puVar16[3];
                puStack_cf0 = (uint *)puVar16[4];
                iStack_cec = puVar16[5];
                local_480 = local_d00;
                local_47c = puStack_cfc;
                local_478 = puStack_cf8;
                local_474 = puStack_cf4;
                local_470 = puStack_cf0;
                local_46c = iStack_cec;
                FUN_00fbd084(&local_ad8);
                if (uVar29 == 0) {
                  uVar30 = 0;
                }
                else {
                  if (uVar29 != 1) {
LAB_00fc0890:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa464(&DAT_00419463,0x28,&DAT_01881434);
                  }
                  if (*puVar15 == *puVar9) {
                    uVar30 = 1;
                  }
                  else if (*puVar15 == *puVar10) {
                    uVar30 = 3;
                  }
                  else if (*puVar15 == *puVar11) {
                    uVar30 = 4;
                  }
                  else if (*puVar15 == *puVar13) {
                    uVar30 = 5;
                  }
                  else {
                    uVar30 = 6;
                    if (*puVar15 != *puVar14) goto LAB_00fc0890;
                  }
                }
                goto LAB_00fc040c;
              }
              FUN_00fc0dd4((uint)&local_480 | 4);
              puVar8 = local_47c;
              local_45c = (undefined *)CONCAT31(local_45c._1_3_,2);
              FUN_016dd1aa(&local_ce0,&local_478,0x208);
              local_d74 = (uint *)&DAT_00000008;
              local_ce4 = puVar8;
              local_ce8 = (uint *)&DAT_00000008;
              FUN_00fc2784(&local_ab8);
              goto LAB_00fc0980;
            }
            iVar27 = uVar19 * 4;
            if (0xfffffffa < iVar27 - 9U) {
              uVar19 = 0;
              iVar25 = 0;
              puVar26 = (uint *)local_ad0[0x12];
              do {
                uVar23 = *puVar26;
                uVar24 = uVar19 & 0xff;
                uVar31 = (uVar19 & 0xff) - 0x20;
                uVar19 = uVar19 + 0x20;
                uVar20 = uVar23 >> (0x20 - uVar24 & 0xff);
                if (-1 < (int)uVar31) {
                  uVar20 = uVar23 << (uVar31 & 0xff);
                }
                uVar23 = uVar23 << uVar24;
                if (-1 < (int)uVar31) {
                  uVar23 = 0;
                }
                bVar33 = CARRY4(uVar23,uVar32);
                uVar32 = uVar23 + uVar32;
                iVar25 = uVar20 + iVar25 + (uint)bVar33;
                iVar27 = iVar27 + -4;
                puVar26 = puVar26 + 1;
              } while (iVar27 != 0);
              if (iVar25 == 0) goto LAB_00fc0284;
            }
          }
          FUN_00fc0dd4((uint)&local_480 | 4,puVar21);
          local_458 = 3;
          local_45c = &DAT_00410f5a;
          local_d74 = (uint *)&DAT_00000009;
        }
        else {
          FUN_00fc0dd4((uint)&local_480 | 4,puVar21);
          local_45c = (undefined *)((uint)local_45c & 0xffffff00);
          local_d74 = (uint *)&DAT_00000008;
        }
        puVar8 = local_47c;
        FUN_016dd1aa(&local_ce0,&local_478,0x208);
        local_ce4 = puVar8;
        goto LAB_00fc0980;
      }
      iVar27 = uVar18 * 4;
      if (iVar27 - 9U < 0xfffffffb) {
LAB_00fc071c:
        FUN_00fc0dd4((uint)&local_480 | 4,puVar21);
        local_458 = 2;
        local_45c = &DAT_00410f4f;
        local_d74 = (uint *)&DAT_00000009;
        goto LAB_00fc0740;
      }
      uVar18 = 0;
      uVar32 = 0;
      uVar19 = 0;
      puVar26 = (uint *)local_ad0[10];
      do {
        uVar31 = *puVar26;
        uVar20 = uVar19 & 0xff;
        uVar24 = (uVar19 & 0xff) - 0x20;
        uVar19 = uVar19 + 0x20;
        uVar23 = uVar31 >> (0x20 - uVar20 & 0xff);
        uVar20 = uVar31 << uVar20;
        if (-1 < (int)uVar24) {
          uVar23 = uVar31 << (uVar24 & 0xff);
          uVar20 = 0;
        }
        bVar33 = CARRY4(uVar20,uVar18);
        uVar18 = uVar20 + uVar18;
        uVar32 = uVar23 + uVar32 + (uint)bVar33;
        iVar27 = iVar27 + -4;
        puVar26 = puVar26 + 1;
      } while (iVar27 != 0);
      if (uVar32 != 0 || uVar32 < (0xff < uVar18)) goto LAB_00fc071c;
      if (uVar18 < 0x13) goto LAB_00fc0244;
      FUN_00fc0dd4(&local_480,puVar21);
      uVar3 = (char)local_480;
      FUN_016dd1aa((uint)&local_ce8 | 5,(uint)&local_480 | 1,0x1f);
      local_cc0 = 0xb;
      puVar16 = (undefined4 *)((uint)&local_ce8 | 4);
      local_cc4 = &DAT_0036dfbe;
      local_ce4 = (uint *)CONCAT31(local_ce4._1_3_,uVar3);
      local_d74 = (uint *)&DAT_0000000e;
    }
    else {
      FUN_00fc0dd4((uint)&local_480 | 4,&local_ad8);
      puVar8 = local_47c;
      local_45c = (undefined *)CONCAT31(local_45c._1_3_,2);
      FUN_016dd1aa(&local_ce0,&local_478,0x208);
      local_ce4 = puVar8;
      local_d74 = (uint *)&DAT_00000008;
LAB_00fc0980:
      puVar16 = (undefined4 *)((uint)&local_ce8 | 4);
    }
LAB_00fc0988:
    uVar30 = local_ccc;
    local_d00 = (uint *)*puVar16;
    puStack_cfc = (uint *)puVar16[1];
    puStack_cf8 = (uint *)puVar16[2];
    puStack_cf4 = (uint *)puVar16[3];
    puStack_cf0 = (uint *)puVar16[4];
    iStack_cec = puVar16[5];
    FUN_016dd1aa(param_1 + 9,&local_cc4,0x1ec);
    param_1[1] = local_d00;
    param_1[2] = puStack_cfc;
    param_1[3] = puStack_cf8;
    param_1[4] = puStack_cf4;
    param_1[5] = puStack_cf0;
    param_1[6] = iStack_cec;
    param_1[7] = uVar30;
    param_1[8] = local_cc8;
    *param_1 = local_d74;
    FUN_00fbd084(&local_ad8);
LAB_00fc09dc:
    bVar33 = true;
  }
  else {
    if (uVar29 == 1) {
      if ((*puVar15 <= *puVar11) || ((*puVar13 <= *puVar15 && (*puVar15 <= *local_47c))))
      goto LAB_00fc019c;
      if (*puVar15 != *puVar12) goto LAB_00fc0184;
      FUN_00fc0dd4(&local_698,&local_d38);
      local_ce8 = local_698;
      local_ce4 = puStack_694;
      local_ce0 = puStack_690;
      puStack_cdc = puStack_68c;
      local_cd8 = local_688;
      local_cd4 = uStack_684;
      local_cd0 = uStack_680;
      local_ccc = uStack_67c;
      FUN_00fc144c(&local_480);
      puVar8 = local_480;
      puVar16 = (undefined4 *)((uint)&local_480 | 4);
      local_48 = (uint *)*puVar16;
      local_44 = (uint *)puVar16[1];
      local_40 = (uint *)puVar16[2];
      puStack_3c = (uint *)puVar16[3];
      local_38 = (uint *)puVar16[4];
      iStack_34 = puVar16[5];
      if (local_480 == (uint *)&DAT_00000010) {
        local_480 = local_48;
        local_47c = local_44;
        local_478 = local_40;
        local_474 = puStack_3c;
        local_470 = local_38;
        local_46c = iStack_34;
        FUN_00fbd084(&local_ce8);
        uVar30 = 2;
LAB_00fc040c:
        param_1[2] = local_480;
        param_1[3] = local_47c;
        param_1[4] = local_478;
        param_1[5] = local_474;
        param_1[6] = local_470;
        param_1[7] = local_46c;
        param_1[8] = param_2 + 8;
        param_1[9] = 0;
        *param_1 = 0x10;
        param_1[1] = uVar30;
        local_d18 = local_480;
        puStack_d14 = local_47c;
        puStack_d10 = local_478;
        puStack_d0c = local_474;
        puStack_d08 = local_470;
        iStack_d04 = local_46c;
        if (puVar7 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar14);
        }
        if (puVar6 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar13);
        }
        if (puVar5 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar12);
        }
        if (puVar4 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar11);
        }
        if (puVar28 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar10);
        }
        if (puVar17 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar9);
        }
        FUN_00fbd084(&local_d38);
        goto LAB_00fbff24;
      }
      FUN_016dd1aa(param_1 + 9,&local_45c,0x1ec);
      param_1[1] = local_48;
      param_1[2] = local_44;
      param_1[3] = local_40;
      param_1[4] = puStack_3c;
      param_1[5] = local_38;
      param_1[6] = iStack_34;
      param_1[7] = local_464;
      param_1[8] = local_460;
      *param_1 = puVar8;
      FUN_00fbd084(&local_ce8);
      goto LAB_00fc09dc;
    }
LAB_00fc0184:
    bVar33 = false;
    *param_1 = 0xb;
    param_1[1] = local_d3c;
    param_1[2] = puVar15;
    param_1[3] = uVar29;
  }
  if (puVar7 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar14);
  }
  if (puVar6 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar13);
  }
  if (puVar5 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar12);
  }
  if (puVar4 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar11);
  }
  if (puVar28 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar10);
  }
  if (puVar17 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar9);
  }
  FUN_00fbd084(&local_d38);
  if (local_d3c == 0 || !bVar33) {
    return;
  }
LAB_00fc0a78:
  thunk_FUN_016d3fb4(puVar15);
  return;
}

