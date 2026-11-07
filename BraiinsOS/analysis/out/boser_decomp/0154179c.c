// FUN_0154179c @ 0154179c size=608 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_0154179c(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_4c;
  int local_3c;
  
  uVar14 = param_2[2];
  uVar7 = param_2[1];
  uVar3 = FUN_01676700(param_1 + 4,uVar7,uVar14);
  if (param_1[2] == 0) {
    FUN_0152f610(param_1,param_1 + 4);
  }
  uVar9 = param_1[1];
  puVar10 = (uint *)*param_1;
  bVar2 = false;
  local_3c = 0;
  uVar12 = uVar3;
  do {
    uVar12 = uVar9 & uVar12;
    uVar13 = *(uint *)((int)puVar10 + uVar12);
    uVar4 = uVar13 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar12 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar9;
      if ((uVar14 == puVar10[uVar5 * -5 + -3]) &&
         (iVar6 = thunk_FUN_01bed842(uVar7,puVar10[uVar5 * -5 + -4],uVar14), iVar6 == 0)) {
        uVar3 = *param_2;
        uVar14 = puVar10[uVar5 * -5 + -2];
        puVar11 = (uint *)puVar10[uVar5 * -5 + -1];
        puVar10[uVar5 * -5 + -2] = param_3;
        puVar10[uVar5 * -5 + -1] = param_4;
        FUN_019bb7e0(uVar3,uVar7);
        puVar10 = puVar11;
        goto LAB_01541950;
      }
    }
    uVar4 = uVar13 & 0x80808080;
    if (bVar2) goto LAB_015418e0;
    if (uVar4 == 0) {
      bVar2 = false;
    }
    else {
      local_4c = uVar12 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                         (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar9;
LAB_015418e0:
      if ((uVar4 & uVar13 << 1) != 0) {
        uVar7 = (uint)*(char *)((int)puVar10 + local_4c);
        if (-1 < (int)uVar7) {
          uVar7 = *puVar10 & 0x80808080;
          uVar14 = LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                           | uVar7 >> 0x18);
          uVar7 = (uint)*(byte *)((int)puVar10 + (uVar14 >> 3));
          local_4c = uVar14 >> 3;
        }
        iVar6 = param_1[3];
        iVar8 = param_1[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar10 + local_4c) = bVar1;
        param_1[2] = iVar8 - (uVar7 & 1);
        param_1[3] = iVar6 + 1;
        uVar14 = 0;
        *(byte *)((int)puVar10 + (uVar9 & local_4c - 4) + 4) = bVar1;
        uVar3 = param_2[1];
        uVar7 = param_2[2];
        puVar10[local_4c * -5 + -5] = *param_2;
        puVar10[local_4c * -5 + -4] = uVar3;
        puVar10[local_4c * -5 + -3] = uVar7;
        puVar10[local_4c * -5 + -2] = param_3;
        puVar10[local_4c * -5 + -1] = param_4;
LAB_01541950:
        return CONCAT44(puVar10,uVar14);
      }
      bVar2 = true;
    }
    local_3c = local_3c + 4;
    uVar12 = local_3c + uVar12;
  } while( true );
}

