// FUN_0162401c @ 0162401c size=1280 calls_out=4 calls_in=2
// strings: 

uint FUN_0162401c(int *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_40;
  uint *local_3c;
  uint **local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  local_38 = &local_3c;
  uVar10 = param_1[3] + 1;
  local_3c = param_2;
  if (0xfffffffe < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar7 = param_1[1];
  if (7 < uVar7) {
    uVar7 = (uVar7 + 1 & 0xfffffff8) - (uVar7 + 1 >> 3);
  }
  if (uVar7 >> 1 < uVar10) {
    if (uVar10 < uVar7 + 1) {
      uVar10 = uVar7 + 1;
    }
    FUN_01624528(&local_34,8,4,uVar10);
    local_40 = local_30;
    if (local_34 != (uint *)0x0) {
      iVar16 = param_1[3];
      if (iVar16 == 0) {
        iVar16 = 0;
      }
      else {
        puVar9 = (uint *)*param_1;
        iVar13 = 0;
        uVar10 = ~*puVar9 & 0x80808080;
        do {
          if (uVar10 == 0) {
            do {
              puVar9 = puVar9 + 1;
              iVar13 = iVar13 + 4;
            } while ((*puVar9 & 0x80808080) == 0x80808080);
            uVar10 = *puVar9 & 0x80808080 ^ 0x80808080;
          }
          uVar8 = local_3c[3] ^ 0x70656462;
          uVar7 = iVar13 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3);
          uVar2 = *(uint *)(*param_1 + uVar7 * -8 + -8);
          uVar14 = local_3c[2] ^ uVar2 ^ 0x79746573;
          uVar3 = *local_3c ^ 0x6e657261;
          uVar4 = uVar14 + uVar3;
          uVar5 = (uVar14 << 0x10 | uVar8 >> 0x10) ^ uVar4;
          uVar17 = uVar8 + (local_3c[1] ^ 0x6c796765) + (uint)CARRY4(uVar14,uVar3);
          uVar12 = local_3c[3] ^ 0x646f7261;
          uVar21 = *local_3c ^ 0x70736575;
          uVar3 = (uVar8 << 0x10 | uVar14 >> 0x10) ^ uVar17;
          uVar14 = local_3c[2] ^ 0x6e646f6d;
          uVar19 = uVar14 + uVar21;
          uVar21 = uVar12 + (local_3c[1] ^ 0x736f6d65) + (uint)CARRY4(uVar14,uVar21);
          uVar20 = uVar3 + uVar19 + (uint)CARRY4(uVar5,uVar21);
          uVar15 = (uVar3 << 0x15 | uVar5 >> 0xb) ^ uVar20;
          uVar3 = (uVar5 << 0x15 | uVar3 >> 0xb) ^ uVar5 + uVar21;
          uVar8 = (uVar12 << 0xd | uVar14 >> 0x13) ^ uVar21;
          uVar19 = (uVar14 << 0xd | uVar12 >> 0x13) ^ uVar19;
          uVar12 = uVar17 + uVar8 + (uint)CARRY4(uVar4,uVar19);
          uVar14 = uVar12 ^ 0xff;
          uVar17 = uVar3 + uVar14;
          uVar18 = uVar15 + uVar4 + uVar19 + (uint)CARRY4(uVar3,uVar14);
          uVar14 = (uVar15 << 0x10 | uVar3 >> 0x10) ^ uVar18;
          uVar3 = (uVar3 << 0x10 | uVar15 >> 0x10) ^ uVar17;
          uVar12 = uVar12 ^ (uVar8 << 0x11 | uVar19 >> 0xf);
          uVar2 = uVar4 + uVar19 ^ (uVar19 << 0x11 | uVar8 >> 0xf);
          uVar2 = uVar5 + uVar21 ^ uVar2;
          uVar2 = uVar2 + uVar2;
          uVar3 = (uVar20 ^ 0x4000000) + uVar12 + (uint)CARRY4(uVar2,uVar2);
          uVar3 = uVar3 + uVar3;
          uVar2 = uVar14 + uVar2 + (uint)CARRY4(uVar3,uVar3);
          uVar2 = (uVar14 << 0x15 | uVar3 >> 0xb) ^ uVar2;
          uVar3 = (uVar3 << 0x15 | uVar14 >> 0xb) ^ uVar3;
          uVar3 = uVar3 ^ (uVar12 << 0xd | uVar2 >> 0x13);
          uVar2 = uVar2 ^ (uVar2 << 0xd | uVar12 >> 0x13);
          uVar3 = uVar3 + uVar18 + (uint)CARRY4(uVar2,uVar17);
          uVar3 = uVar3 + uVar3;
          uVar2 = uVar2 + uVar2 + uVar17 + (uint)CARRY4(uVar3,uVar3);
          uVar2 = (uVar2 << 0x10 | uVar3 >> 0x10) ^ uVar2;
          uVar3 = (uVar3 << 0x10 | uVar2 >> 0x10) ^ uVar3;
          uVar3 = uVar3 ^ (uVar3 << 0x11 | uVar2 >> 0xf);
          uVar2 = uVar2 + uVar17 ^ (uVar2 << 0x11 | uVar3 >> 0xf);
          uVar3 = uVar3 + uVar2 + (uint)CARRY4(uVar2,uVar3);
          uVar3 = uVar3 + uVar3;
          uVar2 = uVar2 + uVar2 + uVar3 + (uint)CARRY4(uVar3,uVar3);
          uVar3 = (uVar3 << 0x15 | uVar2 >> 0xb) ^ uVar3;
          uVar2 = (uVar2 << 0x15 | uVar3 >> 0xb) ^ uVar2;
          uVar3 = (uVar3 << 0xd | uVar2 >> 0x13) ^ uVar3;
          uVar2 = (uVar2 << 0xd | uVar3 >> 0x13) ^ uVar2 + uVar3;
          uVar3 = uVar3 + uVar2 + (uint)CARRY4(uVar2,uVar3);
          uVar3 = uVar3 + uVar3;
          uVar3 = (uVar3 << 0x11 | uVar2 >> 0xf) ^ uVar3;
          uVar2 = (uVar2 << 0x11 | uVar3 >> 0xf) ^ uVar2 + uVar3;
          uVar2 = uVar2 + uVar2 + uVar3 + (uint)CARRY4(uVar3,uVar3);
          uVar2 = (uVar3 << 0xd | uVar2 >> 0x13) ^ uVar3 + uVar2 + (uint)CARRY4(uVar2,uVar3);
          uVar2 = (uVar2 << 0xd | uVar3 >> 0x13) ^ uVar2 + uVar3;
          uVar4 = ((uVar2 >> 0x10 ^ uVar3) << 0x15 |
                  ((uVar2 << 0x10 | uVar3 >> 0x10) ^ uVar2) >> 0xb) ^ (uVar2 << 0x11 | uVar2 >> 0xf)
                  ^ uVar2 + uVar2 + (uint)CARRY4(uVar2,uVar3) ^ uVar2 + uVar3;
          uVar3 = local_30 & uVar4;
          uVar2 = *(uint *)((int)local_34 + uVar3) & 0x80808080;
          if (uVar2 == 0) {
            iVar11 = 4;
            do {
              uVar3 = uVar3 + iVar11;
              iVar11 = iVar11 + 4;
              uVar3 = uVar3 & local_30;
              uVar2 = *(uint *)((int)local_34 + uVar3) & 0x80808080;
            } while (uVar2 == 0);
          }
          uVar2 = uVar3 + ((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                         (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) &
                  local_30;
          if (-1 < *(char *)((int)local_34 + uVar2)) {
            uVar2 = *local_34 & 0x80808080;
            uVar2 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                  (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3;
          }
          uVar10 = uVar10 - 1 & uVar10;
          bVar1 = (byte)(uVar4 >> 0x19);
          *(byte *)((int)local_34 + uVar2) = bVar1;
          iVar16 = iVar16 + -1;
          *(byte *)((int)local_34 + (uVar2 - 4 & local_30) + 4) = bVar1;
          puVar6 = (uint *)(*param_1 + ~uVar7 * 8);
          uVar7 = puVar6[1];
          local_34[~uVar2 * 2] = *puVar6;
          (local_34 + ~uVar2 * 2)[1] = uVar7;
        } while (iVar16 != 0);
        iVar16 = param_1[3];
      }
      iVar13 = *param_1;
      iVar11 = param_1[1];
      *param_1 = (int)local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c - iVar16;
      param_1[3] = iVar16;
      local_40 = 0x80000001;
      if ((iVar11 != 0) && (iVar16 = iVar11 * 8 + 8, iVar11 + iVar16 != -5)) {
        thunk_FUN_016d3fb4(iVar13 - iVar16);
        return 0x80000001;
      }
    }
  }
  else {
    FUN_01624918(param_1,&local_38,FUN_01624680,8,0);
    local_40 = 0x80000001;
  }
  return local_40;
}

