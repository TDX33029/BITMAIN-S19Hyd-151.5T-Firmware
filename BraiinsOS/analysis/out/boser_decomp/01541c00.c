// FUN_01541c00 @ 01541c00 size=516 calls_out=3 calls_in=1
// strings: 

void FUN_01541c00(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint local_48;
  int local_40;
  
  uVar3 = FUN_01676068(param_1 + 4);
  if (param_1[2] == 0) {
    FUN_0152ebbc(param_1,param_1 + 4);
  }
  puVar8 = (uint *)*param_1;
  uVar9 = param_1[1];
  bVar2 = false;
  local_40 = 0;
  uVar10 = uVar3;
  do {
    uVar10 = uVar9 & uVar10;
    uVar4 = *(uint *)((int)puVar8 + uVar10);
    uVar5 = uVar4 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
    while (uVar5 != 0) {
      uVar6 = uVar10 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
      uVar5 = uVar5 - 1 & uVar5;
      if ((param_3 == puVar8[uVar6 * -4 + -3]) &&
         (iVar7 = thunk_FUN_01bed842(param_2,puVar8[uVar6 * -4 + -4],param_3), iVar7 == 0)) {
        puVar8[uVar6 * -4 + -2] = param_4;
        puVar8[uVar6 * -4 + -1] = param_5;
        return;
      }
    }
    uVar5 = uVar4 & 0x80808080;
    if (bVar2) {
LAB_01541d18:
      if ((uVar5 & uVar4 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar8 + local_48);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar8 & 0x80808080;
          uVar4 = LZCOUNT((*puVar8 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar8 + (uVar4 >> 3));
          local_48 = uVar4 >> 3;
        }
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar8 + local_48) = bVar1;
        param_1[2] = param_1[2] - (uVar10 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar8 + (uVar9 & local_48 - 4) + 4) = bVar1;
        puVar8[local_48 * -4 + -4] = param_2;
        puVar8[local_48 * -4 + -3] = param_3;
        puVar8[local_48 * -4 + -1] = param_5;
        puVar8[local_48 * -4 + -2] = param_4;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar5 != 0) {
        local_48 = uVar10 + ((uint)LZCOUNT((uVar4 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar9;
        goto LAB_01541d18;
      }
      bVar2 = false;
    }
    local_40 = local_40 + 4;
    uVar10 = local_40 + uVar10;
  } while( true );
}

