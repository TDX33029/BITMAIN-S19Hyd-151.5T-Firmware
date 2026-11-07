// FUN_0101b7ac @ 0101b7ac size=916 calls_out=1 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0101b7ac(int *param_1,uint *param_2,uint param_3)

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
  int local_38;
  
  uVar2 = param_2[2] ^ 0x6e646f6d;
  uVar6 = *param_2 ^ 0x70736575;
  uVar1 = uVar2 + uVar6;
  uVar3 = param_2[3] ^ 0x646f7261;
  uVar12 = uVar3 + (param_2[1] ^ 0x736f6d65) + (uint)CARRY4(uVar2,uVar6);
  uVar6 = (uVar3 << 0xd | uVar2 >> 0x13) ^ uVar12;
  uVar10 = (uVar2 << 0xd | uVar3 >> 0x13) ^ uVar1;
  uVar4 = param_2[3] ^ 0x70656462;
  uVar7 = param_2[2] ^ param_3 ^ 0x79746573;
  uVar2 = *param_2 ^ 0x6e657261;
  uVar8 = uVar7 + uVar2;
  uVar2 = uVar4 + (param_2[1] ^ 0x6c796765) + (uint)CARRY4(uVar7,uVar2);
  uVar5 = (uVar7 << 0x10 | uVar4 >> 0x10) ^ uVar8;
  uVar3 = uVar2 + uVar6 + (uint)CARRY4(uVar8,uVar10);
  uVar2 = (uVar4 << 0x10 | uVar7 >> 0x10) ^ uVar2;
  uVar4 = uVar3 ^ (uVar6 << 0x11 | uVar10 >> 0xf);
  uVar9 = uVar2 + uVar1 + (uint)CARRY4(uVar5,uVar12);
  uVar1 = uVar8 + uVar10 ^ (uVar10 << 0x11 | uVar6 >> 0xf);
  uVar6 = uVar5 + uVar12 ^ param_3;
  uVar13 = uVar6 + uVar1;
  uVar11 = (uVar9 ^ 0x4000000) + uVar4 + (uint)CARRY4(uVar6,uVar1);
  uVar7 = uVar11 ^ (uVar4 << 0xd | uVar1 >> 0x13);
  uVar6 = uVar13 ^ (uVar1 << 0xd | uVar4 >> 0x13);
  uVar9 = (uVar2 << 0x15 | uVar5 >> 0xb) ^ uVar9;
  uVar2 = (uVar5 << 0x15 | uVar2 >> 0xb) ^ uVar5 + uVar12;
  uVar3 = uVar3 ^ 0xff;
  uVar12 = uVar2 + uVar3;
  uVar4 = uVar9 + uVar8 + uVar10 + (uint)CARRY4(uVar2,uVar3);
  uVar10 = uVar7 + uVar4 + (uint)CARRY4(uVar6,uVar12);
  uVar1 = uVar10 ^ (uVar7 << 0x11 | uVar6 >> 0xf);
  uVar5 = uVar6 + uVar12 ^ (uVar6 << 0x11 | uVar7 >> 0xf);
  uVar4 = (uVar9 << 0x10 | uVar2 >> 0x10) ^ uVar4;
  uVar3 = (uVar2 << 0x10 | uVar9 >> 0x10) ^ uVar12;
  uVar8 = uVar3 + uVar11;
  uVar2 = uVar4 + uVar13 + (uint)CARRY4(uVar3,uVar11);
  uVar13 = uVar1 + uVar2 + (uint)CARRY4(uVar5,uVar8);
  uVar14 = (uVar1 << 0xd | uVar5 >> 0x13) ^ uVar13;
  uVar11 = (uVar5 << 0xd | uVar1 >> 0x13) ^ uVar5 + uVar8;
  uVar2 = (uVar4 << 0x15 | uVar3 >> 0xb) ^ uVar2;
  uVar3 = (uVar3 << 0x15 | uVar4 >> 0xb) ^ uVar8;
  uVar4 = uVar3 + uVar10;
  uVar1 = uVar2 + uVar6 + uVar12 + (uint)CARRY4(uVar3,uVar10);
  uVar9 = uVar14 + uVar1 + (uint)CARRY4(uVar11,uVar4);
  uVar7 = (uVar14 << 0x11 | uVar11 >> 0xf) ^ uVar9;
  uVar1 = (uVar2 << 0x10 | uVar3 >> 0x10) ^ uVar1;
  uVar2 = (uVar3 << 0x10 | uVar2 >> 0x10) ^ uVar4;
  uVar6 = uVar2 + uVar13;
  uVar5 = uVar1 + uVar5 + uVar8 + (uint)CARRY4(uVar2,uVar13);
  uVar8 = (uVar1 << 0x15 | uVar2 >> 0xb) ^ uVar5;
  uVar1 = (uVar2 << 0x15 | uVar1 >> 0xb) ^ uVar6;
  uVar3 = (uVar11 << 0x11 | uVar14 >> 0xf) ^ uVar11 + uVar4;
  uVar10 = uVar1 + uVar9;
  uVar4 = uVar8 + uVar11 + uVar4 + (uint)CARRY4(uVar1,uVar9);
  uVar2 = (uVar3 << 0xd | uVar7 >> 0x13) ^ uVar3 + uVar6;
  uVar3 = (uVar7 << 0xd | uVar3 >> 0x13) ^ uVar7 + uVar5 + (uint)CARRY4(uVar3,uVar6);
  uVar2 = ((uVar10 ^ uVar8 >> 0x10) << 0x15 | ((uVar8 << 0x10 | uVar1 >> 0x10) ^ uVar4) >> 0xb) ^
          (uVar2 << 0x11 | uVar3 >> 0xf) ^ uVar3 + uVar4 + (uint)CARRY4(uVar2,uVar10) ^
          uVar2 + uVar10;
  local_38 = 0;
  uVar1 = uVar2;
  do {
    uVar1 = param_2[8] & uVar1;
    uVar6 = *(uint *)(param_2[7] + uVar1);
    uVar3 = uVar6 ^ (uVar2 >> 0x19) * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar4 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & param_2[8]
      ;
      uVar5 = *(uint *)((param_2[7] - 4) + uVar4 * -4);
      if (param_2[6] <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar5,param_2[6],&DAT_018adbc8);
      }
      uVar3 = uVar3 - 1 & uVar3;
      if (param_3 == *(uint *)(param_2[5] + uVar5 * 0xc + 4)) {
        *param_1 = 0;
        param_1[1] = (int)(param_2 + 4);
        param_1[2] = uVar5;
        param_1[3] = uVar4;
        return;
      }
    }
    if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) {
      *param_1 = (int)(param_2 + 4);
      param_1[1] = uVar2;
      param_1[2] = param_3;
      param_1[3] = (int)(param_2 + 0xc);
      return;
    }
    local_38 = local_38 + 4;
    uVar1 = local_38 + uVar1;
  } while( true );
}

