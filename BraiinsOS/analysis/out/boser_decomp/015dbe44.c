// FUN_015dbe44 @ 015dbe44 size=472 calls_out=4 calls_in=3
// strings: 

void FUN_015dbe44(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_38;
  int local_34;
  
  uVar3 = FUN_015f6e80(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  if (param_1[2] == 0) {
    FUN_015d7498(param_1,param_1 + 4);
  }
  puVar6 = (uint *)*param_1;
  uVar9 = param_1[1];
  bVar2 = false;
  local_34 = 0;
  uVar7 = uVar3;
  do {
    uVar7 = uVar9 & uVar7;
    uVar8 = *(uint *)((int)puVar6 + uVar7);
    uVar4 = uVar8 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      iVar5 = FUN_015df498(param_2,puVar6 + (uVar7 + ((uint)LZCOUNT(uVar4 << 0x18 |
                                                                    (uVar4 >> 8 & 0xff) << 0x10 |
                                                                    (uVar4 >> 0x10 & 0xff) << 8 |
                                                                    uVar4 >> 0x18) >> 3) & uVar9) *
                                            -8 + -8);
      uVar4 = uVar4 - 1 & uVar4;
      if (iVar5 != 0) {
        FUN_015d16d4(param_2);
        return;
      }
    }
    uVar4 = uVar8 & 0x80808080;
    if (bVar2) {
LAB_015dbf3c:
      if ((uVar4 & uVar8 << 1) != 0) {
        uVar7 = (uint)*(char *)((int)puVar6 + local_38);
        if (-1 < (int)uVar7) {
          uVar7 = *puVar6 & 0x80808080;
          uVar4 = LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                          (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
          uVar7 = (uint)*(byte *)((int)puVar6 + (uVar4 >> 3));
          local_38 = uVar4 >> 3;
        }
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar6 + local_38) = bVar1;
        param_1[2] = param_1[2] - (uVar7 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar6 + (uVar9 & local_38 - 4) + 4) = bVar1;
        uVar3 = param_2[1];
        uVar7 = param_2[2];
        uVar9 = param_2[3];
        puVar6[local_38 * -8 + -8] = *param_2;
        puVar6[local_38 * -8 + -7] = uVar3;
        puVar6[local_38 * -8 + -6] = uVar7;
        puVar6[local_38 * -8 + -5] = uVar9;
        uVar3 = param_2[5];
        uVar7 = param_2[6];
        uVar9 = param_2[7];
        puVar6[local_38 * -8 + -4] = param_2[4];
        puVar6[local_38 * -8 + -3] = uVar3;
        puVar6[local_38 * -8 + -2] = uVar7;
        puVar6[local_38 * -8 + -1] = uVar9;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_38 = uVar7 + ((uint)LZCOUNT((uVar8 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar9
        ;
        goto LAB_015dbf3c;
      }
      bVar2 = false;
    }
    local_34 = local_34 + 4;
    uVar7 = local_34 + uVar7;
  } while( true );
}

