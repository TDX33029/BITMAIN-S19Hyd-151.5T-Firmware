// FUN_0178a420 @ 0178a420 size=1204 calls_out=0 calls_in=5
// strings: 

void FUN_0178a420(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  bool bVar21;
  uint local_70 [18];
  
  puVar3 = param_2 + param_3 * 0x20;
  puVar20 = (uint *)&DAT_0178a1a0;
  puVar18 = local_70;
  uVar6 = param_1[8];
  uVar7 = param_1[9];
  uVar8 = param_1[0xc];
  uVar11 = param_1[0xd];
  uVar13 = param_1[0xe];
  uVar16 = param_1[0xf];
  do {
    *(uint *)((int)puVar18 + 0x30) = uVar8;
    *(uint *)((int)puVar18 + 0x34) = uVar11;
    *(uint *)((int)puVar18 + 0x38) = uVar13;
    *(uint *)((int)puVar18 + 0x3c) = uVar16;
    uVar11 = *param_1;
    uVar13 = param_1[1];
    uVar8 = param_1[3];
    uVar16 = param_1[4];
    uVar12 = param_1[5];
    uVar14 = param_1[6];
    uVar17 = param_1[7];
    *(uint *)((int)puVar18 + 8) = param_1[2];
    *(uint *)((int)puVar18 + 0xc) = uVar8;
    *(uint *)((int)puVar18 + 0x10) = uVar16;
    *(uint *)((int)puVar18 + 0x14) = uVar12;
    *(uint *)((int)puVar18 + 0x18) = uVar14;
    *(uint *)((int)puVar18 + 0x1c) = uVar17;
    uVar8 = param_1[0xb];
    *(uint *)((int)puVar18 + 0x28) = param_1[10];
    *(uint *)((int)puVar18 + 0x2c) = uVar8;
    puVar2 = param_2;
    puVar1 = puVar18;
    do {
      puVar19 = puVar1;
      uVar8 = puVar2[1];
      param_2 = puVar2 + 2;
      uVar16 = *puVar2;
      uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18;
      uVar4 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
              uVar16 >> 0x18;
      puVar19[0x10] = uVar8;
      puVar19[0x11] = uVar4;
      uVar9 = uVar6 >> 0xe ^ uVar7 << 0x12 ^ uVar6 >> 0x12 ^ uVar7 << 0xe ^ uVar7 >> 9 ^
              uVar6 << 0x17;
      uVar16 = uVar8 + uVar9;
      uVar12 = uVar16 + puVar19[0xe];
      puVar19[8] = uVar6;
      puVar19[9] = uVar7;
      *puVar19 = uVar11;
      puVar19[1] = uVar13;
      uVar10 = (puVar19[10] ^ puVar19[0xc]) & uVar6 ^ puVar19[0xc];
      uVar15 = *puVar20;
      uVar14 = uVar12 + uVar10;
      uVar17 = uVar14 + uVar15;
      iVar5 = uVar4 + (uVar7 >> 0xe ^ uVar6 << 0x12 ^ uVar7 >> 0x12 ^ uVar6 << 0xe ^ uVar6 >> 9 ^
                      uVar7 << 0x17) + (uint)CARRY4(uVar8,uVar9) + puVar19[0xf] +
              (uint)CARRY4(uVar16,puVar19[0xe]) +
              ((puVar19[0xb] ^ puVar19[0xd]) & uVar7 ^ puVar19[0xd]) + (uint)CARRY4(uVar12,uVar10) +
              puVar20[1] + (uint)CARRY4(uVar14,uVar15);
      uVar6 = puVar19[6] + uVar17;
      uVar7 = puVar19[7] + iVar5 + (uint)CARRY4(puVar19[6],uVar17);
      if ((uVar15 & 0xff) == 0x94) {
        puVar20 = (uint *)((uint)puVar20 | 1);
      }
      uVar8 = uVar11 << 4;
      uVar16 = uVar11 >> 2;
      uVar12 = uVar11 >> 7;
      uVar9 = uVar11 >> 0x1c ^ uVar13 << 4 ^ uVar13 >> 2 ^ uVar11 << 0x1e ^ uVar13 >> 7 ^
              uVar11 << 0x19;
      uVar14 = uVar17 + uVar9;
      uVar4 = (uVar11 | puVar19[2]) & puVar19[4] | uVar11 & puVar19[2];
      uVar11 = uVar4 + uVar14;
      uVar13 = ((uVar13 | puVar19[3]) & puVar19[5] | uVar13 & puVar19[3]) +
               iVar5 + (uVar13 >> 0x1c ^ uVar8 ^ uVar16 ^ uVar13 << 0x1e ^ uVar12 ^ uVar13 << 0x19)
               + (uint)CARRY4(uVar17,uVar9) + (uint)CARRY4(uVar4,uVar14);
      puVar20 = puVar20 + 2;
      puVar2 = param_2;
      puVar1 = puVar19 + -2;
    } while (((uint)puVar20 & 1) == 0);
    uVar8 = puVar19[0x2c];
    uVar16 = puVar19[0x2d];
    puVar20 = (uint *)((uint)puVar20 & 0xfffffffe);
    puVar2 = puVar19 + -2;
    while( true ) {
      uVar10 = puVar2[0x14];
      uVar15 = puVar2[0x15];
      uVar12 = uVar8 >> 1 ^ uVar16 << 0x1f ^ uVar8 >> 8 ^ uVar16 << 0x18 ^ uVar8 >> 7 ^
               uVar16 << 0x19;
      uVar9 = uVar10 >> 0x13 ^ uVar15 << 0xd ^ uVar15 >> 0x1d ^ uVar10 << 3 ^ uVar10 >> 6 ^
              uVar15 << 0x1a;
      uVar14 = uVar12 + uVar9;
      uVar17 = uVar14 + puVar2[0x1e];
      uVar4 = uVar17 + puVar2[0x30];
      uVar17 = (uVar16 >> 1 ^ uVar8 << 0x1f ^ uVar16 >> 8 ^ uVar8 << 0x18 ^ uVar16 >> 7) +
               (uVar15 >> 0x13 ^ uVar10 << 0xd ^ uVar10 >> 0x1d ^ uVar15 << 3 ^ uVar15 >> 6) +
               (uint)CARRY4(uVar12,uVar9) + puVar2[0x1f] + (uint)CARRY4(uVar14,puVar2[0x1e]) +
               puVar2[0x31] + (uint)CARRY4(uVar17,puVar2[0x30]);
      puVar2[0x10] = uVar4;
      puVar2[0x11] = uVar17;
      uVar9 = uVar6 >> 0xe ^ uVar7 << 0x12 ^ uVar6 >> 0x12 ^ uVar7 << 0xe ^ uVar7 >> 9 ^
              uVar6 << 0x17;
      uVar8 = uVar4 + uVar9;
      uVar16 = uVar8 + puVar2[0xe];
      puVar2[8] = uVar6;
      puVar2[9] = uVar7;
      *puVar2 = uVar11;
      puVar2[1] = uVar13;
      uVar10 = (puVar2[10] ^ puVar2[0xc]) & uVar6 ^ puVar2[0xc];
      uVar15 = *puVar20;
      uVar12 = uVar16 + uVar10;
      uVar14 = uVar12 + uVar15;
      iVar5 = uVar17 + (uVar7 >> 0xe ^ uVar6 << 0x12 ^ uVar7 >> 0x12 ^ uVar6 << 0xe ^ uVar6 >> 9 ^
                       uVar7 << 0x17) + (uint)CARRY4(uVar4,uVar9) + puVar2[0xf] +
              (uint)CARRY4(uVar8,puVar2[0xe]) + ((puVar2[0xb] ^ puVar2[0xd]) & uVar7 ^ puVar2[0xd])
              + (uint)CARRY4(uVar16,uVar10) + puVar20[1] + (uint)CARRY4(uVar12,uVar15);
      uVar6 = puVar2[6] + uVar14;
      uVar7 = puVar2[7] + iVar5 + (uint)CARRY4(puVar2[6],uVar14);
      if ((uVar15 & 0xff) == 0x17) {
        puVar20 = (uint *)((uint)puVar20 | 1);
      }
      uVar8 = uVar11 << 4;
      uVar16 = uVar11 >> 2;
      uVar12 = uVar11 >> 7;
      uVar9 = uVar11 >> 0x1c ^ uVar13 << 4 ^ uVar13 >> 2 ^ uVar11 << 0x1e ^ uVar13 >> 7 ^
              uVar11 << 0x19;
      uVar17 = uVar14 + uVar9;
      uVar4 = (uVar11 | puVar2[2]) & puVar2[4] | uVar11 & puVar2[2];
      uVar11 = uVar4 + uVar17;
      uVar13 = ((uVar13 | puVar2[3]) & puVar2[5] | uVar13 & puVar2[3]) +
               iVar5 + (uVar13 >> 0x1c ^ uVar8 ^ uVar16 ^ uVar13 << 0x1e ^ uVar12 ^ uVar13 << 0x19)
               + (uint)CARRY4(uVar14,uVar9) + (uint)CARRY4(uVar4,uVar17);
      uVar8 = (uint)puVar20 & 1;
      puVar20 = puVar20 + 2;
      if (uVar8 != 0) break;
      uVar8 = puVar2[0x2c];
      uVar16 = puVar2[0x2d];
      puVar2 = puVar2 + -2;
    }
    uVar8 = *puVar2;
    uVar16 = puVar2[1];
    uVar12 = *param_1;
    uVar14 = param_1[2];
    *param_1 = uVar11 + uVar12;
    param_1[1] = uVar13 + param_1[1] + (uint)CARRY4(uVar11,uVar12);
    param_1[2] = uVar8 + uVar14;
    param_1[3] = uVar16 + param_1[3] + (uint)CARRY4(uVar8,uVar14);
    uVar13 = puVar2[2];
    uVar16 = puVar2[3];
    uVar8 = puVar2[4];
    uVar11 = puVar2[5];
    uVar12 = param_1[4];
    uVar14 = param_1[6];
    param_1[4] = uVar13 + uVar12;
    param_1[5] = uVar16 + param_1[5] + (uint)CARRY4(uVar13,uVar12);
    param_1[6] = uVar8 + uVar14;
    param_1[7] = uVar11 + param_1[7] + (uint)CARRY4(uVar8,uVar14);
    uVar8 = puVar2[8];
    uVar11 = puVar2[9];
    uVar13 = param_1[10];
    bVar21 = CARRY4(uVar6,param_1[8]);
    uVar6 = uVar6 + param_1[8];
    param_1[8] = uVar6;
    uVar7 = uVar7 + param_1[9] + (uint)bVar21;
    param_1[9] = uVar7;
    param_1[10] = uVar8 + uVar13;
    param_1[0xb] = uVar11 + param_1[0xb] + (uint)CARRY4(uVar8,uVar13);
    uVar11 = puVar2[10];
    uVar13 = puVar2[0xb];
    uVar16 = puVar2[0xc];
    uVar12 = puVar2[0xd];
    uVar14 = param_1[0xc];
    uVar17 = param_1[0xe];
    uVar8 = uVar11 + uVar14;
    param_1[0xc] = uVar8;
    uVar11 = uVar13 + param_1[0xd] + (uint)CARRY4(uVar11,uVar14);
    param_1[0xd] = uVar11;
    uVar13 = uVar16 + uVar17;
    param_1[0xe] = uVar13;
    uVar16 = uVar12 + param_1[0xf] + (uint)CARRY4(uVar16,uVar17);
    param_1[0xf] = uVar16;
    puVar18 = puVar2 + 0x9e;
    puVar20 = (uint *)(((uint)puVar20 & 0xfffffffe) - 0x280);
  } while (param_2 != puVar3);
  return;
}

