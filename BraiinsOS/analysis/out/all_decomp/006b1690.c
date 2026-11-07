// FUN_006b1690 @ 006b1690 size=1592 calls_out=8 calls_in=1
// strings: hashrate_ths

void FUN_006b1690(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *extraout_r1;
  int *piVar7;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int *extraout_r1_02;
  int *extraout_r1_03;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  undefined8 unaff_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
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
  int local_64;
  int local_60;
  int local_5c;
  
  FUN_0074c4ec(&local_b4,param_2,"hashrate_ths",0xc);
  iVar13 = local_7c;
  iVar19 = local_80;
  iVar14 = local_84;
  piVar6 = local_88;
  piVar5 = local_98;
  piVar4 = local_a8;
  piVar3 = local_ac;
  piVar9 = local_b0;
  piVar11 = local_b4;
  piVar20 = param_1 + 2;
  if (local_ac != (int *)&SUB_00000002) {
    piVar7 = local_98;
    piVar15 = local_a0;
    piVar16 = local_a8;
    piVar17 = local_9c;
    piVar18 = local_a4;
    if (((uint)local_ac & 1) == 0) {
      piVar16 = (int *)0x84adcb7c;
      piVar18 = (int *)0xb073a66;
      piVar15 = (int *)0xe577a84e;
      piVar17 = (int *)0xc45c25bf;
      if (local_84 != 0) {
        piVar7 = local_88;
        do {
          if (piVar7[2] != 0) {
            iVar10 = piVar7[2] * 0x18;
            piVar8 = (int *)(piVar7[1] + 8);
            do {
              piVar16 = (int *)*piVar8;
              piVar18 = (int *)piVar8[1];
              piVar15 = (int *)piVar8[2];
              piVar17 = (int *)piVar8[3];
              if ((piVar16 != (int *)0x84adcb7c || piVar15 != (int *)0xe577a84e) ||
                  (piVar18 != (int *)0xb073a66 || piVar17 != (int *)0xc45c25bf)) {
                piVar7 = (int *)0xc45c25bf;
                goto LAB_006b187c;
              }
              piVar8 = piVar8 + 6;
              iVar10 = iVar10 + -0x18;
            } while (iVar10 != 0);
          }
          piVar16 = (int *)0x84adcb7c;
          piVar7 = piVar7 + 3;
        } while (piVar7 != local_88 + local_84 * 3);
        piVar18 = (int *)0xb073a66;
        piVar15 = (int *)0xe577a84e;
        piVar7 = local_88 + local_84 * 3;
        piVar17 = (int *)0xc45c25bf;
      }
    }
LAB_006b187c:
    if ((piVar16 != (int *)0x84adcb7c || piVar15 != (int *)0xe577a84e) ||
        (piVar18 != (int *)0xb073a66 || piVar17 != (int *)0xc45c25bf)) {
      local_ac = local_a4;
      local_a8 = local_a0;
      local_a4 = local_9c;
      local_9c = (int *)local_94;
      local_98 = local_90;
      local_94 = local_8c;
      local_b0 = piVar4;
      local_a0 = piVar5;
      local_7c = local_74;
      local_80 = local_78;
      local_84 = iVar13;
      local_88 = (int *)iVar19;
      local_8c = iVar14;
      local_90 = piVar6;
      local_b4 = piVar3;
      FUN_00a7dac0(&local_70,param_2,piVar11,piVar9,&local_b4);
      if (local_70 != (int *)0x2) {
        FUN_006af8cc(&local_70);
      }
      *param_1 = 1;
      param_1[1] = 0;
      param_1[5] = piVar17;
      param_1[6] = 0x84adcb7c;
      *piVar20 = (int)piVar16;
      param_1[3] = piVar18;
      param_1[7] = 0xb073a66;
      param_1[4] = piVar15;
      param_1[8] = 0xe577a84e;
      param_1[9] = 0xc45c25bf;
      return;
    }
    if (local_ac != (int *)&SUB_00000002) {
      if (local_98 != (int *)0x0) {
        thunk_FUN_016d3fb4(local_94);
        piVar7 = extraout_r1;
      }
      iVar14 = 0;
      piVar11 = local_ac;
      while (iVar14 != local_78) {
        piVar11 = (int *)(local_7c + iVar14 * 0xc);
        puVar12 = (undefined4 *)(piVar11[1] + 4);
        for (iVar19 = piVar11[2]; iVar19 != 0; iVar19 = iVar19 + -1) {
          if (puVar12[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar12);
            piVar7 = extraout_r1_00;
          }
          puVar12 = puVar12 + 3;
        }
        iVar14 = iVar14 + 1;
        if (*piVar11 != 0) {
          thunk_FUN_016d3fb4(piVar11[1]);
          piVar7 = extraout_r1_01;
        }
      }
      if (local_80 != 0) {
        thunk_FUN_016d3fb4(local_7c);
        piVar7 = extraout_r1_02;
      }
      iVar14 = local_84 * 0xc;
      local_94 = 0;
      local_a8 = local_88 + local_84 * 3;
      local_b0 = local_88;
      piVar9 = local_9c;
      piVar3 = local_88;
      while (local_9c = piVar7, local_88 != (int *)0x0) {
        if (iVar14 != 0) {
          piVar11 = piVar3 + 3;
          local_9c = (int *)*piVar3;
          local_b0 = piVar11;
        }
        if (iVar14 == 0 || local_9c == (int *)&DAT_80000000) break;
        local_a4 = (int *)piVar3[1];
        local_98 = local_a4 + piVar3[2] * 6;
        local_a0 = local_a4;
        if (piVar3[2] != 0) {
          local_a0 = local_a4 + 6;
          piVar9 = (int *)*local_a4;
          if (piVar9 != (int *)0x0) {
            iVar13 = local_a4[1];
            iVar14 = local_a4[5];
            uVar2 = *(undefined8 *)(local_a4 + 2);
            iVar19 = local_a4[4];
            (**(code **)(iVar13 + 0xc))
                      (&local_70,(int)piVar9 + (*(int *)(iVar13 + 8) - 1U & 0xfffffff8) + 8);
            if ((local_70 != (int *)0x84adcb7c || local_68 != -0x1a8857b2) ||
                (local_6c != 0xb073a66 || local_64 != -0x3ba3da41)) {
              local_d0 = (undefined4)uVar2;
              uStack_cc = (undefined4)((ulonglong)uVar2 >> 0x20);
              local_68 = local_d0;
              local_64 = uStack_cc;
              local_70 = piVar9;
              local_6c = iVar13;
              local_60 = iVar19;
              local_5c = iVar14;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_0035e2fc,99,&local_70,&DAT_01858978,&DAT_018a7188);
            }
            goto LAB_006b1bbc;
          }
        }
        FUN_00a864b0(&local_a4);
        iVar14 = iVar14 + -0xc;
        piVar7 = extraout_r1_03;
        piVar9 = local_9c;
        piVar3 = piVar11;
      }
      local_a4 = (int *)0x0;
      iVar19 = 0;
      local_9c = piVar9;
      goto LAB_006b1afc;
    }
  }
  *piVar20 = 0;
  param_1[3] = 0;
  *param_1 = 0;
  return;
  while (bVar1 = (bool)hasExclusiveAccess(piVar9), !bVar1) {
LAB_006b1bbc:
    if (*piVar9 != 1) {
      ClearExclusiveLocal();
      unaff_d8 = *(undefined8 *)(piVar9 + 2);
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar9;
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *piVar9 = iVar14 + -1;
      iVar19 = 1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(piVar9);
      }
      goto LAB_006b1afc;
    }
  }
  *piVar9 = 0;
  DataMemoryBarrier(0xb);
  unaff_d8 = *(undefined8 *)(piVar9 + 2);
  iVar19 = 1;
  if (piVar9 != (int *)0xffffffff) {
    piVar11 = piVar9 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar11;
      bVar1 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar1);
    *piVar11 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(piVar9);
    }
  }
LAB_006b1afc:
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = unaff_d8;
  *piVar20 = iVar19;
  param_1[3] = 0;
  FUN_006afa00(&local_b4);
  return;
}

