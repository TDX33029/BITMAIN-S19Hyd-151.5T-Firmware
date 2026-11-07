// FUN_0100ece8 @ 0100ece8 size=688 calls_out=0 calls_in=1
// strings: 

void FUN_0100ece8(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
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
  
  if ((char)param_1[2] != '\0') {
    return;
  }
  if (param_2 != (uint *)0x0) {
    uVar5 = param_2[2];
    uVar8 = param_2[3];
    uVar2 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    if ((uVar2 & 1) != 0) goto LAB_0100ef80;
  }
  do {
    do {
      uVar2 = DAT_018db7c0 + 1;
      bVar1 = (bool)hasExclusiveAccess(0x18db7c0);
    } while (!bVar1);
    uVar3 = DAT_018db7c0 ^ 0x79746573;
    uVar4 = (uVar3 >> 0x10 | 0x64620000) ^ (0x919a8d9e < uVar3) + 0xdcdecbc7;
    uVar5 = (uVar3 << 0x10 | 0x7065) ^ uVar3 + 0x6e657261;
    uVar9 = uVar5 + 0xd7dedfc6 ^ DAT_018db7c0;
    uVar8 = uVar4 + 0xded7d4e2 + (uint)(0x28212039 < uVar5);
    uVar12 = (uVar5 << 0x15 | uVar4 >> 0xb) ^ uVar5 + 0xd7dedfc6;
    uVar6 = (0x3e60152f < uVar3) + 0x1671bdd1;
    uVar5 = (uVar4 << 0x15 | uVar5 >> 0xb) ^ uVar8;
    uVar4 = uVar6 ^ 0xe414a674;
    uVar6 = uVar6 ^ 0xff;
    uVar15 = uVar12 + uVar6;
    uVar7 = uVar5 + uVar3 + 0xc19fead0 + (uint)CARRY4(uVar12,uVar6);
    uVar3 = uVar3 + 0xc19fead0 ^ 0xf0de7325;
    uVar10 = uVar9 + uVar3;
    uVar8 = (uVar8 ^ 0x4000000) + uVar4 + (uint)CARRY4(uVar9,uVar3);
    uVar6 = uVar8 ^ (uVar4 << 0xd | uVar3 >> 0x13);
    uVar4 = uVar10 ^ (uVar3 << 0xd | 0x1e4c);
    uVar14 = uVar6 + uVar7 + (uint)CARRY4(uVar4,uVar15);
    uVar9 = uVar14 ^ (uVar6 << 0x11 | uVar4 >> 0xf);
    uVar6 = uVar4 + uVar15 ^ (uVar4 << 0x11 | uVar6 >> 0xf);
    uVar7 = (uVar5 << 0x10 | uVar12 >> 0x10) ^ uVar7;
    uVar12 = (uVar12 << 0x10 | uVar5 >> 0x10) ^ uVar15;
    uVar3 = uVar12 + uVar8;
    uVar5 = uVar7 + uVar10 + (uint)CARRY4(uVar12,uVar8);
    uVar13 = uVar9 + uVar5 + (uint)CARRY4(uVar6,uVar3);
    uVar11 = (uVar9 << 0xd | uVar6 >> 0x13) ^ uVar13;
    uVar9 = (uVar6 << 0xd | uVar9 >> 0x13) ^ uVar6 + uVar3;
    uVar5 = (uVar7 << 0x15 | uVar12 >> 0xb) ^ uVar5;
    uVar8 = (uVar12 << 0x15 | uVar7 >> 0xb) ^ uVar3;
    uVar12 = uVar8 + uVar14;
    uVar14 = uVar5 + uVar4 + uVar15 + (uint)CARRY4(uVar8,uVar14);
    uVar15 = uVar11 + uVar14 + (uint)CARRY4(uVar9,uVar12);
    uVar10 = (uVar11 << 0x11 | uVar9 >> 0xf) ^ uVar15;
    uVar4 = (uVar9 << 0x11 | uVar11 >> 0xf) ^ uVar9 + uVar12;
    uVar14 = (uVar5 << 0x10 | uVar8 >> 0x10) ^ uVar14;
    uVar8 = (uVar8 << 0x10 | uVar5 >> 0x10) ^ uVar12;
    uVar7 = uVar8 + uVar13;
    uVar5 = uVar14 + uVar6 + uVar3 + (uint)CARRY4(uVar8,uVar13);
    uVar11 = (uVar10 << 0xd | uVar4 >> 0x13) ^ uVar10 + uVar5 + (uint)CARRY4(uVar4,uVar7);
    uVar5 = (uVar14 << 0x15 | uVar8 >> 0xb) ^ uVar5;
    uVar8 = (uVar8 << 0x15 | uVar14 >> 0xb) ^ uVar7;
    uVar6 = uVar8 + uVar15;
    uVar9 = uVar5 + uVar9 + uVar12 + (uint)CARRY4(uVar8,uVar15);
    uVar3 = (uVar4 << 0xd | uVar10 >> 0x13) ^ uVar4 + uVar7;
    uVar4 = (uVar5 << 0x10 | uVar8 >> 0x10) ^ uVar9;
    uVar5 = (uVar8 << 0x10 | uVar5 >> 0x10) ^ uVar6;
    uVar9 = uVar11 + uVar9 + (uint)CARRY4(uVar3,uVar6);
    uVar8 = (uVar4 << 0x15 | uVar5 >> 0xb) ^ (uVar11 << 0x11 | uVar3 >> 0xf) ^ uVar3 + uVar6 ^ uVar9
    ;
    uVar5 = (uVar5 << 0x15 | uVar4 >> 0xb) ^ (uVar3 << 0x11 | uVar11 >> 0xf) ^ uVar9 ^ uVar3 + uVar6
    ;
    DAT_018db7c0 = uVar2;
  } while (uVar5 == 0 && uVar8 == 0);
LAB_0100ef80:
  *param_1 = uVar5;
  param_1[1] = uVar8;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

