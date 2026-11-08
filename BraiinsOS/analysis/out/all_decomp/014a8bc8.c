// FUN_014a8bc8 @ 014a8bc8 size=1172 calls_out=6 calls_in=1
// strings: 

void FUN_014a8bc8(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int local_c8;
  int local_c4;
  int local_c0;
  uint *local_b8;
  uint *local_b4;
  int local_b0;
  uint *local_ac;
  int local_a8 [8];
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  int local_60 [8];
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  iVar7 = *param_2;
  puVar11 = (uint *)param_2[1];
  puVar8 = puVar11 + param_2[2] * 4;
  local_c0 = 0;
  local_c4 = 4;
  local_c8 = 0;
  puVar15 = puVar11;
  local_b8 = puVar11;
  local_b4 = puVar11;
  local_b0 = iVar7;
  local_ac = puVar8;
  if (param_2[2] != 0) {
    puVar10 = puVar11;
LAB_014a8c4c:
    puVar15 = puVar10 + 4;
    local_b4 = puVar15;
    if (*puVar10 == 2) goto LAB_014a8fb8;
    if ((*puVar10 & 1) == 0) {
      local_38 = puVar10[3];
      local_40 = puVar10[1];
      local_3c = puVar10[2];
      FUN_0155dbb4(local_a8,&local_c8,&local_40);
      if (local_a8[0] == -0x7fffffd7) goto LAB_014a8c40;
      local_40 = local_40 & 0xffff0000;
      puVar5 = (uint *)FUN_014c9ad8(&local_40,local_a8);
    }
    else {
      local_80 = puVar10[1];
      local_7c = puVar10[2];
      local_78 = puVar10[3];
      local_88 = 0;
      local_84 = 0;
      uVar4 = thunk_FUN_016d4a50(0x2000);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x2000);
      }
      local_2c = &local_88;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0x2000;
      local_40 = uVar4;
      FUN_0146ac38(&local_70,&local_40);
      puVar3 = local_68;
      puVar2 = local_6c;
      puVar1 = local_70;
      puVar5 = local_6c;
      if (local_70 != (uint *)&DAT_80000000) {
        local_68 = local_70;
        local_70 = local_6c;
        puVar5 = local_6c + (int)puVar3 * 3;
        local_64 = puVar5;
        if (puVar3 != (uint *)0x0) {
          iVar9 = 0;
LAB_014a8d04:
          uVar4 = *(uint *)((int)puVar2 + iVar9);
          if (uVar4 != 0x80000000) {
            local_3c = *(uint *)((int)puVar2 + iVar9 + 4);
            local_38 = *(uint *)((int)puVar2 + iVar9 + 8);
            local_40 = uVar4;
            FUN_0155dbb4(local_60,&local_c8,&local_40);
            if (local_60[0] == -0x7fffffd7) goto code_r0x014a8d48;
            local_40 = local_40 & 0xffff0000;
            local_6c = (uint *)((int)puVar2 + iVar9) + 3;
            puVar5 = (uint *)FUN_014c9ad8(&local_40,local_60);
            puVar12 = (undefined4 *)((int)puVar2 + iVar9 + 0x10);
            for (uVar4 = (((int)puVar3 * 0xc - iVar9) - 0xcU) / 0xc; uVar4 != 0; uVar4 = uVar4 - 1)
            {
              if (puVar12[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar12);
              }
              puVar12 = puVar12 + 3;
            }
            if (puVar1 != (uint *)0x0) {
              thunk_FUN_016d3fb4(puVar2);
            }
            goto joined_r0x014a8e98;
          }
          local_6c = (uint *)((int)puVar2 + iVar9 + 0xc);
        }
        goto LAB_014a8da4;
      }
joined_r0x014a8e98:
      if (local_80 != 0) {
        thunk_FUN_016d3fb4(local_7c);
      }
    }
    *param_1 = -0x80000000;
    param_1[1] = (int)puVar5;
    puVar10 = puVar10 + 5;
    for (uVar4 = (uint)((int)puVar8 - (int)puVar15) >> 4; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (*puVar10 != 0) {
        thunk_FUN_016d3fb4(puVar10[1]);
      }
      puVar10 = puVar10 + 4;
    }
    if (iVar7 != 0) {
      thunk_FUN_016d3fb4(puVar11);
    }
    iVar7 = local_c4;
    iVar13 = 0;
    iVar9 = local_c0;
    do {
      if (iVar9 == 0) {
        if (local_c8 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(iVar7);
        return;
      }
      if ((*(uint *)(iVar7 - iVar13) & 0x7fffffff) == 0) {
        iVar14 = iVar7 - iVar13;
        if ((*(uint *)(iVar14 + 0xc) & 0x7fffffff) != 0) goto LAB_014a8f6c;
LAB_014a8f40:
        iVar6 = *(int *)(iVar14 + 0x18);
      }
      else {
        thunk_FUN_016d3fb4(*(undefined4 *)((iVar7 - iVar13) + 4));
        iVar14 = iVar7 - iVar13;
        if ((*(uint *)(iVar14 + 0xc) & 0x7fffffff) == 0) goto LAB_014a8f40;
LAB_014a8f6c:
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar14 + 0x10));
        iVar6 = *(int *)(iVar14 + 0x18);
      }
      if ((-0x7fffffff < iVar6) && (iVar6 != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar14 + 0x1c));
      }
      iVar9 = iVar9 + -1;
      iVar13 = iVar13 + -0x24;
    } while( true );
  }
LAB_014a8fb8:
  puVar10 = puVar15 + 1;
  for (uVar4 = (uint)((int)puVar8 - (int)puVar15) >> 4; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (*puVar10 != 0) {
      thunk_FUN_016d3fb4(puVar10[1]);
    }
    puVar10 = puVar10 + 4;
  }
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(puVar11);
  }
  *param_1 = local_c8;
  param_1[1] = local_c4;
  param_1[2] = local_c0;
  return;
code_r0x014a8d48:
  iVar9 = iVar9 + 0xc;
  if ((int)puVar3 * 0xc == iVar9) goto code_r0x014a8d54;
  goto LAB_014a8d04;
code_r0x014a8d54:
  local_6c = puVar5;
LAB_014a8da4:
  puVar10 = local_6c + 1;
  for (iVar9 = ((uint)((int)puVar5 - (int)local_6c) >> 2) * -0x55555555; iVar9 != 0;
      iVar9 = iVar9 + -1) {
    if (puVar10[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar10);
    }
    puVar10 = puVar10 + 3;
  }
  if (puVar1 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar2);
  }
  if (local_80 != 0) {
    thunk_FUN_016d3fb4(local_7c);
  }
LAB_014a8c40:
  puVar10 = puVar15;
  if (puVar15 == puVar8) goto LAB_014a8fb0;
  goto LAB_014a8c4c;
LAB_014a8fb0:
  puVar15 = puVar8;
  goto LAB_014a8fb8;
}

