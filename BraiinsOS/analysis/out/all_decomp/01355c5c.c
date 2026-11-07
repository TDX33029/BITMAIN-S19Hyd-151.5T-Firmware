// FUN_01355c5c @ 01355c5c size=820 calls_out=4 calls_in=1
// strings: 

uint FUN_01355c5c(undefined4 *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint local_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  
  uStack_30 = param_1[4];
  local_2c = param_1[5];
  local_38 = param_1[6];
  local_34 = param_1[7];
  local_48 = param_1[8];
  local_3c = param_1[0xb];
  local_44 = param_1[9];
  local_40 = param_1[10];
  FUN_01352290(&local_48,param_2[3],param_2[4]);
  uVar6 = local_38;
  uVar10 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  lVar3 = (ulonglong)local_38 * (ulonglong)uVar10;
  uVar5 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar4 = (ulonglong)~uStack_30 * (ulonglong)uVar5;
  uVar12 = (uint)lVar4;
  uVar5 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * ~uStack_30 + uVar5 * ~local_2c + (int)((ulonglong)lVar4 >> 0x20);
  uVar12 = (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 | (uStack_30 >> 0x10 & 0xff) << 8 |
           uStack_30 >> 0x18) * local_38 + uVar10 * local_34 + (int)((ulonglong)lVar3 >> 0x20) ^
           (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18);
  uVar5 = (uint)lVar3 ^
          (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18);
  uVar10 = uVar12;
  if ((local_38 & 0x20) != 0) {
    uVar10 = uVar5;
    uVar5 = uVar12;
  }
  if (param_1[2] == 0) {
    FUN_01341600(param_1,param_1 + 4);
  }
  puVar11 = (uint *)*param_1;
  uVar6 = uVar5 << (uVar6 & 0x1f) | (uVar10 >> 1) >> (~uVar6 & 0x1f);
  uVar10 = param_1[1];
  iVar13 = 0;
  bVar2 = false;
  uVar5 = uVar6;
  do {
    uVar5 = uVar10 & uVar5;
    uVar7 = *(uint *)((int)puVar11 + uVar5);
    uVar12 = uVar7 ^ (uVar6 >> 0x19) * 0x1010101;
    for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
        uVar12 = uVar12 - 1 & uVar12) {
      uVar14 = uVar5 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                      (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar10;
      piVar9 = (int *)puVar11[uVar14 * -2 + -2];
      if ((param_2 == piVar9) ||
         ((param_2[4] == piVar9[4] && (iVar8 = thunk_FUN_016dd50a(param_2[3],piVar9[3]), iVar8 == 0)
          ))) {
        uVar5 = puVar11[uVar14 * -2 + -1];
        puVar11[uVar14 * -2 + -1] = param_3;
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *param_2;
          bVar2 = (bool)hasExclusiveAccess(param_2);
        } while (!bVar2);
        *param_2 = iVar13 + -1;
        if (iVar13 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(param_2);
        }
        return uVar5;
      }
    }
    uVar12 = uVar7 & 0x80808080;
    if (bVar2) {
LAB_01355e80:
      if ((uVar12 & uVar7 << 1) != 0) {
        uVar5 = (uint)*(char *)((int)puVar11 + local_68);
        if (-1 < (int)uVar5) {
          uVar5 = *puVar11 & 0x80808080;
          uVar12 = LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
          uVar5 = (uint)*(byte *)((int)puVar11 + (uVar12 >> 3));
          local_68 = uVar12 >> 3;
        }
        iVar13 = param_1[3];
        iVar8 = param_1[2];
        bVar1 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar11 + local_68) = bVar1;
        param_1[2] = iVar8 - (uVar5 & 1);
        param_1[3] = iVar13 + 1;
        *(byte *)((int)puVar11 + (uVar10 & local_68 - 4) + 4) = bVar1;
        puVar11[local_68 * -2 + -2] = (uint)param_2;
        puVar11[local_68 * -2 + -1] = param_3;
        return 0;
      }
      bVar2 = true;
    }
    else {
      if (uVar12 != 0) {
        local_68 = uVar5 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                          (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar10;
        goto LAB_01355e80;
      }
      bVar2 = false;
    }
    iVar13 = iVar13 + 4;
    uVar5 = iVar13 + uVar5;
  } while( true );
}

