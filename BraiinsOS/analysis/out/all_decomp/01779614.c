// FUN_01779614 @ 01779614 size=2944 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01779614(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int *local_80;
  int *local_7c;
  int *local_78;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c [2];
  
  iVar2 = DAT_018ddaf8;
  local_2c[0] = DAT_018ddaf8;
  if (param_3 == 0) {
LAB_0177a14c:
    if (iVar2 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
  local_d8 = *param_1;
  local_e0 = param_1[2];
  local_78 = param_2 + 0xf;
  local_e4 = param_1[3];
  local_dc = param_1[1];
  local_7c = param_2 + 0xe;
  local_80 = param_2 + 0xd;
  while ((local_d4 = param_3 + -1, param_2 <= &iStack_30 || local_2c <= param_2 &&
         ((&iStack_30 <= param_2 || (param_2 + 1 <= &iStack_30))))) {
    piVar12 = param_2 + 1;
    iVar15 = *param_2;
    if ((piVar12 < &iStack_30 && &iStack_34 < piVar12) ||
       ((piVar12 < &iStack_34 && (&iStack_34 < param_2 + 2)))) break;
    piVar12 = param_2 + 2;
    iVar16 = param_2[1];
    if ((piVar12 < &iStack_34 && &iStack_38 < piVar12) ||
       ((piVar12 < &iStack_38 && (&iStack_38 < param_2 + 3)))) break;
    piVar12 = param_2 + 3;
    iVar17 = param_2[2];
    if ((&iStack_3c < piVar12 && piVar12 < &iStack_38) ||
       ((piVar12 < &iStack_3c && (&iStack_3c < param_2 + 4)))) break;
    piVar12 = param_2 + 4;
    iVar18 = param_2[3];
    if ((&iStack_40 < piVar12 && piVar12 < &iStack_3c) ||
       ((piVar12 < &iStack_40 && (&iStack_40 < param_2 + 5)))) break;
    piVar12 = param_2 + 5;
    iVar19 = param_2[4];
    if ((&iStack_44 < piVar12 && piVar12 < &iStack_40) ||
       ((piVar12 < &iStack_44 && (&iStack_44 < param_2 + 6)))) break;
    piVar12 = param_2 + 6;
    iVar20 = param_2[5];
    if ((&iStack_48 < piVar12 && piVar12 < &iStack_44) ||
       ((piVar12 < &iStack_48 && (&iStack_48 < param_2 + 7)))) break;
    piVar12 = param_2 + 7;
    iVar21 = param_2[6];
    if ((&iStack_4c < piVar12 && piVar12 < &iStack_48) ||
       ((piVar12 < &iStack_4c && (&iStack_4c < param_2 + 8)))) break;
    piVar12 = param_2 + 8;
    iVar5 = param_2[7];
    if ((&iStack_50 < piVar12 && piVar12 < &iStack_4c) ||
       ((piVar13 = param_2 + 9, piVar12 < &iStack_50 && (&iStack_50 < piVar13)))) break;
    iVar22 = param_2[8];
    if ((&iStack_54 < piVar13 && piVar13 < &iStack_50) ||
       ((piVar12 = param_2 + 10, piVar13 < &iStack_54 && (&iStack_54 < piVar12)))) break;
    iVar6 = param_2[9];
    if ((&iStack_58 < piVar12 && piVar12 < &iStack_54) ||
       ((piVar13 = param_2 + 0xb, piVar12 < &iStack_58 && (&iStack_58 < piVar13)))) break;
    iVar23 = param_2[10];
    if ((piVar13 < &iStack_58 && &iStack_5c < piVar13) ||
       ((piVar12 = param_2 + 0xc, piVar13 < &iStack_5c && (&iStack_5c < piVar12)))) break;
    iVar7 = param_2[0xb];
    if ((piVar12 < &iStack_5c && &iStack_60 < piVar12) ||
       ((piVar12 < &iStack_60 && (&iStack_60 < local_80)))) break;
    iVar11 = param_2[0xc];
    if ((local_80 < &iStack_60 && &iStack_64 < local_80) ||
       ((local_80 < &iStack_64 && (&iStack_64 < local_7c)))) break;
    iVar9 = param_2[0xd];
    if ((local_7c < &iStack_64 && &iStack_68 < local_7c) ||
       ((local_7c < &iStack_68 && (&iStack_68 < local_78)))) break;
    iVar24 = param_2[0xe];
    if ((local_78 < &iStack_68 && &iStack_6c < local_78) ||
       ((local_78 < &iStack_6c && (&iStack_6c < param_2 + 0x10)))) break;
    local_78 = local_78 + 0x10;
    iVar10 = param_2[0xf];
    local_7c = local_7c + 0x10;
    uVar14 = ((local_e4 ^ local_e0) & local_dc ^ local_e4) + iVar15 + local_d8;
    local_80 = local_80 + 0x10;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = ((local_e0 ^ local_dc) & uVar14 ^ local_e0) + local_e4 + iVar16;
    uVar8 = uVar8 >> 0x19 | uVar8 * 0x80;
    uVar3 = ((uVar14 ^ local_dc) & uVar8 ^ local_dc) + local_e0 + iVar17;
    uVar3 = uVar3 >> 0x15 | uVar3 * 0x800;
    uVar4 = ((uVar8 ^ uVar14) & uVar3 ^ uVar14) + local_dc + iVar18;
    uVar4 = uVar4 >> 0xd | uVar4 * 0x80000;
    uVar14 = ((uVar3 ^ uVar8) & uVar4 ^ uVar8) + uVar14 + iVar19;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = ((uVar4 ^ uVar3) & uVar14 ^ uVar3) + uVar8 + iVar20;
    uVar8 = uVar8 >> 0x19 | uVar8 * 0x80;
    uVar3 = ((uVar14 ^ uVar4) & uVar8 ^ uVar4) + uVar3 + iVar21;
    uVar3 = uVar3 >> 0x15 | uVar3 * 0x800;
    uVar4 = ((uVar8 ^ uVar14) & uVar3 ^ uVar14) + uVar4 + iVar5;
    uVar4 = uVar4 >> 0xd | uVar4 * 0x80000;
    uVar14 = ((uVar3 ^ uVar8) & uVar4 ^ uVar8) + uVar14 + iVar22;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = ((uVar4 ^ uVar3) & uVar14 ^ uVar3) + uVar8 + iVar6;
    uVar8 = uVar8 >> 0x19 | uVar8 * 0x80;
    uVar3 = ((uVar4 ^ uVar14) & uVar8 ^ uVar4) + uVar3 + iVar23;
    uVar3 = uVar3 >> 0x15 | uVar3 * 0x800;
    uVar4 = ((uVar14 ^ uVar8) & uVar3 ^ uVar14) + uVar4 + iVar7;
    uVar4 = uVar4 >> 0xd | uVar4 * 0x80000;
    uVar14 = ((uVar8 ^ uVar3) & uVar4 ^ uVar8) + uVar14 + iVar11;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = ((uVar3 ^ uVar4) & uVar14 ^ uVar3) + uVar8 + iVar9;
    uVar8 = uVar8 >> 0x19 | uVar8 * 0x80;
    uVar3 = ((uVar4 ^ uVar14) & uVar8 ^ uVar4) + uVar3 + iVar24;
    uVar3 = uVar3 >> 0x15 | uVar3 * 0x800;
    uVar4 = ((uVar14 ^ uVar8) & uVar3 ^ uVar14) + uVar4 + iVar10;
    uVar4 = uVar4 >> 0xd | uVar4 * 0x80000;
    uVar14 = ((uVar8 | uVar3) & uVar4 | uVar8 & uVar3) + iVar15 + 0x5a827999 + uVar14;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = ((uVar3 | uVar4) & uVar14 | uVar3 & uVar4) + iVar19 + 0x5a827999 + uVar8;
    uVar8 = uVar8 >> 0x1b | uVar8 * 0x20;
    uVar3 = ((uVar4 | uVar14) & uVar8 | uVar4 & uVar14) + iVar22 + 0x5a827999 + uVar3;
    uVar3 = uVar3 >> 0x17 | uVar3 * 0x200;
    uVar4 = ((uVar14 | uVar8) & uVar3 | uVar14 & uVar8) + iVar11 + 0x5a827999 + uVar4;
    uVar4 = uVar4 >> 0x13 | uVar4 * 0x2000;
    uVar14 = ((uVar8 | uVar3) & uVar4 | uVar8 & uVar3) + iVar16 + 0x5a827999 + uVar14;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = ((uVar3 | uVar4) & uVar14 | uVar3 & uVar4) + iVar20 + 0x5a827999 + uVar8;
    uVar8 = uVar8 >> 0x1b | uVar8 * 0x20;
    uVar3 = ((uVar4 | uVar14) & uVar8 | uVar4 & uVar14) + iVar6 + 0x5a827999 + uVar3;
    uVar3 = uVar3 >> 0x17 | uVar3 * 0x200;
    uVar4 = ((uVar14 | uVar8) & uVar3 | uVar14 & uVar8) + iVar9 + 0x5a827999 + uVar4;
    uVar4 = uVar4 >> 0x13 | uVar4 * 0x2000;
    uVar14 = ((uVar8 | uVar3) & uVar4 | uVar8 & uVar3) + iVar17 + 0x5a827999 + uVar14;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = ((uVar3 | uVar4) & uVar14 | uVar3 & uVar4) + iVar21 + 0x5a827999 + uVar8;
    uVar8 = uVar8 >> 0x1b | uVar8 * 0x20;
    uVar3 = ((uVar4 | uVar14) & uVar8 | uVar4 & uVar14) + iVar23 + 0x5a827999 + uVar3;
    uVar3 = uVar3 >> 0x17 | uVar3 * 0x200;
    uVar4 = ((uVar14 | uVar8) & uVar3 | uVar14 & uVar8) + iVar24 + 0x5a827999 + uVar4;
    uVar4 = uVar4 >> 0x13 | uVar4 * 0x2000;
    uVar14 = ((uVar8 | uVar3) & uVar4 | uVar8 & uVar3) + iVar18 + 0x5a827999 + uVar14;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = ((uVar3 | uVar4) & uVar14 | uVar3 & uVar4) + iVar5 + 0x5a827999 + uVar8;
    uVar8 = uVar8 >> 0x1b | uVar8 * 0x20;
    uVar3 = ((uVar4 | uVar14) & uVar8 | uVar4 & uVar14) + iVar7 + 0x5a827999 + uVar3;
    uVar3 = uVar3 >> 0x17 | uVar3 * 0x200;
    uVar4 = ((uVar14 | uVar8) & uVar3 | uVar14 & uVar8) + iVar10 + 0x5a827999 + uVar4;
    uVar4 = uVar4 >> 0x13 | uVar4 * 0x2000;
    uVar14 = (uVar8 ^ uVar3 ^ uVar4) + iVar15 + 0x6ed9eba1 + uVar14;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = (uVar3 ^ uVar4 ^ uVar14) + iVar22 + 0x6ed9eba1 + uVar8;
    uVar8 = uVar8 >> 0x17 | uVar8 * 0x200;
    uVar3 = (uVar4 ^ uVar14 ^ uVar8) + iVar19 + 0x6ed9eba1 + uVar3;
    uVar3 = uVar3 >> 0x15 | uVar3 * 0x800;
    uVar4 = (uVar14 ^ uVar8 ^ uVar3) + iVar11 + 0x6ed9eba1 + uVar4;
    uVar4 = uVar4 >> 0x11 | uVar4 * 0x8000;
    uVar14 = (uVar8 ^ uVar3 ^ uVar4) + iVar17 + 0x6ed9eba1 + uVar14;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = (uVar3 ^ uVar4 ^ uVar14) + iVar23 + 0x6ed9eba1 + uVar8;
    uVar8 = uVar8 >> 0x17 | uVar8 * 0x200;
    uVar3 = (uVar4 ^ uVar14 ^ uVar8) + iVar21 + 0x6ed9eba1 + uVar3;
    uVar3 = uVar3 >> 0x15 | uVar3 * 0x800;
    uVar4 = (uVar14 ^ uVar8 ^ uVar3) + iVar24 + 0x6ed9eba1 + uVar4;
    uVar4 = uVar4 >> 0x11 | uVar4 * 0x8000;
    uVar14 = (uVar8 ^ uVar3 ^ uVar4) + iVar16 + 0x6ed9eba1 + uVar14;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = (uVar3 ^ uVar4 ^ uVar14) + iVar6 + 0x6ed9eba1 + uVar8;
    uVar8 = uVar8 >> 0x17 | uVar8 * 0x200;
    uVar3 = (uVar4 ^ uVar14 ^ uVar8) + iVar20 + 0x6ed9eba1 + uVar3;
    uVar3 = uVar3 >> 0x15 | uVar3 * 0x800;
    uVar4 = (uVar14 ^ uVar8 ^ uVar3) + iVar9 + 0x6ed9eba1 + uVar4;
    uVar4 = uVar4 >> 0x11 | uVar4 * 0x8000;
    uVar14 = (uVar8 ^ uVar3 ^ uVar4) + iVar18 + 0x6ed9eba1 + uVar14;
    uVar14 = uVar14 >> 0x1d | uVar14 * 8;
    uVar8 = (uVar3 ^ uVar4 ^ uVar14) + iVar7 + 0x6ed9eba1 + uVar8;
    local_d8 = uVar14 + local_d8;
    uVar8 = uVar8 >> 0x17 | uVar8 * 0x200;
    uVar3 = (uVar4 ^ uVar14 ^ uVar8) + iVar5 + 0x6ed9eba1 + uVar3;
    *param_1 = local_d8;
    uVar3 = uVar3 >> 0x15 | uVar3 * 0x800;
    local_e4 = uVar8 + local_e4;
    param_1[3] = local_e4;
    local_e0 = uVar3 + local_e0;
    uVar14 = (uVar14 ^ uVar8 ^ uVar3) + iVar10 + 0x6ed9eba1 + uVar4;
    param_1[2] = local_e0;
    local_dc = local_dc + (uVar14 >> 0x11 | uVar14 * 0x8000);
    param_1[1] = local_dc;
    if (local_d4 == 0) goto LAB_0177a14c;
    param_2 = param_2 + 0x10;
    param_3 = local_d4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x177a190);
  (*pcVar1)();
}

