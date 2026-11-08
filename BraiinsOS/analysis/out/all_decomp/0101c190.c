// FUN_0101c190 @ 0101c190 size=968 calls_out=1 calls_in=1
// strings: 

void FUN_0101c190(int *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
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
  int local_34;
  
  uVar2 = param_2[6];
  if (uVar2 == 0) {
    *param_1 = 0;
    return;
  }
  if (uVar2 == 1) {
    uVar10 = param_2[5];
    uVar3 = 0;
    if (param_3 == *(uint *)(uVar10 + 4)) {
LAB_0101c520:
      param_1[1] = *(int *)(uVar10 + uVar3 * 0xc + 8);
      param_1[2] = param_3;
      *param_1 = (int)param_2;
      return;
    }
  }
  else {
    uVar4 = param_2[2] ^ 0x6e646f6d;
    uVar10 = *param_2 ^ 0x70736575;
    uVar13 = uVar4 + uVar10;
    uVar1 = param_2[3] ^ 0x646f7261;
    uVar12 = uVar1 + (param_2[1] ^ 0x736f6d65) + (uint)CARRY4(uVar4,uVar10);
    uVar6 = (uVar4 << 0xd | uVar1 >> 0x13) ^ uVar13;
    uVar1 = (uVar1 << 0xd | uVar4 >> 0x13) ^ uVar12;
    uVar3 = param_2[3] ^ 0x70656462;
    uVar10 = *param_2 ^ 0x6e657261;
    uVar4 = param_2[2] ^ param_3 ^ 0x79746573;
    uVar9 = uVar4 + uVar10;
    uVar5 = uVar3 + (param_2[1] ^ 0x6c796765) + (uint)CARRY4(uVar4,uVar10);
    uVar8 = uVar5 + uVar1 + (uint)CARRY4(uVar9,uVar6);
    uVar7 = uVar8 ^ (uVar1 << 0x11 | uVar6 >> 0xf);
    uVar10 = (uVar4 << 0x10 | uVar3 >> 0x10) ^ uVar9;
    uVar5 = (uVar3 << 0x10 | uVar4 >> 0x10) ^ uVar5;
    uVar1 = uVar9 + uVar6 ^ (uVar6 << 0x11 | uVar1 >> 0xf);
    uVar4 = uVar10 + uVar12 ^ param_3;
    uVar3 = uVar5 + uVar13 + (uint)CARRY4(uVar10,uVar12);
    uVar14 = uVar4 + uVar1;
    uVar11 = (uVar3 ^ 0x4000000) + uVar7 + (uint)CARRY4(uVar4,uVar1);
    uVar13 = uVar11 ^ (uVar7 << 0xd | uVar1 >> 0x13);
    uVar1 = uVar14 ^ (uVar1 << 0xd | uVar7 >> 0x13);
    local_34 = 0;
    uVar3 = (uVar5 << 0x15 | uVar10 >> 0xb) ^ uVar3;
    uVar4 = (uVar10 << 0x15 | uVar5 >> 0xb) ^ uVar10 + uVar12;
    uVar8 = uVar8 ^ 0xff;
    uVar12 = uVar4 + uVar8;
    uVar5 = uVar3 + uVar9 + uVar6 + (uint)CARRY4(uVar4,uVar8);
    uVar7 = uVar13 + uVar5 + (uint)CARRY4(uVar1,uVar12);
    uVar10 = uVar7 ^ (uVar13 << 0x11 | uVar1 >> 0xf);
    uVar6 = uVar1 + uVar12 ^ (uVar1 << 0x11 | uVar13 >> 0xf);
    uVar5 = (uVar3 << 0x10 | uVar4 >> 0x10) ^ uVar5;
    uVar8 = (uVar4 << 0x10 | uVar3 >> 0x10) ^ uVar12;
    uVar3 = uVar8 + uVar11;
    uVar4 = uVar5 + uVar14 + (uint)CARRY4(uVar8,uVar11);
    uVar9 = uVar10 + uVar4 + (uint)CARRY4(uVar6,uVar3);
    uVar14 = (uVar10 << 0xd | uVar6 >> 0x13) ^ uVar9;
    uVar11 = (uVar6 << 0xd | uVar10 >> 0x13) ^ uVar6 + uVar3;
    uVar4 = (uVar5 << 0x15 | uVar8 >> 0xb) ^ uVar4;
    uVar8 = (uVar8 << 0x15 | uVar5 >> 0xb) ^ uVar3;
    uVar5 = uVar8 + uVar7;
    uVar10 = uVar4 + uVar1 + uVar12 + (uint)CARRY4(uVar8,uVar7);
    uVar7 = uVar14 + uVar10 + (uint)CARRY4(uVar11,uVar5);
    uVar13 = (uVar14 << 0x11 | uVar11 >> 0xf) ^ uVar7;
    uVar10 = (uVar4 << 0x10 | uVar8 >> 0x10) ^ uVar10;
    uVar1 = (uVar8 << 0x10 | uVar4 >> 0x10) ^ uVar5;
    uVar8 = uVar1 + uVar9;
    uVar3 = uVar10 + uVar6 + uVar3 + (uint)CARRY4(uVar1,uVar9);
    uVar4 = (uVar1 << 0x15 | uVar10 >> 0xb) ^ uVar8;
    uVar6 = (uVar10 << 0x15 | uVar1 >> 0xb) ^ uVar3;
    uVar9 = uVar4 + uVar7;
    uVar1 = (uVar11 << 0x11 | uVar14 >> 0xf) ^ uVar11 + uVar5;
    uVar5 = uVar6 + uVar11 + uVar5 + (uint)CARRY4(uVar4,uVar7);
    uVar10 = (uVar13 << 0xd | uVar1 >> 0x13) ^ uVar13 + uVar3 + (uint)CARRY4(uVar1,uVar8);
    uVar1 = (uVar1 << 0xd | uVar13 >> 0x13) ^ uVar1 + uVar8;
    uVar4 = ((uVar9 ^ uVar6 >> 0x10) << 0x15 | ((uVar6 << 0x10 | uVar4 >> 0x10) ^ uVar5) >> 0xb) ^
            (uVar1 << 0x11 | uVar10 >> 0xf) ^ uVar10 + uVar5 + (uint)CARRY4(uVar1,uVar9) ^
            uVar1 + uVar9;
    uVar1 = uVar4 >> 0x19;
    uVar10 = param_2[5];
    while( true ) {
      uVar4 = param_2[8] & uVar4;
      uVar5 = *(uint *)(param_2[7] + uVar4);
      uVar8 = uVar5 ^ uVar1 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar3 = *(uint *)((param_2[7] - 4) +
                         (uVar4 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                                 (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3)
                         & param_2[8]) * -4);
        if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar3,uVar2,&DAT_018adbc8);
        }
        uVar8 = uVar8 - 1 & uVar8;
        if (param_3 == *(uint *)(uVar10 + uVar3 * 0xc + 4)) goto LAB_0101c520;
      }
      if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
      local_34 = local_34 + 4;
      uVar4 = local_34 + uVar4;
    }
  }
  *param_1 = 0;
  return;
}

