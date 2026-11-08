// FUN_006b01f8 @ 006b01f8 size=1580 calls_out=11 calls_in=1
// strings: 

void FUN_006b01f8(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
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
  iVar15 = local_6c;
  iVar12 = local_74;
  piVar2 = local_78;
  puVar11 = local_88;
  piVar9 = local_98;
  piVar8 = local_a0;
  piVar17 = local_a4;
  if (local_9c != (int *)0x2) {
    puVar10 = local_94;
    puVar13 = local_90;
    piVar14 = local_98;
    puVar16 = local_8c;
    if (((uint)local_9c & 1) == 0) {
      piVar14 = (int *)0x7065a17c;
      puVar10 = (undefined4 *)0xbe992023;
      puVar13 = (undefined4 *)0x70f82b0;
      puVar16 = (undefined4 *)0x7f3b2976;
      if (local_74 != 0) {
        piVar5 = local_78;
        do {
          if (piVar5[2] != 0) {
            iVar7 = piVar5[2] * 0x18;
            piVar6 = (int *)(piVar5[1] + 8);
            do {
              puVar10 = (undefined4 *)piVar6[1];
              puVar13 = (undefined4 *)piVar6[2];
              puVar16 = (undefined4 *)piVar6[3];
              piVar14 = (int *)*piVar6;
              if ((piVar14 != (int *)0x7065a17c || puVar13 != (undefined4 *)0x70f82b0) ||
                  (puVar10 != (undefined4 *)0xbe992023 || puVar16 != (undefined4 *)0x7f3b2976))
              goto LAB_006b03a8;
              piVar6 = piVar6 + 6;
              iVar7 = iVar7 + -0x18;
            } while (iVar7 != 0);
          }
          puVar13 = (undefined4 *)0x70f82b0;
          piVar14 = (int *)0x7065a17c;
          piVar5 = piVar5 + 3;
        } while (piVar5 != local_78 + local_74 * 3);
        puVar10 = (undefined4 *)0xbe992023;
        puVar16 = (undefined4 *)0x7f3b2976;
      }
    }
LAB_006b03a8:
    if ((piVar14 != (int *)0x7065a17c || puVar13 != (undefined4 *)0x70f82b0) ||
        (puVar10 != (undefined4 *)0xbe992023 || puVar16 != (undefined4 *)0x7f3b2976)) {
      local_a4 = local_9c;
      local_9c = local_94;
      local_98 = local_90;
      local_94 = local_8c;
      local_8c = (undefined4 *)local_84;
      local_88 = local_80;
      local_84 = local_7c;
      local_a0 = piVar9;
      local_90 = puVar11;
      local_6c = local_64;
      local_74 = iVar15;
      local_78 = (int *)local_70;
      local_80 = piVar2;
      local_70 = local_68;
      local_7c = iVar12;
      FUN_00a7dac0(&local_60,param_2,piVar17,piVar8,&local_a4);
      if (local_60 != (int *)0x2) {
        FUN_006af8cc(&local_60);
      }
      param_1[4] = puVar16;
      *param_1 = 0;
      param_1[1] = piVar14;
      param_1[5] = 0x7065a17c;
      param_1[2] = puVar10;
      param_1[3] = puVar13;
      param_1[6] = 0xbe992023;
      param_1[7] = 0x70f82b0;
      param_1[8] = 0x7f3b2976;
      return;
    }
    if (local_9c != (int *)0x2) {
      piVar17 = (int *)(local_74 * 3);
      if (local_88 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(local_84);
      }
      iVar12 = 0;
      while (iVar12 != local_68) {
        piVar8 = (int *)(local_6c + iVar12 * 0xc);
        puVar11 = (undefined4 *)(piVar8[1] + 4);
        for (iVar15 = piVar8[2]; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (puVar11[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar11);
          }
          puVar11 = puVar11 + 3;
        }
        iVar12 = iVar12 + 1;
        if (*piVar8 != 0) {
          thunk_FUN_016d3fb4(piVar8[1]);
        }
      }
      if (local_70 != 0) {
        thunk_FUN_016d3fb4(local_6c);
      }
      iVar12 = local_74 * 0xc;
      iVar15 = -0x80000000;
      local_9c = (int *)local_7c;
      local_84 = 0;
      local_94 = (undefined4 *)0x0;
      local_a0 = local_78;
      local_a4 = local_78;
      piVar8 = local_78;
      iVar7 = local_68;
      local_98 = local_78 + local_74 * 3;
      if (local_78 != (int *)0x0 && iVar12 != 0) {
        do {
          local_94 = (undefined4 *)0x0;
          piVar9 = piVar8 + 3;
          puVar11 = (undefined4 *)*piVar8;
          local_a0 = piVar9;
          if (puVar11 == (undefined4 *)0x80000000) break;
          local_94 = (undefined4 *)piVar8[1];
          local_88 = local_94 + piVar8[2] * 6;
          local_90 = local_94;
          local_8c = puVar11;
          if (piVar8[2] != 0) {
            local_90 = local_94 + 6;
            piVar8 = (int *)*local_94;
            if (piVar8 != (int *)0x0) {
              iVar12 = local_94[1];
              uVar3 = local_94[4];
              uVar4 = local_94[5];
              (**(code **)(iVar12 + 0xc))
                        (&local_60,(int)piVar8 + (*(int *)(iVar12 + 8) - 1U & 0xfffffff8) + 8);
              if ((local_60 != (int *)0x7065a17c || local_58 != 0x70f82b0) ||
                  (local_5c != -0x4166dfdd || local_54 != 0x7f3b2976)) {
                local_60 = piVar8;
                local_5c = iVar12;
                local_50 = uVar3;
                local_4c = uVar4;
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_0035e2fc,99,&local_60,&DAT_01858978,&DAT_018a7188);
              }
              goto LAB_006b06c8;
            }
          }
          FUN_00a864b0(&local_94);
          iVar12 = iVar12 + -0xc;
          local_94 = (undefined4 *)0x0;
          piVar8 = piVar9;
        } while (local_78 != (int *)0x0 && iVar12 != 0);
      }
      goto LAB_006b061c;
    }
  }
  *param_1 = 2;
  param_1[1] = 0x80000000;
  return;
  while (bVar1 = (bool)hasExclusiveAccess(piVar8), !bVar1) {
LAB_006b06c8:
    if (*piVar8 != 1) {
      ClearExclusiveLocal();
      goto LAB_006b0738;
    }
  }
  *piVar8 = 0;
  DataMemoryBarrier(0xb);
  iVar15 = piVar8[2];
  piVar17 = (int *)piVar8[3];
  iVar7 = piVar8[4];
  if (piVar8 != (int *)0xffffffff) {
    piVar9 = piVar8 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(piVar8);
    }
  }
  if (iVar15 == -0x80000000) {
    piVar8 = piVar17;
LAB_006b0738:
    iVar7 = piVar8[4];
    uVar3 = 0;
    if (iVar7 < 0) {
LAB_006b0748:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,iVar7);
    }
    iVar12 = piVar8[3];
    if (iVar7 == 0) {
      piVar17 = (int *)&DAT_00000001;
      iVar15 = 0;
    }
    else {
      piVar17 = (int *)thunk_FUN_016d4a50(iVar7);
      if (piVar17 == (int *)0x0) {
        uVar3 = 1;
        goto LAB_006b0748;
      }
      iVar15 = iVar7;
    }
    FUN_016dd1aa(piVar17,iVar12,iVar7);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(piVar8);
    }
  }
LAB_006b061c:
  *param_1 = 2;
  param_1[1] = iVar15;
  param_1[2] = piVar17;
  param_1[3] = iVar7;
  FUN_006afa00(&local_a4);
  return;
}

