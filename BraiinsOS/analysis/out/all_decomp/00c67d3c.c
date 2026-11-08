// FUN_00c67d3c @ 00c67d3c size=1492 calls_out=8 calls_in=1
// strings: 

void FUN_00c67d3c(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 uVar21;
  int unaff_s16;
  uint local_b4;
  int *local_b0;
  undefined4 *local_ac;
  int *local_a8;
  undefined4 *local_a4;
  undefined4 *local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined4 local_94;
  int *local_90;
  int local_8c;
  int *local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int *local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  
  FUN_00c4f1ac(&local_b4);
  iVar5 = local_7c;
  iVar20 = local_80;
  iVar15 = local_84;
  piVar4 = local_88;
  puVar3 = local_98;
  piVar13 = local_a8;
  puVar14 = local_ac;
  piVar12 = local_b0;
  uVar2 = local_b4;
  if (local_ac != (undefined4 *)0x2) {
    piVar16 = local_a8;
    puVar17 = local_9c;
    puVar18 = local_a0;
    puVar19 = local_a4;
    if (((uint)local_ac & 1) == 0) {
      piVar16 = (int *)0xd506443e;
      puVar19 = (undefined4 *)0x87a6e9e8;
      puVar18 = (undefined4 *)0x24a34114;
      puVar17 = (undefined4 *)0x68dd2e2;
      if (local_84 != 0) {
        piVar7 = local_88;
        do {
          if (piVar7[2] != 0) {
            iVar11 = piVar7[2] * 0x18;
            piVar9 = (int *)(piVar7[1] + 8);
            do {
              piVar16 = (int *)*piVar9;
              puVar19 = (undefined4 *)piVar9[1];
              puVar18 = (undefined4 *)piVar9[2];
              puVar17 = (undefined4 *)piVar9[3];
              if ((piVar16 != (int *)0xd506443e || puVar18 != (undefined4 *)0x24a34114) ||
                  (puVar19 != (undefined4 *)0x87a6e9e8 || puVar17 != (undefined4 *)0x68dd2e2))
              goto LAB_00c67efc;
              piVar9 = piVar9 + 6;
              iVar11 = iVar11 + -0x18;
            } while (iVar11 != 0);
          }
          piVar16 = (int *)0xd506443e;
          piVar7 = piVar7 + 3;
        } while (piVar7 != local_88 + local_84 * 3);
        puVar19 = (undefined4 *)0x87a6e9e8;
        puVar18 = (undefined4 *)0x24a34114;
        puVar17 = (undefined4 *)0x68dd2e2;
      }
    }
LAB_00c67efc:
    if ((piVar16 != (int *)0xd506443e || puVar18 != (undefined4 *)0x24a34114) ||
        (puVar19 != (undefined4 *)0x87a6e9e8 || puVar17 != (undefined4 *)0x68dd2e2)) {
      local_ac = local_a4;
      local_a8 = local_a0;
      local_a4 = local_9c;
      local_9c = (undefined4 *)local_94;
      local_98 = local_90;
      local_94 = local_8c;
      local_b0 = piVar13;
      local_a0 = puVar3;
      local_7c = local_74;
      local_80 = local_78;
      local_84 = iVar5;
      local_88 = (int *)iVar20;
      local_90 = piVar4;
      local_b4 = (uint)puVar14;
      local_8c = iVar15;
      FUN_00c4f340(&local_70,param_2,uVar2,piVar12,&local_b4);
      if (local_70 != (int *)0x2) {
        FUN_00c4f594(&local_70);
      }
      param_1[4] = puVar17;
      *param_1 = 0;
      param_1[1] = piVar16;
      param_1[2] = puVar19;
      param_1[5] = 0xd506443e;
      param_1[3] = puVar18;
      param_1[6] = 0x87a6e9e8;
      param_1[7] = 0x24a34114;
      param_1[8] = 0x68dd2e2;
      return;
    }
    if (local_ac != (undefined4 *)0x2) {
      if (local_98 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(local_94);
      }
      iVar15 = 0;
      while (iVar15 != local_78) {
        piVar12 = (int *)(local_7c + iVar15 * 0xc);
        puVar14 = (undefined4 *)(piVar12[1] + 4);
        for (iVar20 = piVar12[2]; iVar20 != 0; iVar20 = iVar20 + -1) {
          if (puVar14[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar14);
          }
          puVar14 = puVar14 + 3;
        }
        iVar15 = iVar15 + 1;
        if (*piVar12 != 0) {
          thunk_FUN_016d3fb4(piVar12[1]);
        }
      }
      if (local_80 != 0) {
        thunk_FUN_016d3fb4(local_7c);
      }
      uVar21 = 0;
      local_94 = 0;
      iVar15 = local_84 * 0xc;
      local_a8 = local_88 + local_84 * 3;
      local_b0 = local_88;
      puVar14 = local_9c;
      piVar12 = local_88;
      while( true ) {
        local_a4 = (undefined4 *)0x0;
        if (local_88 == (int *)0x0) break;
        local_a4 = (undefined4 *)0x0;
        if (iVar15 == 0) break;
        piVar13 = piVar12 + 3;
        local_9c = (undefined4 *)*piVar12;
        local_b0 = piVar13;
        if (local_9c == (undefined4 *)0x80000000) break;
        local_a4 = (undefined4 *)piVar12[1];
        local_98 = local_a4 + piVar12[2] * 6;
        local_a0 = local_a4;
        if (piVar12[2] != 0) {
          local_a0 = local_a4 + 6;
          piVar12 = (int *)*local_a4;
          if (piVar12 != (int *)0x0) {
            iVar15 = local_a4[1];
            uVar21 = local_a4[5];
            uVar6 = local_a4[2];
            uVar8 = local_a4[3];
            uVar10 = local_a4[4];
            (**(code **)(iVar15 + 0xc))
                      (&local_70,(int)piVar12 + (*(int *)(iVar15 + 8) - 1U & 0xfffffff8) + 8);
            if ((local_70 != (int *)0xd506443e || local_68 != 0x24a34114) ||
                (local_6c != -0x78591618 || iStack_64 != 0x68dd2e2)) {
              local_70 = piVar12;
              local_6c = iVar15;
              local_68 = uVar6;
              iStack_64 = uVar8;
              uStack_60 = uVar10;
              local_5c = uVar21;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_0035e2fc,99,&local_70,&DAT_01874580,&DAT_018a7188);
            }
            goto LAB_00c68218;
          }
        }
        FUN_00a864b0(&local_a4);
        iVar15 = iVar15 + -0xc;
        puVar14 = local_9c;
        piVar12 = piVar13;
      }
      goto LAB_00c6816c;
    }
  }
  *param_1 = 2;
  param_1[1] = 0;
  return;
  while (bVar1 = (bool)hasExclusiveAccess(piVar12), !bVar1) {
LAB_00c68218:
    puVar14 = local_9c;
    if (*piVar12 != 1) {
      ClearExclusiveLocal();
      unaff_s16 = piVar12[2];
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar12;
        bVar1 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar1);
      *piVar12 = iVar15 + -1;
      uVar21 = 1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(piVar12);
        puVar14 = local_9c;
      }
      goto LAB_00c6816c;
    }
  }
  *piVar12 = 0;
  DataMemoryBarrier(0xb);
  uVar21 = 1;
  unaff_s16 = piVar12[2];
  if (piVar12 != (int *)0xffffffff) {
    piVar13 = piVar12 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(piVar12);
      puVar14 = local_9c;
    }
  }
LAB_00c6816c:
  local_9c = puVar14;
  *param_1 = 2;
  param_1[1] = uVar21;
  param_1[2] = unaff_s16;
  FUN_006afa00(&local_b4);
  return;
}

