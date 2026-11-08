// FUN_00f53608 @ 00f53608 size=520 calls_out=3 calls_in=2
// strings: 

void FUN_00f53608(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_40;
  
  uVar3 = FUN_00f5b6c8(param_1[4],param_1[5],param_1[6],param_1[7],*param_2,param_2[1],param_2[2],
                       param_2[3]);
  if (param_1[2] == 0) {
    FUN_00f52734(param_1,param_1 + 4);
  }
  puVar8 = (uint *)*param_1;
  uVar10 = param_1[1];
  bVar2 = false;
  iVar4 = 0;
  uVar11 = uVar3;
  do {
    uVar11 = uVar10 & uVar11;
    uVar5 = *(uint *)((int)puVar8 + uVar11);
    uVar6 = uVar5 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
    while (uVar6 != 0) {
      iVar7 = thunk_FUN_016dd50a(param_2,puVar8 + (uVar11 + ((uint)LZCOUNT(uVar6 << 0x18 |
                                                                           (uVar6 >> 8 & 0xff) <<
                                                                           0x10 | (uVar6 >> 0x10 &
                                                                                  0xff) << 8 |
                                                                           uVar6 >> 0x18) >> 3) &
                                                  uVar10) * -4 + -4,0x10);
      uVar6 = uVar6 - 1 & uVar6;
      if (iVar7 == 0) {
        return;
      }
    }
    uVar6 = uVar5 & 0x80808080;
    if (bVar2) {
LAB_00f53728:
      if ((uVar6 & uVar5 << 1) != 0) {
        uVar11 = (uint)*(char *)((int)puVar8 + local_40);
        if (-1 < (int)uVar11) {
          uVar11 = *puVar8 & 0x80808080;
          uVar6 = LZCOUNT((*puVar8 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                          (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
          uVar11 = (uint)*(byte *)((int)puVar8 + (uVar6 >> 3));
          local_40 = uVar6 >> 3;
        }
        uVar12 = *param_2;
        uVar6 = param_2[1];
        uVar5 = param_2[2];
        uVar9 = param_2[3];
        param_1[2] = param_1[2] - (uVar11 & 1);
        param_1[3] = param_1[3] + 1;
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar8 + local_40) = bVar1;
        *(byte *)((int)puVar8 + (uVar10 & local_40 - 4) + 4) = bVar1;
        puVar8[local_40 * -4 + -4] = uVar12;
        puVar8[local_40 * -4 + -3] = uVar6;
        puVar8[local_40 * -4 + -2] = uVar5;
        puVar8[local_40 * -4 + -1] = uVar9;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar6 != 0) {
        local_40 = uVar11 + ((uint)LZCOUNT((uVar5 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                           (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                   uVar10;
        goto LAB_00f53728;
      }
      bVar2 = false;
    }
    iVar4 = iVar4 + 4;
    uVar11 = iVar4 + uVar11;
  } while( true );
}

