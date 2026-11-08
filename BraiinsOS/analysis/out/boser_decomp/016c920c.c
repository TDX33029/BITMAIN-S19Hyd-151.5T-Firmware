// FUN_016c920c @ 016c920c size=636 calls_out=4 calls_in=4
// strings: 

void FUN_016c920c(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint local_48;
  int local_34;
  
  uVar3 = FUN_016c8824(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
  if (param_1[2] == 0) {
    FUN_016c9838(param_1,param_1 + 4);
  }
  uVar8 = param_1[1];
  puVar11 = (uint *)*param_1;
  bVar2 = false;
  local_34 = 0;
  uVar9 = uVar3;
  do {
    uVar9 = uVar8 & uVar9;
    uVar10 = *(uint *)((int)puVar11 + uVar9);
    uVar4 = uVar10 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar9 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar8;
      if ((param_3 == puVar11[uVar5 * -3 + -2]) &&
         (iVar6 = thunk_FUN_01bed842(param_2 + 2,puVar11[uVar5 * -3 + -3] + 8), iVar6 == 0)) {
        puVar11[uVar5 * -3 + -1] = param_4;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *param_2;
          bVar2 = (bool)hasExclusiveAccess(param_2);
        } while (!bVar2);
        *param_2 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(param_2,param_3);
          return;
        }
        return;
      }
    }
    uVar4 = uVar10 & 0x80808080;
    if (bVar2) {
LAB_016c9364:
      if ((uVar4 & uVar10 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar11 + local_48);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar11 & 0x80808080;
          uVar4 = LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar11 + (uVar4 >> 3));
          local_48 = uVar4 >> 3;
        }
        iVar6 = param_1[3];
        iVar7 = param_1[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar11 + local_48) = bVar1;
        param_1[2] = iVar7 - (uVar9 & 1);
        param_1[3] = iVar6 + 1;
        *(byte *)((int)puVar11 + (uVar8 & local_48 - 4) + 4) = bVar1;
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
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar8
        ;
        goto LAB_016c9364;
      }
      bVar2 = false;
    }
    local_34 = local_34 + 4;
    uVar9 = local_34 + uVar9;
  } while( true );
}

