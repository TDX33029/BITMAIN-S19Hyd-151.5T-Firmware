// FUN_01bb03e8 @ 01bb03e8 size=1224 calls_out=8 calls_in=0
// strings: 

void FUN_01bb03e8(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int *piVar1;
  char *extraout_r1;
  char *extraout_r1_00;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined1 *puVar14;
  char *pcVar15;
  undefined1 *puVar16;
  undefined1 *unaff_r10;
  undefined8 uVar17;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar2 = (char *)((int)param_4 + param_5);
  piVar3 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
  uVar4 = *(uint *)(param_1 + 200);
  puVar5 = (undefined1 *)*param_3;
  puVar6 = (undefined1 *)param_3[1];
  piVar12 = param_4;
  if (param_4 == piVar3) {
    piVar12 = (int *)((int)param_4 + 1);
  }
  iVar13 = (int)piVar12 - *(int *)(param_1 + 4);
  uVar17 = FUN_01b9b818(param_1,iVar13,*(undefined4 *)(param_1 + 0xb8));
  pcVar9 = (char *)((ulonglong)uVar17 >> 0x20);
  puVar14 = (undefined1 *)(iVar13 - (int)uVar17);
  if (puVar14 < puVar6) {
    puVar16 = (undefined1 *)0x0;
    local_40 = puVar6;
  }
  else {
    local_40 = (undefined1 *)0x0;
    puVar16 = puVar6;
  }
  if (puVar14 < puVar5) {
    unaff_r10 = (undefined1 *)0x0;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  local_38 = puVar5;
  if (puVar5 <= puVar14) {
    local_38 = (undefined1 *)0x0;
    unaff_r10 = puVar5;
  }
  piVar7 = (int *)(pcVar2 + -0x20);
  do {
    while( true ) {
      if (pcVar2 + -8 <= piVar12) {
        if (local_38 != (undefined1 *)0x0 && unaff_r10 != (undefined1 *)0x0) {
          local_40 = local_38;
        }
        else if (unaff_r10 == (undefined1 *)0x0) {
          unaff_r10 = local_38;
        }
        *param_3 = unaff_r10;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = local_40;
        }
        param_3[1] = puVar16;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4((int)pcVar2 - (int)param_4,pcVar9,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      puVar5 = unaff_r10;
      if (*(int *)((int)piVar12 + (1 - (int)unaff_r10)) != *(int *)((int)piVar12 + 1) ||
          unaff_r10 == (undefined1 *)0x0) break;
      iVar13 = FUN_01b9b884((char *)((int)piVar12 + 5),(char *)((int)piVar12 + (5 - (int)unaff_r10))
                            ,pcVar2);
      pcVar15 = (char *)(iVar13 + 4);
      local_3c = (undefined1 *)0x1;
      piVar11 = (int *)((int)piVar12 + 1);
LAB_01bb05a0:
      uVar8 = (int)piVar11 - (int)param_4;
      if (piVar7 < piVar11) {
        FUN_01b9b730(param_2[3],param_4,piVar11,piVar7);
      }
      else {
        FUN_01b9b650(param_2[3],param_4);
        if (0x10 < (uint)((int)piVar11 - (int)param_4)) {
          iVar13 = param_2[3];
          FUN_01b9b650(iVar13 + 0x10,param_4 + 4);
          if (0x10 < (int)((int)piVar11 + (-0x10 - (int)param_4))) {
            pcVar9 = (char *)(iVar13 + 0x20);
            piVar12 = param_4;
            do {
              FUN_01b9b650(pcVar9,piVar12 + 8);
              FUN_01b9b650(pcVar9 + 0x10,piVar12 + 0xc);
              pcVar9 = pcVar9 + 0x20;
              piVar12 = piVar12 + 8;
            } while (pcVar9 < (char *)((int)piVar11 + (iVar13 - (int)param_4)));
          }
        }
      }
      param_2[3] = param_2[3] + uVar8;
      puVar10 = (undefined4 *)param_2[1];
      if (0xffff < uVar8) {
        param_2[9] = 1;
        param_2[10] = (int)puVar10 - *param_2 >> 3;
      }
      pcVar9 = pcVar15 + -3;
      *(short *)(puVar10 + 1) = (short)uVar8;
      *puVar10 = local_3c;
      if ((char *)0xffff < pcVar9) {
        param_2[9] = 2;
        param_2[10] = (int)puVar10 - *param_2 >> 3;
      }
      *(short *)((int)puVar10 + 6) = (short)pcVar9;
      param_2[1] = (int)(puVar10 + 2);
      piVar12 = (int *)((int)piVar11 + (int)pcVar15);
      puVar6 = puVar16;
      unaff_r10 = puVar5;
      if (*(int *)(param_1 + 0xdc) != 0) {
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      for (; (puVar16 = puVar6, puVar16 != (undefined1 *)0x0 && piVar12 <= pcVar2 + -8 &&
             (*piVar12 == *(int *)((int)piVar12 - (int)puVar16)));
          piVar12 = (int *)((int)piVar12 + iVar13 + 4)) {
        iVar13 = FUN_01b9b884(piVar12 + 1,(char *)((int)piVar12 + (4 - (int)puVar16)),pcVar2);
        if (piVar7 < piVar12) {
          FUN_01b9b730(param_2[3],piVar12,piVar12,piVar7);
          pcVar9 = extraout_r1_00;
        }
        else {
          FUN_01b9b650(param_2[3],piVar12);
          pcVar9 = extraout_r1;
        }
        puVar10 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar10 + 1) = 0;
        *puVar10 = 1;
        if (0xffff < iVar13 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar10 - *param_2 >> 3;
        }
        *(short *)((int)puVar10 + 6) = (short)(iVar13 + 1U);
        param_2[1] = (int)(puVar10 + 2);
        puVar6 = unaff_r10;
        unaff_r10 = puVar16;
      }
      param_4 = piVar12;
    }
    local_30 = &DAT_3b9ac9ff;
    if (uVar4 == 5) {
      uVar17 = FUN_01b9daf8(param_1,piVar12,pcVar2,&local_30);
    }
    else if (uVar4 < 6) {
      uVar17 = FUN_01b9dd10();
    }
    else {
      uVar17 = FUN_01b9d8e0();
    }
    pcVar9 = (char *)((ulonglong)uVar17 >> 0x20);
    pcVar15 = (char *)uVar17;
    if ((pcVar15 != (char *)0x0) && (local_3c = local_30, (char *)0x3 < pcVar15)) {
      piVar11 = piVar12;
      if ((undefined1 *)0x3 < local_30) {
        piVar1 = (int *)((int)piVar12 + (3 - (int)local_30));
        for (; (param_4 < piVar11 && piVar3 < piVar1 &&
               (piVar1 = (int *)((int)piVar1 + -1), *(char *)((int)piVar11 + -1) == *(char *)piVar1)
               ); piVar11 = (int *)((int)piVar11 + -1)) {
        }
        pcVar15 = (char *)((int)piVar12 + ((int)pcVar15 - (int)piVar11));
        puVar5 = local_30 + -3;
        puVar16 = unaff_r10;
      }
      goto LAB_01bb05a0;
    }
    uVar8 = ((uint)((int)piVar12 - (int)param_4) >> 8) + 1;
    piVar12 = (int *)((int)piVar12 + uVar8);
    *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar8);
  } while( true );
}

