// FUN_012c1f7c @ 012c1f7c size=476 calls_out=2 calls_in=1
// strings: 

bool FUN_012c1f7c(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_30;
  
  uVar3 = FUN_00c5abb0(param_1[4],param_1[5],param_1[6],param_1[7],param_3,param_4);
  if (param_1[2] == 0) {
    FUN_012b5ff4(param_1,1,param_1 + 4);
  }
  puVar7 = (uint *)*param_1;
  uVar8 = param_1[1];
  iVar6 = 0;
  bVar2 = false;
  uVar9 = uVar3;
  do {
    uVar9 = uVar8 & uVar9;
    uVar11 = *(uint *)((int)puVar7 + uVar9);
    uVar4 = uVar11 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar5 = uVar4, uVar5 != 0) {
      uVar4 = uVar5 - 1 & uVar5;
      if (param_3 ==
          puVar7[(uVar9 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar8)
                 * -2 + -2] &&
          param_4 ==
          (puVar7 + (uVar9 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                    uVar8) * -2 + -2)[1]) goto LAB_012c2104;
    }
    uVar4 = uVar11 & 0x80808080;
    if (bVar2) goto LAB_012c207c;
    if (uVar4 == 0) {
      bVar2 = false;
    }
    else {
      local_30 = uVar9 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                        (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar8;
LAB_012c207c:
      if ((uVar4 & uVar11 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar7 + local_30);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar7 & 0x80808080;
          uVar4 = LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar7 + (uVar4 >> 3));
          local_30 = uVar4 >> 3;
        }
        iVar6 = param_1[2];
        iVar10 = param_1[3];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar7 + local_30) = bVar1;
        param_1[2] = iVar6 - (uVar9 & 1);
        param_1[3] = iVar10 + 1;
        *(byte *)((int)puVar7 + (uVar8 & local_30 - 4) + 4) = bVar1;
        puVar7[local_30 * -2 + -2] = param_3;
        puVar7[local_30 * -2 + -1] = param_4;
LAB_012c2104:
        return uVar5 != 0;
      }
      bVar2 = true;
    }
    iVar6 = iVar6 + 4;
    uVar9 = iVar6 + uVar9;
  } while( true );
}

