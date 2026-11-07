// FUN_01bb08c0 @ 01bb08c0 size=1360 calls_out=7 calls_in=0
// strings: 

void FUN_01bb08c0(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *extraout_r1;
  int *extraout_r1_00;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  char *pcVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  piVar20 = (int *)((int)param_4 + param_5);
  iVar8 = *(int *)(param_1 + 4);
  uVar9 = *(uint *)(param_1 + 0xc);
  pcVar10 = (char *)(uVar9 + iVar8);
  uVar11 = *(uint *)(param_1 + 200);
  local_3c = (undefined1 *)*param_3;
  local_40 = (undefined1 *)param_3[1];
  puVar12 = *(undefined4 **)(param_1 + 0xb4);
  iVar5 = puVar12[1];
  iVar6 = puVar12[3];
  piVar13 = (int *)*puVar12;
  piVar18 = param_4;
  if ((iVar5 + iVar6) - (int)piVar13 == (int)param_4 - (int)pcVar10) {
    piVar18 = (int *)((int)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  piVar4 = piVar13;
  do {
    while( true ) {
      if (piVar20 + -2 <= piVar18) {
        *param_3 = local_3c;
        param_3[1] = local_40;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4((int)piVar20 - (int)param_4,piVar4,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      uVar14 = (int)piVar18 + ((1 - (int)local_3c) - iVar8);
      if (uVar14 < uVar9) {
        piVar4 = (int *)((int)piVar13 + iVar5 + uVar14 + (-uVar9 - iVar5));
      }
      else {
        piVar4 = (int *)(iVar8 + uVar14);
      }
      if (((uVar9 - 1) - uVar14 < 3) || (*piVar4 != *(int *)((int)piVar18 + 1))) break;
      if (uVar14 < uVar9) {
        piVar7 = piVar13;
      }
      else {
        piVar7 = piVar20;
      }
      iVar2 = FUN_01b9b970((int)piVar18 + 5,piVar4 + 1,piVar20,piVar7,pcVar10);
      uVar14 = iVar2 + 4;
      local_48 = (undefined1 *)0x1;
      piVar7 = (int *)((int)piVar18 + 1);
LAB_01bb0a98:
      piVar15 = piVar20 + -8;
      uVar19 = (int)piVar7 - (int)param_4;
      if (piVar15 < piVar7) {
        FUN_01b9b730(param_2[3],param_4,piVar7,piVar20 + -8);
      }
      else {
        FUN_01b9b650(param_2[3],param_4);
        if (0x10 < uVar19) {
          iVar2 = param_2[3];
          FUN_01b9b650(iVar2 + 0x10,param_4 + 4);
          if (0x10 < (int)(uVar19 - 0x10)) {
            uVar16 = iVar2 + 0x20;
            do {
              FUN_01b9b650(uVar16,param_4 + 8);
              FUN_01b9b650(uVar16 + 0x10,param_4 + 0xc);
              uVar16 = uVar16 + 0x20;
              param_4 = param_4 + 8;
            } while (uVar16 < iVar2 + uVar19);
          }
        }
      }
      param_2[3] = param_2[3] + uVar19;
      puVar12 = (undefined4 *)param_2[1];
      if (0xffff < uVar19) {
        param_2[9] = 1;
        param_2[10] = (int)puVar12 - *param_2 >> 3;
      }
      piVar4 = (int *)(uVar14 - 3);
      *(short *)(puVar12 + 1) = (short)uVar19;
      *puVar12 = local_48;
      if ((int *)0xffff < piVar4) {
        param_2[9] = 2;
        param_2[10] = (int)puVar12 - *param_2 >> 3;
      }
      *(short *)((int)puVar12 + 6) = (short)piVar4;
      param_2[1] = (int)(puVar12 + 2);
      piVar18 = (int *)((int)piVar7 + uVar14);
      if (*(int *)(param_1 + 0xdc) != 0) {
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      for (; puVar1 = local_3c, piVar18 <= piVar20 + -2; piVar18 = (int *)((int)piVar18 + iVar2 + 4)
          ) {
        uVar14 = ((int)piVar18 - iVar8) - (int)local_40;
        if (uVar14 < uVar9) {
          piVar4 = (int *)((int)piVar13 + iVar5 + uVar14 + (-uVar9 - iVar5));
        }
        else {
          piVar4 = (int *)(iVar8 + uVar14);
        }
        if ((local_40 + ((uVar9 - 1) - ((int)piVar18 - iVar8)) < (undefined1 *)0x3) ||
           (*piVar4 != *piVar18)) break;
        if (uVar14 < uVar9) {
          piVar7 = piVar13;
        }
        else {
          piVar7 = piVar20;
        }
        iVar2 = FUN_01b9b970(piVar18 + 1,piVar4 + 1,piVar20,piVar7,pcVar10);
        if (piVar15 < piVar18) {
          FUN_01b9b730(param_2[3],piVar18,piVar18,piVar15);
          piVar4 = extraout_r1_00;
        }
        else {
          FUN_01b9b650(param_2[3],piVar18);
          piVar4 = extraout_r1;
        }
        puVar12 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar12 + 1) = 0;
        *puVar12 = 1;
        if (0xffff < iVar2 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar12 - *param_2 >> 3;
        }
        *(short *)((int)puVar12 + 6) = (short)(iVar2 + 1U);
        param_2[1] = (int)(puVar12 + 2);
        local_3c = local_40;
        local_40 = puVar1;
      }
      param_4 = piVar18;
    }
    local_30 = &DAT_3b9ac9ff;
    if (uVar11 == 5) {
      uVar21 = FUN_01b9cb24(param_1,piVar18,piVar20,&local_30);
    }
    else if (uVar11 < 6) {
      uVar21 = FUN_01b9cea0();
    }
    else {
      uVar21 = FUN_01b9c7a8();
    }
    piVar4 = (int *)((ulonglong)uVar21 >> 0x20);
    uVar14 = (uint)uVar21;
    if ((uVar14 != 0) && (local_48 = local_30, 3 < uVar14)) {
      piVar7 = piVar18;
      if ((undefined1 *)0x3 < local_30) {
        uVar19 = (int)piVar18 + ((3 - (int)local_30) - iVar8);
        if (uVar19 < uVar9) {
          pcVar17 = (char *)((int)piVar13 + (uVar19 - uVar9));
          pcVar3 = (char *)(iVar5 + iVar6);
        }
        else {
          pcVar17 = (char *)(iVar8 + uVar19);
          pcVar3 = pcVar10;
        }
        for (; (param_4 < piVar7 && pcVar3 < pcVar17 &&
               (pcVar17 = pcVar17 + -1, *(char *)((int)piVar7 + -1) == *pcVar17));
            piVar7 = (int *)((int)piVar7 + -1)) {
        }
        local_40 = local_3c;
        uVar14 = (int)piVar18 + (uVar14 - (int)piVar7);
        local_3c = local_30 + -3;
      }
      goto LAB_01bb0a98;
    }
    uVar14 = ((uint)((int)piVar18 - (int)param_4) >> 8) + 1;
    piVar18 = (int *)((int)piVar18 + uVar14);
    *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar14);
  } while( true );
}

