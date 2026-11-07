// FUN_0133740c @ 0133740c size=596 calls_out=4 calls_in=9
// strings: 

undefined4 FUN_0133740c(undefined4 *param_1,uint *param_2,uint param_3)

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
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint local_48;
  
  uVar9 = param_2[1];
  uVar13 = param_2[2];
  uVar3 = FUN_006a526c(param_1[4],param_1[5],param_1[6],param_1[7],uVar9,uVar13);
  if (param_1[2] == 0) {
    FUN_01337680(param_1,param_1 + 4);
  }
  puVar7 = (uint *)*param_1;
  uVar8 = param_1[1];
  iVar11 = 0;
  bVar2 = false;
  uVar10 = uVar3;
  do {
    uVar10 = uVar8 & uVar10;
    uVar12 = *(uint *)((int)puVar7 + uVar10);
    uVar4 = uVar12 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar8;
      if ((uVar13 == puVar7[uVar5 * -4 + -2]) &&
         (iVar6 = thunk_FUN_016dd50a(uVar9,puVar7[uVar5 * -4 + -3],uVar13), iVar6 == 0)) {
        uVar3 = *param_2;
        puVar7[uVar5 * -4 + -1] = param_3;
        if (uVar3 != 0) {
          thunk_FUN_016d3fb4(uVar9);
        }
        return 1;
      }
    }
    uVar4 = uVar12 & 0x80808080;
    if (bVar2) {
LAB_01337564:
      if ((uVar4 & uVar12 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar7 + local_48);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar7 & 0x80808080;
          uVar13 = LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                           | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar7 + (uVar13 >> 3));
          local_48 = uVar13 >> 3;
        }
        iVar11 = param_1[3];
        param_1[2] = param_1[2] - (uVar9 & 1);
        uVar9 = param_2[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar7 + local_48) = bVar1;
        uVar3 = *param_2;
        uVar13 = param_2[1];
        *(byte *)((int)puVar7 + (uVar8 & local_48 - 4) + 4) = bVar1;
        puVar7[local_48 * -4 + -1] = param_3;
        puVar7[local_48 * -4 + -2] = uVar9;
        param_1[3] = iVar11 + 1;
        puVar7[local_48 * -4 + -4] = uVar3;
        puVar7[local_48 * -4 + -3] = uVar13;
        return 0;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_48 = uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar8;
        goto LAB_01337564;
      }
      bVar2 = false;
    }
    iVar11 = iVar11 + 4;
    uVar10 = iVar11 + uVar10;
  } while( true );
}

