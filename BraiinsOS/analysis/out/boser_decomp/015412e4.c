// FUN_015412e4 @ 015412e4 size=520 calls_out=4 calls_in=1
// strings: 

void FUN_015412e4(undefined4 *param_1,uint param_2,uint param_3)

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
  uint uVar10;
  uint local_44;
  int local_30;
  
  uVar3 = FUN_01676068(param_1 + 4);
  if (param_1[2] == 0) {
    FUN_01530074(param_1,1,param_1 + 4);
  }
  puVar7 = (uint *)*param_1;
  uVar8 = param_1[1];
  bVar2 = false;
  local_30 = 0;
  uVar10 = uVar3;
  do {
    uVar10 = uVar8 & uVar10;
    uVar9 = *(uint *)((int)puVar7 + uVar10);
    uVar4 = uVar9 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar8;
      if ((param_3 == puVar7[uVar5 * -2 + -1]) &&
         (iVar6 = thunk_FUN_01bed842(param_2,puVar7[uVar5 * -2 + -2],param_3), iVar6 == 0)) {
        if (param_3 == 0) {
          return;
        }
        thunk_FUN_01be4678(param_2);
        return;
      }
    }
    uVar4 = uVar9 & 0x80808080;
    if (bVar2) {
LAB_01541404:
      if ((uVar4 & uVar9 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar7 + local_44);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar7 & 0x80808080;
          uVar4 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar7 + (uVar4 >> 3));
          local_44 = uVar4 >> 3;
        }
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar7 + local_44) = bVar1;
        param_1[2] = param_1[2] - (uVar10 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar7 + (uVar8 & local_44 - 4) + 4) = bVar1;
        puVar7[local_44 * -2 + -2] = param_2;
        puVar7[local_44 * -2 + -1] = param_3;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_44 = uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar8;
        goto LAB_01541404;
      }
      bVar2 = false;
    }
    local_30 = local_30 + 4;
    uVar10 = local_30 + uVar10;
  } while( true );
}

