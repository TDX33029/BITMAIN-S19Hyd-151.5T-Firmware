// FUN_010053dc @ 010053dc size=988 calls_out=10 calls_in=1
// strings: /{*__private__axum_fallback} | no path for ro

void FUN_010053dc(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  byte *pbVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int local_210;
  undefined4 local_1f0;
  undefined4 *local_1ec;
  uint *puStack_1e8;
  uint *local_1e4;
  uint local_1e0;
  uint *local_1dc;
  int local_1d8;
  int local_1d4;
  undefined1 auStack_1d0 [136];
  uint local_148;
  undefined4 local_144;
  undefined4 local_140;
  int local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  
  puStack_1e8 = (uint *)(uint)*(byte *)(param_2 + 0x28);
  puVar13 = (uint *)*param_3;
  iVar18 = param_3[1];
  piVar10 = (int *)param_3[8];
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | *(byte *)(param_3 + 10);
  iVar15 = param_3[3];
  if (iVar18 == 0) {
    local_1f0 = 0;
  }
  else {
    local_1f0 = 4;
    puStack_1e8 = puVar13 + iVar18 * -0x24 + -0x24;
    param_3 = (undefined4 *)(iVar18 * 0x91 + 0x95);
  }
  local_1d8 = (int)puVar13 + iVar18 + 1;
  puVar17 = puVar13 + 1;
  uVar5 = ~*puVar13 & 0x80808080;
  local_1ec = param_3;
  local_1e4 = puVar13;
  local_1e0 = uVar5;
  local_1dc = puVar17;
  local_1d4 = iVar15;
LAB_01005494:
  if (iVar15 == 0) {
    iVar15 = 0;
  }
  else {
    uVar6 = uVar5;
    puVar16 = puVar17;
    if (uVar5 == 0) {
      do {
        puVar17 = puVar16 + 1;
        uVar5 = *puVar16;
        puVar13 = puVar13 + -0x90;
        puVar16 = puVar17;
      } while ((uVar5 & 0x80808080) == 0x80808080);
      uVar6 = uVar5 & 0x80808080 ^ 0x80808080;
      local_1e4 = puVar13;
      local_1dc = puVar17;
    }
    uVar5 = uVar6 - 1 & uVar6;
    uVar6 = (uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                          | uVar6 >> 0x18) >> 3;
    uVar11 = puVar13[uVar6 * -0x24 + -0x24];
    uVar19 = puVar13[uVar6 * -0x24 + -0x23];
    local_1e0 = uVar5;
    FUN_01bed4e2(auStack_1d0,puVar13 + uVar6 * -0x24 + -0x22,0x88);
    iVar15 = iVar15 + -1;
    if (uVar19 != 4) {
      local_148 = uVar19;
      FUN_01bed4e2(&local_144,auStack_1d0,0x88);
      if (piVar10[5] == 0) {
LAB_01005740:
        local_1d4 = iVar15;
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("no path for ro",0x41,&DAT_01c1d1dc);
      }
      uVar7 = FUN_01656218(piVar10[6],piVar10[7],piVar10[8],piVar10[9],uVar11);
      uVar6 = uVar7 >> 0x19;
      iVar18 = piVar10[2];
      local_210 = 0;
      do {
        uVar7 = piVar10[3] & uVar7;
        uVar20 = *(uint *)(iVar18 + uVar7);
        uVar8 = uVar20 ^ uVar6 * 0x1010101;
        uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
        while (uVar8 != 0) {
          uVar9 = uVar8 >> 8;
          uVar1 = uVar8 >> 0x10;
          uVar2 = uVar8 >> 0x18;
          uVar3 = uVar8 << 0x18;
          uVar8 = uVar8 - 1 & uVar8;
          uVar9 = uVar7 + ((uint)LZCOUNT(uVar3 | (uVar9 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                         uVar2) >> 3) & piVar10[3];
          if (uVar11 == *(uint *)(iVar18 + -0xc + uVar9 * -0xc)) {
            iVar18 = iVar18 + uVar9 * -0xc;
            iVar12 = *(int *)(iVar18 + -4);
            uVar6 = *(uint *)(iVar18 + -8);
            pbVar14 = (byte *)(uVar6 + 8);
            if (iVar12 == 0x1c) {
              iVar18 = thunk_FUN_01bed842(pbVar14,"/{*__private__axum_fallback}",0x1c);
              if (iVar18 == 0) goto LAB_010056d8;
            }
            else {
              if (iVar12 == 1) {
                uVar6 = (uint)*pbVar14;
              }
              if (iVar12 == 1 && uVar6 == 0x2f) {
LAB_010056d8:
                local_b0 = uVar19;
                FUN_01bed4e2(&local_ac,auStack_1d0,0x88);
                FUN_01a65a00(param_2,pbVar14,iVar12,&local_b0);
                goto LAB_01005494;
              }
            }
            if (uVar19 == 3) {
              local_ac = FUN_00fad390(local_144,local_140);
              local_b0 = 3;
              local_a8 = &DAT_01c1c4f8;
              FUN_01a65c90(&local_bc,param_2,pbVar14,iVar12,&local_b0);
            }
            else {
              local_b0 = uVar19;
              FUN_01bed4e2(&local_ac,auStack_1d0,0x88);
              FUN_00ff9750(&local_bc,param_2,pbVar14,iVar12,&local_b0);
            }
            if (local_bc != -0x7fffffff) {
              *param_1 = local_bc;
              param_1[1] = local_b8;
              param_1[2] = local_b4;
              local_1d4 = iVar15;
              FUN_00943cd0(&local_1f0);
              DataMemoryBarrier(0xb);
              do {
                iVar15 = *piVar10;
                bVar4 = (bool)hasExclusiveAccess(piVar10);
              } while (!bVar4);
              *piVar10 = iVar15 + -1;
              goto LAB_01005798;
            }
            goto LAB_01005494;
          }
        }
        if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) goto LAB_01005740;
        local_210 = local_210 + 4;
        uVar7 = uVar7 + local_210;
      } while( true );
    }
  }
  local_1d4 = iVar15;
  FUN_00943cd0(&local_1f0);
  *param_1 = -0x7fffffff;
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar10;
    bVar4 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar4);
  *piVar10 = iVar15 + -1;
LAB_01005798:
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00711b94(piVar10);
    return;
  }
  return;
}

