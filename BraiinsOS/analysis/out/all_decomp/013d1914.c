// FUN_013d1914 @ 013d1914 size=604 calls_out=4 calls_in=4
// strings: 

void FUN_013d1914(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint local_48;
  
  uVar3 = FUN_013c3804(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
  if (param_1[2] == 0) {
    FUN_013bcc54(param_1,param_1 + 4);
  }
  uVar7 = param_1[1];
  puVar11 = (uint *)*param_1;
  bVar2 = false;
  iVar8 = 0;
  uVar9 = uVar3;
  do {
    uVar9 = uVar7 & uVar9;
    uVar10 = *(uint *)((int)puVar11 + uVar9);
    uVar4 = uVar10 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar9 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar7;
      if ((param_3 == puVar11[uVar5 * -3 + -2]) &&
         (iVar6 = thunk_FUN_016dd50a(param_2 + 2,puVar11[uVar5 * -3 + -3] + 8), iVar6 == 0)) {
        puVar11[uVar5 * -3 + -1] = param_4;
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *param_2;
          bVar2 = (bool)hasExclusiveAccess(param_2);
        } while (!bVar2);
        *param_2 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(param_2,param_3);
          return;
        }
        return;
      }
    }
    uVar4 = uVar10 & 0x80808080;
    if (bVar2) {
LAB_013d1a6c:
      if ((uVar4 & uVar10 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar11 + local_48);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar11 & 0x80808080;
          uVar4 = LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar11 + (uVar4 >> 3));
          local_48 = uVar4 >> 3;
        }
        iVar8 = param_1[3];
        iVar6 = param_1[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar11 + local_48) = bVar1;
        param_1[2] = iVar6 - (uVar9 & 1);
        param_1[3] = iVar8 + 1;
        *(byte *)((int)puVar11 + (uVar7 & local_48 - 4) + 4) = bVar1;
        puVar11[local_48 * -3 + -1] = param_4;
        puVar11[local_48 * -3 + -2] = param_3;
        puVar11[local_48 * -3 + -3] = (uint)param_2;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_48 = uVar9 + ((uint)LZCOUNT((uVar10 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar7
        ;
        goto LAB_013d1a6c;
      }
      bVar2 = false;
    }
    iVar8 = iVar8 + 4;
    uVar9 = iVar8 + uVar9;
  } while( true );
}

