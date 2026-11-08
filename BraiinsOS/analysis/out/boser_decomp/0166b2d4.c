// FUN_0166b2d4 @ 0166b2d4 size=652 calls_out=7 calls_in=1
// strings: 

bool FUN_0166b2d4(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint local_5c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  
  uVar13 = 0;
  if ((int)param_4 < 0) {
LAB_0166b2ec:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar13,param_4);
  }
  if (param_4 == 0) {
    uVar3 = 1;
    uVar9 = 0;
  }
  else {
    uVar13 = 1;
    uVar3 = FUN_01298504(param_4,1);
    uVar9 = param_4;
    if (uVar3 == 0) goto LAB_0166b2ec;
  }
  FUN_01bed4e2(uVar3,param_3,param_4);
  uVar4 = param_2 + 8;
  local_38 = uVar9;
  uStack_34 = uVar3;
  local_30 = param_4;
  local_2c = uVar4;
  uVar5 = FUN_016767c0(param_1 + 4,&local_38);
  if (param_1[2] == 0) {
    FUN_01668ab0(param_1,param_1 + 4);
  }
  puVar11 = (uint *)*param_1;
  uVar12 = param_1[1];
  iVar16 = 0;
  bVar2 = false;
  uVar15 = uVar5;
  do {
    uVar15 = uVar12 & uVar15;
    uVar14 = *(uint *)((int)puVar11 + uVar15);
    uVar6 = uVar14 ^ (uVar5 >> 0x19) * 0x1010101;
    for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar7 = uVar15 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                      (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar12;
      uVar10 = puVar11[uVar7 * -4 + -1];
      bVar17 = uVar10 == uVar4;
      if (bVar17) {
        uVar10 = puVar11[uVar7 * -4 + -2];
      }
      if ((bVar17 && param_4 == uVar10) &&
         (iVar8 = thunk_FUN_01bed842(uVar3,puVar11[uVar7 * -4 + -3],param_4), iVar8 == 0)) {
        FUN_019bb7e0(uVar9,uVar3);
        goto LAB_0166b4c8;
      }
    }
    uVar10 = uVar14 & 0x80808080;
    if (bVar2) goto LAB_0166b478;
    if (uVar10 == 0) {
      bVar2 = false;
    }
    else {
      local_5c = uVar15 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                         (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                 uVar12;
LAB_0166b478:
      if ((uVar10 & uVar14 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar11 + local_5c);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar11 & 0x80808080;
          uVar3 = LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                          | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar11 + (uVar3 >> 3));
          local_5c = uVar3 >> 3;
        }
        bVar1 = (byte)(uVar5 >> 0x19);
        *(byte *)((int)puVar11 + local_5c) = bVar1;
        param_1[2] = param_1[2] - (uVar9 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar11 + (uVar12 & local_5c - 4) + 4) = bVar1;
        puVar11[local_5c * -4 + -4] = local_38;
        puVar11[local_5c * -4 + -3] = uStack_34;
        puVar11[local_5c * -4 + -2] = local_30;
        puVar11[local_5c * -4 + -1] = local_2c;
LAB_0166b4c8:
        return uVar6 == 0;
      }
      bVar2 = true;
    }
    iVar16 = iVar16 + 4;
    uVar15 = iVar16 + uVar15;
  } while( true );
}

