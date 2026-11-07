// FUN_01356650 @ 01356650 size=836 calls_out=4 calls_in=1
// strings: 

void FUN_01356650(uint *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,uint param_5,
                 uint param_6)

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
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_6c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  
  uStack_30 = param_2[4];
  local_2c = param_2[5];
  local_38 = param_2[6];
  local_34 = param_2[7];
  local_48 = param_2[8];
  local_3c = param_2[0xb];
  local_44 = param_2[9];
  local_40 = param_2[10];
  FUN_01352290(&local_48,param_3[3],param_3[4]);
  uVar6 = local_38;
  uVar11 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  lVar3 = (ulonglong)local_38 * (ulonglong)uVar11;
  uVar5 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar4 = (ulonglong)~uStack_30 * (ulonglong)uVar5;
  uVar13 = (uint)lVar4;
  uVar5 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * ~uStack_30 + uVar5 * ~local_2c + (int)((ulonglong)lVar4 >> 0x20);
  uVar13 = (uStack_30 << 0x18 | (uStack_30 >> 8 & 0xff) << 0x10 | (uStack_30 >> 0x10 & 0xff) << 8 |
           uStack_30 >> 0x18) * local_38 + uVar11 * local_34 + (int)((ulonglong)lVar3 >> 0x20) ^
           (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18);
  uVar5 = (uint)lVar3 ^
          (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
          uVar5 >> 0x18);
  uVar11 = uVar13;
  if ((local_38 & 0x20) != 0) {
    uVar11 = uVar5;
    uVar5 = uVar13;
  }
  if (param_2[2] == 0) {
    FUN_01342ee8(param_2,1,param_2 + 4);
  }
  puVar12 = (uint *)*param_2;
  uVar13 = param_2[1];
  uVar6 = uVar5 << (uVar6 & 0x1f) | (uVar11 >> 1) >> (~uVar6 & 0x1f);
  bVar2 = false;
  iVar14 = 0;
  uVar5 = uVar6;
  do {
    uVar5 = uVar13 & uVar5;
    uVar10 = *(uint *)((int)puVar12 + uVar5);
    uVar11 = uVar10 ^ (uVar6 >> 0x19) * 0x1010101;
    for (uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff; uVar11 != 0;
        uVar11 = uVar11 - 1 & uVar11) {
      uVar7 = uVar5 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                     (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) & uVar13;
      piVar9 = (int *)puVar12[uVar7 * -3 + -3];
      if ((param_3 == piVar9) ||
         ((param_3[4] == piVar9[4] && (iVar8 = thunk_FUN_016dd50a(param_3[3],piVar9[3]), iVar8 == 0)
          ))) {
        uVar5 = puVar12[uVar7 * -3 + -1];
        *param_1 = puVar12[uVar7 * -3 + -2];
        param_1[1] = uVar5;
        puVar12[uVar7 * -3 + -2] = param_5;
        puVar12[uVar7 * -3 + -1] = param_6;
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(param_3);
          return;
        }
        return;
      }
    }
    uVar11 = uVar10 & 0x80808080;
    if (bVar2) {
LAB_0135686c:
      if ((uVar11 & uVar10 << 1) != 0) {
        uVar5 = (uint)*(char *)((int)puVar12 + local_6c);
        if (-1 < (int)uVar5) {
          uVar5 = *puVar12 & 0x80808080;
          uVar11 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
          uVar5 = (uint)*(byte *)((int)puVar12 + (uVar11 >> 3));
          local_6c = uVar11 >> 3;
        }
        bVar1 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar12 + local_6c) = bVar1;
        iVar14 = param_2[2];
        iVar8 = param_2[3];
        *(undefined1 *)(param_1 + 1) = 6;
        param_2[2] = iVar14 - (uVar5 & 1);
        param_2[3] = iVar8 + 1;
        *(byte *)((int)puVar12 + (uVar13 & local_6c - 4) + 4) = bVar1;
        puVar12[local_6c * -3 + -2] = param_5;
        puVar12[local_6c * -3 + -3] = (uint)param_3;
        puVar12[local_6c * -3 + -1] = param_6;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar11 != 0) {
        local_6c = uVar5 + ((uint)LZCOUNT((uVar10 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                          (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                   uVar13;
        goto LAB_0135686c;
      }
      bVar2 = false;
    }
    iVar14 = iVar14 + 4;
    uVar5 = iVar14 + uVar5;
  } while( true );
}

