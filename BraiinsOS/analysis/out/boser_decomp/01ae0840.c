// FUN_01ae0840 @ 01ae0840 size=1120 calls_out=6 calls_in=3
// strings: 

void FUN_01ae0840(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int unaff_r6;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint *in_r12;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint local_fc;
  undefined4 local_98;
  int iStack_94;
  uint *puStack_90;
  uint *local_8c;
  uint local_88;
  uint *local_84;
  int iStack_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar2 = (uint *)*param_2;
  iVar11 = param_2[1];
  uVar8 = param_2[3];
  uVar9 = *puVar2;
  if (iVar11 == 0) {
    uVar20 = 0;
  }
  else {
    in_r12 = puVar2 + iVar11 * -10 + -10;
    unaff_r6 = iVar11 * 0x29 + 0x2d;
    uVar20 = 8;
  }
  puVar24 = puVar2 + 1;
  uVar4 = uVar8;
  if (param_1[3] != 0) {
    uVar4 = uVar8 + 1 >> 1;
  }
  if ((uint)param_1[2] < uVar4) {
    FUN_01ada5d0(param_1,uVar4,param_1[4],param_1[5],param_1[6],param_1[7]);
  }
  puVar3 = (uint *)((uint)&local_40 | 4);
  puVar23 = (uint *)((uint)&local_78 | 4);
  uVar4 = ~uVar9 & 0x80808080;
  local_98 = uVar20;
  iStack_94 = unaff_r6;
  puStack_90 = in_r12;
  local_8c = puVar2;
  local_88 = ~uVar9 & 0x80808080;
  local_84 = puVar24;
  iStack_80 = (int)puVar2 + iVar11 + 1;
  local_7c = uVar8;
LAB_01ae0928:
  uVar9 = 0;
  if (uVar8 != 0) {
    puVar27 = puVar24;
    if (uVar4 == 0) {
      do {
        puVar24 = puVar27 + 1;
        uVar9 = *puVar27;
        puVar2 = puVar2 + -0x28;
        puVar27 = puVar24;
      } while ((uVar9 & 0x80808080) == 0x80808080);
      uVar4 = uVar9 & 0x80808080 ^ 0x80808080;
      local_8c = puVar2;
      local_84 = puVar24;
    }
    uVar9 = uVar8 - 1;
    uVar13 = uVar4 - 1 & uVar4;
    uVar8 = (uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                          | uVar4 >> 0x18) >> 3;
    uVar26 = puVar2[uVar8 * -10 + -10];
    uVar25 = puVar2[uVar8 * -10 + -9];
    uVar4 = puVar2[uVar8 * -10 + -8];
    local_78 = puVar2[uVar8 * -10 + -7];
    uStack_74 = puVar2[uVar8 * -10 + -6];
    uStack_70 = puVar2[uVar8 * -10 + -5];
    local_6c = puVar2[uVar8 * -10 + -4];
    uStack_68 = puVar2[uVar8 * -10 + -3];
    uStack_64 = puVar2[uVar8 * -10 + -2];
    uStack_60 = puVar2[uVar8 * -10 + -1];
    local_88 = uVar13;
    if (uVar26 != 0x80000000) {
      local_58 = *puVar23;
      uStack_54 = puVar23[1];
      uStack_50 = puVar23[2];
      uStack_4c = puVar23[3];
      uStack_48 = puVar23[4];
      uStack_44 = puVar23[5];
      uVar15 = param_1[6];
      uVar20 = param_1[7];
      uVar14 = param_1[4];
      uVar17 = param_1[5];
      uVar8 = FUN_01adafd4(uVar14,uVar17,uVar15,uVar20,uVar25,uVar4);
      if (param_1[2] == 0) {
        FUN_01ada5d0(param_1,1,uVar14,uVar17,uVar15,uVar20);
      }
      uVar10 = param_1[1];
      puVar27 = (uint *)*param_1;
      bVar12 = false;
      iVar11 = 0;
      uVar21 = uVar8;
      do {
        uVar21 = uVar10 & uVar21;
        uVar18 = *(uint *)((int)puVar27 + uVar21);
        uVar5 = uVar18 ^ (uVar8 >> 0x19) * 0x1010101;
        for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5
            ) {
          uVar6 = uVar21 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                  uVar10;
          if ((uVar4 == puVar27[uVar6 * -10 + -8]) &&
             (iVar7 = thunk_FUN_01bed842(uVar25,puVar27[uVar6 * -10 + -9],uVar4), iVar7 == 0)) {
            local_40 = puVar27[uVar6 * -10 + -6];
            uStack_3c = puVar27[uVar6 * -10 + -5];
            uStack_38 = puVar27[uVar6 * -10 + -4];
            local_34 = puVar27[uVar6 * -10 + -3];
            uStack_30 = puVar27[uVar6 * -10 + -2];
            uStack_2c = puVar27[uVar6 * -10 + -1];
            uVar8 = puVar23[1];
            uVar4 = puVar23[2];
            uVar21 = puVar23[3];
            uVar10 = puVar23[4];
            uVar5 = puVar23[5];
            puVar27[uVar6 * -10 + -6] = *puVar23;
            puVar27[uVar6 * -10 + -5] = uVar8;
            puVar27[uVar6 * -10 + -4] = uVar4;
            puVar27[uVar6 * -10 + -3] = uVar21;
            puVar27[uVar6 * -10 + -2] = uVar10;
            puVar27[uVar6 * -10 + -1] = uVar5;
            FUN_0134bd64(uVar26,uVar25);
            if ((char)local_40 != '\x06') {
              FUN_01964c44(&local_40);
            }
            goto LAB_01ae0b80;
          }
        }
        uVar6 = uVar18 & 0x80808080;
        uVar5 = local_fc;
        if (bVar12) {
LAB_01ae0b10:
          if ((uVar6 & uVar18 << 1) != 0) goto LAB_01ae0b90;
          bVar12 = true;
          local_fc = uVar5;
        }
        else {
          if (uVar6 != 0) {
            uVar5 = uVar21 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                            (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                    uVar10;
            goto LAB_01ae0b10;
          }
          bVar12 = false;
        }
        iVar11 = iVar11 + 4;
        uVar21 = iVar11 + uVar21;
      } while( true );
    }
  }
  local_7c = uVar9;
  FUN_01ada55c(&local_98);
  return;
LAB_01ae0b90:
  uVar21 = (uint)*(char *)((int)puVar27 + uVar5);
  if (-1 < (int)uVar21) {
    uVar21 = *puVar27 & 0x80808080;
    uVar5 = LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                    uVar21 >> 0x18);
    uVar21 = (uint)*(byte *)((int)puVar27 + (uVar5 >> 3));
    uVar5 = uVar5 >> 3;
  }
  uVar18 = puVar23[1];
  uVar6 = puVar23[2];
  uVar16 = puVar23[3];
  uVar19 = puVar23[4];
  uVar22 = puVar23[5];
  *puVar3 = *puVar23;
  puVar3[1] = uVar18;
  puVar3[2] = uVar6;
  puVar3[3] = uVar16;
  puVar3[4] = uVar19;
  puVar3[5] = uVar22;
  bVar1 = (byte)(uVar8 >> 0x19);
  *(byte *)((int)puVar27 + uVar5) = bVar1;
  param_1[2] = param_1[2] - (uVar21 & 1);
  param_1[3] = param_1[3] + 1;
  *(byte *)((int)puVar27 + (uVar10 & uVar5 - 4) + 4) = bVar1;
  puVar27[uVar5 * -10 + -10] = uVar26;
  puVar27[uVar5 * -10 + -9] = uVar25;
  puVar27[uVar5 * -10 + -8] = uVar4;
  puVar27[uVar5 * -10 + -7] = local_40;
  puVar27[uVar5 * -10 + -6] = uStack_3c;
  puVar27[uVar5 * -10 + -5] = uStack_38;
  puVar27[uVar5 * -10 + -4] = local_34;
  puVar27[uVar5 * -10 + -3] = uStack_30;
  puVar27[uVar5 * -10 + -2] = uStack_2c;
  puVar27[uVar5 * -10 + -1] = uStack_28;
LAB_01ae0b80:
  uVar4 = uVar13;
  uVar8 = uVar9;
  goto LAB_01ae0928;
}

