// FUN_01bbb8e8 @ 01bbb8e8 size=1816 calls_out=8 calls_in=0
// strings: 

void FUN_01bbb8e8(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *extraout_r1;
  int *extraout_r1_00;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  undefined4 *puVar15;
  char *pcVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  char *pcVar23;
  char *pcVar24;
  undefined1 *puVar25;
  undefined8 uVar26;
  int *local_48;
  int *local_40;
  int *local_3c;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar5 = (char *)((int)param_4 + param_5);
  iVar6 = *(int *)(param_1 + 4);
  pcVar7 = *(char **)(param_1 + 0xc);
  piVar8 = (int *)(pcVar7 + iVar6);
  iVar9 = *(int *)(param_1 + 8);
  pcVar10 = pcVar7 + iVar9;
  iVar11 = *(int *)(param_1 + 0x10);
  uVar12 = *(undefined4 *)(param_1 + 0xb8);
  uVar13 = *(uint *)(param_1 + 200);
  local_40 = (int *)*param_3;
  local_48 = (int *)param_3[1];
  *(undefined4 *)(param_1 + 0xdc) = 0;
  piVar18 = param_4;
  if (param_4 == piVar8) {
    piVar18 = (int *)((int)param_4 + 1);
  }
  piVar4 = param_2;
  do {
    while( true ) {
      if (pcVar5 + -8 <= piVar18) {
        *param_3 = local_40;
        param_3[1] = local_48;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4((int)pcVar5 - (int)param_4,piVar4,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      pcVar23 = (char *)((int)piVar18 + (1 - iVar6));
      iVar2 = FUN_01b9b7d4(param_1,pcVar23,uVar12);
      pcVar21 = (char *)((int)piVar18 + ((1 - (int)local_40) - iVar6));
      iVar3 = iVar9;
      if (pcVar7 <= pcVar21) {
        iVar3 = iVar6;
      }
      pcVar24 = (char *)0x0;
      if (local_40 <= pcVar23 + -iVar2 && (char *)0x2 < pcVar7 + (-1 - (int)pcVar21)) {
        if (*(int *)((int)piVar18 + 1) == *(int *)(pcVar21 + iVar3)) {
          pcVar23 = pcVar5;
          if (pcVar21 < pcVar7) {
            pcVar23 = pcVar10;
          }
          iVar3 = FUN_01b9b970((char *)((int)piVar18 + 5),pcVar21 + iVar3 + 4,pcVar5,pcVar23,piVar8)
          ;
          pcVar24 = (char *)(iVar3 + 4);
        }
        else {
          pcVar24 = (char *)0x0;
        }
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar13 == 5) {
        uVar26 = FUN_01b9d424(param_1,piVar18,pcVar5,&local_30);
      }
      else if (uVar13 < 6) {
        uVar26 = FUN_01b9d6b8();
      }
      else {
        uVar26 = FUN_01b9d190();
      }
      piVar4 = (int *)((ulonglong)uVar26 >> 0x20);
      pcVar23 = (char *)uVar26;
      if (pcVar24 < pcVar23) {
        puVar25 = local_30;
        local_3c = piVar18;
      }
      else {
        puVar25 = (undefined1 *)0x1;
        pcVar23 = pcVar24;
        local_3c = (int *)((int)piVar18 + 1);
      }
      if ((char *)0x3 < pcVar23) break;
      uVar17 = (uint)((int)piVar18 - (int)param_4) >> 8;
      piVar18 = (int *)((int)piVar18 + uVar17 + 1);
      *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar17);
    }
    for (pcVar24 = (char *)((int)piVar18 + 5); pcVar20 = pcVar23, pcVar5 + -3 != pcVar24;
        pcVar24 = pcVar24 + 1) {
      piVar18 = (int *)(pcVar24 + -4);
      if (puVar25 != (undefined1 *)0x0) {
        iVar2 = FUN_01b9b7d4(param_1,(char *)((int)local_40 + (int)pcVar21),uVar12);
        iVar3 = iVar6;
        if (pcVar21 < pcVar7) {
          iVar3 = iVar9;
        }
        if ((local_40 <= (char *)((int)local_40 + (int)pcVar21) + -iVar2 &&
             (char *)0x2 < pcVar7 + (-1 - (int)pcVar21)) &&
           (*(int *)(pcVar24 + -4) == *(int *)(pcVar21 + iVar3))) {
          pcVar16 = pcVar5;
          if (pcVar21 < pcVar7) {
            pcVar16 = pcVar10;
          }
          uVar17 = FUN_01b9b970(pcVar24,pcVar21 + iVar3 + 4,pcVar5,pcVar16,piVar8);
          if (uVar17 < 0xfffffffc &&
              (int)(pcVar23 + -10) * 3 + LZCOUNT(puVar25) < (int)(uVar17 + 4) * 3) {
            puVar25 = (undefined1 *)0x1;
            local_3c = (int *)(pcVar24 + -4);
            pcVar20 = (char *)(uVar17 + 4);
          }
        }
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar13 == 5) {
        pcVar23 = (char *)FUN_01b9d424(param_1,pcVar24 + -4,pcVar5,&local_30);
      }
      else if (uVar13 < 6) {
        pcVar23 = (char *)FUN_01b9d6b8();
      }
      else {
        pcVar23 = (char *)FUN_01b9d190();
      }
      if (pcVar23 < (char *)0x4 ||
          LZCOUNT(local_30) + (int)pcVar23 * 4 + -0x1f <=
          LZCOUNT(puVar25) + (int)pcVar20 * 4 + -0x1b) break;
      pcVar21 = pcVar21 + 1;
      puVar25 = local_30;
      local_3c = piVar18;
    }
    if ((undefined1 *)0x3 < puVar25) {
      pcVar21 = (char *)((int)local_3c + ((3 - (int)puVar25) - iVar6));
      piVar18 = (int *)(iVar9 + iVar11);
      iVar3 = iVar9;
      if (pcVar7 <= pcVar21) {
        piVar18 = piVar8;
        iVar3 = iVar6;
      }
      piVar14 = (int *)(pcVar21 + iVar3);
      for (piVar4 = local_3c;
          (param_4 < piVar4 && piVar18 < piVar14 &&
          (piVar14 = (int *)((int)piVar14 + -1), *(char *)((int)piVar4 + -1) == *(char *)piVar14));
          piVar4 = (int *)((int)piVar4 + -1)) {
      }
      pcVar20 = (char *)((int)local_3c + ((int)pcVar20 - (int)piVar4));
      local_48 = local_40;
      local_40 = (int *)(puVar25 + -3);
      local_3c = piVar4;
    }
    uVar17 = (int)local_3c - (int)param_4;
    piVar14 = (int *)(pcVar5 + -0x20);
    if (piVar14 < local_3c) {
      FUN_01b9b730(param_2[3],param_4,local_3c,piVar14);
    }
    else {
      FUN_01b9b650(param_2[3],param_4);
      if (0x10 < uVar17) {
        iVar3 = param_2[3];
        FUN_01b9b650(iVar3 + 0x10,param_4 + 4);
        if (0x10 < (int)(uVar17 - 0x10)) {
          uVar22 = iVar3 + 0x20;
          do {
            FUN_01b9b650(uVar22,param_4 + 8);
            FUN_01b9b650(uVar22 + 0x10,param_4 + 0xc);
            uVar22 = uVar22 + 0x20;
            param_4 = param_4 + 8;
          } while (uVar22 < iVar3 + uVar17);
        }
      }
    }
    param_2[3] = param_2[3] + uVar17;
    puVar15 = (undefined4 *)param_2[1];
    if (0xffff < uVar17) {
      param_2[9] = 1;
      param_2[10] = (int)puVar15 - *param_2 >> 3;
    }
    piVar4 = (int *)(pcVar20 + -3);
    *(short *)(puVar15 + 1) = (short)uVar17;
    *puVar15 = puVar25;
    if ((int *)0xffff < piVar4) {
      param_2[9] = 2;
      param_2[10] = (int)puVar15 - *param_2 >> 3;
    }
    *(short *)((int)puVar15 + 6) = (short)piVar4;
    param_2[1] = (int)(puVar15 + 2);
    piVar18 = (int *)((int)local_3c + (int)pcVar20);
    if (*(int *)(param_1 + 0xdc) != 0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    for (; piVar1 = local_48, piVar18 <= pcVar5 + -8; piVar18 = (int *)((int)piVar18 + iVar3 + 4)) {
      iVar19 = (int)piVar18 - iVar6;
      iVar2 = FUN_01b9b7d4(param_1,iVar19,uVar12);
      pcVar21 = (char *)(iVar19 - (int)local_48);
      iVar3 = iVar9;
      if (pcVar7 <= pcVar21) {
        iVar3 = iVar6;
      }
      piVar4 = local_48;
      if (((int *)(iVar19 - iVar2) < local_48 ||
           (char *)((int)local_48 + (int)(pcVar7 + (-1 - iVar19))) < &DAT_00000003) ||
         (piVar4 = (int *)(pcVar21 + iVar3), *piVar18 != *(int *)(pcVar21 + iVar3))) break;
      pcVar23 = pcVar5;
      if (pcVar21 < pcVar7) {
        pcVar23 = pcVar10;
      }
      iVar3 = FUN_01b9b970(piVar18 + 1,piVar4 + 1,pcVar5,pcVar23,piVar8);
      if (piVar14 < piVar18) {
        FUN_01b9b730(param_2[3],piVar18,piVar18,piVar14);
        piVar4 = extraout_r1_00;
      }
      else {
        FUN_01b9b650(param_2[3],piVar18);
        piVar4 = extraout_r1;
      }
      puVar15 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar15 + 1) = 0;
      *puVar15 = 1;
      if (0xffff < iVar3 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)puVar15 - *param_2 >> 3;
      }
      *(short *)((int)puVar15 + 6) = (short)(iVar3 + 1U);
      param_2[1] = (int)(puVar15 + 2);
      local_48 = local_40;
      local_40 = piVar1;
    }
    param_4 = piVar18;
  } while( true );
}

