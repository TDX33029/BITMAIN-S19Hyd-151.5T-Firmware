// FUN_015dc3f4 @ 015dc3f4 size=572 calls_out=4 calls_in=0
// strings: 

uint FUN_015dc3f4(undefined4 *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint local_4c;
  int local_38;
  
  uVar10 = param_2[1];
  uVar13 = param_2[2];
  uVar3 = FUN_01adafd4(param_1[4],param_1[5],param_1[6],param_1[7],uVar10,uVar13);
  if (param_1[2] == 0) {
    FUN_015d31e4(param_1,param_1 + 4);
  }
  uVar7 = param_1[1];
  puVar8 = (uint *)*param_1;
  bVar2 = false;
  local_38 = 0;
  uVar9 = uVar3;
  do {
    uVar9 = uVar7 & uVar9;
    uVar12 = *(uint *)((int)puVar8 + uVar9);
    uVar4 = uVar12 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar9 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar7;
      if ((uVar13 == puVar8[uVar5 * -4 + -2]) &&
         (iVar6 = thunk_FUN_01bed842(uVar10,puVar8[uVar5 * -4 + -3],uVar13), iVar6 == 0)) {
        uVar3 = *param_2;
        uVar13 = puVar8[uVar5 * -4 + -1];
        puVar8[uVar5 * -4 + -1] = param_3;
        FUN_0134bd64(uVar3,uVar10);
        return uVar13;
      }
    }
    uVar4 = uVar12 & 0x80808080;
    if (bVar2) {
LAB_015dc538:
      if ((uVar4 & uVar12 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar8 + local_4c);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar8 & 0x80808080;
          uVar13 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar8 + (uVar13 >> 3));
          local_4c = uVar13 >> 3;
        }
        iVar6 = param_1[3];
        iVar11 = param_1[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar8 + local_4c) = bVar1;
        param_1[2] = iVar11 - (uVar10 & 1);
        param_1[3] = iVar6 + 1;
        *(byte *)((int)puVar8 + (uVar7 & local_4c - 4) + 4) = bVar1;
        uVar3 = param_2[1];
        uVar10 = param_2[2];
        puVar8[local_4c * -4 + -4] = *param_2;
        puVar8[local_4c * -4 + -3] = uVar3;
        puVar8[local_4c * -4 + -2] = uVar10;
        puVar8[local_4c * -4 + -1] = param_3;
        return 0;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_4c = uVar9 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar7
        ;
        goto LAB_015dc538;
      }
      bVar2 = false;
    }
    local_38 = local_38 + 4;
    uVar9 = local_38 + uVar9;
  } while( true );
}

