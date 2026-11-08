// FUN_013353bc @ 013353bc size=1176 calls_out=3 calls_in=6
// strings: 

uint * FUN_013353bc(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int local_38;
  uint *local_2c;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    local_2c = &DAT_005674cc;
    *param_1 = puVar2;
    *puVar2 = &DAT_005674cc;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  else {
    local_2c = (uint *)*puVar2;
  }
  uVar3 = param_2 ^ 0x79746573;
  uVar4 = (uVar3 >> 0x10 | 0x64620000) ^ (0x919a8d9e < uVar3) + 0xdcdecbc7;
  uVar8 = (uVar3 << 0x10 | 0x7065) ^ uVar3 + 0x6e657261;
  uVar7 = uVar4 + 0xded7d4e2 + (uint)(0x28212039 < uVar8);
  uVar10 = (uVar4 << 0x15 | uVar8 >> 0xb) ^ uVar7;
  uVar9 = (uVar8 << 0x15 | uVar4 >> 0xb) ^ uVar8 + 0xd7dedfc6;
  uVar4 = (0x3e60152f < uVar3) + 0x1671bdd1;
  uVar5 = uVar4 ^ 0xff;
  uVar4 = uVar4 ^ 0xe414a674;
  uVar12 = uVar9 + uVar5;
  uVar15 = uVar10 + uVar3 + 0xc19fead0 + (uint)CARRY4(uVar9,uVar5);
  uVar6 = (uVar10 << 0x10 | uVar9 >> 0x10) ^ uVar15;
  uVar9 = (uVar9 << 0x10 | uVar10 >> 0x10) ^ uVar12;
  uVar10 = uVar8 + 0xd7dedfc6 ^ param_2;
  uVar5 = uVar3 + 0xc19fead0 ^ 0xf0de7325;
  uVar3 = puVar2[1];
  uVar8 = uVar10 + uVar5;
  uVar10 = (uVar7 ^ 0x4000000) + uVar4 + (uint)CARRY4(uVar10,uVar5);
  uVar13 = uVar9 + uVar10;
  uVar14 = uVar6 + uVar8 + (uint)CARRY4(uVar9,uVar10);
  uVar10 = uVar10 ^ (uVar4 << 0xd | uVar5 >> 0x13);
  uVar16 = (uVar6 << 0x15 | uVar9 >> 0xb) ^ uVar14;
  uVar8 = uVar8 ^ (uVar5 << 0xd | 0x1e4c);
  uVar6 = (uVar9 << 0x15 | uVar6 >> 0xb) ^ uVar13;
  uVar7 = uVar10 + uVar15 + (uint)CARRY4(uVar8,uVar12);
  uVar4 = uVar7 ^ (uVar10 << 0x11 | uVar8 >> 0xf);
  uVar15 = uVar6 + uVar7;
  uVar5 = uVar8 + uVar12 ^ (uVar8 << 0x11 | uVar10 >> 0xf);
  uVar10 = uVar16 + uVar8 + uVar12 + (uint)CARRY4(uVar6,uVar7);
  uVar8 = uVar4 + uVar14 + (uint)CARRY4(uVar5,uVar13);
  uVar9 = (uVar4 << 0xd | uVar5 >> 0x13) ^ uVar8;
  uVar7 = (uVar6 << 0x10 | uVar16 >> 0x10) ^ uVar15;
  uVar4 = (uVar5 << 0xd | uVar4 >> 0x13) ^ uVar5 + uVar13;
  uVar14 = (uVar16 << 0x10 | uVar6 >> 0x10) ^ uVar10;
  uVar16 = uVar7 + uVar8;
  uVar6 = uVar14 + uVar5 + uVar13 + (uint)CARRY4(uVar7,uVar8);
  uVar12 = uVar9 + uVar10 + (uint)CARRY4(uVar4,uVar15);
  uVar5 = (uVar4 << 0x11 | uVar9 >> 0xf) ^ uVar4 + uVar15;
  uVar8 = (uVar9 << 0x11 | uVar4 >> 0xf) ^ uVar12;
  uVar9 = (uVar14 << 0x15 | uVar7 >> 0xb) ^ uVar6;
  uVar7 = (uVar7 << 0x15 | uVar14 >> 0xb) ^ uVar16;
  uVar10 = uVar7 + uVar12;
  uVar13 = (uVar8 << 0xd | uVar5 >> 0x13) ^ uVar8 + uVar6 + (uint)CARRY4(uVar5,uVar16);
  uVar6 = uVar9 + uVar4 + uVar15 + (uint)CARRY4(uVar7,uVar12);
  uVar4 = (uVar5 << 0xd | uVar8 >> 0x13) ^ uVar5 + uVar16;
  uVar8 = ((uVar9 >> 0x10 ^ uVar10) << 0x15 | ((uVar9 << 0x10 | uVar7 >> 0x10) ^ uVar6) >> 0xb) ^
          (uVar4 << 0x11 | uVar13 >> 0xf) ^ uVar13 + uVar6 + (uint)CARRY4(uVar4,uVar10) ^
          uVar4 + uVar10;
  uVar4 = uVar3 & uVar8;
  local_38 = 0;
  uVar5 = uVar4;
  while( true ) {
    uVar7 = *(uint *)((int)local_2c + uVar5);
    uVar6 = uVar7 ^ (uVar8 >> 0x19) * 0x1010101;
    uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
    while (uVar6 != 0) {
      uVar9 = uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                     (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar3;
      uVar6 = uVar6 - 1 & uVar6;
      if (local_2c[uVar9 * -0xd + -0xd] == param_2) {
        return local_2c + uVar9 * -0xd + -0xc;
      }
    }
    if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
    local_38 = local_38 + 4;
    uVar5 = uVar5 + local_38 & uVar3;
  }
  if (puVar2[2] == 0) {
    FUN_01335860(puVar2,puVar2 + 4);
    uVar3 = puVar2[1];
    local_2c = (uint *)*puVar2;
    uVar4 = uVar3 & uVar8;
    uVar5 = *(uint *)((int)local_2c + uVar4);
  }
  else {
    uVar5 = *(uint *)((int)local_2c + uVar4);
  }
  uVar5 = uVar5 & 0x80808080;
  if (uVar5 == 0) {
    iVar11 = 4;
    do {
      uVar4 = uVar4 + iVar11;
      iVar11 = iVar11 + 4;
      uVar4 = uVar4 & uVar3;
      uVar5 = *(uint *)((int)local_2c + uVar4) & 0x80808080;
    } while (uVar5 == 0);
  }
  uVar4 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                 (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar3;
  uVar5 = (uint)*(char *)((int)local_2c + uVar4);
  if (-1 < (int)uVar5) {
    uVar4 = *local_2c & 0x80808080;
    uVar4 = LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                    uVar4 >> 0x18);
    uVar5 = (uint)*(byte *)((int)local_2c + (uVar4 >> 3));
    uVar4 = uVar4 >> 3;
  }
  puVar2[2] = puVar2[2] - (uVar5 & 1);
  puVar2[3] = puVar2[3] + 1;
  bVar1 = (byte)(uVar8 >> 0x19);
  *(byte *)((int)local_2c + uVar4) = bVar1;
  *(byte *)((int)local_2c + (uVar4 - 4 & uVar3) + 4) = bVar1;
  local_2c[uVar4 * -0xd + -5] = 8;
  local_2c[uVar4 * -0xd + -4] = 0;
  local_2c[uVar4 * -0xd + -3] = 0;
  local_2c[uVar4 * -0xd + -2] = 4;
  local_2c[uVar4 * -0xd + -1] = 0;
  local_2c[uVar4 * -0xd + -0xd] = param_2;
  local_2c[uVar4 * -0xd + -0xc] = 0;
  local_2c[uVar4 * -0xd + -0xb] = 4;
  local_2c[uVar4 * -0xd + -10] = 0;
  local_2c[uVar4 * -0xd + -9] = 0;
  local_2c[uVar4 * -0xd + -8] = 8;
  local_2c[uVar4 * -0xd + -7] = 0;
  local_2c[uVar4 * -0xd + -6] = 0;
  return local_2c + uVar4 * -0xd + -0xc;
}

