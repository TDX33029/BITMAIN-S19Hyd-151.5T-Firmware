// FUN_0166ec94 @ 0166ec94 size=556 calls_out=4 calls_in=1
// strings: 

uint FUN_0166ec94(undefined4 *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint local_40;
  int local_38;
  
  uVar3 = FUN_01676068(param_1 + 4,param_2[3],param_2[4]);
  if (param_1[2] == 0) {
    FUN_01666104(param_1,param_1 + 4);
  }
  puVar8 = (uint *)*param_1;
  uVar6 = param_1[1];
  bVar2 = false;
  local_38 = 0;
  uVar10 = uVar3;
  do {
    uVar10 = uVar6 & uVar10;
    uVar9 = *(uint *)((int)puVar8 + uVar10);
    uVar4 = uVar9 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      uVar7 = uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar6;
      iVar5 = FUN_01670d54(param_2,puVar8[uVar7 * -2 + -2]);
      uVar4 = uVar4 - 1 & uVar4;
      if (iVar5 != 0) {
        uVar3 = puVar8[uVar7 * -2 + -1];
        puVar8[uVar7 * -2 + -1] = param_3;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *param_2;
          bVar2 = (bool)hasExclusiveAccess(param_2);
        } while (!bVar2);
        *param_2 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01670d04(param_2);
          return uVar3;
        }
        return uVar3;
      }
    }
    uVar4 = uVar9 & 0x80808080;
    if (bVar2) {
LAB_0166eda0:
      if ((uVar4 & uVar9 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar8 + local_40);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar8 & 0x80808080;
          uVar4 = LZCOUNT((*puVar8 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar8 + (uVar4 >> 3));
          local_40 = uVar4 >> 3;
        }
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar8 + local_40) = bVar1;
        param_1[2] = param_1[2] - (uVar10 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar8 + (uVar6 & local_40 - 4) + 4) = bVar1;
        puVar8[local_40 * -2 + -2] = (uint)param_2;
        puVar8[local_40 * -2 + -1] = param_3;
        return 0;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_40 = uVar10 + ((uint)LZCOUNT((uVar9 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar6;
        goto LAB_0166eda0;
      }
      bVar2 = false;
    }
    local_38 = local_38 + 4;
    uVar10 = local_38 + uVar10;
  } while( true );
}

