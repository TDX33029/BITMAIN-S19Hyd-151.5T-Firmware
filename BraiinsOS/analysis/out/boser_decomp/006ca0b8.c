// FUN_006ca0b8 @ 006ca0b8 size=2172 calls_out=13 calls_in=2
// strings: no entry found for key

void FUN_006ca0b8(int param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  bool bVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  int iVar26;
  int local_80;
  int local_5c;
  uint local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 **local_2c;
  undefined1 *local_28;
  
  FUN_006e6200();
  piVar16 = *(int **)(param_1 + 0x40);
  if (piVar16[3] != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x30);
    uVar5 = FUN_01a60560(piVar16[4],piVar16[5],piVar16[6],piVar16[7],param_2,param_3);
    uVar8 = uVar5 >> 0x19;
    iVar17 = *piVar16;
    uVar23 = piVar16[1];
    iVar26 = 0;
    while( true ) {
      uVar5 = uVar23 & uVar5;
      uVar19 = *(uint *)(iVar17 + uVar5);
      uVar6 = uVar19 ^ uVar8 * 0x1010101;
      for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6)
      {
        iVar7 = iVar17 + (uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                                 (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3)
                         & uVar23) * -0x14;
        if ((param_3 == *(uint *)(iVar7 + -0x10)) &&
           (iVar7 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar7 + -0x14),param_3), iVar7 == 0))
        {
          local_58 = param_4[2];
          puVar20 = (undefined4 *)(param_1 + 0x38);
          uVar8 = FUN_006c561c(*puVar4,*(undefined4 *)(param_1 + 0x34),*puVar20,
                               *(undefined4 *)(param_1 + 0x3c),param_2,param_3);
          if (*(int *)(param_1 + 0x28) == 0) {
            FUN_006b74ac(param_1 + 0x20,puVar4);
          }
          uVar6 = *(uint *)(param_1 + 0x24);
          puVar22 = *(uint **)(param_1 + 0x20);
          bVar15 = false;
          iVar17 = 0;
          uVar5 = param_3;
          uVar23 = uVar8;
          goto LAB_006ca258;
        }
      }
      if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
      iVar26 = iVar26 + 4;
      uVar5 = uVar5 + iVar26;
    }
  }
  return;
