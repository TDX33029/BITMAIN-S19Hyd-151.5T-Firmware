// FUN_006e5f2c @ 006e5f2c size=684 calls_out=4 calls_in=2
// strings: 

void FUN_006e5f2c(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint local_94;
  int local_84;
  uint uStack_5c;
  
  uVar13 = param_3[1];
  uVar23 = param_3[2];
  uVar3 = FUN_01adafd4(param_2[4],param_2[5],param_2[6],param_2[7],uVar13,uVar23);
  if (param_2[2] == 0) {
    FUN_006bb410(param_2,param_2 + 4);
  }
  puVar8 = (uint *)*param_2;
  uVar9 = param_2[1];
  bVar2 = false;
  local_84 = 0;
  uVar16 = uVar3;
  do {
    uVar16 = uVar9 & uVar16;
    uVar4 = *(uint *)((int)puVar8 + uVar16);
    uVar5 = uVar4 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = uVar16 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
      if ((uVar23 == puVar8[uVar6 * -0x10 + -0xe]) &&
         (iVar7 = thunk_FUN_01bed842(uVar13,puVar8[uVar6 * -0x10 + -0xf],uVar23), iVar7 == 0)) {
        uVar3 = puVar8[uVar6 * -0x10 + -0xb];
        uVar23 = puVar8[uVar6 * -0x10 + -10];
        uVar16 = puVar8[uVar6 * -0x10 + -9];
        uVar9 = puVar8[uVar6 * -0x10 + -8];
        uVar4 = puVar8[uVar6 * -0x10 + -7];
        *param_1 = puVar8[uVar6 * -0x10 + -0xc];
        param_1[1] = uVar3;
        param_1[2] = uVar23;
        param_1[3] = uVar16;
        param_1[4] = uVar9;
        param_1[5] = uVar4;
        uVar3 = puVar8[uVar6 * -0x10 + -5];
        uVar23 = puVar8[uVar6 * -0x10 + -4];
        uVar16 = puVar8[uVar6 * -0x10 + -3];
        uVar9 = puVar8[uVar6 * -0x10 + -2];
        uVar4 = puVar8[uVar6 * -0x10 + -1];
        param_1[6] = puVar8[uVar6 * -0x10 + -6];
        param_1[7] = uVar3;
        param_1[8] = uVar23;
        param_1[9] = uVar16;
        param_1[10] = uVar9;
        param_1[0xb] = uVar4;
        uVar3 = param_4[1];
        uVar23 = param_4[2];
        uVar16 = param_4[3];
        uVar9 = param_4[4];
        uVar4 = param_4[5];
        puVar8[uVar6 * -0x10 + -0xc] = *param_4;
        puVar8[uVar6 * -0x10 + -0xb] = uVar3;
        puVar8[uVar6 * -0x10 + -10] = uVar23;
        puVar8[uVar6 * -0x10 + -9] = uVar16;
        puVar8[uVar6 * -0x10 + -8] = uVar9;
        puVar8[uVar6 * -0x10 + -7] = uVar4;
        uVar3 = param_4[7];
        uVar23 = param_4[8];
        uVar16 = param_4[9];
        uVar9 = param_4[10];
        uVar4 = param_4[0xb];
        puVar8[uVar6 * -0x10 + -6] = param_4[6];
        puVar8[uVar6 * -0x10 + -5] = uVar3;
        puVar8[uVar6 * -0x10 + -4] = uVar23;
        puVar8[uVar6 * -0x10 + -3] = uVar16;
        puVar8[uVar6 * -0x10 + -2] = uVar9;
        puVar8[uVar6 * -0x10 + -1] = uVar4;
        FUN_019bb7e0(*param_3,uVar13);
        return;
      }
    }
    uVar5 = uVar4 & 0x80808080;
    if (bVar2) {
LAB_006e6080:
      if ((uVar5 & uVar4 << 1) != 0) {
        uVar13 = (uint)*(char *)((int)puVar8 + local_94);
        if (-1 < (int)uVar13) {
          uVar13 = *puVar8 & 0x80808080;
          uVar23 = LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                           (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18);
          uVar13 = (uint)*(byte *)((int)puVar8 + (uVar23 >> 3));
          local_94 = uVar23 >> 3;
        }
        uVar4 = *param_3;
        uVar17 = param_3[1];
        uVar20 = param_3[2];
        uVar23 = *param_4;
        uVar5 = param_4[1];
        uVar11 = param_4[2];
        uVar14 = param_4[3];
        uVar18 = param_4[4];
        uVar21 = param_4[5];
        uVar16 = param_4[6];
        uVar6 = param_4[7];
        uVar12 = param_4[8];
        uVar15 = param_4[9];
        uVar19 = param_4[10];
        uVar22 = param_4[0xb];
        iVar7 = param_2[2];
        iVar10 = param_2[3];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar8 + local_94) = bVar1;
        *(byte *)((int)puVar8 + (uVar9 & local_94 - 4) + 4) = bVar1;
        param_2[2] = iVar7 - (uVar13 & 1);
        param_2[3] = iVar10 + 1;
        puVar8[local_94 * -0x10 + -0x10] = uVar4;
        puVar8[local_94 * -0x10 + -0xf] = uVar17;
        puVar8[local_94 * -0x10 + -0xe] = uVar20;
        puVar8[local_94 * -0x10 + -0xd] = uStack_5c;
        puVar8[local_94 * -0x10 + -0xc] = uVar23;
        puVar8[local_94 * -0x10 + -0xb] = uVar5;
        puVar8[local_94 * -0x10 + -10] = uVar11;
        puVar8[local_94 * -0x10 + -9] = uVar14;
        puVar8[local_94 * -0x10 + -8] = uVar18;
        puVar8[local_94 * -0x10 + -7] = uVar21;
        puVar8[local_94 * -0x10 + -6] = uVar16;
        puVar8[local_94 * -0x10 + -5] = uVar6;
        puVar8[local_94 * -0x10 + -4] = uVar12;
        puVar8[local_94 * -0x10 + -3] = uVar15;
        puVar8[local_94 * -0x10 + -2] = uVar19;
        puVar8[local_94 * -0x10 + -1] = uVar22;
        param_1[4] = 0x80000007;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar5 != 0) {
        local_94 = uVar16 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar9;
        goto LAB_006e6080;
      }
      bVar2 = false;
    }
    local_84 = local_84 + 4;
    uVar16 = local_84 + uVar16;
  } while( true );
}

