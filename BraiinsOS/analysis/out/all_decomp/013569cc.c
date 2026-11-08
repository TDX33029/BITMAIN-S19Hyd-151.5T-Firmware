// FUN_013569cc @ 013569cc size=900 calls_out=4 calls_in=1
// strings: 

void FUN_013569cc(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint local_6c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_30 = param_2[4];
  piVar15 = (int *)*param_3;
  local_2c = param_2[5];
  local_38 = param_2[6];
  local_34 = param_2[7];
  local_48 = param_2[8];
  local_3c = param_2[0xb];
  local_40 = param_2[10];
  local_44 = param_2[9];
  FUN_01352290(&local_48,piVar15[3],piVar15[4]);
  uVar20 = param_3[2];
  FUN_01352290(&local_48,param_3[1],uVar20);
  uVar7 = local_38;
  uVar12 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  lVar3 = (ulonglong)local_38 * (ulonglong)uVar12;
  uVar5 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar4 = (ulonglong)~local_30 * (ulonglong)uVar5;
  uVar18 = (uint)lVar4;
  uVar6 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * ~local_30 + uVar5 * ~local_2c + (int)((ulonglong)lVar4 >> 0x20);
  uVar5 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
          local_30 >> 0x18) * local_38 + uVar12 * local_34 + (int)((ulonglong)lVar3 >> 0x20) ^
          (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
          uVar18 >> 0x18);
  uVar12 = (uint)lVar3 ^
           (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
           uVar6 >> 0x18);
  uVar6 = uVar12;
  if ((local_38 & 0x20) != 0) {
    uVar6 = uVar5;
    uVar5 = uVar12;
  }
  if (param_2[2] == 0) {
    FUN_01341ccc(param_2,1,param_2 + 4);
  }
  uVar7 = uVar6 << (uVar7 & 0x1f) | (uVar5 >> 1) >> (~uVar7 & 0x1f);
  puVar11 = (uint *)*param_2;
  uVar6 = param_2[1];
  bVar2 = false;
  iVar14 = 0;
  uVar5 = uVar7;
  do {
    uVar5 = uVar6 & uVar5;
    uVar18 = *(uint *)((int)puVar11 + uVar5);
    uVar12 = uVar18 ^ (uVar7 >> 0x19) * 0x1010101;
    for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
        uVar12 = uVar12 - 1 & uVar12) {
      uVar8 = uVar5 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                     (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar6;
      piVar10 = (int *)puVar11[uVar8 * -8 + -8];
      if ((piVar15 == piVar10) ||
         ((piVar15[4] == piVar10[4] &&
          (iVar9 = thunk_FUN_016dd50a(piVar15[3],piVar10[3]), iVar9 == 0)))) {
        if ((uVar20 == puVar11[uVar8 * -8 + -6]) &&
           (iVar9 = thunk_FUN_016dd50a(param_3[1],puVar11[uVar8 * -8 + -7],uVar20), iVar9 == 0)) {
          uVar5 = puVar11[uVar8 * -8 + -4];
          uVar7 = puVar11[uVar8 * -8 + -3];
          uVar6 = puVar11[uVar8 * -8 + -2];
          uVar12 = puVar11[uVar8 * -8 + -1];
          *param_1 = puVar11[uVar8 * -8 + -5];
          param_1[1] = uVar5;
          param_1[2] = uVar7;
          param_1[3] = uVar6;
          param_1[4] = uVar12;
          uVar5 = param_4[1];
          uVar7 = param_4[2];
          uVar6 = param_4[3];
          uVar12 = param_4[4];
          puVar11[uVar8 * -8 + -5] = *param_4;
          puVar11[uVar8 * -8 + -4] = uVar5;
          puVar11[uVar8 * -8 + -3] = uVar7;
          puVar11[uVar8 * -8 + -2] = uVar6;
          puVar11[uVar8 * -8 + -1] = uVar12;
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *piVar15;
            bVar2 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar2);
          *piVar15 = iVar14 + -1;
          if (iVar14 == 1) {
            DataMemoryBarrier(0xb);
            FUN_013532e4(*param_3);
            return;
          }
          return;
        }
      }
    }
    uVar12 = uVar18 & 0x80808080;
    if (bVar2) {
LAB_01356bfc:
      if ((uVar12 & uVar18 << 1) != 0) {
        uVar5 = (uint)*(char *)((int)puVar11 + local_6c);
        if (-1 < (int)uVar5) {
          uVar5 = *puVar11 & 0x80808080;
          uVar12 = LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
          uVar5 = (uint)*(byte *)((int)puVar11 + (uVar12 >> 3));
          local_6c = uVar12 >> 3;
        }
        uVar12 = *param_3;
        uVar18 = param_3[1];
        uVar8 = param_3[2];
        uVar20 = *param_4;
        uVar13 = param_4[1];
        uVar16 = param_4[2];
        uVar17 = param_4[3];
        uVar19 = param_4[4];
        bVar1 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar11 + local_6c) = bVar1;
        iVar14 = param_2[2];
        iVar9 = param_2[3];
        *(byte *)((int)puVar11 + (uVar6 & local_6c - 4) + 4) = bVar1;
        param_2[2] = iVar14 - (uVar5 & 1);
        param_2[3] = iVar9 + 1;
        puVar11[local_6c * -8 + -8] = uVar12;
        puVar11[local_6c * -8 + -7] = uVar18;
        puVar11[local_6c * -8 + -6] = uVar8;
        puVar11[local_6c * -8 + -5] = uVar20;
        puVar11[local_6c * -8 + -4] = uVar13;
        puVar11[local_6c * -8 + -3] = uVar16;
        puVar11[local_6c * -8 + -2] = uVar17;
        puVar11[local_6c * -8 + -1] = uVar19;
        *param_1 = 2;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar12 != 0) {
        local_6c = uVar5 + ((uint)LZCOUNT((uVar18 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                          (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar6;
        goto LAB_01356bfc;
      }
      bVar2 = false;
    }
    iVar14 = iVar14 + 4;
    uVar5 = iVar14 + uVar5;
  } while( true );
}

