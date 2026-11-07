// FUN_0162609c @ 0162609c size=1284 calls_out=3 calls_in=3
// strings: 

void FUN_0162609c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined *puVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  byte bVar19;
  ulonglong uVar20;
  int local_68;
  uint local_60;
  uint *local_58;
  uint local_54;
  int local_4c;
  uint *local_48;
  uint local_44;
  int iStack_3c;
  uint **local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar8 = *(uint *)(param_2 + 8);
  local_48 = (uint *)0x0;
  if (uVar8 != 2) {
    iVar3 = *(int *)(param_2 + 0xc);
    if ((uVar8 & 1) != 0) {
      iVar3 = iVar3 + (*(int *)(*(int *)(param_2 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    local_2c = 0x3e9758c7;
    local_30 = -0x4bbfcadd;
    local_34 = -0x14f4b5ae;
    local_38 = (uint **)0x7fb58db3;
    uVar20 = (**(code **)(*(int *)(param_2 + 0x10) + 0x48))(iVar3,&local_38);
    puVar5 = (undefined4 *)(uVar20 >> 0x20);
    if ((uVar20 & 1) != 0 && puVar5 != (undefined4 *)0x0) {
      local_38 = &local_48;
      (*(code *)*puVar5)((uint *)(param_2 + 8),param_2,&local_38,&DAT_018ae3e0);
      puVar14 = local_48;
      if (local_48 != (uint *)0x0) {
        bVar19 = 2;
        local_58 = local_48;
        local_54 = local_44;
        local_4c = iStack_3c;
        if (iStack_3c != 0) {
          local_60 = local_44 & 0x54062199;
          local_68 = 0;
          uVar8 = local_60;
          while( true ) {
            uVar9 = *(uint *)((int)local_48 + uVar8);
            uVar12 = (uVar9 & 0x80808080 ^ 0x80808080) & (uVar9 ^ 0x2a2a2a2a) + 0xfefefeff;
            while (uVar12 != 0) {
              uVar15 = uVar8 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                              (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                       local_44;
              puVar17 = local_48 + uVar15 * -6 + -6;
              uVar12 = uVar12 - 1 & uVar12;
              if ((*puVar17 == 0xd256e537 && puVar17[2] == 0x54062199) &&
                  (puVar17[1] == 0x33689a11 && puVar17[3] == 0x8d15d62d)) {
                iVar3 = local_48[uVar15 * -6 + -2] +
                        (*(int *)(local_48[uVar15 * -6 + -1] + 8) - 1U & 0xfffffff8) + 8;
                (**(code **)(local_48[uVar15 * -6 + -1] + 0xc))(&local_38,iVar3);
                if (((local_38 != (uint **)0xd256e537 || local_30 != 0x54062199) ||
                     (local_34 != 0x33689a11 || local_2c != -0x72ea29d3)) || (iVar3 == 0))
                goto LAB_01626158;
                iVar3 = 0;
                goto LAB_01626418;
              }
            }
            if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
            local_68 = local_68 + 4;
            uVar8 = uVar8 + local_68 & local_44;
          }
        }
        goto LAB_01626158;
      }
    }
  }
  bVar19 = 2;
  local_58 = &DAT_005674cc;
  local_54 = 0;
  local_4c = 0;
  goto LAB_01626158;
LAB_01626418:
  uVar9 = *(uint *)((int)puVar14 + local_60);
  uVar8 = (uVar9 & 0x80808080 ^ 0x80808080) & (uVar9 ^ 0x2a2a2a2a) + 0xfefefeff;
  while (uVar8 != 0) {
    uVar12 = local_60 +
             ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                            (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & local_44;
    puVar17 = puVar14 + uVar12 * -6 + -6;
    uVar8 = uVar8 - 1 & uVar8;
    if ((*puVar17 == 0xd256e537 && puVar17[2] == 0x54062199) &&
        (puVar17[1] == 0x33689a11 && puVar17[3] == 0x8d15d62d)) {
      puVar13 = (undefined *)
                (puVar14[uVar12 * -6 + -2] +
                 (*(int *)(puVar14[uVar12 * -6 + -1] + 8) - 1U & 0xfffffff8) + 8);
      (**(code **)(puVar14[uVar12 * -6 + -1] + 0xc))(&local_38,puVar13);
      if (((local_38 != (uint **)0xd256e537 || local_30 != 0x54062199) ||
           (local_34 != 0x33689a11 || local_2c != -0x72ea29d3)) || (puVar13 == (undefined *)0x0))
      goto LAB_0162655c;
      goto LAB_01626574;
    }
  }
  if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) goto LAB_0162655c;
  iVar3 = iVar3 + 4;
  local_60 = local_60 + iVar3 & local_44;
  goto LAB_01626418;
LAB_0162655c:
  puVar13 = &DAT_018d8778;
  DataMemoryBarrier(0xb);
  if (DAT_018d87c0 != 2) {
    FUN_0127c468();
  }
LAB_01626574:
  bVar19 = puVar13[0x29];
  uVar4 = *(undefined4 *)(puVar13 + 0x10);
  uVar7 = *(undefined4 *)(puVar13 + 0x14);
  uVar10 = *(undefined4 *)(puVar13 + 0x18);
  uVar11 = *(undefined4 *)(puVar13 + 0x1c);
  uVar18 = *(undefined4 *)(puVar13 + 0x20);
  param_1[5] = *(undefined4 *)(puVar13 + 0x24);
  *param_1 = uVar4;
  param_1[1] = uVar7;
  param_1[2] = uVar10;
  param_1[3] = uVar11;
  param_1[4] = uVar18;
  bVar19 = ~bVar19 & 1;
LAB_01626158:
  *(byte *)(param_1 + 6) = bVar19;
  if (local_54 != 0) {
    if (local_4c != 0) {
      puVar17 = local_58 + 1;
      uVar8 = ~*local_58 & 0x80808080;
      puVar14 = local_58;
      do {
        puVar16 = puVar17;
        if (uVar8 == 0) {
          do {
            puVar17 = puVar16 + 1;
            uVar8 = *puVar16;
            puVar14 = puVar14 + -0x18;
            puVar16 = puVar17;
          } while ((uVar8 & 0x80808080) == 0x80808080);
          uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = uVar8 >> 8;
        uVar12 = uVar8 >> 0x10;
        uVar15 = uVar8 >> 0x18;
        uVar1 = uVar8 << 0x18;
        uVar8 = uVar8 - 1 & uVar8;
        local_4c = local_4c + -1;
        uVar9 = (uint)LZCOUNT(uVar1 | (uVar9 & 0xff) << 0x10 | (uVar12 & 0xff) << 8 | uVar15) >> 3;
        piVar6 = (int *)puVar14[uVar9 * -6 + -2];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(puVar14[uVar9 * -6 + -2],puVar14[uVar9 * -6 + -1]);
        }
      } while (local_4c != 0);
    }
    if (local_54 * 0x19 != -0x1d) {
      thunk_FUN_016d3fb4(local_58 + local_54 * -6 + -6);
    }
  }
  return;
}

