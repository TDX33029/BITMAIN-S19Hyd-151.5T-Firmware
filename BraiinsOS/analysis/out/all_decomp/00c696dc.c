// FUN_00c696dc @ 00c696dc size=1544 calls_out=8 calls_in=0
// strings: 

void FUN_00c696dc(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *piVar5;
  int *extraout_r1;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int *extraout_r1_02;
  int *extraout_r1_03;
  int iVar6;
  int **ppiVar7;
  int iVar8;
  int **ppiVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int **ppiVar14;
  int *piVar15;
  int **ppiVar16;
  int *piVar17;
  int *piVar18;
  int **local_a4;
  int **local_a0;
  int **local_9c;
  int **local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  undefined4 local_84;
  int **local_80;
  int local_7c;
  int **local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  
  FUN_00c4f1ac(&local_a4,param_2,&DAT_0034fea1,6);
  iVar10 = local_6c;
  iVar6 = local_70;
  iVar12 = local_74;
  ppiVar4 = local_78;
  piVar18 = local_88;
  ppiVar3 = local_98;
  ppiVar2 = local_a0;
  ppiVar9 = local_a4;
  piVar11 = param_1 + 2;
  if (local_9c != (int **)0x2) {
    ppiVar14 = &local_94;
    piVar13 = local_8c;
    piVar15 = local_94;
    ppiVar16 = local_98;
    piVar17 = local_90;
    if (((uint)local_9c & 1) == 0) {
      ppiVar16 = (int **)0xe578f4a5;
      piVar15 = (int *)0x2cb86891;
      piVar17 = (int *)0x91e30413;
      piVar13 = (int *)0x9ed91be8;
      if (local_74 != 0) {
        ppiVar7 = local_78;
        do {
          if (ppiVar7[2] != (int *)0x0) {
            iVar8 = (int)ppiVar7[2] * 0x18;
            piVar5 = ppiVar7[1] + 2;
            do {
              piVar15 = (int *)piVar5[1];
              piVar17 = (int *)piVar5[2];
              ppiVar16 = (int **)*piVar5;
              piVar13 = (int *)piVar5[3];
              if ((ppiVar16 != (int **)0xe578f4a5 || piVar17 != (int *)0x91e30413) ||
                  (piVar15 != (int *)0x2cb86891 || piVar13 != (int *)0x9ed91be8)) goto LAB_00c698a8;
              piVar5 = piVar5 + 6;
              iVar8 = iVar8 + -0x18;
            } while (iVar8 != 0);
          }
          piVar17 = (int *)0x91e30413;
          ppiVar7 = ppiVar7 + 3;
        } while (ppiVar7 != local_78 + local_74 * 3);
        ppiVar16 = (int **)0xe578f4a5;
        piVar15 = (int *)0x2cb86891;
        piVar13 = (int *)0x9ed91be8;
      }
    }
LAB_00c698a8:
    piVar5 = (int *)((uint)piVar15 ^ 0x2cb86891 | (uint)piVar13 ^ 0x9ed91be8);
    if ((ppiVar16 != (int **)0xe578f4a5 || piVar17 != (int *)0x91e30413) || piVar5 != (int *)0x0) {
      local_a4 = local_9c;
      local_9c = (int **)local_94;
      local_98 = (int **)local_90;
      local_94 = local_8c;
      local_8c = (int *)local_84;
      local_88 = (int *)local_80;
      local_84 = local_7c;
      local_a0 = ppiVar3;
      local_90 = piVar18;
      local_6c = local_64;
      local_70 = local_68;
      local_74 = iVar10;
      local_78 = (int **)iVar6;
      local_80 = ppiVar4;
      local_7c = iVar12;
      FUN_00c4f340(&local_60,param_2,ppiVar9,ppiVar2,&local_a4);
      if (local_60 != (int *)0x2) {
        FUN_00c4f594(&local_60);
      }
      *param_1 = 1;
      param_1[1] = 0;
      param_1[5] = piVar13;
      param_1[6] = 0xe578f4a5;
      *piVar11 = (int)ppiVar16;
      param_1[7] = 0x2cb86891;
      param_1[3] = piVar15;
      param_1[4] = piVar17;
      param_1[8] = 0x91e30413;
      param_1[9] = 0x9ed91be8;
      return;
    }
    if (local_9c != (int **)0x2) {
      ppiVar9 = &local_60;
      if (local_88 != (int *)0x0) {
        thunk_FUN_016d3fb4(local_84);
        piVar5 = extraout_r1;
      }
      iVar12 = 0;
      while (iVar12 != local_68) {
        ppiVar9 = (int **)(local_6c + iVar12 * 0xc);
        piVar15 = ppiVar9[1] + 1;
        for (piVar18 = ppiVar9[2]; piVar18 != (int *)0x0; piVar18 = (int *)((int)piVar18 - 1)) {
          if (piVar15[-1] != 0) {
            thunk_FUN_016d3fb4(*piVar15);
            piVar5 = extraout_r1_00;
          }
          piVar15 = piVar15 + 3;
        }
        iVar12 = iVar12 + 1;
        if (*ppiVar9 != (int *)0x0) {
          thunk_FUN_016d3fb4(ppiVar9[1]);
          piVar5 = extraout_r1_01;
        }
      }
      if (local_70 != 0) {
        thunk_FUN_016d3fb4(local_6c);
        piVar5 = extraout_r1_02;
      }
      iVar12 = local_74 * 0xc;
      local_84 = 0;
      local_98 = local_78 + local_74 * 3;
      local_a0 = local_78;
      piVar18 = local_8c;
      ppiVar2 = local_78;
      while (local_8c = piVar5, local_78 != (int **)0x0) {
        if (iVar12 != 0) {
          ppiVar9 = ppiVar2 + 3;
          local_8c = *ppiVar2;
          local_a0 = ppiVar9;
        }
        if (iVar12 == 0 || local_8c == (int *)0x80000000) break;
        local_94 = ppiVar2[1];
        local_88 = local_94 + (int)ppiVar2[2] * 6;
        local_90 = local_94;
        if (ppiVar2[2] != (int *)0x0) {
          local_90 = local_94 + 6;
          piVar18 = (int *)*local_94;
          if (piVar18 != (int *)0x0) {
            iVar10 = local_94[1];
            iVar12 = local_94[4];
            iVar6 = local_94[5];
            (**(code **)(iVar10 + 0xc))
                      (&local_60,(int)piVar18 + (*(int *)(iVar10 + 8) - 1U & 0xfffffff8) + 8);
            if ((local_60 != (int *)0xe578f4a5 || local_58 != -0x6e1cfbed) ||
                (local_5c != 0x2cb86891 || local_54 != -0x6126e418)) {
              local_60 = piVar18;
              local_5c = iVar10;
              local_50 = iVar12;
              local_4c = iVar6;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_0035e2fc,99,&local_60,&DAT_01874580,&DAT_018a7188);
            }
            goto LAB_00c69be0;
          }
        }
        FUN_00a864b0(ppiVar14);
        iVar12 = iVar12 + -0xc;
        piVar5 = extraout_r1_03;
        piVar18 = local_8c;
        ppiVar2 = ppiVar9;
      }
      local_94 = (int *)0x0;
      iVar6 = 0;
      local_8c = piVar18;
      goto LAB_00c69b30;
    }
  }
  *piVar11 = 0;
  param_1[3] = 0;
  *param_1 = 0;
  return;
  while (bVar1 = (bool)hasExclusiveAccess(piVar18), !bVar1) {
LAB_00c69be0:
    if (*piVar18 != 1) {
      ClearExclusiveLocal();
      ppiVar14 = (int **)piVar18[2];
      piVar15 = (int *)piVar18[3];
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar18;
        bVar1 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar1);
      *piVar18 = iVar12 + -1;
      iVar6 = 1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(piVar18);
      }
      goto LAB_00c69b30;
    }
  }
  *piVar18 = 0;
  DataMemoryBarrier(0xb);
  ppiVar14 = (int **)piVar18[2];
  piVar15 = (int *)piVar18[3];
  iVar6 = 1;
  if (piVar18 != (int *)0xffffffff) {
    piVar13 = piVar18 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(piVar18);
    }
  }
LAB_00c69b30:
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = ppiVar14;
  param_1[5] = piVar15;
  *piVar11 = iVar6;
  FUN_006afa00(&local_a4);
  return;
}

