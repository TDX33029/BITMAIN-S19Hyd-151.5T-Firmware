// FUN_01127980 @ 01127980 size=1528 calls_out=9 calls_in=0
// strings: FGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzInvalid payload lengthIO transport errorToo many data decryptedToo many data encrypted | 123456789ABCDE

undefined4 FUN_01127980(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte **ppbVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint local_130;
  uint uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined2 local_120;
  byte *local_118;
  byte *local_114;
  byte *local_110;
  byte *local_108;
  byte *local_104;
  byte *local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  undefined1 auStack_e8 [8];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined2 local_c0;
  undefined1 local_a0;
  byte *local_98;
  byte *local_94;
  byte *local_90;
  byte *local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4f;
  undefined4 local_4b;
  undefined4 local_47;
  undefined4 local_43;
  undefined4 local_3f;
  undefined3 uStack_3b;
  uint local_38;
  uint local_34;
  byte local_30;
  
  local_140 = CONCAT22(local_140._2_2_,1);
  FUN_016dd1aa((uint)&local_140 | 2,param_1,0x20);
  local_114 = &DAT_00000001;
  local_110 = (byte *)0x0;
  local_118 = (byte *)0x0;
  FUN_010e02bc(&local_118,0,0x39);
  pbVar14 = local_110;
  pbVar11 = local_114;
  FUN_016dd606(local_114 + (int)local_110,0,0x39);
  pbVar14 = (byte *)((int)pbVar14 + 0x39);
  local_108 = (byte *)0x6a09e667;
  local_104 = (byte *)0xbb67ae85;
  local_100 = (byte *)0x3c6ef372;
  local_fc = 0xa54ff53a;
  local_f8 = 0x510e527f;
  local_f4 = 0x9b05688c;
  local_f0 = 0x1f83d9ab;
  local_ec = 0x5be0cd19;
  local_110 = pbVar14;
  FUN_016dd606(auStack_e8,0,0x49);
  local_e0 = local_140;
  uStack_dc = uStack_13c;
  uStack_d8 = uStack_138;
  uStack_d4 = uStack_134;
  local_d0 = local_130;
  local_cc = uStack_12c;
  uStack_c8 = uStack_128;
  uStack_c4 = uStack_124;
  local_c0 = local_120;
  local_a0 = 0x22;
  FUN_016dd1aa(&local_98,&local_108,0x70);
  uVar10 = (uint)local_30;
  *(undefined1 *)((int)&local_70 + uVar10) = 0x80;
  uVar15 = uVar10 << 0x1b | ((local_78 << 9 | uVar10 << 3) >> 8 & 0xff) << 0x10 |
           ((local_78 & 0x7fffff) >> 7 & 0xff) << 8 | (local_78 & 0x7fffff) >> 0xf;
  uVar12 = (local_78 >> 0x17) << 0x18 | ((local_74 << 9 | local_78 >> 0x17) >> 8 & 0xff) << 0x10 |
           ((local_74 & 0x7fffff) >> 7 & 0xff) << 8 | (local_74 & 0x7fffff) >> 0xf;
  if ((uVar10 == 0x3f) || (FUN_016dd606((int)&local_70 + uVar10 + 1,0), (uVar10 ^ 0x38) < 8)) {
    FUN_01585360(&local_98,&local_70,1);
    FUN_016dd606(&local_108,0,0x38);
    ppbVar5 = &local_108;
    local_d0 = uVar12;
    local_cc = uVar15;
  }
  else {
    ppbVar5 = (byte **)&local_70;
    local_38 = uVar12;
    local_34 = uVar15;
  }
  FUN_01585360(&local_98,ppbVar5,1);
  local_58 = local_80 << 0x18 | (local_80 >> 8 & 0xff) << 0x10 | (local_80 >> 0x10 & 0xff) << 8 |
             local_80 >> 0x18;
  local_80 = 0x1f83d9ab;
  iVar13 = 0;
  local_5c = local_84 << 0x18 | (local_84 >> 8 & 0xff) << 0x10 | (local_84 >> 0x10 & 0xff) << 8 |
             local_84 >> 0x18;
  local_60 = local_88 << 0x18 | (local_88 >> 8 & 0xff) << 0x10 | (local_88 >> 0x10 & 0xff) << 8 |
             local_88 >> 0x18;
  local_64 = (int)local_8c << 0x18 | ((uint)local_8c >> 8 & 0xff) << 0x10 |
             ((uint)local_8c >> 0x10 & 0xff) << 8 | (uint)local_8c >> 0x18;
  local_68 = (int)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
             ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18;
  iVar16 = 1;
  local_6c = (int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
             ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18;
  local_38 = 0;
  local_34 = 0x10000;
  local_30 = 0x20;
  local_54 = local_7c << 0x18 | (local_7c >> 8 & 0xff) << 0x10 | (local_7c >> 0x10 & 0xff) << 8 |
             local_7c >> 0x18;
  local_70 = (byte *)((int)local_98 << 0x18 | ((uint)local_98 >> 8 & 0xff) << 0x10 |
                      ((uint)local_98 >> 0x10 & 0xff) << 8 | (uint)local_98 >> 0x18);
  local_50 = 0x80;
  local_4f = 0;
  local_4b = 0;
  local_47 = 0;
  local_43 = 0;
  local_3f = 0;
  uStack_3b = 0;
  local_98 = (byte *)0x6a09e667;
  local_94 = (byte *)0xbb67ae85;
  local_90 = (byte *)0x3c6ef372;
  local_8c = (byte *)0xa54ff53a;
  local_88 = 0x510e527f;
  local_84 = 0x9b05688c;
  local_7c = 0x5be0cd19;
  FUN_01585360(&local_98,&local_70,1);
  local_ec = local_7c << 0x18 | (local_7c >> 8 & 0xff) << 0x10 | (local_7c >> 0x10 & 0xff) << 8 |
             local_7c >> 0x18;
  local_f0 = local_80 << 0x18 | (local_80 >> 8 & 0xff) << 0x10 | (local_80 >> 0x10 & 0xff) << 8 |
             local_80 >> 0x18;
  iVar17 = 0;
  local_f4 = local_84 << 0x18 | (local_84 >> 8 & 0xff) << 0x10 | (local_84 >> 0x10 & 0xff) << 8 |
             local_84 >> 0x18;
  local_f8 = local_88 << 0x18 | (local_88 >> 8 & 0xff) << 0x10 | (local_88 >> 0x10 & 0xff) << 8 |
             local_88 >> 0x18;
  puVar7 = (undefined *)0x3a;
  local_fc = (int)local_8c << 0x18 | ((uint)local_8c >> 8 & 0xff) << 0x10 |
             ((uint)local_8c >> 0x10 & 0xff) << 8 | (uint)local_8c >> 0x18;
  local_100 = (byte *)((int)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                       ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18);
  local_104 = (byte *)((int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
                       ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18);
  local_108 = (byte *)((int)local_98 << 0x18 | ((uint)local_98 >> 8 & 0xff) << 0x10 |
                       ((uint)local_98 >> 0x10 & 0xff) << 8 | (uint)local_98 >> 0x18);
  pbVar6 = (byte *)0x0;
  puVar8 = &DAT_01887738;
  do {
    if (iVar16 == 2 || iVar13 == 0x22) {
      if (iVar17 == 4) {
        puVar8 = (undefined *)0x0;
        puVar7 = &DAT_01887728;
        pbVar9 = pbVar14;
        if (pbVar14 < pbVar6) {
          pbVar9 = pbVar6;
        }
        iVar13 = 0;
        iVar16 = 0;
LAB_01127d78:
        iVar17 = iVar13 + -0x58;
        iVar13 = iVar13 + 1;
        bVar18 = false;
        cVar1 = auStack_e8[iVar17];
        do {
          if (cVar1 != '\0') {
LAB_01127dbc:
            if (pbVar6 <= pbVar14) {
              if (pbVar6 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                pbVar14 = (byte *)0x0;
                puVar7 = &DAT_01887708;
                do {
                  pbVar9 = (byte *)(uint)pbVar11[(int)pbVar14];
                  if (&DAT_00000039 < pbVar9) {
                    pbVar14 = &DAT_0000003a;
LAB_01127f78:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(pbVar9,pbVar14,puVar7);
                  }
                  pbVar11[(int)pbVar14] = pbVar9[0x38a3fe];
                  pbVar14 = pbVar14 + 1;
                } while (pbVar6 != pbVar14);
                pbVar14 = &DAT_00000001;
                if (pbVar6 != &DAT_00000001) {
                  iVar16 = 0;
                  do {
                    bVar2 = pbVar11[-iVar16];
                    pbVar11[-iVar16] = (pbVar11 + (int)pbVar6)[iVar16 + -1];
                    iVar13 = iVar16 + -1;
                    (pbVar11 + (int)pbVar6)[iVar16 + -1] = bVar2;
                    iVar16 = iVar13;
                  } while (-iVar13 != (uint)pbVar6 >> 1);
                  pbVar14 = pbVar6;
                }
              }
              pbVar11 = local_110;
              if (pbVar14 < local_110) {
                pbVar11 = pbVar14;
              }
              local_108 = local_118;
              local_104 = local_114;
              local_110 = pbVar11;
              local_100 = pbVar11;
              FUN_00fab1e0(&local_98,local_114,pbVar11);
              pbVar14 = local_90;
              if (local_98 == (byte *)0x0) {
                pbVar6 = local_104;
                pbVar9 = local_108;
              }
              else {
                pbVar6 = local_100;
                pbVar11 = local_94;
                pbVar9 = local_104;
                if (local_108 != &DAT_80000000) {
                  local_98 = local_108;
                  local_90 = local_100;
                  local_8c = local_94;
                  local_94 = local_104;
                  local_88 = (uint)pbVar14;
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_98,&DAT_018876a8,&DAT_018876b8);
                }
              }
              uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,pbVar6,pbVar11);
              if (pbVar9 != (byte *)0x0) {
                thunk_FUN_016d3fb4(pbVar6);
              }
              return uVar4;
            }
            puVar8 = &DAT_01887718;
            goto LAB_01127f28;
          }
          if (pbVar14 == pbVar6) goto LAB_01127f38;
          if (pbVar9 == pbVar6) goto LAB_01127f78;
          pbVar11[(int)pbVar6] = 0;
          pbVar6 = pbVar6 + 1;
          if (!bVar18) {
            bVar18 = iVar13 == 0x22;
          }
          if (!bVar18) goto LAB_01127d78;
          if (iVar16 == 4) goto LAB_01127dbc;
          iVar17 = iVar16 + -0x20;
          iVar16 = iVar16 + 1;
          bVar18 = true;
          cVar1 = auStack_e8[iVar17];
        } while( true );
      }
      iVar16 = 2;
      pbVar9 = auStack_e8 + iVar17 + -0x20;
      iVar17 = iVar17 + 1;
    }
    else {
      iVar16 = 0;
      pbVar9 = auStack_e8 + iVar13 + -0x58;
      iVar13 = iVar13 + 1;
    }
    if (pbVar14 < pbVar6) {
LAB_01127f28:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,pbVar6,pbVar14,puVar8);
    }
    uVar10 = (uint)*pbVar9;
    pbVar3 = pbVar11;
    for (pbVar9 = pbVar6; pbVar9 != (byte *)0x0; pbVar9 = pbVar9 + -1) {
      uVar12 = uVar10 + (uint)*pbVar3 * 0x100;
      uVar10 = uVar12 / 0x3a;
      *pbVar3 = (char)uVar12 + (char)uVar10 * -0x3a;
      pbVar3 = pbVar3 + 1;
    }
    if (uVar10 != 0) {
      do {
        if (pbVar14 == pbVar6) {
LAB_01127f38:
          if (local_118 != (byte *)0x0) {
            thunk_FUN_016d3fb4(local_114,pbVar6,puVar7,puVar8);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_98,&DAT_01887758,&DAT_01887748);
        }
        bVar18 = 0x39 < uVar10;
        pbVar11[(int)pbVar6] = (char)uVar10 + (char)(uVar10 / 0x3a) * -0x3a;
        pbVar6 = pbVar6 + 1;
        uVar10 = uVar10 / 0x3a;
      } while (bVar18);
    }
  } while( true );
}

