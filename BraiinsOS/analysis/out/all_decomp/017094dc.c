// FUN_017094dc @ 017094dc size=3812 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_017094dc(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  int *local_a8;
  int *local_a4;
  int *local_a0;
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
LAB_0170a378:
    if (iVar2 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
  local_bc = *param_1;
  local_c0 = param_1[1];
  local_c4 = param_1[2];
  local_c8 = param_1[3];
  local_a0 = param_2 + 0xf;
  local_a4 = param_2 + 0xe;
  local_a8 = param_2 + 0xd;
  while ((local_b8 = param_3 + -1, param_2 <= &iStack_30 || local_2c <= param_2 &&
         ((&iStack_30 <= param_2 || (param_2 + 1 <= &iStack_30))))) {
    piVar15 = param_2 + 1;
    iVar8 = *param_2;
    if ((piVar15 < &iStack_30 && &iStack_34 < piVar15) ||
       ((piVar16 = param_2 + 2, piVar15 < &iStack_34 && (&iStack_34 < piVar16)))) break;
    iVar4 = param_2[1];
    if ((piVar16 < &iStack_34 && &iStack_38 < piVar16) ||
       ((piVar15 = param_2 + 3, piVar16 < &iStack_38 && (&iStack_38 < piVar15)))) break;
    iVar9 = param_2[2];
    if ((&iStack_3c < piVar15 && piVar15 < &iStack_38) ||
       ((piVar16 = param_2 + 4, piVar15 < &iStack_3c && (&iStack_3c < piVar16)))) break;
    iVar5 = param_2[3];
    if ((&iStack_40 < piVar16 && piVar16 < &iStack_3c) ||
       ((piVar15 = param_2 + 5, piVar16 < &iStack_40 && (&iStack_40 < piVar15)))) break;
    iVar10 = param_2[4];
    if ((&iStack_44 < piVar15 && piVar15 < &iStack_40) ||
       ((piVar16 = param_2 + 6, piVar15 < &iStack_44 && (&iStack_44 < piVar16)))) break;
    iVar24 = param_2[5];
    if ((&iStack_48 < piVar16 && piVar16 < &iStack_44) ||
       ((piVar15 = param_2 + 7, piVar16 < &iStack_48 && (&iStack_48 < piVar15)))) break;
    iVar11 = param_2[6];
    if ((&iStack_4c < piVar15 && piVar15 < &iStack_48) ||
       ((piVar16 = param_2 + 8, piVar15 < &iStack_4c && (&iStack_4c < piVar16)))) break;
    iVar20 = param_2[7];
    if ((&iStack_50 < piVar16 && piVar16 < &iStack_4c) ||
       ((piVar15 = param_2 + 9, piVar16 < &iStack_50 && (&iStack_50 < piVar15)))) break;
    iVar12 = param_2[8];
    if ((&iStack_54 < piVar15 && piVar15 < &iStack_50) ||
       ((piVar16 = param_2 + 10, piVar15 < &iStack_54 && (&iStack_54 < piVar16)))) break;
    iVar6 = param_2[9];
    if ((&iStack_58 < piVar16 && piVar16 < &iStack_54) ||
       ((piVar15 = param_2 + 0xb, piVar16 < &iStack_58 && (&iStack_58 < piVar15)))) break;
    iVar13 = param_2[10];
    if ((piVar15 < &iStack_58 && &iStack_5c < piVar15) ||
       ((piVar16 = param_2 + 0xc, piVar15 < &iStack_5c && (&iStack_5c < piVar16)))) break;
    iVar7 = param_2[0xb];
    if ((piVar16 < &iStack_5c && &iStack_60 < piVar16) ||
       ((piVar16 < &iStack_60 && (&iStack_60 < local_a8)))) break;
    iVar17 = param_2[0xc];
    if ((local_a8 < &iStack_60 && &iStack_64 < local_a8) ||
       ((local_a8 < &iStack_64 && (&iStack_64 < local_a4)))) break;
    iVar14 = param_2[0xd];
    if ((local_a4 < &iStack_64 && &iStack_68 < local_a4) ||
       ((local_a4 < &iStack_68 && (&iStack_68 < local_a0)))) break;
    iVar19 = param_2[0xe];
    if ((local_a0 < &iStack_68 && &iStack_6c < local_a0) ||
       ((local_a0 < &iStack_6c && (&iStack_6c < param_2 + 0x10)))) break;
    local_a0 = local_a0 + 0x10;
    local_a4 = local_a4 + 0x10;
    iVar3 = param_2[0xf];
    local_a8 = local_a8 + 0x10;
    uVar18 = ((local_c8 ^ local_c4) & local_c0 ^ local_c8) + iVar8 + -0x28955b88 + local_bc;
    uVar18 = local_c0 + (uVar18 >> 0x19 | uVar18 * 0x80);
    uVar21 = ((local_c4 ^ local_c0) & uVar18 ^ local_c4) + local_c8 + 0xe8c7b756 + iVar4;
    uVar25 = uVar18 + (uVar21 >> 0x14 | uVar21 * 0x1000);
    uVar21 = ((uVar18 ^ local_c0) & uVar25 ^ local_c0) + local_c4 + 0x242070db + iVar9;
    uVar23 = uVar25 + (uVar21 >> 0xf | uVar21 * 0x20000);
    uVar21 = ((uVar18 ^ uVar25) & uVar23 ^ uVar18) + local_c0 + 0xc1bdceee + iVar5;
    uVar22 = uVar23 + (uVar21 >> 10 | uVar21 * 0x400000);
    uVar18 = ((uVar25 ^ uVar23) & uVar22 ^ uVar25) + uVar18 + iVar10 + -0xa83f051;
    uVar18 = uVar22 + (uVar18 >> 0x19 | uVar18 * 0x80);
    uVar21 = ((uVar23 ^ uVar22) & uVar18 ^ uVar23) + iVar24 + 0x4787c62a + uVar25;
    uVar21 = uVar18 + (uVar21 >> 0x14 | uVar21 * 0x1000);
    uVar23 = ((uVar22 ^ uVar18) & uVar21 ^ uVar22) + iVar11 + -0x57cfb9ed + uVar23;
    uVar25 = uVar21 + (uVar23 >> 0xf | uVar23 * 0x20000);
    uVar22 = ((uVar18 ^ uVar21) & uVar25 ^ uVar18) + iVar20 + -0x2b96aff + uVar22;
    uVar23 = uVar25 + (uVar22 >> 10 | uVar22 * 0x400000);
    uVar18 = ((uVar21 ^ uVar25) & uVar23 ^ uVar21) + iVar12 + 0x698098d8 + uVar18;
    uVar22 = uVar23 + (uVar18 >> 0x19 | uVar18 * 0x80);
    uVar18 = ((uVar25 ^ uVar23) & uVar22 ^ uVar25) + iVar6 + -0x74bb0851 + uVar21;
    uVar18 = uVar22 + (uVar18 >> 0x14 | uVar18 * 0x1000);
    uVar21 = ((uVar23 ^ uVar22) & uVar18 ^ uVar23) + iVar13 + -0xa44f + uVar25;
    uVar25 = uVar18 + (uVar21 >> 0xf | uVar21 * 0x20000);
    uVar21 = ((uVar22 ^ uVar18) & uVar25 ^ uVar22) + iVar7 + -0x76a32842 + uVar23;
    uVar21 = uVar25 + (uVar21 >> 10 | uVar21 * 0x400000);
    uVar22 = ((uVar18 ^ uVar25) & uVar21 ^ uVar18) + iVar17 + 0x6b901122 + uVar22;
    uVar26 = uVar21 + (uVar22 >> 0x19 | uVar22 * 0x80);
    uVar18 = ((uVar25 ^ uVar21) & uVar26 ^ uVar25) + iVar14 + -0x2678e6d + uVar18;
    uVar22 = uVar26 + (uVar18 >> 0x14 | uVar18 * 0x1000);
    uVar18 = ((uVar21 ^ uVar26) & uVar22 ^ uVar21) + iVar19 + -0x5986bc72 + uVar25;
    uVar23 = uVar22 + (uVar18 >> 0xf | uVar18 * 0x20000);
    uVar18 = ((uVar26 ^ uVar22) & uVar23 ^ uVar26) + iVar3 + 0x49b40821 + uVar21;
    uVar18 = uVar23 + (uVar18 >> 10 | uVar18 * 0x400000);
    uVar21 = ((uVar23 ^ uVar18) & uVar22 ^ uVar23) + iVar4 + -0x9e1da9e + uVar26;
    uVar21 = uVar18 + (uVar21 >> 0x1b | uVar21 * 0x20);
    uVar22 = ((uVar18 ^ uVar21) & uVar23 ^ uVar18) + iVar11 + -0x3fbf4cc0 + uVar22;
    uVar22 = uVar21 + (uVar22 >> 0x17 | uVar22 * 0x200);
    uVar23 = ((uVar21 ^ uVar22) & uVar18 ^ uVar21) + iVar7 + 0x265e5a51 + uVar23;
    uVar25 = uVar22 + (uVar23 >> 0x12 | uVar23 * 0x4000);
    uVar18 = ((uVar22 ^ uVar25) & uVar21 ^ uVar22) + iVar8 + -0x16493856 + uVar18;
    uVar18 = uVar25 + (uVar18 >> 0xc | uVar18 * 0x100000);
    uVar21 = ((uVar25 ^ uVar18) & uVar22 ^ uVar25) + iVar24 + -0x29d0efa3 + uVar21;
    uVar23 = uVar18 + (uVar21 >> 0x1b | uVar21 * 0x20);
    uVar21 = ((uVar18 ^ uVar23) & uVar25 ^ uVar18) + iVar13 + 0x2441453 + uVar22;
    uVar21 = uVar23 + (uVar21 >> 0x17 | uVar21 * 0x200);
    uVar22 = ((uVar23 ^ uVar21) & uVar18 ^ uVar23) + iVar3 + -0x275e197f + uVar25;
    uVar25 = uVar21 + (uVar22 >> 0x12 | uVar22 * 0x4000);
    uVar18 = ((uVar21 ^ uVar25) & uVar23 ^ uVar21) + iVar10 + -0x182c0438 + uVar18;
    uVar22 = uVar25 + (uVar18 >> 0xc | uVar18 * 0x100000);
    uVar18 = ((uVar25 ^ uVar22) & uVar21 ^ uVar25) + iVar6 + 0x21e1cde6 + uVar23;
    uVar18 = uVar22 + (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar21 = ((uVar22 ^ uVar18) & uVar25 ^ uVar22) + iVar19 + -0x3cc8f82a + uVar21;
    uVar21 = uVar18 + (uVar21 >> 0x17 | uVar21 * 0x200);
    uVar23 = ((uVar18 ^ uVar21) & uVar22 ^ uVar18) + iVar5 + -0xb2af279 + uVar25;
    uVar23 = uVar21 + (uVar23 >> 0x12 | uVar23 * 0x4000);
    uVar22 = ((uVar21 ^ uVar23) & uVar18 ^ uVar21) + iVar12 + 0x455a14ed + uVar22;
    uVar25 = uVar23 + (uVar22 >> 0xc | uVar22 * 0x100000);
    uVar18 = ((uVar23 ^ uVar25) & uVar21 ^ uVar23) + iVar14 + -0x561c16fb + uVar18;
    uVar18 = uVar25 + (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar21 = ((uVar25 ^ uVar18) & uVar23 ^ uVar25) + iVar9 + -0x3105c08 + uVar21;
    uVar21 = uVar18 + (uVar21 >> 0x17 | uVar21 * 0x200);
    uVar22 = ((uVar18 ^ uVar21) & uVar25 ^ uVar18) + iVar20 + 0x676f02d9 + uVar23;
    uVar22 = uVar21 + (uVar22 >> 0x12 | uVar22 * 0x4000);
    uVar23 = ((uVar21 ^ uVar22) & uVar18 ^ uVar21) + iVar17 + -0x72d5b376 + uVar25;
    uVar25 = uVar22 + (uVar23 >> 0xc | uVar23 * 0x100000);
    uVar18 = (uVar21 ^ uVar22 ^ uVar25) + iVar24 + -0x5c6be + uVar18;
    uVar18 = uVar25 + (uVar18 >> 0x1c | uVar18 * 0x10);
    uVar21 = (uVar22 ^ uVar25 ^ uVar18) + iVar12 + -0x788e097f + uVar21;
    uVar23 = uVar18 + (uVar21 >> 0x15 | uVar21 * 0x800);
    uVar21 = (uVar25 ^ uVar18 ^ uVar23) + iVar7 + 0x6d9d6122 + uVar22;
    uVar22 = uVar23 + (uVar21 >> 0x10 | uVar21 * 0x10000);
    uVar21 = (uVar18 ^ uVar23 ^ uVar22) + iVar19 + -0x21ac7f4 + uVar25;
    uVar25 = uVar22 + (uVar21 >> 9 | uVar21 * 0x800000);
    uVar18 = (uVar23 ^ uVar22 ^ uVar25) + iVar4 + -0x5b4115bc + uVar18;
    uVar21 = uVar25 + (uVar18 >> 0x1c | uVar18 * 0x10);
    uVar18 = (uVar22 ^ uVar25 ^ uVar21) + iVar10 + 0x4bdecfa9 + uVar23;
    uVar23 = uVar21 + (uVar18 >> 0x15 | uVar18 * 0x800);
    uVar18 = (uVar25 ^ uVar21 ^ uVar23) + iVar20 + -0x944b4a0 + uVar22;
    uVar22 = uVar23 + (uVar18 >> 0x10 | uVar18 * 0x10000);
    uVar18 = (uVar21 ^ uVar23 ^ uVar22) + iVar13 + -0x41404390 + uVar25;
    uVar18 = uVar22 + (uVar18 >> 9 | uVar18 * 0x800000);
    uVar21 = (uVar23 ^ uVar22 ^ uVar18) + iVar14 + 0x289b7ec6 + uVar21;
    uVar21 = uVar18 + (uVar21 >> 0x1c | uVar21 * 0x10);
    uVar23 = (uVar22 ^ uVar18 ^ uVar21) + iVar8 + -0x155ed806 + uVar23;
    uVar23 = uVar21 + (uVar23 >> 0x15 | uVar23 * 0x800);
    uVar22 = (uVar18 ^ uVar21 ^ uVar23) + iVar5 + -0x2b10cf7b + uVar22;
    uVar26 = uVar23 + (uVar22 >> 0x10 | uVar22 * 0x10000);
    uVar18 = (uVar21 ^ uVar23 ^ uVar26) + iVar11 + 0x4881d05 + uVar18;
    uVar18 = uVar26 + (uVar18 >> 9 | uVar18 * 0x800000);
    uVar21 = (uVar23 ^ uVar26 ^ uVar18) + iVar6 + -0x262b2fc7 + uVar21;
    uVar25 = uVar18 + (uVar21 >> 0x1c | uVar21 * 0x10);
    uVar21 = (uVar26 ^ uVar18 ^ uVar25) + iVar17 + -0x1924661b + uVar23;
    uVar22 = uVar25 + (uVar21 >> 0x15 | uVar21 * 0x800);
    uVar21 = (uVar18 ^ uVar25 ^ uVar22) + iVar3 + 0x1fa27cf8 + uVar26;
    uVar21 = uVar22 + (uVar21 >> 0x10 | uVar21 * 0x10000);
    uVar18 = (uVar25 ^ uVar22 ^ uVar21) + iVar9 + -0x3b53a99b + uVar18;
    uVar23 = uVar21 + (uVar18 >> 9 | uVar18 * 0x800000);
    uVar18 = ((~uVar22 | uVar23) ^ uVar21) + iVar8 + -0xbd6ddbc + uVar25;
    uVar25 = uVar23 + (uVar18 >> 0x1a | uVar18 * 0x40);
    uVar18 = ((~uVar21 | uVar25) ^ uVar23) + iVar20 + 0x432aff97 + uVar22;
    uVar18 = uVar25 + (uVar18 >> 0x16 | uVar18 * 0x400);
    uVar21 = ((~uVar23 | uVar18) ^ uVar25) + iVar19 + -0x546bdc59 + uVar21;
    uVar22 = uVar18 + (uVar21 >> 0x11 | uVar21 * 0x8000);
    uVar21 = ((~uVar25 | uVar22) ^ uVar18) + iVar24 + -0x36c5fc7 + uVar23;
    uVar23 = uVar22 + (uVar21 >> 0xb | uVar21 * 0x200000);
    uVar21 = ((~uVar18 | uVar23) ^ uVar22) + iVar17 + 0x655b59c3 + uVar25;
    uVar25 = uVar23 + (uVar21 >> 0x1a | uVar21 * 0x40);
    uVar18 = ((~uVar22 | uVar25) ^ uVar23) + iVar5 + -0x70f3336e + uVar18;
    uVar18 = uVar25 + (uVar18 >> 0x16 | uVar18 * 0x400);
    uVar21 = ((~uVar23 | uVar18) ^ uVar25) + iVar13 + -0x100b83 + uVar22;
    uVar22 = uVar18 + (uVar21 >> 0x11 | uVar21 * 0x8000);
    uVar21 = ((~uVar25 | uVar22) ^ uVar18) + iVar4 + -0x7a7ba22f + uVar23;
    uVar21 = uVar22 + (uVar21 >> 0xb | uVar21 * 0x200000);
    uVar23 = ((~uVar18 | uVar21) ^ uVar22) + iVar12 + 0x6fa87e4f + uVar25;
    uVar26 = uVar21 + (uVar23 >> 0x1a | uVar23 * 0x40);
    uVar18 = ((~uVar22 | uVar26) ^ uVar21) + iVar3 + -0x1d31920 + uVar18;
    uVar25 = uVar26 + (uVar18 >> 0x16 | uVar18 * 0x400);
    uVar18 = ((~uVar21 | uVar25) ^ uVar26) + iVar11 + -0x5cfebcec + uVar22;
    uVar18 = uVar25 + (uVar18 >> 0x11 | uVar18 * 0x8000);
    uVar21 = ((~uVar26 | uVar18) ^ uVar25) + iVar14 + 0x4e0811a1 + uVar21;
    uVar23 = uVar18 + (uVar21 >> 0xb | uVar21 * 0x200000);
    uVar21 = ((~uVar25 | uVar23) ^ uVar18) + iVar10 + -0x8ac817e + uVar26;
    uVar22 = uVar23 + (uVar21 >> 0x1a | uVar21 * 0x40);
    local_bc = uVar22 + local_bc;
    *param_1 = local_bc;
    uVar21 = ((~uVar18 | uVar22) ^ uVar23) + iVar7 + -0x42c50dcb + uVar25;
    uVar21 = uVar22 + (uVar21 >> 0x16 | uVar21 * 0x400);
    local_c8 = uVar21 + local_c8;
    uVar18 = ((~uVar23 | uVar21) ^ uVar22) + iVar9 + 0x2ad7d2bb + uVar18;
    param_1[3] = local_c8;
    uVar25 = uVar21 + (uVar18 >> 0x11 | uVar18 * 0x8000);
    local_c4 = uVar25 + local_c4;
    param_1[2] = local_c4;
    uVar18 = ((~uVar22 | uVar25) ^ uVar21) + iVar6 + -0x14792c6f + uVar23;
    local_c0 = uVar25 + local_c0 + (uVar18 >> 0xb | uVar18 * 0x200000);
    param_1[1] = local_c0;
    if (local_b8 == 0) goto LAB_0170a378;
    param_2 = param_2 + 0x10;
    param_3 = local_b8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x170a3bc);
  (*pcVar1)();
}

