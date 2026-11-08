// FUN_01017dc8 @ 01017dc8 size=556 calls_out=4 calls_in=1
// strings: 

bool FUN_01017dc8(undefined4 *param_1,uint *param_2)

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
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_44;
  
  uVar9 = param_2[1];
  uVar11 = param_2[2];
  uVar3 = FUN_01930380(param_1[4],param_1[5],param_1[6],param_1[7],uVar9,uVar11);
  if (param_1[2] == 0) {
    FUN_01192124(param_1,param_1 + 4);
  }
  uVar7 = param_1[1];
  puVar8 = (uint *)*param_1;
  iVar13 = 0;
  bVar2 = false;
  uVar10 = uVar3;
  do {
    uVar10 = uVar7 & uVar10;
    uVar12 = *(uint *)((int)puVar8 + uVar10);
    uVar4 = uVar12 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar7;
      if ((uVar11 == puVar8[uVar5 * -3 + -1]) &&
         (iVar6 = thunk_FUN_01bed842(uVar9,puVar8[uVar5 * -3 + -2],uVar11), iVar6 == 0)) {
        FUN_019bb7e0(*param_2,uVar9);
        goto LAB_01017f54;
      }
    }
    uVar5 = uVar12 & 0x80808080;
    if (bVar2) goto LAB_01017f0c;
    if (uVar5 == 0) {
      bVar2 = false;
    }
    else {
      local_44 = uVar10 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar7;
LAB_01017f0c:
      if ((uVar5 & uVar12 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar8 + local_44);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar8 & 0x80808080;
          uVar11 = LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                           | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar8 + (uVar11 >> 3));
          local_44 = uVar11 >> 3;
        }
        iVar13 = param_1[3];
        iVar6 = param_1[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar8 + local_44) = bVar1;
        param_1[2] = iVar6 - (uVar9 & 1);
        param_1[3] = iVar13 + 1;
        *(byte *)((int)puVar8 + (uVar7 & local_44 - 4) + 4) = bVar1;
        uVar3 = param_2[1];
        uVar9 = param_2[2];
        puVar8[local_44 * -3 + -3] = *param_2;
        puVar8[local_44 * -3 + -2] = uVar3;
        puVar8[local_44 * -3 + -1] = uVar9;
LAB_01017f54:
        return uVar4 != 0;
      }
      bVar2 = true;
    }
    iVar13 = iVar13 + 4;
    uVar10 = iVar13 + uVar10;
  } while( true );
}

