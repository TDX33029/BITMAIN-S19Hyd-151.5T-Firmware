// FUN_015dc9e4 @ 015dc9e4 size=660 calls_out=4 calls_in=1
// strings: 

void FUN_015dc9e4(undefined4 *param_1,undefined4 *param_2,uint *param_3,undefined4 param_4,
                 uint param_5,uint param_6)

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
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_54;
  
  uVar10 = param_3[1];
  uVar11 = param_3[2];
  uVar3 = FUN_01adafd4(param_2[4],param_2[5],param_2[6],param_2[7],uVar10,uVar11);
  if (param_2[2] == 0) {
    FUN_015d5e24(param_2,param_2 + 4);
  }
  puVar8 = (uint *)*param_2;
  uVar9 = param_2[1];
  iVar13 = 0;
  bVar2 = false;
  uVar12 = uVar3;
  do {
    uVar12 = uVar9 & uVar12;
    uVar4 = *(uint *)((int)puVar8 + uVar12);
    uVar5 = uVar4 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = uVar12 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
      if ((uVar11 == puVar8[uVar6 * -6 + -4]) &&
         (iVar7 = thunk_FUN_01bed842(uVar10,puVar8[uVar6 * -6 + -5],uVar11), iVar7 == 0)) {
        uVar3 = puVar8[uVar6 * -6 + -2];
        uVar11 = puVar8[uVar6 * -6 + -1];
        param_1[1] = 0;
        param_1[2] = uVar3;
        param_1[3] = uVar11;
        uVar3 = *param_3;
        puVar8[uVar6 * -6 + -2] = param_5;
        puVar8[uVar6 * -6 + -1] = param_6;
        *param_1 = 1;
        FUN_0134bd64(uVar3,uVar10);
        return;
      }
    }
    uVar5 = uVar4 & 0x80808080;
    if (bVar2) {
LAB_015dcb50:
      if ((uVar5 & uVar4 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar8 + local_54);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar8 & 0x80808080;
          uVar11 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar8 + (uVar11 >> 3));
          local_54 = uVar11 >> 3;
        }
        iVar13 = param_2[3];
        iVar7 = param_2[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar8 + local_54) = bVar1;
        param_2[2] = iVar7 - (uVar10 & 1);
        param_2[3] = iVar13 + 1;
        *(byte *)((int)puVar8 + (uVar9 & local_54 - 4) + 4) = bVar1;
        uVar3 = param_3[1];
        uVar10 = param_3[2];
        puVar8[local_54 * -6 + -6] = *param_3;
        puVar8[local_54 * -6 + -5] = uVar3;
        puVar8[local_54 * -6 + -4] = uVar10;
        puVar8[local_54 * -6 + -2] = param_5;
        *param_1 = 0;
        param_1[1] = 0;
        puVar8[local_54 * -6 + -1] = param_6;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar5 != 0) {
        local_54 = uVar12 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar9;
        goto LAB_015dcb50;
      }
      bVar2 = false;
    }
    iVar13 = iVar13 + 4;
    uVar12 = iVar13 + uVar12;
  } while( true );
}

