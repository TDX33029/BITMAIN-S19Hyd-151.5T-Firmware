// FUN_00ff7c3c @ 00ff7c3c size=544 calls_out=3 calls_in=15
// strings: 

void FUN_00ff7c3c(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4)

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
  
  uVar6 = FUN_01656218(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  if (param_2[2] == 0) {
    FUN_01191b84(param_2,param_2 + 4);
  }
  puVar7 = (uint *)*param_2;
  uVar10 = param_2[1];
  bVar5 = false;
  local_34 = 0;
  uVar11 = uVar6;
  do {
    uVar11 = uVar10 & uVar11;
    uVar12 = *(uint *)((int)puVar7 + uVar11);
    uVar8 = uVar12 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      uVar9 = uVar8 >> 8;
      uVar1 = uVar8 >> 0x10;
      uVar2 = uVar8 >> 0x18;
      uVar3 = uVar8 << 0x18;
      uVar8 = uVar8 - 1 & uVar8;
      uVar9 = uVar11 + ((uint)LZCOUNT(uVar3 | (uVar9 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & uVar10;
      if (param_3 == puVar7[uVar9 * -0x24 + -0x24]) {
        FUN_01bed4e2(param_1,puVar7 + uVar9 * -0x24 + -0x23,0x8c);
        FUN_01bed4e2(puVar7 + uVar9 * -0x24 + -0x23,param_4,0x8c);
        return;
      }
    }
    uVar8 = uVar12 & 0x80808080;
    if (bVar5) {
LAB_00ff7d40:
      if ((uVar8 & uVar12 << 1) != 0) {
        uVar11 = (uint)*(char *)((int)puVar7 + local_38);
        if (-1 < (int)uVar11) {
          uVar11 = *puVar7 & 0x80808080;
          uVar8 = LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                          (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
          uVar11 = (uint)*(byte *)((int)puVar7 + (uVar8 >> 3));
          local_38 = uVar8 >> 3;
        }
        param_2[2] = param_2[2] - (uVar11 & 1);
        param_2[3] = param_2[3] + 1;
        bVar4 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar7 + local_38) = bVar4;
        *(byte *)((int)puVar7 + (uVar10 & local_38 - 4) + 4) = bVar4;
        puVar7[local_38 * -0x24 + -0x24] = param_3;
        FUN_01bed4e2(puVar7 + local_38 * -0x24 + -0x23,param_4,0x8c);
        *param_1 = 4;
        return;
      }
      bVar5 = true;
    }
    else {
      if (uVar8 != 0) {
        local_38 = uVar11 + ((uint)LZCOUNT((uVar12 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                           (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                   uVar10;
        goto LAB_00ff7d40;
      }
      bVar5 = false;
    }
    local_34 = local_34 + 4;
    uVar11 = local_34 + uVar11;
  } while( true );
}

