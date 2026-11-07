// FUN_007641f0 @ 007641f0 size=480 calls_out=2 calls_in=1
// strings: 

uint FUN_007641f0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_38;
  int local_34;
  
  uVar6 = FUN_018bf2d8(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  if (param_1[2] == 0) {
    FUN_007643e8(param_1,param_1 + 4);
  }
  puVar7 = (uint *)*param_1;
  uVar9 = param_1[1];
  bVar5 = false;
  local_34 = 0;
  uVar10 = uVar6;
  do {
    uVar10 = uVar9 & uVar10;
    uVar12 = *(uint *)((int)puVar7 + uVar10);
    uVar8 = uVar12 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      uVar11 = uVar8 >> 8;
      uVar1 = uVar8 >> 0x10;
      uVar2 = uVar8 >> 0x18;
      uVar3 = uVar8 << 0x18;
      uVar8 = uVar8 - 1 & uVar8;
      uVar11 = uVar10 + ((uint)LZCOUNT(uVar3 | (uVar11 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2
                                      ) >> 3) & uVar9;
      if ((param_2 & 0xffff) == (uint)(ushort)puVar7[uVar11 * -2 + -2]) {
        uVar6 = puVar7[uVar11 * -2 + -1];
        puVar7[uVar11 * -2 + -1] = param_3;
        return uVar6;
      }
    }
    uVar8 = uVar12 & 0x80808080;
    if (bVar5) {
LAB_007642ec:
      if ((uVar8 & uVar12 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar7 + local_38);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar7 & 0x80808080;
          uVar8 = LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar7 + (uVar8 >> 3));
          local_38 = uVar8 >> 3;
        }
        param_1[2] = param_1[2] - (uVar10 & 1);
        param_1[3] = param_1[3] + 1;
        bVar4 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar7 + local_38) = bVar4;
        *(byte *)((int)puVar7 + (uVar9 & local_38 - 4) + 4) = bVar4;
        *(short *)(puVar7 + local_38 * -2 + -2) = (short)param_2;
        puVar7[local_38 * -2 + -1] = param_3;
        return 0;
      }
      bVar5 = true;
    }
    else {
      if (uVar8 != 0) {
        local_38 = uVar10 + ((uint)LZCOUNT((uVar12 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                           (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                   uVar9;
        goto LAB_007642ec;
      }
      bVar5 = false;
    }
    local_34 = local_34 + 4;
    uVar10 = local_34 + uVar10;
  } while( true );
}

