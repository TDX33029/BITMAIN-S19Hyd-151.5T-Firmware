// FUN_015f4338 @ 015f4338 size=1244 calls_out=11 calls_in=1
// strings: 

void FUN_015f4338(int *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  undefined8 uVar25;
  uint local_b8;
  uint local_74;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  plVar8 = (longlong *)(**(code **)(param_3 + 0x14))(param_2);
  uVar16 = *(uint *)*param_1;
  uVar17 = ((uint *)*param_1)[1];
  if (*(uint *)((int)plVar8 + 0xc) < uVar17 ||
      uVar17 - *(uint *)((int)plVar8 + 0xc) < (uint)(*(uint *)(plVar8 + 1) <= uVar16)) {
    return;
  }
  if (uVar17 <= *(uint *)((int)plVar8 + 0x14) &&
      (uint)(*(uint *)(plVar8 + 2) <= uVar16) <= uVar17 - *(uint *)((int)plVar8 + 0x14)) {
    return;
  }
  uVar18 = 0;
  puVar9 = (undefined4 *)param_1[1];
  plVar8[2] = (ulonglong)*(uint *)(plVar8 + 3) * 1000 + *plVar8;
  uVar16 = puVar9[1];
  if ((int)uVar16 < 0) {
LAB_015f43b4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar18,uVar16);
  }
  uVar21 = *puVar9;
  if (uVar16 == 0) {
    uVar17 = 1;
    local_74 = 0;
  }
  else {
    uVar18 = 1;
    uVar17 = FUN_01298504(uVar16,1);
    if (uVar17 == 0) goto LAB_015f43b4;
    local_74 = uVar16;
  }
  FUN_01bed4e2(uVar17,uVar21,uVar16);
  uVar25 = (**(code **)(param_3 + 0x1c))(param_2);
  (**(code **)((int)((ulonglong)uVar25 >> 0x20) + 0xc))(&local_50,(int)uVar25);
  if ((local_50 != 0xda8c4f1e || local_48 != 0x19da2243) ||
      (local_4c != 0xb2415d58 || local_44 != 0xc983ed0b)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01cfdba0);
  }
  FUN_015df854(&local_50,(int)uVar25);
  uStack_28 = local_34;
  uStack_2c = local_38;
  uStack_30 = local_3c;
  local_34 = local_40;
  local_38 = local_44;
  local_44 = local_50;
  local_40 = local_4c;
  local_3c = local_48;
  puVar9 = (undefined4 *)param_1[2];
  local_50 = local_74;
  local_4c = uVar17;
  local_48 = uVar16;
  uVar10 = FUN_015f62bc(puVar9[4],puVar9[5],puVar9[6],puVar9[7],&local_50);
  if (puVar9[2] == 0) {
    FUN_015d6f00(puVar9,1,puVar9 + 4);
  }
  uVar7 = local_34;
  uVar6 = local_38;
  uVar5 = local_3c;
  uVar4 = local_40;
  uVar3 = local_44;
  bVar2 = false;
  puVar19 = (uint *)*puVar9;
  uVar22 = puVar9[1];
  iVar23 = 0;
  uVar20 = uVar10;
  do {
    uVar20 = uVar22 & uVar20;
    uVar11 = *(uint *)((int)puVar19 + uVar20);
    uVar12 = uVar11 ^ (uVar10 >> 0x19) * 0x1010101;
    for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
        uVar12 = uVar12 - 1 & uVar12) {
      uVar13 = uVar20 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar22
      ;
      if (((uVar16 == puVar19[uVar13 * -0xb + -9]) &&
          (iVar14 = thunk_FUN_01bed842(uVar17,puVar19[uVar13 * -0xb + -10],uVar16), iVar14 == 0)) &&
         ((uVar3 != 0x80000000) != (puVar19[uVar13 * -0xb + -8] == 0x80000000))) {
        if (uVar3 == 0x80000000) {
          if ((uVar7 == puVar19[uVar13 * -0xb + -4]) &&
             (iVar14 = FUN_015df54c(uVar5,uVar6,puVar19[uVar13 * -0xb + -6],
                                    puVar19[uVar13 * -0xb + -5]), iVar14 != 0)) {
LAB_015f4754:
            FUN_0134bd64(local_74,uVar17);
            FUN_015d16d4(&local_44);
            return;
          }
        }
        else {
          iVar14 = thunk_FUN_01bed842(&local_34,puVar19 + uVar13 * -0xb + -4,0x10);
          if (iVar14 == 0) {
            uVar15 = puVar19[uVar13 * -0xb + -5];
            bVar24 = uVar6 == uVar15;
            if (bVar24) {
              uVar15 = puVar19[uVar13 * -0xb + -6];
            }
            if ((bVar24 && uVar15 == uVar5) &&
               (iVar14 = thunk_FUN_01bed842(uVar4,puVar19[uVar13 * -0xb + -7],uVar5), iVar14 == 0))
            goto LAB_015f4754;
          }
        }
      }
    }
    uVar12 = uVar11 & 0x80808080;
    if (bVar2) {
LAB_015f46f0:
      if ((uVar12 & uVar11 << 1) != 0) {
        uVar16 = (uint)*(char *)((int)puVar19 + local_b8);
        if (-1 < (int)uVar16) {
          uVar16 = *puVar19 & 0x80808080;
          uVar17 = LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
          uVar16 = (uint)*(byte *)((int)puVar19 + (uVar17 >> 3));
          local_b8 = uVar17 >> 3;
        }
        bVar1 = (byte)(uVar10 >> 0x19);
        *(byte *)((int)puVar19 + local_b8) = bVar1;
        puVar9[2] = puVar9[2] - (uVar16 & 1);
        puVar9[3] = puVar9[3] + 1;
        *(byte *)((int)puVar19 + (uVar22 & local_b8 - 4) + 4) = bVar1;
        puVar19[local_b8 * -0xb + -0xb] = local_50;
        puVar19[local_b8 * -0xb + -10] = local_4c;
        puVar19[local_b8 * -0xb + -9] = local_48;
        puVar19[local_b8 * -0xb + -8] = local_44;
        puVar19[local_b8 * -0xb + -7] = local_40;
        puVar19[local_b8 * -0xb + -6] = local_3c;
        puVar19[local_b8 * -0xb + -5] = local_38;
        puVar19[local_b8 * -0xb + -4] = local_34;
        puVar19[local_b8 * -0xb + -3] = uStack_30;
        puVar19[local_b8 * -0xb + -2] = uStack_2c;
        puVar19[local_b8 * -0xb + -1] = uStack_28;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar12 != 0) {
        local_b8 = uVar20 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar22;
        goto LAB_015f46f0;
      }
      bVar2 = false;
    }
    iVar23 = iVar23 + 4;
    uVar20 = iVar23 + uVar20;
  } while( true );
}

