// FUN_006e6200 @ 006e6200 size=472 calls_out=3 calls_in=10
// strings: 

undefined4 FUN_006e6200(undefined4 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint local_40;
  
  uVar3 = FUN_006c561c(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
  if (param_1[2] == 0) {
    FUN_006b4ddc(param_1,1,param_1 + 4);
  }
  uVar7 = param_1[1];
  puVar9 = (uint *)*param_1;
  bVar2 = false;
  iVar11 = 0;
  uVar10 = uVar3;
  do {
    uVar10 = uVar7 & uVar10;
    uVar8 = *(uint *)((int)puVar9 + uVar10);
    uVar4 = uVar8 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar7;
      if ((param_3 == puVar9[uVar5 * -2 + -1]) &&
         (iVar6 = thunk_FUN_01bed842(param_2,puVar9[uVar5 * -2 + -2],param_3), iVar6 == 0)) {
        return 1;
      }
    }
    uVar4 = uVar8 & 0x80808080;
    if (bVar2) {
LAB_006e6320:
      if ((uVar4 & uVar8 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar9 + local_40);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar9 & 0x80808080;
          uVar4 = LZCOUNT((*puVar9 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar9 + (uVar4 >> 3));
          local_40 = uVar4 >> 3;
        }
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar9 + local_40) = bVar1;
        param_1[2] = param_1[2] - (uVar10 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar9 + (local_40 - 4 & uVar7) + 4) = bVar1;
        puVar9[local_40 * -2 + -2] = param_2;
        puVar9[local_40 * -2 + -1] = param_3;
        return 0;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_40 = uVar10 + ((uint)LZCOUNT((uVar8 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar7;
        goto LAB_006e6320;
      }
      bVar2 = false;
    }
    iVar11 = iVar11 + 4;
    uVar10 = iVar11 + uVar10;
  } while( true );
}

