// FUN_0069565c @ 0069565c size=1600 calls_out=6 calls_in=2
// strings: 

void FUN_0069565c(int *param_1,uint param_2,int *param_3,int param_4)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int aiStack_c0 [39];
  
  if (param_2 < 0x11) {
LAB_00695c60:
    if (param_2 < 2) {
      return;
    }
    FUN_0067c1d0(param_1,param_2);
    return;
  }
  do {
    if (param_4 == 0) {
      FUN_00691188(param_1,param_2);
      return;
    }
    piVar14 = param_1 + (param_2 >> 3) * 0x10a;
    piVar13 = param_1 + (param_2 >> 3) * 0x98;
    if (param_2 < 0x40) {
      iVar20 = *piVar13;
      iVar19 = *param_1;
      uVar17 = param_1[1];
      uVar11 = param_1[2];
      uVar4 = piVar13[1];
      uVar9 = piVar13[2];
      bVar21 = iVar20 <= iVar19;
      bVar3 = iVar20 < iVar19;
      if (iVar19 == iVar20) {
        bVar21 = uVar4 <= uVar17;
        bVar3 = uVar4 < uVar17;
        if (uVar17 != uVar4) goto LAB_0069571c;
        uVar18 = (uint)(uVar11 >= uVar9 && uVar11 != uVar9) - (uint)(uVar11 < uVar9);
      }
      else {
LAB_0069571c:
        uVar18 = (uint)bVar3 - (uint)!bVar21;
      }
      iVar16 = *piVar14;
      uVar15 = piVar14[1];
      uVar10 = piVar14[2];
      if (iVar19 == iVar16) {
        uVar6 = (uint)(uVar17 < uVar15);
        uVar12 = (uint)(uVar17 >= uVar15 && uVar17 != uVar15);
        if (uVar17 == uVar15) {
          uVar12 = 0;
          uVar6 = (uint)(uVar11 < uVar10);
          if (uVar11 >= uVar10 && uVar11 != uVar10) {
            uVar12 = 1;
          }
        }
        uVar12 = uVar12 - uVar6;
      }
      else {
        uVar12 = (uint)(iVar16 < iVar19) - (uint)(iVar19 < iVar16);
      }
      piVar5 = param_1;
      if (-1 < (int)(uVar12 ^ uVar18)) {
        uVar11 = (uint)(iVar20 < iVar16);
        uVar17 = (uint)(iVar20 != iVar16 && iVar16 <= iVar20);
        if (iVar20 == iVar16) {
          uVar11 = (uint)(uVar4 < uVar15);
          uVar17 = (uint)(uVar4 >= uVar15 && uVar4 != uVar15);
          if (uVar4 == uVar15) {
            uVar17 = 0;
            uVar11 = (uint)(uVar9 < uVar10);
            if (uVar9 >= uVar10 && uVar9 != uVar10) {
              uVar17 = 1;
            }
          }
        }
        piVar5 = piVar13;
        if ((int)(uVar17 - uVar11 ^ uVar18) < 0) {
          piVar5 = piVar14;
        }
      }
    }
    else {
      piVar5 = (int *)FUN_006954cc(param_1);
    }
    param_4 = param_4 + -1;
    if (param_3 == (int *)0x0) {
LAB_006959b0:
      FUN_01bed4e2(aiStack_c0,param_1,0x98);
      iVar19 = (int)param_1 + ((int)piVar5 - (int)param_1);
      FUN_01bed864(param_1,iVar19,0x98);
      FUN_01bed4e2(iVar19,aiStack_c0,0x98);
      piVar5 = param_1 + param_2 * 0x26;
      iVar20 = 0;
      iVar19 = 2;
      piVar13 = (int *)&DAT_00000098;
      piVar14 = param_1 + 0x26;
      do {
        piVar7 = piVar5;
        if (piVar14 < piVar5) {
          do {
            bVar21 = *param_1 <= *piVar14;
            if ((*piVar14 == *param_1) &&
               (bVar21 = (uint)param_1[1] <= (uint)piVar14[1], piVar14[1] == param_1[1])) {
              if ((uint)param_1[2] <= (uint)piVar14[2]) break;
            }
            else if (bVar21) break;
            piVar14 = piVar14 + 0x26;
          } while (piVar14 < piVar5);
        }
LAB_00695a60:
        do {
          piVar5 = piVar7 + -0x26;
          if (piVar5 <= piVar14) {
            if (iVar19 != 2 || iVar20 != 0) {
              *piVar13 = local_d0;
              piVar13[1] = iStack_cc;
              piVar13[2] = iStack_c8;
              piVar13[3] = iStack_c4;
              piVar13[4] = iVar19;
              piVar13[5] = iVar20;
              FUN_01bed4e2(piVar13 + 6,aiStack_c0,0x80);
            }
            uVar9 = (int)piVar14 - (int)(param_1 + 0x26);
            uVar4 = (uVar9 >> 3) * 0x286bca1b;
            if (param_2 <= uVar4) goto LAB_00695c98;
            FUN_01bed4e2(aiStack_c0,param_1,0x98);
            piVar13 = (int *)((int)param_1 + uVar9);
            FUN_01bed864(param_1,piVar13,0x98);
            FUN_01bed4e2(piVar13,aiStack_c0,0x98);
            FUN_0069565c(param_1,uVar4,param_3,param_4);
            uVar4 = ~uVar4;
            param_1 = piVar13 + 0x26;
            goto LAB_00695c58;
          }
          bVar21 = *param_1 <= *piVar5;
          if ((*piVar5 != *param_1) ||
             (bVar21 = (uint)param_1[1] <= (uint)piVar7[-0x25], piVar7[-0x25] != param_1[1])) {
            piVar7 = piVar5;
            if (!bVar21) break;
            goto LAB_00695a60;
          }
          puVar1 = (uint *)(piVar7 + -0x24);
          piVar7 = piVar5;
        } while ((uint)param_1[2] <= *puVar1);
        if (iVar19 == 2 && iVar20 == 0) {
          local_d0 = *piVar14;
          iStack_cc = piVar14[1];
          iStack_c8 = piVar14[2];
          iStack_c4 = piVar14[3];
          piVar13 = aiStack_c0;
          uVar8 = 0x80;
          iVar19 = piVar14[4];
          iVar20 = piVar14[5];
          piVar7 = piVar14 + 6;
        }
        else {
          uVar8 = 0x98;
          piVar7 = piVar14;
        }
        FUN_01bed4e2(piVar13,piVar7,uVar8);
        FUN_01bed4e2(piVar14,piVar5,0x98);
        piVar14 = piVar14 + 0x26;
        piVar13 = piVar5;
      } while( true );
    }
    piVar13 = (int *)((int)param_1 + ((int)piVar5 - (int)param_1));
    bVar21 = *piVar13 <= *param_3;
    if ((*param_3 == *piVar13) &&
       (bVar21 = (uint)piVar13[1] <= (uint)param_3[1], param_3[1] == piVar13[1])) {
      if ((uint)param_3[2] < (uint)piVar13[2]) goto LAB_006959b0;
    }
    else if (!bVar21) goto LAB_006959b0;
    FUN_01bed4e2(aiStack_c0,param_1,0x98);
    FUN_01bed864(param_1,piVar13,0x98);
    FUN_01bed4e2(piVar13,aiStack_c0,0x98);
    piVar5 = param_1 + param_2 * 0x26;
    iVar20 = 0;
    iVar19 = 2;
    piVar13 = (int *)&DAT_00000098;
    piVar14 = param_1 + 0x26;
LAB_00695898:
    piVar7 = piVar5;
    if (piVar14 < piVar5) {
      do {
        bVar21 = *param_1 < *piVar14;
        if ((*param_1 == *piVar14) &&
           (bVar21 = (uint)param_1[1] < (uint)piVar14[1], param_1[1] == piVar14[1])) {
          if ((uint)param_1[2] < (uint)piVar14[2]) break;
        }
        else if (bVar21) break;
        piVar14 = piVar14 + 0x26;
      } while (piVar14 < piVar5);
    }
LAB_006958f8:
    piVar5 = piVar7 + -0x26;
    if (piVar14 < piVar5) {
      bVar21 = *param_1 < *piVar5;
      if ((*param_1 != *piVar5) ||
         (bVar21 = (uint)param_1[1] < (uint)piVar7[-0x25], param_1[1] != piVar7[-0x25])) {
        piVar7 = piVar5;
        if (!bVar21) break;
        goto LAB_006958f8;
      }
      puVar1 = (uint *)(piVar7 + -0x24);
      piVar7 = piVar5;
      if (*puVar1 <= (uint)param_1[2]) break;
      goto LAB_006958f8;
    }
    if (iVar19 != 2 || iVar20 != 0) {
      *piVar13 = local_d0;
      piVar13[1] = iStack_cc;
      piVar13[2] = iStack_c8;
      piVar13[3] = iStack_c4;
      piVar13[4] = iVar19;
      piVar13[5] = iVar20;
      FUN_01bed4e2(piVar13 + 6,aiStack_c0,0x80);
    }
    uVar9 = (int)piVar14 - (int)(param_1 + 0x26);
    uVar4 = (uVar9 >> 3) * 0x286bca1b;
    if (param_2 <= uVar4) {
LAB_00695c98:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x695c98);
      (*pcVar2)();
    }
    FUN_01bed4e2(aiStack_c0,param_1,0x98);
    iVar19 = (int)param_1 + uVar9;
    FUN_01bed864(param_1,iVar19,0x98);
    FUN_01bed4e2(iVar19,aiStack_c0,0x98);
    iVar19 = uVar4 + 1;
    uVar4 = -iVar19;
    param_1 = param_1 + iVar19 * 0x26;
    piVar13 = (int *)0x0;
LAB_00695c58:
    param_2 = param_2 + uVar4;
    param_3 = piVar13;
    if (param_2 < 0x11) goto LAB_00695c60;
  } while( true );
  if (iVar19 == 2 && iVar20 == 0) {
    local_d0 = *piVar14;
    iStack_cc = piVar14[1];
    iStack_c8 = piVar14[2];
    iStack_c4 = piVar14[3];
    piVar13 = aiStack_c0;
    uVar8 = 0x80;
    iVar19 = piVar14[4];
    iVar20 = piVar14[5];
    piVar7 = piVar14 + 6;
  }
  else {
    uVar8 = 0x98;
    piVar7 = piVar14;
  }
  FUN_01bed4e2(piVar13,piVar7,uVar8);
  FUN_01bed4e2(piVar14,piVar5,0x98);
  piVar14 = piVar14 + 0x26;
  piVar13 = piVar5;
  goto LAB_00695898;
}

