// FUN_006afb98 @ 006afb98 size=1460 calls_out=8 calls_in=3
// strings: 

void FUN_006afb98(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  int iVar17;
  int *piVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int *local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  int *local_80;
  int local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  
  FUN_0074c4ec(&local_a4);
  iVar5 = local_6c;
  iVar20 = local_70;
  iVar17 = local_74;
  piVar4 = local_78;
  puVar16 = local_88;
  piVar3 = local_98;
  piVar2 = local_9c;
  piVar15 = local_a0;
  piVar14 = local_a4;
  if (local_9c != (int *)0x2) {
    piVar18 = local_98;
    puVar19 = local_8c;
    puVar21 = local_90;
    puVar22 = local_94;
    if (((uint)local_9c & 1) == 0) {
      piVar18 = (int *)0x15b11d7e;
      puVar22 = (undefined4 *)0xb3f9e9b0;
      puVar21 = (undefined4 *)0xa423c218;
      puVar19 = (undefined4 *)0xf4422d85;
      if (local_74 != 0) {
        piVar8 = local_78;
        do {
          if (piVar8[2] != 0) {
            iVar13 = piVar8[2] * 0x18;
            piVar10 = (int *)(piVar8[1] + 8);
            do {
              piVar18 = (int *)*piVar10;
              puVar22 = (undefined4 *)piVar10[1];
              puVar21 = (undefined4 *)piVar10[2];
              puVar19 = (undefined4 *)piVar10[3];
              if ((piVar18 != (int *)0x15b11d7e || puVar21 != (undefined4 *)0xa423c218) ||
                  (puVar22 != (undefined4 *)0xb3f9e9b0 || puVar19 != (undefined4 *)0xf4422d85))
              goto LAB_006afd4c;
              piVar10 = piVar10 + 6;
              iVar13 = iVar13 + -0x18;
            } while (iVar13 != 0);
          }
          piVar18 = (int *)0x15b11d7e;
          piVar8 = piVar8 + 3;
        } while (piVar8 != local_78 + local_74 * 3);
        puVar22 = (undefined4 *)0xb3f9e9b0;
        puVar21 = (undefined4 *)0xa423c218;
        puVar19 = (undefined4 *)0xf4422d85;
      }
    }
LAB_006afd4c:
    if ((piVar18 != (int *)0x15b11d7e || puVar21 != (undefined4 *)0xa423c218) ||
        (puVar22 != (undefined4 *)0xb3f9e9b0 || puVar19 != (undefined4 *)0xf4422d85)) {
      local_9c = local_94;
      local_98 = local_90;
      local_94 = local_8c;
      local_8c = (undefined4 *)local_84;
      local_88 = local_80;
      local_84 = local_7c;
      local_a0 = piVar3;
      local_90 = puVar16;
      local_6c = local_64;
      local_70 = local_68;
      local_74 = iVar5;
      local_78 = (int *)iVar20;
      local_80 = piVar4;
      local_a4 = piVar2;
      local_7c = iVar17;
      FUN_00a7dac0(&local_60,param_2,piVar14,piVar15,&local_a4);
      if (local_60 != (int *)0x2) {
        FUN_006af8cc(&local_60);
      }
      param_1[1] = piVar18;
      param_1[2] = puVar22;
      *param_1 = 0;
      param_1[4] = puVar19;
      param_1[5] = 0x15b11d7e;
      param_1[3] = puVar21;
      param_1[6] = 0xb3f9e9b0;
      param_1[8] = 0xf4422d85;
      param_1[7] = 0xa423c218;
      return;
    }
    if (local_9c != (int *)0x2) {
      if (local_88 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(local_84);
      }
      iVar17 = 0;
      while (iVar17 != local_68) {
        piVar14 = (int *)(local_6c + iVar17 * 0xc);
        puVar16 = (undefined4 *)(piVar14[1] + 4);
        for (iVar20 = piVar14[2]; iVar20 != 0; iVar20 = iVar20 + -1) {
          if (puVar16[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar16);
          }
          puVar16 = puVar16 + 3;
        }
        iVar17 = iVar17 + 1;
        if (*piVar14 != 0) {
          thunk_FUN_016d3fb4(piVar14[1]);
        }
      }
      if (local_70 != 0) {
        thunk_FUN_016d3fb4(local_6c);
      }
      iVar17 = local_74 * 0xc;
      local_9c = (int *)local_7c;
      local_84 = 0;
      local_a0 = local_78;
      local_a4 = local_78;
      piVar14 = local_78;
      local_98 = local_78 + local_74 * 3;
      if (local_78 != (int *)0x0 && iVar17 != 0) {
        do {
          piVar15 = piVar14 + 3;
          puVar16 = (undefined4 *)*piVar14;
          local_a0 = piVar15;
          if (puVar16 == (undefined4 *)0x80000000) break;
          local_94 = (undefined4 *)piVar14[1];
          local_88 = local_94 + piVar14[2] * 6;
          local_90 = local_94;
          local_8c = puVar16;
          if (piVar14[2] != 0) {
            local_90 = local_94 + 6;
            piVar14 = (int *)*local_94;
            if (piVar14 != (int *)0x0) {
              iVar17 = local_94[1];
              uVar6 = local_94[5];
              uVar7 = local_94[2];
              uVar9 = local_94[3];
              uVar11 = local_94[4];
              (**(code **)(iVar17 + 0xc))
                        (&local_60,(int)piVar14 + (*(int *)(iVar17 + 8) - 1U & 0xfffffff8) + 8);
              if ((local_60 != (int *)0x15b11d7e || local_58 != -0x5bdc3de8) ||
                  (local_5c != -0x4c061650 || iStack_54 != -0xbbdd27b)) {
                local_60 = piVar14;
                local_5c = iVar17;
                local_58 = uVar7;
                iStack_54 = uVar9;
                uStack_50 = uVar11;
                local_4c = uVar6;
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_0035e2fc,99,&local_60,&DAT_01858978,&DAT_018a7188);
              }
              goto LAB_006b005c;
            }
          }
          FUN_00a864b0(&local_94);
          iVar17 = iVar17 + -0xc;
          piVar14 = piVar15;
        } while (local_78 != (int *)0x0 && iVar17 != 0);
      }
      local_94 = (undefined4 *)0x0;
      uVar12 = 2;
      goto LAB_006affc0;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 2;
  return;
  while (bVar1 = (bool)hasExclusiveAccess(piVar14), !bVar1) {
LAB_006b005c:
    if (*piVar14 != 1) {
      ClearExclusiveLocal();
      uVar12 = (undefined1)piVar14[2];
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *piVar14;
        bVar1 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar1);
      *piVar14 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(piVar14);
      }
      goto LAB_006affc0;
    }
  }
  *piVar14 = 0;
  DataMemoryBarrier(0xb);
  uVar12 = (undefined1)piVar14[2];
  if (piVar14 != (int *)0xffffffff) {
    piVar15 = piVar14 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *piVar15;
      bVar1 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar1);
    *piVar15 = iVar17 + -1;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(piVar14);
    }
  }
LAB_006affc0:
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar12;
  FUN_006afa00(&local_a4);
  return;
}

