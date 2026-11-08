// FUN_015b5894 @ 015b5894 size=652 calls_out=3 calls_in=1
// strings: 

void FUN_015b5894(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint auStack_a8 [28];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar7 = param_1[0x10];
  puVar8 = param_1 + 0x14;
  uVar17 = (uint)(byte)param_1[0x34];
  *(undefined1 *)((int)puVar8 + uVar17) = 0x80;
  uVar10 = uVar17 << 0x1b | ((uVar7 << 10 | uVar17 << 3) >> 8 & 0xff) << 0x10 |
           ((uVar7 & 0x3fffff) >> 6 & 0xff) << 8 | (uVar7 & 0x3fffff) >> 0xe;
  uVar11 = param_1[0x11];
  uVar13 = param_1[0x12];
  uVar14 = param_1[0x13];
  uVar16 = (uVar7 >> 0x16) << 0x18 | ((uVar11 << 10 | uVar7 >> 0x16) >> 8 & 0xff) << 0x10 |
           ((uVar11 & 0x3fffff) >> 6 & 0xff) << 8 | (uVar11 & 0x3fffff) >> 0xe;
  uVar7 = (uVar11 >> 0x16) << 0x18 | ((uVar13 << 10 | uVar11 >> 0x16) >> 8 & 0xff) << 0x10 |
          ((uVar13 & 0x3fffff) >> 6 & 0xff) << 8 | (uVar13 & 0x3fffff) >> 0xe;
  uVar11 = (uVar13 >> 0x16) << 0x18 | ((uVar14 << 10 | uVar13 >> 0x16) >> 8 & 0xff) << 0x10 |
           ((uVar14 & 0x3fffff) >> 6 & 0xff) << 8 | (uVar14 & 0x3fffff) >> 0xe;
  if ((uVar17 == 0x7f) ||
     (FUN_016dd606((undefined1 *)((int)puVar8 + uVar17) + 1,0,uVar17 ^ 0x7f), (uVar17 ^ 0x70) < 0x10
     )) {
    FUN_01587654(param_1,puVar8,1);
    puVar8 = auStack_a8;
    FUN_016dd606(puVar8,0,0x70);
    local_38 = uVar11;
    local_34 = uVar7;
    local_30 = uVar16;
    local_2c = uVar10;
  }
  else {
    param_1[0x33] = uVar10;
    param_1[0x30] = uVar11;
    param_1[0x31] = uVar7;
    param_1[0x32] = uVar16;
  }
  FUN_01587654(param_1,puVar8,1);
  uVar7 = param_1[2];
  uVar10 = param_1[3];
  uVar11 = param_1[4];
  uVar13 = param_1[5];
  uVar14 = param_1[6];
  uVar16 = param_1[7];
  uVar17 = param_1[8];
  uVar1 = param_1[9];
  uVar2 = param_1[0xb];
  uVar3 = param_1[0xd];
  uVar4 = param_1[0xf];
  uVar19 = param_1[10];
  uVar18 = param_1[0xc];
  uVar9 = param_1[0xe];
  uVar12 = *param_1;
  uVar5 = param_1[1];
  *(undefined1 *)(param_1 + 0x34) = 0;
  *param_1 = 0xf3bcc908;
  param_1[1] = 0x6a09e667;
  param_1[2] = 0x84caa73b;
  param_1[3] = 0xbb67ae85;
  param_1[4] = 0xfe94f82b;
  param_1[5] = 0x3c6ef372;
  param_1[6] = 0x5f1d36f1;
  param_1[7] = 0xa54ff53a;
  param_1[8] = 0xade682d1;
  param_1[9] = 0x510e527f;
  puVar15 = param_1 + 10;
  uVar6 = 0x2b3e6c1f;
  *puVar15 = 0x2b3e6c1f;
  param_1[0xb] = 0x9b05688c;
  param_1[0xc] = 0xfb41bd6b;
  param_1[0xd] = 0x1f83d9ab;
  param_1[0xe] = 0x137e2179;
  param_1[0xf] = 0x5be0cd19;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar8 = param_3;
  if (&DAT_0000003f < param_3) {
    uVar6 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
            uVar9 >> 0x18;
    puVar8 = param_2;
  }
  param_1[0x12] = 0;
  if (&DAT_0000003f < param_3) {
    puVar15 = puVar8 + 2;
  }
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (param_3 < &DAT_00000040) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,0x40,puVar8,&DAT_018aa2ac);
  }
  puVar15[0xd] = uVar6;
  puVar15[0xb] = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                 uVar18 >> 0x18;
  puVar15[9] = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
               uVar19 >> 0x18;
  puVar15[7] = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
               uVar17 >> 0x18;
  puVar15[5] = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
               uVar14 >> 0x18;
  puVar15[3] = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18;
  puVar15[1] = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
               uVar7 >> 0x18;
  puVar8[1] = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
              uVar12 >> 0x18;
  puVar15[0xc] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                 uVar4 >> 0x18;
  puVar15[10] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                uVar3 >> 0x18;
  puVar15[8] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  puVar15[6] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  puVar15[4] = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18;
  puVar15[2] = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
               uVar13 >> 0x18;
  *puVar15 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18;
  *puVar8 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18;
  return;
}

