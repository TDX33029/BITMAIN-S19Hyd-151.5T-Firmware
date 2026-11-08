// FUN_01625860 @ 01625860 size=924 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01625860(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  iVar8 = *param_1;
  uVar4 = param_1[6] ^ 0x6e646f6d;
  uVar9 = param_1[4] ^ 0x70736575;
  uVar18 = uVar4 + uVar9;
  uVar2 = param_1[7] ^ 0x646f7261;
  uVar17 = uVar2 + (param_1[5] ^ 0x736f6d65U) + (uint)CARRY4(uVar4,uVar9);
  uVar12 = (uVar4 << 0xd | uVar2 >> 0x13) ^ uVar18;
  uVar3 = (uVar2 << 0xd | uVar4 >> 0x13) ^ uVar17;
  uVar4 = param_1[1];
  uVar15 = param_1[7] ^ 0x70656462;
  uVar9 = param_1[4] ^ 0x6e657261;
  uVar2 = param_1[6] ^ param_2 ^ 0x79746573;
  uVar7 = uVar2 + uVar9;
  uVar5 = uVar15 + (param_1[5] ^ 0x6c796765U) + (uint)CARRY4(uVar2,uVar9);
  uVar13 = uVar5 + uVar3 + (uint)CARRY4(uVar7,uVar12);
  uVar10 = uVar13 ^ (uVar3 << 0x11 | uVar12 >> 0xf);
  uVar9 = (uVar2 << 0x10 | uVar15 >> 0x10) ^ uVar7;
  uVar5 = (uVar15 << 0x10 | uVar2 >> 0x10) ^ uVar5;
  uVar2 = uVar7 + uVar12 ^ (uVar12 << 0x11 | uVar3 >> 0xf);
  uVar15 = uVar5 + uVar18 + (uint)CARRY4(uVar9,uVar17);
  uVar3 = uVar9 + uVar17 ^ param_2;
  uVar19 = uVar3 + uVar2;
  uVar16 = (uVar15 ^ 0x4000000) + uVar10 + (uint)CARRY4(uVar3,uVar2);
  uVar18 = uVar16 ^ (uVar10 << 0xd | uVar2 >> 0x13);
  uVar3 = uVar19 ^ (uVar2 << 0xd | uVar10 >> 0x13);
  uVar13 = uVar13 ^ 0xff;
  uVar2 = (uVar9 << 0x15 | uVar5 >> 0xb) ^ uVar9 + uVar17;
  uVar15 = (uVar5 << 0x15 | uVar9 >> 0xb) ^ uVar15;
  uVar5 = uVar2 + uVar13;
  uVar9 = uVar15 + uVar7 + uVar12 + (uint)CARRY4(uVar2,uVar13);
  uVar17 = uVar18 + uVar9 + (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar17 ^ (uVar18 << 0x11 | uVar3 >> 0xf);
  uVar12 = uVar3 + uVar5 ^ (uVar3 << 0x11 | uVar18 >> 0xf);
  uVar9 = (uVar15 << 0x10 | uVar2 >> 0x10) ^ uVar9;
  uVar2 = (uVar2 << 0x10 | uVar15 >> 0x10) ^ uVar5;
  uVar13 = uVar2 + uVar16;
  uVar15 = uVar9 + uVar19 + (uint)CARRY4(uVar2,uVar16);
  uVar16 = uVar7 + uVar15 + (uint)CARRY4(uVar12,uVar13);
  uVar19 = (uVar7 << 0xd | uVar12 >> 0x13) ^ uVar16;
  uVar10 = (uVar12 << 0xd | uVar7 >> 0x13) ^ uVar12 + uVar13;
  uVar15 = (uVar9 << 0x15 | uVar2 >> 0xb) ^ uVar15;
  uVar2 = (uVar2 << 0x15 | uVar9 >> 0xb) ^ uVar13;
  uVar7 = uVar2 + uVar17;
  uVar9 = uVar15 + uVar3 + uVar5 + (uint)CARRY4(uVar2,uVar17);
  uVar3 = (uVar15 << 0x10 | uVar2 >> 0x10) ^ uVar9;
  uVar2 = (uVar2 << 0x10 | uVar15 >> 0x10) ^ uVar7;
  uVar18 = uVar19 + uVar9 + (uint)CARRY4(uVar10,uVar7);
  uVar5 = uVar2 + uVar16;
  uVar12 = uVar3 + uVar12 + uVar13 + (uint)CARRY4(uVar2,uVar16);
  uVar9 = (uVar2 << 0x15 | uVar3 >> 0xb) ^ uVar5;
  uVar17 = (uVar19 << 0x11 | uVar10 >> 0xf) ^ uVar18;
  uVar15 = uVar9 + uVar18;
  uVar13 = (uVar3 << 0x15 | uVar2 >> 0xb) ^ uVar12;
  uVar3 = (uVar10 << 0x11 | uVar19 >> 0xf) ^ uVar10 + uVar7;
  uVar2 = uVar13 + uVar10 + uVar7 + (uint)CARRY4(uVar9,uVar18);
  uVar7 = (uVar17 << 0xd | uVar3 >> 0x13) ^ uVar17 + uVar12 + (uint)CARRY4(uVar3,uVar5);
  uVar3 = (uVar3 << 0xd | uVar17 >> 0x13) ^ uVar3 + uVar5;
  uVar9 = ((uVar15 ^ uVar13 >> 0x10) << 0x15 | ((uVar13 << 0x10 | uVar9 >> 0x10) ^ uVar2) >> 0xb) ^
          (uVar3 << 0x11 | uVar7 >> 0xf) ^ uVar7 + uVar2 + (uint)CARRY4(uVar3,uVar15) ^
          uVar3 + uVar15;
  uVar2 = uVar9 >> 0x19;
  iVar14 = 0;
  while( true ) {
    uVar9 = uVar4 & uVar9;
    uVar13 = *(uint *)(iVar8 + uVar9);
    uVar3 = uVar13 ^ uVar2 * 0x1010101;
    uVar5 = uVar3 + 0xfefefeff;
    uVar3 = ~uVar3 & 0x80808080 & uVar5;
    while (uVar3 != 0) {
      uVar5 = uVar3 >> 8;
      uVar7 = uVar3 >> 0x10;
      uVar15 = uVar3 >> 0x18;
      uVar10 = uVar3 << 0x18;
      uVar3 = uVar3 - 1 & uVar3;
      uVar5 = uVar9 + ((uint)LZCOUNT(uVar10 | (uVar5 & 0xff) << 0x10 | (uVar7 & 0xff) << 8 | uVar15)
                      >> 3) & uVar4;
      if (param_2 == *(uint *)(iVar8 + -8 + uVar5 * -8)) {
        puVar1 = (uint *)(iVar8 + (uVar5 - 4 & uVar4));
        uVar2 = *puVar1;
        uVar4 = *(uint *)(iVar8 + uVar5) & 0x80808080 & *(uint *)(iVar8 + uVar5) << 1;
        uVar11 = 0x80;
        if (((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                           | uVar4 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar2 & 0x80808080 & uVar2 << 1) >> 3) < 4) {
          param_1[2] = param_1[2] + 1;
          uVar11 = 0xff;
        }
        *(undefined1 *)(iVar8 + uVar5) = uVar11;
        iVar14 = param_1[3];
        *(undefined1 *)(puVar1 + 1) = uVar11;
        uVar5 = *(uint *)(iVar8 + uVar5 * -8 + -4);
        uVar6 = 1;
        param_1[3] = iVar14 + -1;
        goto LAB_01625bec;
      }
    }
    uVar6 = 0;
    if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
    iVar14 = iVar14 + 4;
    uVar9 = uVar9 + iVar14;
  }
LAB_01625bec:
  return CONCAT44(uVar5,uVar6);
}

