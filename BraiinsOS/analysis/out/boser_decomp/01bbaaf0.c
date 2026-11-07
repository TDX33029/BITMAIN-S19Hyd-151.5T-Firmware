// FUN_01bbaaf0 @ 01bbaaf0 size=1384 calls_out=8 calls_in=0
// strings: 

void FUN_01bbaaf0(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined1 *local_48;
  int *local_3c;
  int *local_38;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar21 = (char *)((int)param_4 + param_5);
  iVar5 = *(int *)(param_1 + 4);
  pcVar6 = *(char **)(param_1 + 0xc);
  piVar7 = (int *)(pcVar6 + iVar5);
  iVar8 = *(int *)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 0x10);
  uVar10 = *(undefined4 *)(param_1 + 0xb8);
  uVar11 = *(uint *)(param_1 + 200);
  local_38 = (int *)*param_3;
  local_3c = (int *)param_3[1];
  *(undefined4 *)(param_1 + 0xdc) = 0;
  piVar17 = param_4;
  if (param_4 == piVar7) {
    piVar17 = (int *)((int)param_4 + 1);
  }
  piVar12 = (int *)(pcVar21 + -0x20);
  piVar3 = param_2;
  do {
    while( true ) {
      if (pcVar21 + -8 <= piVar17) {
        *param_3 = local_38;
        param_3[1] = local_3c;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4((int)pcVar21 - (int)param_4,piVar3,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      pcVar19 = (char *)((int)piVar17 + (1 - iVar5));
      iVar1 = FUN_01b9b7d4(param_1,pcVar19,uVar10);
      pcVar13 = (char *)((int)piVar17 + ((1 - (int)local_38) - iVar5));
      iVar2 = iVar8;
      if (pcVar6 <= pcVar13) {
        iVar2 = iVar5;
      }
      if ((pcVar19 + -iVar1 < local_38 || pcVar6 + (-1 - (int)pcVar13) < (char *)0x3) ||
         (*(int *)((int)piVar17 + 1) != *(int *)(pcVar13 + iVar2))) break;
      if (pcVar13 < pcVar6) {
        pcVar19 = pcVar6 + iVar8;
      }
      else {
        pcVar19 = pcVar21;
      }
      iVar2 = FUN_01b9b970((char *)((int)piVar17 + 5),pcVar13 + iVar2 + 4,pcVar21,pcVar19,piVar7);
      pcVar13 = (char *)(iVar2 + 4);
      local_48 = (undefined1 *)0x1;
      piVar4 = (int *)((int)piVar17 + 1);
LAB_01bbacdc:
      uVar20 = (int)piVar4 - (int)param_4;
      if (piVar12 < piVar4) {
        FUN_01b9b730(param_2[3],param_4,piVar4,piVar12);
      }
      else {
        FUN_01b9b650(param_2[3],param_4);
        if (0x10 < uVar20) {
          iVar2 = param_2[3];
          FUN_01b9b650(iVar2 + 0x10,param_4 + 4);
          if (0x10 < (int)(uVar20 - 0x10)) {
            uVar14 = iVar2 + 0x20;
            do {
              FUN_01b9b650(uVar14,param_4 + 8);
              FUN_01b9b650(uVar14 + 0x10,param_4 + 0xc);
              uVar14 = uVar14 + 0x20;
              param_4 = param_4 + 8;
            } while (uVar14 < iVar2 + uVar20);
          }
        }
      }
      param_2[3] = param_2[3] + uVar20;
      puVar15 = (undefined4 *)param_2[1];
      if (0xffff < uVar20) {
        param_2[9] = 1;
        param_2[10] = (int)puVar15 - *param_2 >> 3;
      }
      piVar3 = (int *)(pcVar13 + -3);
      *(short *)(puVar15 + 1) = (short)uVar20;
      *puVar15 = local_48;
      if ((int *)0xffff < piVar3) {
        param_2[9] = 2;
        param_2[10] = (int)puVar15 - *param_2 >> 3;
      }
      *(short *)((int)puVar15 + 6) = (short)piVar3;
      param_2[1] = (int)(puVar15 + 2);
      piVar17 = (int *)((int)piVar4 + (int)pcVar13);
      if (*(int *)(param_1 + 0xdc) != 0) {
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      for (; piVar4 = local_38, piVar17 <= pcVar21 + -8; piVar17 = (int *)((int)piVar17 + iVar2 + 4)
          ) {
        iVar18 = (int)piVar17 - iVar5;
        iVar1 = FUN_01b9b7d4(param_1,iVar18,uVar10);
        pcVar13 = (char *)(iVar18 - (int)local_3c);
        iVar2 = iVar8;
        if (pcVar6 <= pcVar13) {
          iVar2 = iVar5;
        }
        piVar3 = local_3c;
        if (((int *)(iVar18 - iVar1) < local_3c ||
             (char *)((int)local_3c + (int)(pcVar6 + (-1 - iVar18))) < &DAT_00000003) ||
           (piVar3 = (int *)(pcVar13 + iVar2), *piVar17 != *(int *)(pcVar13 + iVar2))) break;
        pcVar19 = pcVar6 + iVar8;
        if (pcVar6 <= pcVar13) {
          pcVar19 = pcVar21;
        }
        iVar2 = FUN_01b9b970(piVar17 + 1,piVar3 + 1,pcVar21,pcVar19,piVar7);
        if (piVar12 < piVar17) {
          FUN_01b9b730(param_2[3],piVar17,piVar17,piVar12);
          piVar3 = extraout_r1_00;
        }
        else {
          FUN_01b9b650(param_2[3],piVar17);
          piVar3 = extraout_r1;
        }
        puVar15 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar15 + 1) = 0;
        *puVar15 = 1;
        if (0xffff < iVar2 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar15 - *param_2 >> 3;
        }
        *(short *)((int)puVar15 + 6) = (short)(iVar2 + 1U);
        param_2[1] = (int)(puVar15 + 2);
        local_38 = local_3c;
        local_3c = piVar4;
      }
      param_4 = piVar17;
    }
    local_30 = &DAT_3b9ac9ff;
    if (uVar11 == 5) {
      uVar22 = FUN_01b9d424(param_1,piVar17,pcVar21,&local_30);
    }
    else if (uVar11 < 6) {
      uVar22 = FUN_01b9d6b8();
    }
    else {
      uVar22 = FUN_01b9d190();
    }
    piVar3 = (int *)((ulonglong)uVar22 >> 0x20);
    pcVar13 = (char *)uVar22;
    if ((pcVar13 != (char *)0x0) && (local_48 = local_30, (char *)0x3 < pcVar13)) {
      piVar4 = piVar17;
      if ((undefined1 *)0x3 < local_30) {
        pcVar19 = (char *)((int)piVar17 + ((3 - (int)local_30) - iVar5));
        piVar3 = (int *)(iVar8 + iVar9);
        iVar2 = iVar8;
        if (pcVar6 <= pcVar19) {
          piVar3 = piVar7;
          iVar2 = iVar5;
        }
        piVar16 = (int *)(pcVar19 + iVar2);
        for (; (param_4 < piVar4 && piVar3 < piVar16 &&
               (piVar16 = (int *)((int)piVar16 + -1),
               *(char *)((int)piVar4 + -1) == *(char *)piVar16)); piVar4 = (int *)((int)piVar4 + -1)
            ) {
        }
        local_3c = local_38;
        pcVar13 = (char *)((int)piVar17 + ((int)pcVar13 - (int)piVar4));
        local_38 = (int *)(local_30 + -3);
      }
      goto LAB_01bbacdc;
    }
    uVar20 = (uint)((int)piVar17 - (int)param_4) >> 8;
    piVar17 = (int *)((int)piVar17 + uVar20 + 1);
    *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar20);
  } while( true );
}

