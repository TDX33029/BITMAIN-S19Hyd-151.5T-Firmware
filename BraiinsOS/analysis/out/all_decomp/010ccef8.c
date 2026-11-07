// FUN_010ccef8 @ 010ccef8 size=620 calls_out=6 calls_in=1
// strings: Writer must be present

void FUN_010ccef8(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  
  if (*(char *)(param_1 + 0x413) != '\0') {
    return;
  }
  piVar8 = *(int **)(param_1 + 0x400);
  if (piVar8 == (int *)0x0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x408);
  if (uVar6 != 0) {
    *(undefined1 *)(param_1 + 0x413) = 1;
    if (0x400 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar6,0x400,&DAT_018a4578);
    }
    iVar4 = piVar8[2];
    if ((uint)(*piVar8 - iVar4) < uVar6) {
      FUN_010cdae0(piVar8,iVar4,uVar6);
      iVar4 = piVar8[2];
    }
    FUN_016dd1aa(piVar8[1] + iVar4,param_1,uVar6);
    iVar4 = piVar8[2];
    *(undefined1 *)(param_1 + 0x413) = 0;
    *(undefined4 *)(param_1 + 0x408) = 0;
    piVar8[2] = iVar4 + uVar6;
  }
  uVar6 = *(uint *)(param_1 + 0x404);
  if (uVar6 == 0) {
    return;
  }
  if (3 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar6,3,&DAT_018a4588);
  }
  pcVar2 = *(char **)(param_1 + 0x40c);
  cVar1 = *pcVar2;
  uVar7 = (uVar6 / 3) * 4;
  iVar4 = param_1 + 0x410;
  if (uVar6 % 3 == 0) {
    uVar6 = FUN_0062e67c(pcVar2,iVar4,uVar6,param_1,uVar7);
    if (cVar1 != '\0') goto LAB_010ccfe8;
LAB_010cd03c:
    *(uint *)(param_1 + 0x408) = uVar7;
    if (uVar7 == 0) goto LAB_010cd0c0;
  }
  else {
    if (cVar1 != '\0') {
      uVar7 = uVar7 + 4;
      uVar6 = FUN_0062e67c(pcVar2,iVar4,uVar6,param_1,uVar7);
LAB_010ccfe8:
      if (uVar7 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar6,uVar7,uVar7,&DAT_018a6580);
      }
      uVar5 = -uVar6 & 3;
      if (uVar5 != 0) {
        iVar4 = uVar7 - uVar6;
        if (iVar4 == 0) {
LAB_010cd154:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(iVar4,iVar4,&DAT_018a6570);
        }
        puVar3 = (undefined1 *)(param_1 + uVar6);
        *puVar3 = 0x3d;
        if (uVar5 != 1) {
          if (iVar4 == 1) goto LAB_010cd154;
          puVar3[1] = 0x3d;
          if (uVar5 != 2) {
            if (iVar4 == 2) goto LAB_010cd154;
            puVar3[2] = 0x3d;
          }
        }
      }
      goto LAB_010cd03c;
    }
    uVar5 = 3;
    if (uVar6 % 3 == 1) {
      uVar5 = 2;
    }
    uVar7 = uVar5 | uVar7;
    FUN_0062e67c(pcVar2,iVar4,uVar6,param_1,uVar7);
    *(uint *)(param_1 + 0x408) = uVar7;
  }
  piVar8 = *(int **)(param_1 + 0x400);
  *(undefined1 *)(param_1 + 0x413) = 1;
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("Writer must be present",0x16,&DAT_018a4568);
  }
  iVar4 = piVar8[2];
  if ((uint)(*piVar8 - iVar4) < uVar7) {
    FUN_010cdae0(piVar8,iVar4,uVar7);
    iVar4 = piVar8[2];
  }
  FUN_016dd1aa(piVar8[1] + iVar4,param_1,uVar7);
  iVar4 = piVar8[2];
  *(undefined1 *)(param_1 + 0x413) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  piVar8[2] = iVar4 + uVar7;
LAB_010cd0c0:
  *(undefined4 *)(param_1 + 0x404) = 0;
  return;
}

