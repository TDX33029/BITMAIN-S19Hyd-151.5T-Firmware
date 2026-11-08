// FUN_006b0f78 @ 006b0f78 size=1588 calls_out=11 calls_in=1
// strings: 

void FUN_006b0f78(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
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
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  FUN_0074c4ec(&local_a4);
  iVar11 = local_6c;
  iVar14 = local_70;
  iVar12 = local_74;
  piVar3 = local_78;
  puVar13 = local_88;
  piVar2 = local_98;
  piVar15 = local_9c;
  piVar9 = local_a0;
  piVar17 = local_a4;
  if (local_9c != (int *)0x2) {
    puVar8 = local_90;
    puVar16 = local_94;
    piVar18 = local_98;
    puVar19 = local_8c;
    if (((uint)local_9c & 1) == 0) {
      piVar18 = (int *)0x50f052f7;
      puVar16 = (undefined4 *)0x9909b2a5;
      puVar8 = (undefined4 *)0xdf97b325;
      puVar19 = (undefined4 *)0xb55cb20e;
      if (local_74 != 0) {
        piVar6 = local_78;
        do {
          if (piVar6[2] != 0) {
            piVar10 = (int *)(piVar6[1] + 8);
            iVar7 = piVar6[2] * 0x18;
            do {
              piVar18 = (int *)*piVar10;
              puVar8 = (undefined4 *)piVar10[2];
              puVar19 = (undefined4 *)piVar10[3];
              puVar16 = (undefined4 *)piVar10[1];
              if ((piVar18 != (int *)0x50f052f7 || puVar8 != (undefined4 *)0xdf97b325) ||
                  (puVar16 != (undefined4 *)0x9909b2a5 || puVar19 != (undefined4 *)0xb55cb20e))
              goto LAB_006b1130;
              piVar10 = piVar10 + 6;
              iVar7 = iVar7 + -0x18;
            } while (iVar7 != 0);
          }
          piVar18 = (int *)0x50f052f7;
          piVar6 = piVar6 + 3;
        } while (piVar6 != local_78 + local_74 * 3);
        puVar16 = (undefined4 *)0x9909b2a5;
        puVar8 = (undefined4 *)0xdf97b325;
        puVar19 = (undefined4 *)0xb55cb20e;
      }
    }
LAB_006b1130:
    if ((piVar18 != (int *)0x50f052f7 || puVar8 != (undefined4 *)0xdf97b325) ||
        (puVar16 != (undefined4 *)0x9909b2a5 || puVar19 != (undefined4 *)0xb55cb20e)) {
      local_9c = local_94;
      local_98 = local_90;
      local_94 = local_8c;
      local_8c = (undefined4 *)local_84;
      local_88 = local_80;
      local_84 = local_7c;
      local_a0 = piVar2;
      local_90 = puVar13;
      local_6c = local_64;
      local_70 = local_68;
      local_74 = iVar11;
      local_78 = (int *)iVar14;
      local_80 = piVar3;
      local_a4 = piVar15;
      local_7c = iVar12;
      FUN_00a7dac0(&local_60,param_2,piVar17,piVar9,&local_a4);
      if (local_60 != (int *)0x2) {
        FUN_006af8cc(&local_60);
      }
      param_1[1] = piVar18;
      param_1[2] = puVar16;
      *param_1 = 0;
      param_1[4] = puVar19;
      param_1[5] = 0x50f052f7;
      param_1[3] = puVar8;
      param_1[6] = 0x9909b2a5;
      param_1[8] = 0xb55cb20e;
      param_1[7] = 0xdf97b325;
      return;
    }
    if (local_9c != (int *)0x2) {
      iVar12 = local_74 * 3;
      if (local_88 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(local_84);
      }
      iVar14 = 0;
      piVar17 = local_78 + local_74 * 3;
      while (iVar14 != local_68) {
        piVar9 = (int *)(local_6c + iVar14 * 0xc);
        puVar13 = (undefined4 *)(piVar9[1] + 4);
        for (iVar11 = piVar9[2]; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (puVar13[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar13);
          }
          puVar13 = puVar13 + 3;
        }
        iVar14 = iVar14 + 1;
        if (*piVar9 != 0) {
          thunk_FUN_016d3fb4(piVar9[1]);
        }
      }
      if (local_70 != 0) {
        thunk_FUN_016d3fb4(local_6c);
      }
      local_9c = (int *)local_7c;
      iVar14 = local_74 * 0xc;
      iVar11 = -0x80000000;
      local_84 = 0;
      local_94 = (undefined4 *)0x0;
      local_a0 = local_78;
      local_a4 = local_78;
      piVar9 = local_78;
      local_98 = piVar17;
      if (local_78 != (int *)0x0 && iVar14 != 0) {
        do {
          local_94 = (undefined4 *)0x0;
          piVar15 = piVar9 + 3;
          puVar13 = (undefined4 *)*piVar9;
          local_a0 = piVar15;
          if (puVar13 == (undefined4 *)0x80000000) break;
          local_94 = (undefined4 *)piVar9[1];
          local_88 = local_94 + piVar9[2] * 6;
          local_90 = local_94;
          local_8c = puVar13;
          if (piVar9[2] != 0) {
            local_90 = local_94 + 6;
            piVar9 = (int *)*local_94;
            if (piVar9 != (int *)0x0) {
              iVar12 = local_94[1];
              uVar4 = local_94[4];
              uVar5 = local_94[5];
              (**(code **)(iVar12 + 0xc))
                        (&local_60,(int)piVar9 + (*(int *)(iVar12 + 8) - 1U & 0xfffffff8) + 8);
              if ((local_60 != (int *)0x50f052f7 || local_58 != -0x20684cdb) ||
                  (local_5c != -0x66f64d5b || local_54 != -0x4aa34df2)) {
                local_60 = piVar9;
                local_5c = iVar12;
                local_50 = uVar4;
                local_4c = uVar5;
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_0035e2fc,99,&local_60,&DAT_01858978,&DAT_018a7188);
              }
              goto LAB_006b1460;
            }
          }
          FUN_00a864b0(&local_94);
          iVar14 = iVar14 + -0xc;
          local_94 = (undefined4 *)0x0;
          piVar9 = piVar15;
        } while (local_78 != (int *)0x0 && iVar14 != 0);
      }
      goto LAB_006b13b4;
    }
  }
  *param_1 = 2;
  param_1[1] = 0x80000000;
  return;
  while (bVar1 = (bool)hasExclusiveAccess(piVar9), !bVar1) {
LAB_006b1460:
    if (*piVar9 != 1) {
      ClearExclusiveLocal();
      goto LAB_006b14d4;
    }
  }
  *piVar9 = 0;
  DataMemoryBarrier(0xb);
  iVar11 = piVar9[2];
  piVar17 = (int *)piVar9[3];
  iVar12 = piVar9[4];
  if (piVar9 != (int *)0xffffffff) {
    piVar15 = piVar9 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar15;
      bVar1 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar1);
    *piVar15 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(piVar9);
    }
  }
  if (iVar11 == -0x80000000) {
    piVar9 = piVar17;
LAB_006b14d4:
    iVar14 = piVar9[3];
    iVar12 = piVar9[4];
    if (iVar12 == 0) {
      piVar17 = (int *)&DAT_00000001;
    }
    else {
      piVar17 = (int *)thunk_FUN_016d4a50(iVar12);
      if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar12);
      }
    }
    FUN_016dd1aa(piVar17,iVar14,iVar12);
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(piVar9);
    }
    iVar11 = iVar12;
  }
LAB_006b13b4:
  *param_1 = 2;
  param_1[1] = iVar11;
  param_1[2] = piVar17;
  param_1[3] = iVar12;
  FUN_006afa00(&local_a4);
  return;
}

