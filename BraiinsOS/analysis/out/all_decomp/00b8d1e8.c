// FUN_00b8d1e8 @ 00b8d1e8 size=2384 calls_out=9 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00b8d680) */
/* WARNING: Removing unreachable block (ram,0x00b8de40) */
/* WARNING: Removing unreachable block (ram,0x00b8d68c) */
/* WARNING: Removing unreachable block (ram,0x00b8d6b8) */

void FUN_00b8d1e8(int *param_1,uint param_2,int *param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  bool bVar21;
  int local_b8;
  int local_98;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  
  if (0x20 < param_2) {
    local_b8 = param_6;
    uVar8 = param_2;
    do {
      if (param_5 == 0) {
        FUN_00b8c800(param_1,uVar8,param_3,param_4,1);
        return;
      }
      piVar11 = param_1 + (uVar8 >> 3) * 0x62;
      piVar19 = param_1 + ((uVar8 >> 3) * 8 - (uVar8 >> 3)) * 8;
      if (uVar8 < 0x40) {
        cVar2 = FUN_010e1310(param_1,piVar19);
        cVar3 = FUN_010e1310(param_1,piVar11);
        piVar5 = param_1;
        if ((cVar2 == -1) == (cVar3 == -1)) {
          cVar3 = FUN_010e1310(piVar19,piVar11);
          piVar5 = piVar11;
          if ((cVar2 == -1) == (cVar3 == -1)) {
            piVar5 = piVar19;
          }
        }
      }
      else {
        piVar5 = (int *)FUN_00b8dffc(param_1,piVar19,piVar11);
      }
      param_5 = param_5 + -1;
      uVar4 = ((uint)((int)piVar5 - (int)param_1) >> 3) * -0x49249249;
      local_90 = *piVar5;
      iStack_8c = piVar5[1];
      iStack_88 = piVar5[2];
      iStack_84 = piVar5[3];
      local_80 = piVar5[4];
      iStack_7c = piVar5[5];
      iStack_78 = piVar5[6];
      iStack_74 = piVar5[7];
      iStack_70 = piVar5[8];
      local_6c = piVar5[9];
      iStack_68 = piVar5[10];
      iStack_64 = piVar5[0xb];
      iStack_60 = piVar5[0xc];
      iStack_5c = piVar5[0xd];
      if ((local_b8 == 0) || (cVar2 = FUN_010e1310(local_b8,piVar5), cVar2 == -1)) {
        if (param_4 < uVar8) goto LAB_00b8de70;
        piVar11 = param_1;
        piVar19 = param_3 + uVar8 * 0xe;
        uVar20 = uVar4;
        while( true ) {
          if (piVar11 < param_1 + uVar20 * 0xe) {
                    /* WARNING: Could not recover jumptable at 0x00b8d4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&LAB_00b8d4a8 + *(int *)(&LAB_00b8d4a8 + *piVar11 * 4)))();
            return;
          }
          if (uVar20 == uVar8) break;
          iVar18 = piVar11[1];
          iVar12 = piVar11[2];
          iVar13 = piVar11[3];
          piVar19[-0xe] = *piVar11;
          piVar19[-0xd] = iVar18;
          piVar19[-0xc] = iVar12;
          piVar19[-0xb] = iVar13;
          iVar18 = piVar11[5];
          iVar12 = piVar11[6];
          iVar13 = piVar11[7];
          iVar14 = piVar11[8];
          piVar19[-10] = piVar11[4];
          piVar19[-9] = iVar18;
          piVar19[-8] = iVar12;
          piVar19[-7] = iVar13;
          piVar19[-6] = iVar14;
          iVar18 = piVar11[10];
          iVar12 = piVar11[0xb];
          iVar13 = piVar11[0xc];
          iVar14 = piVar11[0xd];
          piVar19[-5] = piVar11[9];
          piVar19[-4] = iVar18;
          piVar19[-3] = iVar12;
          piVar19[-2] = iVar13;
          piVar19[-1] = iVar14;
          piVar11 = piVar11 + 0xe;
          piVar19 = piVar19 + -0xe;
          uVar20 = uVar8;
        }
        FUN_016dd1aa(param_1,param_3,0);
        if (uVar8 != 0) {
          piVar11 = param_1;
          uVar20 = uVar8;
          piVar19 = param_3 + uVar8 * 0xe + -0xe;
          do {
            iVar18 = piVar19[1];
            iVar12 = piVar19[2];
            iVar13 = piVar19[3];
            uVar20 = uVar20 - 1;
            *piVar11 = *piVar19;
            piVar11[1] = iVar18;
            piVar11[2] = iVar12;
            piVar11[3] = iVar13;
            iVar18 = piVar19[5];
            iVar12 = piVar19[6];
            iVar13 = piVar19[7];
            iVar14 = piVar19[8];
            piVar11[4] = piVar19[4];
            piVar11[5] = iVar18;
            piVar11[6] = iVar12;
            piVar11[7] = iVar13;
            piVar11[8] = iVar14;
            iVar18 = piVar19[10];
            iVar12 = piVar19[0xb];
            iVar13 = piVar19[0xc];
            iVar14 = piVar19[0xd];
            piVar11[9] = piVar19[9];
            piVar11[10] = iVar18;
            piVar11[0xb] = iVar12;
            piVar11[0xc] = iVar13;
            piVar11[0xd] = iVar14;
            piVar11 = piVar11 + 0xe;
            piVar19 = piVar19 + -0xe;
          } while (uVar20 != 0);
        }
      }
      if (param_4 < uVar8) goto LAB_00b8de70;
      uVar20 = 0;
      piVar11 = param_1;
      while( true ) {
        if (piVar11 < param_1 + uVar4 * 0xe) {
                    /* WARNING: Could not recover jumptable at 0x00b8d7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&LAB_00b8d7b8 + *(int *)(&LAB_00b8d7b8 + *piVar5 * 4)))();
          return;
        }
        if (uVar4 == uVar8) break;
        iVar18 = piVar11[1];
        iVar12 = piVar11[2];
        iVar13 = piVar11[3];
        piVar19 = param_3 + uVar20 * 0xe;
        uVar20 = uVar20 + 1;
        *piVar19 = *piVar11;
        piVar19[1] = iVar18;
        piVar19[2] = iVar12;
        piVar19[3] = iVar13;
        iVar18 = piVar11[5];
        iVar12 = piVar11[6];
        iVar13 = piVar11[7];
        iVar14 = piVar11[8];
        piVar19[4] = piVar11[4];
        piVar19[5] = iVar18;
        piVar19[6] = iVar12;
        piVar19[7] = iVar13;
        piVar19[8] = iVar14;
        iVar18 = piVar11[10];
        iVar12 = piVar11[0xb];
        iVar13 = piVar11[0xc];
        iVar14 = piVar11[0xd];
        piVar19[9] = piVar11[9];
        piVar19[10] = iVar18;
        piVar19[0xb] = iVar12;
        piVar19[0xc] = iVar13;
        piVar19[0xd] = iVar14;
        piVar11 = piVar11 + 0xe;
        uVar4 = uVar8;
      }
      FUN_016dd1aa(param_1,param_3,uVar20 * 0x38);
      param_2 = uVar8 - uVar20;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar20 * 0xe;
      piVar11 = param_1;
      uVar4 = param_2;
      piVar19 = param_3 + uVar8 * 0xe + -0xe;
      do {
        iVar18 = piVar19[1];
        iVar12 = piVar19[2];
        iVar13 = piVar19[3];
        uVar4 = uVar4 - 1;
        *piVar11 = *piVar19;
        piVar11[1] = iVar18;
        piVar11[2] = iVar12;
        piVar11[3] = iVar13;
        iVar18 = piVar19[5];
        iVar12 = piVar19[6];
        iVar13 = piVar19[7];
        iVar14 = piVar19[8];
        piVar11[4] = piVar19[4];
        piVar11[5] = iVar18;
        piVar11[6] = iVar12;
        piVar11[7] = iVar13;
        piVar11[8] = iVar14;
        iVar18 = piVar19[10];
        iVar12 = piVar19[0xb];
        iVar13 = piVar19[0xc];
        iVar14 = piVar19[0xd];
        piVar11[9] = piVar19[9];
        piVar11[10] = iVar18;
        piVar11[0xb] = iVar12;
        piVar11[0xc] = iVar13;
        piVar11[0xd] = iVar14;
        piVar11 = piVar11 + 0xe;
        piVar19 = piVar19 + -0xe;
      } while (uVar4 != 0);
      if (uVar8 < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar20,uVar8,uVar8,&DAT_018af348);
      }
      local_b8 = 0;
      uVar8 = param_2;
    } while (0x20 < param_2);
  }
  uVar8 = param_2 >> 1;
  if (uVar8 != 0) {
    piVar11 = param_3 + uVar8 * 0xe;
    piVar19 = param_1 + uVar8 * 0xe;
    if (param_2 < 8) {
      iVar18 = param_1[1];
      iVar12 = param_1[2];
      iVar13 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = iVar18;
      param_3[2] = iVar12;
      param_3[3] = iVar13;
      iVar18 = param_1[5];
      iVar12 = param_1[6];
      iVar13 = param_1[7];
      iVar14 = param_1[8];
      param_3[4] = param_1[4];
      param_3[5] = iVar18;
      param_3[6] = iVar12;
      param_3[7] = iVar13;
      param_3[8] = iVar14;
      iVar18 = param_1[10];
      iVar12 = param_1[0xb];
      iVar13 = param_1[0xc];
      iVar14 = param_1[0xd];
      param_3[9] = param_1[9];
      param_3[10] = iVar18;
      param_3[0xb] = iVar12;
      param_3[0xc] = iVar13;
      param_3[0xd] = iVar14;
      iVar18 = piVar19[1];
      iVar12 = piVar19[2];
      iVar13 = piVar19[3];
      *piVar11 = *piVar19;
      piVar11[1] = iVar18;
      piVar11[2] = iVar12;
      piVar11[3] = iVar13;
      iVar18 = piVar19[5];
      iVar12 = piVar19[6];
      iVar13 = piVar19[7];
      iVar14 = piVar19[8];
      piVar11[4] = piVar19[4];
      piVar11[5] = iVar18;
      piVar11[6] = iVar12;
      piVar11[7] = iVar13;
      piVar11[8] = iVar14;
      iVar18 = piVar19[10];
      iVar12 = piVar19[0xb];
      iVar13 = piVar19[0xc];
      iVar14 = piVar19[0xd];
      piVar11[9] = piVar19[9];
      piVar11[10] = iVar18;
      piVar11[0xb] = iVar12;
      piVar11[0xc] = iVar13;
      piVar11[0xd] = iVar14;
      uVar4 = 1;
    }
    else {
      FUN_00b8dea0(param_1,param_3);
      FUN_00b8dea0(piVar19,piVar11);
      uVar4 = 4;
    }
    if (uVar4 < uVar8) {
      iVar18 = uVar4 * 0x38;
      local_98 = uVar4 * 0x38 + -0x70;
      uVar20 = uVar4;
      do {
        piVar9 = param_1 + uVar20 * 0xe;
        piVar5 = param_3 + uVar20 * 0xe;
        iVar12 = piVar9[1];
        iVar13 = piVar9[2];
        iVar14 = piVar9[3];
        *piVar5 = *piVar9;
        piVar5[1] = iVar12;
        piVar5[2] = iVar13;
        piVar5[3] = iVar14;
        iVar12 = piVar9[5];
        iVar13 = piVar9[6];
        iVar14 = piVar9[7];
        iVar15 = piVar9[8];
        piVar5[4] = piVar9[4];
        piVar5[5] = iVar12;
        piVar5[6] = iVar13;
        piVar5[7] = iVar14;
        piVar5[8] = iVar15;
        iVar12 = piVar9[10];
        iVar13 = piVar9[0xb];
        iVar14 = piVar9[0xc];
        iVar15 = piVar9[0xd];
        piVar5[9] = piVar9[9];
        piVar5[10] = iVar12;
        piVar5[0xb] = iVar13;
        piVar5[0xc] = iVar14;
        piVar5[0xd] = iVar15;
        cVar2 = FUN_010e1310(piVar5,piVar5 + -0xe);
        if (cVar2 == -1) {
          local_90 = *piVar9;
          iStack_8c = piVar9[1];
          iStack_88 = piVar9[2];
          iStack_84 = piVar9[3];
          local_80 = piVar9[4];
          iStack_7c = piVar9[5];
          iStack_78 = piVar9[6];
          iStack_74 = piVar9[7];
          iStack_70 = piVar9[8];
          local_6c = piVar9[9];
          iStack_68 = piVar9[10];
          iStack_64 = piVar9[0xb];
          iStack_60 = piVar9[0xc];
          iStack_5c = piVar9[0xd];
          iVar12 = iVar18;
          iVar13 = local_98;
          do {
            puVar6 = (undefined4 *)((int)param_3 + iVar12);
            *puVar6 = puVar6[-0xe];
            puVar6[1] = puVar6[-0xd];
            puVar6[2] = puVar6[-0xc];
            puVar6[3] = puVar6[-0xb];
            puVar6[4] = puVar6[-10];
            puVar6[5] = puVar6[-9];
            puVar6[6] = puVar6[-8];
            puVar6[7] = puVar6[-7];
            puVar6[8] = puVar6[-6];
            puVar6[9] = puVar6[-5];
            puVar6[10] = puVar6[-4];
            puVar6[0xb] = puVar6[-3];
            puVar6[0xc] = puVar6[-2];
            puVar6[0xd] = puVar6[-1];
            if (iVar12 == 0x38) {
              piVar5 = param_3;
              goto LAB_00b8da34;
            }
            cVar2 = FUN_010e1310(&local_90,(int)param_3 + iVar13);
            iVar12 = iVar12 + -0x38;
            iVar13 = iVar13 + -0x38;
          } while (cVar2 == -1);
          piVar5 = (int *)((int)param_3 + iVar12);
LAB_00b8da34:
          *piVar5 = local_90;
          piVar5[1] = iStack_8c;
          piVar5[2] = iStack_88;
          piVar5[3] = iStack_84;
          piVar5[4] = local_80;
          piVar5[5] = iStack_7c;
          piVar5[6] = iStack_78;
          piVar5[7] = iStack_74;
          piVar5[8] = iStack_70;
          piVar5[9] = local_6c;
          piVar5[10] = iStack_68;
          piVar5[0xb] = iStack_64;
          piVar5[0xc] = iStack_60;
          piVar5[0xd] = iStack_5c;
        }
        iVar18 = iVar18 + 0x38;
        uVar20 = uVar20 + 1;
        local_98 = local_98 + 0x38;
      } while (uVar20 != uVar8);
    }
    if (uVar4 < param_2 - uVar8) {
      piVar9 = param_3 + uVar8 * 0xe + -0x1c;
      local_98 = 0x38;
      uVar20 = uVar4;
      piVar5 = piVar11;
      do {
        piVar17 = piVar19 + uVar20 * 0xe;
        piVar10 = piVar11 + uVar20 * 0xe;
        iVar18 = piVar17[1];
        iVar12 = piVar17[2];
        iVar13 = piVar17[3];
        *piVar10 = *piVar17;
        piVar10[1] = iVar18;
        piVar10[2] = iVar12;
        piVar10[3] = iVar13;
        iVar18 = piVar17[5];
        iVar12 = piVar17[6];
        iVar13 = piVar17[7];
        iVar14 = piVar17[8];
        piVar10[4] = piVar17[4];
        piVar10[5] = iVar18;
        piVar10[6] = iVar12;
        piVar10[7] = iVar13;
        piVar10[8] = iVar14;
        iVar18 = piVar17[10];
        iVar12 = piVar17[0xb];
        iVar13 = piVar17[0xc];
        iVar14 = piVar17[0xd];
        piVar10[9] = piVar17[9];
        piVar10[10] = iVar18;
        piVar10[0xb] = iVar12;
        piVar10[0xc] = iVar13;
        piVar10[0xd] = iVar14;
        cVar2 = FUN_010e1310(piVar10,piVar10 + -0xe);
        if (cVar2 == -1) {
          local_90 = *piVar17;
          iStack_8c = piVar17[1];
          iStack_88 = piVar17[2];
          iStack_84 = piVar17[3];
          local_80 = piVar17[4];
          iStack_7c = piVar17[5];
          iStack_78 = piVar17[6];
          iStack_74 = piVar17[7];
          iStack_70 = piVar17[8];
          local_6c = piVar17[9];
          iStack_68 = piVar17[10];
          iStack_64 = piVar17[0xb];
          iStack_60 = piVar17[0xc];
          iStack_5c = piVar17[0xd];
          piVar10 = piVar9;
          piVar17 = piVar5;
          iVar18 = local_98;
          do {
            piVar7 = piVar17 + uVar4 * 0xe;
            *piVar7 = piVar7[-0xe];
            piVar7[1] = piVar7[-0xd];
            piVar7[2] = piVar7[-0xc];
            piVar7[3] = piVar7[-0xb];
            piVar7[4] = piVar7[-10];
            piVar7[5] = piVar7[-9];
            piVar7[6] = piVar7[-8];
            piVar7[7] = piVar7[-7];
            piVar7[8] = piVar7[-6];
            piVar7[9] = piVar7[-5];
            piVar7[10] = piVar7[-4];
            piVar7[0xb] = piVar7[-3];
            piVar7[0xc] = piVar7[-2];
            piVar7[0xd] = piVar7[-1];
            if (uVar4 * 0x38 == iVar18) {
              piVar10 = piVar11;
              goto LAB_00b8db7c;
            }
            cVar2 = FUN_010e1310(&local_90,piVar10 + uVar4 * 0xe);
            iVar18 = iVar18 + 0x38;
            piVar10 = piVar10 + -0xe;
            piVar17 = piVar17 + -0xe;
          } while (cVar2 == -1);
          piVar10 = piVar17 + uVar4 * 0xe;
LAB_00b8db7c:
          *piVar10 = local_90;
          piVar10[1] = iStack_8c;
          piVar10[2] = iStack_88;
          piVar10[3] = iStack_84;
          piVar10[4] = local_80;
          piVar10[5] = iStack_7c;
          piVar10[6] = iStack_78;
          piVar10[7] = iStack_74;
          piVar10[8] = iStack_70;
          piVar10[9] = local_6c;
          piVar10[10] = iStack_68;
          piVar10[0xb] = iStack_64;
          piVar10[0xc] = iStack_60;
          piVar10[0xd] = iStack_5c;
        }
        piVar9 = piVar9 + 0xe;
        piVar5 = piVar5 + 0xe;
        local_98 = local_98 + -0x38;
        uVar20 = uVar20 + 1;
      } while (uVar20 != param_2 - uVar8);
    }
    piVar19 = piVar11 + -0xe;
    iVar18 = 0;
    piVar5 = param_3 + param_2 * 0xe + -0xe;
    do {
      cVar2 = FUN_010e1310(piVar11);
      piVar9 = param_3;
      if (cVar2 == -1) {
        piVar9 = piVar11;
      }
      iVar12 = piVar9[1];
      iVar13 = piVar9[2];
      iVar14 = piVar9[3];
      piVar10 = (int *)((int)param_1 + iVar18);
      *piVar10 = *piVar9;
      piVar10[1] = iVar12;
      piVar10[2] = iVar13;
      piVar10[3] = iVar14;
      iVar12 = piVar9[5];
      iVar13 = piVar9[6];
      iVar14 = piVar9[7];
      iVar15 = piVar9[8];
      piVar10[4] = piVar9[4];
      piVar10[5] = iVar12;
      piVar10[6] = iVar13;
      piVar10[7] = iVar14;
      piVar10[8] = iVar15;
      iVar12 = piVar9[10];
      iVar13 = piVar9[0xb];
      iVar14 = piVar9[0xc];
      iVar15 = piVar9[0xd];
      piVar10[9] = piVar9[9];
      piVar10[10] = iVar12;
      piVar10[0xb] = iVar13;
      piVar10[0xc] = iVar14;
      piVar10[0xd] = iVar15;
      cVar3 = FUN_010e1310(piVar5,piVar19);
      iVar12 = 0;
      if (cVar3 != -1) {
        iVar12 = -1;
      }
      piVar9 = piVar5;
      if (cVar3 == -1) {
        piVar9 = piVar19;
      }
      iVar13 = piVar9[1];
      iVar14 = piVar9[2];
      iVar15 = piVar9[3];
      piVar10 = (int *)((int)param_1 + ((param_2 * 0x38 + -0x38) - iVar18));
      iVar18 = iVar18 + 0x38;
      *piVar10 = *piVar9;
      piVar10[1] = iVar13;
      piVar10[2] = iVar14;
      piVar10[3] = iVar15;
      iVar13 = piVar9[5];
      iVar14 = piVar9[6];
      iVar15 = piVar9[7];
      iVar16 = piVar9[8];
      piVar10[4] = piVar9[4];
      piVar10[5] = iVar13;
      piVar10[6] = iVar14;
      piVar10[7] = iVar15;
      piVar10[8] = iVar16;
      iVar13 = piVar9[10];
      iVar14 = piVar9[0xb];
      iVar15 = piVar9[0xc];
      iVar16 = piVar9[0xd];
      piVar10[9] = piVar9[9];
      piVar10[10] = iVar13;
      piVar10[0xb] = iVar14;
      piVar10[0xc] = iVar15;
      piVar10[0xd] = iVar16;
      param_3 = param_3 + (uint)(cVar2 != -1) * 0xe;
      piVar5 = piVar5 + iVar12 * 0xe;
      piVar11 = piVar11 + (uint)(cVar2 == -1) * 0xe;
      iVar12 = 0;
      if (cVar3 == -1) {
        iVar12 = -1;
      }
      piVar19 = piVar19 + iVar12 * 0xe;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    piVar19 = piVar19 + 0xe;
    if ((param_2 & 1) == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      bVar21 = piVar19 <= param_3;
      piVar9 = piVar11;
      if (!bVar21) {
        piVar9 = param_3;
      }
      iVar12 = piVar9[1];
      iVar13 = piVar9[2];
      iVar14 = piVar9[3];
      param_1 = (int *)((int)param_1 + iVar18);
      *param_1 = *piVar9;
      param_1[1] = iVar12;
      param_1[2] = iVar13;
      param_1[3] = iVar14;
      iVar18 = piVar9[5];
      iVar12 = piVar9[6];
      iVar13 = piVar9[7];
      iVar14 = piVar9[8];
      param_1[4] = piVar9[4];
      param_1[5] = iVar18;
      param_1[6] = iVar12;
      param_1[7] = iVar13;
      param_1[8] = iVar14;
      iVar18 = piVar9[10];
      iVar12 = piVar9[0xb];
      iVar13 = piVar9[0xc];
      iVar14 = piVar9[0xd];
      param_1[9] = piVar9[9];
      param_1[10] = iVar18;
      param_1[0xb] = iVar12;
      param_1[0xc] = iVar13;
      param_1[0xd] = iVar14;
      piVar9 = (int *)((uint)!bVar21 * 7);
      piVar11 = piVar11 + (uint)bVar21 * 0xe;
      param_3 = param_3 + (uint)!bVar21 * 0xe;
    }
    if (param_3 == piVar19) {
      piVar9 = piVar5 + 0xe;
    }
    if (param_3 != piVar19 || piVar11 != piVar9) {
      FUN_00fb7254();
LAB_00b8de70:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb8de70);
      (*pcVar1)();
    }
  }
  return;
}

