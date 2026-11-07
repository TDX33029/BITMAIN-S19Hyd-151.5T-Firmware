// FUN_019c923c @ 019c923c size=412 calls_out=2 calls_in=1
// strings: 

void FUN_019c923c(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_2c;
  int local_28;
  
  uVar7 = FUN_019c88bc(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  if (param_1[2] == 0) {
    FUN_019c5e68(param_1,param_1 + 4);
  }
  puVar8 = (uint *)*param_1;
  uVar10 = param_1[1];
  bVar6 = false;
  local_28 = 0;
  uVar12 = uVar7;
  do {
    uVar12 = uVar10 & uVar12;
    uVar9 = *(uint *)((int)puVar8 + uVar12);
    uVar11 = uVar9 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
    while (uVar11 != 0) {
      uVar1 = uVar11 >> 8;
      uVar2 = uVar11 >> 0x10;
      uVar3 = uVar11 >> 0x18;
      uVar4 = uVar11 << 0x18;
      uVar11 = uVar11 - 1 & uVar11;
      if (param_2 ==
          puVar8[-1 - (uVar12 + ((uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8
                                               | uVar3) >> 3) & uVar10)]) {
        return;
      }
    }
    uVar11 = uVar9 & 0x80808080;
    if (bVar6) {
LAB_019c931c:
      if ((uVar11 & uVar9 << 1) != 0) {
        uVar12 = (uint)*(char *)((int)puVar8 + local_2c);
        if (-1 < (int)uVar12) {
          uVar12 = *puVar8 & 0x80808080;
          uVar9 = LZCOUNT((*puVar8 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                          (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18);
          uVar12 = (uint)*(byte *)((int)puVar8 + (uVar9 >> 3));
          local_2c = uVar9 >> 3;
        }
        param_1[2] = param_1[2] - (uVar12 & 1);
        param_1[3] = param_1[3] + 1;
        bVar5 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar8 + local_2c) = bVar5;
        *(byte *)((int)puVar8 + (uVar10 & local_2c - 4) + 4) = bVar5;
        puVar8[-1 - local_2c] = param_2;
        return;
      }
      bVar6 = true;
    }
    else {
      if (uVar11 != 0) {
        local_2c = uVar12 + ((uint)LZCOUNT((uVar9 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                   uVar10;
        goto LAB_019c931c;
      }
      bVar6 = false;
    }
    local_28 = local_28 + 4;
    uVar12 = local_28 + uVar12;
  } while( true );
}

