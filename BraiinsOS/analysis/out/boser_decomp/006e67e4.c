// FUN_006e67e4 @ 006e67e4 size=540 calls_out=3 calls_in=1
// strings: 

void FUN_006e67e4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint local_48;
  int local_40;
  
  uVar3 = FUN_006c5944(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  if (param_1[2] == 0) {
    FUN_006b98d8(param_1,param_1 + 4);
  }
  uVar9 = param_1[1];
  puVar12 = (uint *)*param_1;
  uVar13 = *param_2;
  bVar2 = false;
  uVar8 = param_2[1];
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  local_40 = 0;
  uVar14 = uVar3;
  do {
    uVar14 = uVar9 & uVar14;
    uVar4 = *(uint *)((int)puVar12 + uVar14);
    uVar5 = uVar4 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
    while (uVar5 != 0) {
      uVar6 = uVar14 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
      uVar5 = uVar5 - 1 & uVar5;
      if (uVar8 == puVar12[uVar6 * -4 + -3]) {
        uVar7 = thunk_FUN_01bed842(uVar13,puVar12[uVar6 * -4 + -4],uVar8);
        bVar15 = uVar7 == 0;
        if (bVar15) {
          uVar7 = puVar12[uVar6 * -4 + -2];
        }
        if ((bVar15 && uVar10 == uVar7) && (uVar11 == puVar12[uVar6 * -4 + -1])) {
          return;
        }
      }
    }
    uVar5 = uVar4 & 0x80808080;
    if (bVar2) {
LAB_006e6938:
      if ((uVar5 & uVar4 << 1) != 0) {
        uVar14 = (uint)*(char *)((int)puVar12 + local_48);
        if (-1 < (int)uVar14) {
          uVar14 = *puVar12 & 0x80808080;
          uVar8 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                          (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18);
          uVar14 = (uint)*(byte *)((int)puVar12 + (uVar8 >> 3));
          local_48 = uVar8 >> 3;
        }
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar12 + local_48) = bVar1;
        param_1[2] = param_1[2] - (uVar14 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar12 + (uVar9 & local_48 - 4) + 4) = bVar1;
        uVar3 = param_2[1];
        uVar14 = param_2[2];
        uVar8 = param_2[3];
        puVar12[local_48 * -4 + -4] = *param_2;
        puVar12[local_48 * -4 + -3] = uVar3;
        puVar12[local_48 * -4 + -2] = uVar14;
        puVar12[local_48 * -4 + -1] = uVar8;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar5 != 0) {
        local_48 = uVar14 + ((uint)LZCOUNT((uVar4 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar9;
        goto LAB_006e6938;
      }
      bVar2 = false;
    }
    local_40 = local_40 + 4;
    uVar14 = local_40 + uVar14;
  } while( true );
}

