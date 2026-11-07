// FUN_01625554 @ 01625554 size=780 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01625554(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar2 = param_1[6] ^ 0x6e646f6d;
  uVar4 = param_1[4] ^ 0x70736575;
  uVar13 = uVar2 + uVar4;
  uVar1 = param_1[7] ^ 0x646f7261;
  uVar12 = uVar1 + (param_1[5] ^ 0x736f6d65U) + (uint)CARRY4(uVar2,uVar4);
  uVar10 = (uVar2 << 0xd | uVar1 >> 0x13) ^ uVar13;
  uVar1 = (uVar1 << 0xd | uVar2 >> 0x13) ^ uVar12;
  uVar3 = param_1[7] ^ 0x70656462;
  uVar5 = param_1[6] ^ param_2 ^ 0x79746573;
  uVar4 = param_1[4] ^ 0x6e657261;
  uVar2 = uVar5 + uVar4;
  uVar6 = uVar3 + (param_1[5] ^ 0x6c796765U) + (uint)CARRY4(uVar5,uVar4);
  uVar4 = (uVar5 << 0x10 | uVar3 >> 0x10) ^ uVar2;
  uVar7 = uVar6 + uVar1 + (uint)CARRY4(uVar2,uVar10);
  uVar6 = (uVar3 << 0x10 | uVar5 >> 0x10) ^ uVar6;
  uVar9 = uVar7 ^ (uVar1 << 0x11 | uVar10 >> 0xf);
  uVar3 = uVar6 + uVar13 + (uint)CARRY4(uVar4,uVar12);
  uVar1 = uVar2 + uVar10 ^ (uVar10 << 0x11 | uVar1 >> 0xf);
  uVar5 = uVar4 + uVar12 ^ param_2;
  uVar14 = uVar5 + uVar1;
  uVar11 = (uVar3 ^ 0x4000000) + uVar9 + (uint)CARRY4(uVar5,uVar1);
  uVar13 = uVar11 ^ (uVar9 << 0xd | uVar1 >> 0x13);
  uVar1 = uVar14 ^ (uVar1 << 0xd | uVar9 >> 0x13);
  uVar3 = (uVar6 << 0x15 | uVar4 >> 0xb) ^ uVar3;
  uVar5 = (uVar4 << 0x15 | uVar6 >> 0xb) ^ uVar4 + uVar12;
  uVar7 = uVar7 ^ 0xff;
  uVar12 = uVar5 + uVar7;
  uVar6 = uVar3 + uVar2 + uVar10 + (uint)CARRY4(uVar5,uVar7);
  uVar9 = uVar13 + uVar6 + (uint)CARRY4(uVar1,uVar12);
  uVar4 = uVar9 ^ (uVar13 << 0x11 | uVar1 >> 0xf);
  uVar13 = uVar1 + uVar12 ^ (uVar1 << 0x11 | uVar13 >> 0xf);
  uVar6 = (uVar3 << 0x10 | uVar5 >> 0x10) ^ uVar6;
  uVar7 = (uVar5 << 0x10 | uVar3 >> 0x10) ^ uVar12;
  uVar3 = uVar7 + uVar11;
  uVar2 = uVar6 + uVar14 + (uint)CARRY4(uVar7,uVar11);
  uVar10 = uVar4 + uVar2 + (uint)CARRY4(uVar13,uVar3);
  uVar14 = (uVar4 << 0xd | uVar13 >> 0x13) ^ uVar10;
  uVar11 = (uVar13 << 0xd | uVar4 >> 0x13) ^ uVar13 + uVar3;
  uVar2 = (uVar6 << 0x15 | uVar7 >> 0xb) ^ uVar2;
  uVar7 = (uVar7 << 0x15 | uVar6 >> 0xb) ^ uVar3;
  uVar5 = uVar7 + uVar9;
  uVar4 = uVar2 + uVar1 + uVar12 + (uint)CARRY4(uVar7,uVar9);
  uVar9 = uVar14 + uVar4 + (uint)CARRY4(uVar11,uVar5);
  uVar6 = (uVar14 << 0x11 | uVar11 >> 0xf) ^ uVar9;
  uVar4 = (uVar2 << 0x10 | uVar7 >> 0x10) ^ uVar4;
  uVar1 = (uVar7 << 0x10 | uVar2 >> 0x10) ^ uVar5;
  uVar7 = uVar1 + uVar10;
  uVar3 = uVar4 + uVar13 + uVar3 + (uint)CARRY4(uVar1,uVar10);
  uVar2 = (uVar1 << 0x15 | uVar4 >> 0xb) ^ uVar7;
  uVar13 = (uVar4 << 0x15 | uVar1 >> 0xb) ^ uVar3;
  uVar10 = uVar2 + uVar9;
  uVar1 = (uVar11 << 0x11 | uVar14 >> 0xf) ^ uVar11 + uVar5;
  uVar5 = uVar13 + uVar11 + uVar5 + (uint)CARRY4(uVar2,uVar9);
  uVar4 = (uVar6 << 0xd | uVar1 >> 0x13) ^ uVar6 + uVar3 + (uint)CARRY4(uVar1,uVar7);
  uVar1 = (uVar1 << 0xd | uVar6 >> 0x13) ^ uVar1 + uVar7;
  uVar2 = ((uVar10 ^ uVar13 >> 0x10) << 0x15 | ((uVar13 << 0x10 | uVar2 >> 0x10) ^ uVar5) >> 0xb) ^
          (uVar1 << 0x11 | uVar4 >> 0xf) ^ uVar4 + uVar5 + (uint)CARRY4(uVar1,uVar10) ^
          uVar1 + uVar10;
  uVar1 = uVar2 >> 0x19;
  iVar8 = 0;
  while( true ) {
    uVar2 = param_1[1] & uVar2;
    uVar7 = *(uint *)(*param_1 + uVar2);
    uVar4 = uVar7 ^ uVar1 * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      uVar3 = uVar4 >> 8;
      uVar5 = uVar4 >> 0x10;
      uVar6 = uVar4 >> 0x18;
      uVar13 = uVar4 << 0x18;
      uVar4 = uVar4 - 1 & uVar4;
      if (param_2 ==
          *(uint *)(*param_1 + -8 +
                   (uVar2 + ((uint)LZCOUNT(uVar13 | (uVar3 & 0xff) << 0x10 | (uVar5 & 0xff) << 8 |
                                           uVar6) >> 3) & param_1[1]) * -8)) {
        return 1;
      }
    }
    if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
    iVar8 = iVar8 + 4;
    uVar2 = uVar2 + iVar8;
  }
  return 0;
}