LAB_006ca258:
  uVar23 = uVar6 & uVar23;
  uVar21 = *(uint *)((int)puVar22 + uVar23);
  uVar19 = uVar21 ^ (uVar8 >> 0x19) * 0x1010101;
  for (uVar19 = ~uVar19 & 0x80808080 & uVar19 + 0xfefefeff; uVar19 != 0;
      uVar19 = uVar19 - 1 & uVar19) {
    uVar9 = uVar23 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                    (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) & uVar6;
    if ((param_3 == puVar22[uVar9 * -3 + -2]) &&
       (iVar26 = thunk_FUN_01bed842(param_2,puVar22[uVar9 * -3 + -3]), iVar26 == 0))
    goto LAB_006ca384;
  }
  uVar19 = uVar21 & 0x80808080;
  if (bVar15) {
LAB_006ca30c:
    if ((uVar19 & uVar21 << 1) != 0) goto LAB_006ca330;
    bVar15 = true;
  }
  else {
    if (uVar19 != 0) {
      uVar5 = uVar23 + ((uint)LZCOUNT((uVar21 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                      (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) & uVar6;
      goto LAB_006ca30c;
    }
    bVar15 = false;
  }
  iVar17 = iVar17 + 4;
  uVar23 = iVar17 + uVar23;
  goto LAB_006ca258;
LAB_006ca330:
  uVar23 = (uint)*(char *)((int)puVar22 + uVar5);
  if (-1 < (int)uVar23) {
    uVar5 = *puVar22 & 0x80808080;
    uVar5 = LZCOUNT((*puVar22 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
    uVar23 = (uint)*(byte *)((int)puVar22 + (uVar5 >> 3));
    uVar5 = uVar5 >> 3;
  }
  iVar17 = *(int *)(param_1 + 0x28);
  iVar26 = *(int *)(param_1 + 0x2c);
  bVar3 = (byte)(uVar8 >> 0x19);
  *(byte *)((int)puVar22 + uVar5) = bVar3;
  *(uint *)(param_1 + 0x28) = iVar17 - (uVar23 & 1);
  *(int *)(param_1 + 0x2c) = iVar26 + 1;
  *(byte *)((int)puVar22 + (uVar5 - 4 & uVar6) + 4) = bVar3;
  puVar22[uVar5 * -3 + -3] = param_2;
  puVar22[uVar5 * -3 + -2] = param_3;
  uVar9 = uVar5;
LAB_006ca384:
  puVar22[uVar9 * -3 + -1] = local_58;
  piVar16 = *(int **)(param_1 + 0x40);
  if (piVar16[3] == 0) {
LAB_006ca8e4:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("no entry found for key",0x16,&DAT_01c05f3c);
  }
  uVar5 = FUN_01a60560(piVar16[4],piVar16[5],piVar16[6],piVar16[7],param_2,param_3);
  uVar8 = uVar5 >> 0x19;
  iVar17 = *piVar16;
  uVar23 = piVar16[1];
  local_5c = 0;
  do {
    uVar5 = uVar23 & uVar5;
    uVar19 = *(uint *)(iVar17 + uVar5);
    uVar6 = uVar19 ^ uVar8 * 0x1010101;
    uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
    while (uVar6 != 0) {
      uVar21 = uVar6 >> 8;
      uVar9 = uVar6 >> 0x10;
      uVar1 = uVar6 >> 0x18;
      uVar2 = uVar6 << 0x18;
      uVar6 = uVar6 - 1 & uVar6;
      uVar21 = uVar5 + ((uint)LZCOUNT(uVar2 | (uVar21 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar1)
                       >> 3) & uVar23;
      puVar10 = (undefined4 *)(iVar17 + -0x14 + uVar21 * -0x14);
      if ((param_3 == puVar10[1]) &&
         (iVar26 = thunk_FUN_01bed842(param_2,*puVar10,param_3), iVar26 == 0)) {
        iVar17 = iVar17 + uVar21 * -0x14;
        iVar26 = *(int *)(iVar17 + -4);
        if (iVar26 != 0) {
          puVar24 = *(undefined4 **)(iVar17 + -8);
          puVar10 = puVar24;
          do {
            puVar25 = puVar10 + 4;
            uVar13 = *puVar10;
            local_54 = puVar10;
            if (*(int *)(param_1 + 0x2c) == 0) {
              iVar17 = puVar10[1];
            }
            else {
              iVar17 = puVar10[1];
              uVar5 = FUN_006c561c(*puVar4,*(undefined4 *)(param_1 + 0x34),*puVar20,
                                   *(undefined4 *)(param_1 + 0x3c),uVar13,iVar17);
              uVar8 = uVar5 >> 0x19;
              iVar7 = *(int *)(param_1 + 0x20);
              uVar23 = *(uint *)(param_1 + 0x24);
              local_80 = 0;
              while( true ) {
                uVar5 = uVar23 & uVar5;
                uVar6 = *(uint *)(iVar7 + uVar5);
                uVar19 = uVar6 ^ uVar8 * 0x1010101;
                uVar19 = ~uVar19 & 0x80808080 & uVar19 + 0xfefefeff;
                while (uVar19 != 0) {
                  uVar21 = uVar19 >> 8;
                  uVar9 = uVar19 >> 0x10;
                  uVar1 = uVar19 >> 0x18;
                  uVar2 = uVar19 << 0x18;
                  uVar19 = uVar19 - 1 & uVar19;
                  uVar21 = uVar5 + ((uint)LZCOUNT(uVar2 | (uVar21 & 0xff) << 0x10 |
                                                  (uVar9 & 0xff) << 8 | uVar1) >> 3) & uVar23;
                  puVar11 = (undefined4 *)(iVar7 + -0xc + uVar21 * -0xc);
                  if ((iVar17 == puVar11[1]) &&
                     (iVar12 = thunk_FUN_01bed842(uVar13,*puVar11,iVar17), iVar12 == 0)) {
                    uVar8 = *(uint *)(iVar7 + uVar21 * -0xc + -4);
                    if (uVar8 < local_58) {
                      puVar10 = (undefined4 *)(param_4[1] + uVar8 * 0x10);
                    }
                    uVar13 = puVar10[2];
                    uVar18 = puVar10[3];
                    puVar10 = (undefined4 *)thunk_FUN_01be5118(8);
                    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(4,8);
                    }
                    *puVar10 = uVar13;
                    puVar10[1] = uVar18;
                    local_28 = &LAB_01963050;
                    local_2c = &local_54;
                    FUN_00664898(&local_38,&DAT_0059e6d3,&local_2c);
                    local_44 = local_38;
                    uStack_40 = uStack_34;
                    uStack_3c = uStack_30;
                    local_48 = 1;
                    iVar17 = *(int *)(param_1 + 0x4c);
                    local_50 = 1;
                    local_4c = puVar10;
                    if (iVar17 == *(int *)(param_1 + 0x44)) {
                      FUN_014f8acc(param_1 + 0x44);
                    }
                    puVar10 = (undefined4 *)(*(int *)(param_1 + 0x48) + iVar17 * 0x18);
                    *puVar10 = local_50;
                    puVar10[1] = local_4c;
                    puVar10[2] = local_48;
                    puVar10[3] = local_44;
                    puVar10[4] = uStack_40;
                    puVar10[5] = uStack_3c;
                    *(int *)(param_1 + 0x4c) = iVar17 + 1;
                    goto LAB_006ca748;
                  }
                }
                if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
                local_80 = local_80 + 4;
                uVar5 = uVar5 + local_80;
              }
            }
            iVar17 = FUN_006e58b4(param_1,uVar13,iVar17);
            if (iVar17 == 0) {
              local_50 = *puVar10;
              local_4c = (undefined4 *)puVar10[1];
              local_48 = puVar10[2];
              local_44 = puVar10[3];
              if (local_58 == *param_4) {
                FUN_01aa1b90(param_4);
              }
              puVar11 = (undefined4 *)(param_4[1] + local_58 * 0x10);
              *puVar11 = local_50;
              puVar11[1] = local_4c;
              puVar11[2] = local_48;
              puVar11[3] = local_44;
              uVar13 = *puVar10;
              uVar18 = puVar10[1];
              param_4[2] = local_58 + 1;
              FUN_006ca0b8(param_1,uVar13,uVar18,param_4);
              if (param_4[2] == 0) {
                local_58 = 0;
              }
              else {
                local_58 = param_4[2] - 1;
                param_4[2] = local_58;
              }
            }
LAB_006ca748:
            puVar10 = puVar25;
          } while (puVar25 != puVar24 + iVar26 * 4);
        }
        uVar5 = FUN_01a60560(*puVar4,*(undefined4 *)(param_1 + 0x34),*puVar20,
                             *(undefined4 *)(param_1 + 0x3c),param_2,param_3);
        uVar8 = uVar5 >> 0x19;
        iVar17 = *(int *)(param_1 + 0x20);
        uVar23 = *(uint *)(param_1 + 0x24);
        local_58 = 0;
        do {
          uVar5 = uVar23 & uVar5;
          uVar19 = *(uint *)(iVar17 + uVar5);
          uVar6 = uVar19 ^ uVar8 * 0x1010101;
          uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
          while (uVar6 != 0) {
            uVar21 = uVar6 >> 8;
            uVar9 = uVar6 >> 0x10;
            uVar1 = uVar6 >> 0x18;
            uVar2 = uVar6 << 0x18;
            uVar6 = uVar6 - 1 & uVar6;
            uVar21 = uVar5 + ((uint)LZCOUNT(uVar2 | (uVar21 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 |
                                            uVar1) >> 3) & uVar23;
            puVar4 = (undefined4 *)(iVar17 + -0xc + uVar21 * -0xc);
            if ((param_3 == puVar4[1]) &&
               (iVar26 = thunk_FUN_01bed842(param_2,*puVar4,param_3), iVar26 == 0)) {
              iVar26 = ((int)(uVar21 * 0xc) >> 2) * -0x55555555;
              puVar22 = (uint *)(iVar17 + (iVar26 - 4U & uVar23));
              uVar8 = *puVar22;
              uVar5 = *(uint *)(iVar17 + iVar26) & 0x80808080 & *(uint *)(iVar17 + iVar26) << 1;
              uVar14 = 0x80;
              if (((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                 (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) +
                  ((uint)LZCOUNT(uVar8 & 0x80808080 & uVar8 << 1) >> 3) < 4) {
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                uVar14 = 0xff;
              }
              *(undefined1 *)(iVar17 + iVar26) = uVar14;
              iVar17 = *(int *)(param_1 + 0x2c);
              *(undefined1 *)(puVar22 + 1) = uVar14;
              *(int *)(param_1 + 0x2c) = iVar17 + -1;
              return;
            }
          }
          if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) {
            return;
          }
          local_58 = local_58 + 4;
          uVar5 = uVar5 + local_58;
        } while( true );
      }
    }
    if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) goto LAB_006ca8e4;
    local_5c = local_5c + 4;
    uVar5 = uVar5 + local_5c;
  } while( true );
}

