// FUN_01628e10 @ 01628e10 size=904 calls_out=2 calls_in=3
// strings: 

void FUN_01628e10(int *param_1,uint param_2,undefined4 param_3)

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
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int local_38;
  uint local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  local_30 = param_2;
  if ((char)param_1[0xe] != '\x01') {
LAB_0162913c:
    if (((uint)param_1[0xb] <= param_2) || (*(int *)(param_1[10] + param_2 * 0x28) == 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_00412edc,0xb,param_3);
    }
    return;
  }
  if (param_1[3] != 0) {
    uVar4 = param_1[7] ^ 0x646f7261;
    uVar2 = param_1[6] ^ 0x6e646f6d;
    uVar1 = param_1[4] ^ 0x70736575;
    uVar12 = uVar2 + uVar1;
    uVar11 = uVar4 + (param_1[5] ^ 0x736f6d65U) + (uint)CARRY4(uVar2,uVar1);
    uVar9 = (uVar2 << 0xd | uVar4 >> 0x13) ^ uVar12;
    uVar4 = (uVar4 << 0xd | uVar2 >> 0x13) ^ uVar11;
    uVar1 = param_1[4] ^ 0x6e657261;
    uVar2 = param_1[6] ^ param_2 ^ 0x79746573;
    uVar5 = param_1[7] ^ 0x70656462;
    uVar8 = uVar2 + uVar1;
    uVar1 = uVar5 + (param_1[5] ^ 0x6c796765U) + (uint)CARRY4(uVar2,uVar1);
    uVar7 = uVar1 + uVar4 + (uint)CARRY4(uVar8,uVar9);
    uVar3 = uVar7 ^ (uVar4 << 0x11 | uVar9 >> 0xf);
    uVar1 = (uVar5 << 0x10 | uVar2 >> 0x10) ^ uVar1;
    uVar6 = (uVar2 << 0x10 | uVar5 >> 0x10) ^ uVar8;
    uVar5 = uVar1 + uVar12 + (uint)CARRY4(uVar6,uVar11);
    uVar2 = uVar8 + uVar9 ^ (uVar9 << 0x11 | uVar4 >> 0xf);
    uVar4 = uVar6 + uVar11 ^ param_2;
    uVar13 = uVar4 + uVar2;
    uVar12 = (uVar5 ^ 0x4000000) + uVar3 + (uint)CARRY4(uVar4,uVar2);
    uVar4 = uVar12 ^ (uVar3 << 0xd | uVar2 >> 0x13);
    uVar2 = uVar13 ^ (uVar2 << 0xd | uVar3 >> 0x13);
    uVar5 = (uVar1 << 0x15 | uVar6 >> 0xb) ^ uVar5;
    uVar7 = uVar7 ^ 0xff;
    uVar1 = (uVar6 << 0x15 | uVar1 >> 0xb) ^ uVar6 + uVar11;
    uVar11 = uVar1 + uVar7;
    uVar7 = uVar5 + uVar8 + uVar9 + (uint)CARRY4(uVar1,uVar7);
    uVar9 = uVar4 + uVar7 + (uint)CARRY4(uVar2,uVar11);
    uVar8 = uVar9 ^ (uVar4 << 0x11 | uVar2 >> 0xf);
    uVar3 = uVar2 + uVar11 ^ (uVar2 << 0x11 | uVar4 >> 0xf);
    uVar7 = (uVar5 << 0x10 | uVar1 >> 0x10) ^ uVar7;
    uVar1 = (uVar1 << 0x10 | uVar5 >> 0x10) ^ uVar11;
    uVar6 = uVar1 + uVar12;
    uVar4 = uVar7 + uVar13 + (uint)CARRY4(uVar1,uVar12);
    uVar12 = uVar8 + uVar4 + (uint)CARRY4(uVar3,uVar6);
    uVar14 = (uVar8 << 0xd | uVar3 >> 0x13) ^ uVar12;
    uVar13 = (uVar3 << 0xd | uVar8 >> 0x13) ^ uVar3 + uVar6;
    uVar4 = (uVar7 << 0x15 | uVar1 >> 0xb) ^ uVar4;
    uVar1 = (uVar1 << 0x15 | uVar7 >> 0xb) ^ uVar6;
    uVar5 = uVar1 + uVar9;
    uVar7 = uVar4 + uVar2 + uVar11 + (uint)CARRY4(uVar1,uVar9);
    uVar9 = uVar14 + uVar7 + (uint)CARRY4(uVar13,uVar5);
    uVar8 = (uVar14 << 0x11 | uVar13 >> 0xf) ^ uVar9;
    uVar7 = (uVar4 << 0x10 | uVar1 >> 0x10) ^ uVar7;
    uVar1 = (uVar1 << 0x10 | uVar4 >> 0x10) ^ uVar5;
    uVar4 = uVar1 + uVar12;
    uVar6 = uVar7 + uVar3 + uVar6 + (uint)CARRY4(uVar1,uVar12);
    uVar2 = (uVar1 << 0x15 | uVar7 >> 0xb) ^ uVar4;
    uVar7 = (uVar7 << 0x15 | uVar1 >> 0xb) ^ uVar6;
    uVar11 = uVar2 + uVar9;
    uVar3 = (uVar13 << 0x11 | uVar14 >> 0xf) ^ uVar13 + uVar5;
    uVar5 = uVar7 + uVar13 + uVar5 + (uint)CARRY4(uVar2,uVar9);
    iVar10 = *param_1;
    uVar1 = (uVar8 << 0xd | uVar3 >> 0x13) ^ uVar8 + uVar6 + (uint)CARRY4(uVar3,uVar4);
    uVar4 = (uVar3 << 0xd | uVar8 >> 0x13) ^ uVar3 + uVar4;
    uVar2 = ((uVar11 ^ uVar7 >> 0x10) << 0x15 | ((uVar7 << 0x10 | uVar2 >> 0x10) ^ uVar5) >> 0xb) ^
            (uVar4 << 0x11 | uVar1 >> 0xf) ^ uVar1 + uVar5 + (uint)CARRY4(uVar4,uVar11) ^
            uVar4 + uVar11;
    uVar1 = uVar2 >> 0x19;
    local_38 = 0;
    while( true ) {
      uVar2 = param_1[1] & uVar2;
      uVar3 = *(uint *)(iVar10 + uVar2);
      uVar4 = uVar3 ^ uVar1 * 0x1010101;
      uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
      while (uVar4 != 0) {
        uVar7 = uVar4 >> 8;
        uVar5 = uVar4 >> 0x10;
        uVar6 = uVar4 >> 0x18;
        uVar8 = uVar4 << 0x18;
        uVar4 = uVar4 - 1 & uVar4;
        uVar7 = uVar2 + ((uint)LZCOUNT(uVar8 | (uVar7 & 0xff) << 0x10 | (uVar5 & 0xff) << 8 | uVar6)
                        >> 3) & param_1[1];
        if (param_2 == *(uint *)(iVar10 + -8 + uVar7 * -8)) {
          param_2 = *(uint *)(iVar10 + uVar7 * -8 + -4);
          goto LAB_0162913c;
        }
      }
      if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
      local_38 = local_38 + 4;
      uVar2 = uVar2 + local_38;
    }
  }
  local_2c = &local_30;
  local_28 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_005909dd,&local_2c,param_3);
}

