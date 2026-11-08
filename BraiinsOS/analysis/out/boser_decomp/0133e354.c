// FUN_0133e354 @ 0133e354 size=580 calls_out=4 calls_in=1
// strings: 

void FUN_0133e354(undefined4 *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_50;
  int local_38;
  
  uVar11 = param_2[1];
  uVar13 = param_2[2];
  uVar3 = FUN_0133db9c(param_1[4],param_1[5],param_1[6],param_1[7],uVar11,uVar13);
  if (param_1[2] == 0) {
    FUN_0133b5a4(param_1,param_1 + 4);
  }
  uVar8 = param_1[1];
  puVar9 = (uint *)*param_1;
  bVar2 = false;
  local_38 = 0;
  uVar12 = uVar3;
  do {
    uVar12 = uVar8 & uVar12;
    uVar4 = *(uint *)((int)puVar9 + uVar12);
    uVar5 = uVar4 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = uVar12 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar8;
      if ((uVar13 == puVar9[uVar6 * -4 + -2]) &&
         (iVar7 = thunk_FUN_01bed842(uVar11,puVar9[uVar6 * -4 + -3],uVar13), iVar7 == 0)) {
        puVar9[uVar6 * -4 + -1] = param_3;
        FUN_0134bd64(*param_2,uVar11);
        return;
      }
    }
    uVar5 = uVar4 & 0x80808080;
    if (bVar2) {
LAB_0133e4a4:
      if ((uVar5 & uVar4 << 1) != 0) {
        uVar11 = (uint)*(char *)((int)puVar9 + local_50);
        if (-1 < (int)uVar11) {
          uVar11 = *puVar9 & 0x80808080;
          uVar13 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                           (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
          uVar11 = (uint)*(byte *)((int)puVar9 + (uVar13 >> 3));
          local_50 = uVar13 >> 3;
        }
        iVar7 = param_1[3];
        iVar10 = param_1[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar9 + local_50) = bVar1;
        param_1[2] = iVar10 - (uVar11 & 1);
        param_1[3] = iVar7 + 1;
        *(byte *)((int)puVar9 + (uVar8 & local_50 - 4) + 4) = bVar1;
        uVar3 = param_2[1];
        uVar11 = param_2[2];
        puVar9[local_50 * -4 + -4] = *param_2;
        puVar9[local_50 * -4 + -3] = uVar3;
        puVar9[local_50 * -4 + -2] = uVar11;
        puVar9[local_50 * -4 + -1] = param_3;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar5 != 0) {
        local_50 = uVar12 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar8;
        goto LAB_0133e4a4;
      }
      bVar2 = false;
    }
    local_38 = local_38 + 4;
    uVar12 = local_38 + uVar12;
  } while( true );
}

