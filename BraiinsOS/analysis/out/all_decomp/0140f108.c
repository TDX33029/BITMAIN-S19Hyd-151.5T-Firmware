// FUN_0140f108 @ 0140f108 size=624 calls_out=6 calls_in=1
// strings: Writer must be present

void FUN_0140f108(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  
  if ((*(char *)(param_1 + 0x413) == '\0') &&
     (piVar6 = *(int **)(param_1 + 0x400), piVar6 != (int *)0x0)) {
    uVar4 = *(uint *)(param_1 + 0x408);
    if (uVar4 != 0) {
      *(undefined1 *)(param_1 + 0x413) = 1;
      if (0x400 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar4,0x400,&DAT_018a4578);
      }
      iVar1 = piVar6[2];
      if ((uint)(*piVar6 - iVar1) < uVar4) {
        FUN_0148d72c(piVar6,iVar1,uVar4,1,1);
        iVar1 = piVar6[2];
      }
      FUN_016dd1aa(piVar6[1] + iVar1,param_1,uVar4);
      iVar1 = piVar6[2];
      *(undefined1 *)(param_1 + 0x413) = 0;
      *(undefined4 *)(param_1 + 0x408) = 0;
      piVar6[2] = iVar1 + uVar4;
    }
    uVar4 = *(uint *)(param_1 + 0x404);
    if (uVar4 != 0) {
      if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar4,3,&DAT_018a4588);
      }
      pcVar7 = *(char **)(param_1 + 0x40c);
      uVar5 = (uVar4 / 3) * 4;
      if (uVar4 % 3 != 0) {
        if (*pcVar7 == '\0') {
          uVar3 = 3;
          if (uVar4 % 3 == 1) {
            uVar3 = 2;
          }
          uVar5 = uVar3 | uVar5;
        }
        else {
          uVar5 = uVar5 + 4;
        }
      }
      uVar4 = FUN_0062e67c(pcVar7,param_1 + 0x410,uVar4,param_1,uVar5);
      if (*pcVar7 == '\x01') {
        if (uVar5 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar4,uVar5,uVar5,&DAT_018a6580);
        }
        uVar3 = -uVar4 & 3;
        if (uVar3 != 0) {
          iVar1 = uVar5 - uVar4;
          if (iVar1 == 0) {
LAB_0140f368:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(iVar1,iVar1,&DAT_018a6570);
          }
          puVar2 = (undefined1 *)(param_1 + uVar4);
          *puVar2 = 0x3d;
          if (uVar3 != 1) {
            if (iVar1 == 1) goto LAB_0140f368;
            puVar2[1] = 0x3d;
            if (uVar3 != 2) {
              if (iVar1 == 2) goto LAB_0140f368;
              puVar2[2] = 0x3d;
            }
          }
        }
      }
      *(uint *)(param_1 + 0x408) = uVar5;
      if (uVar5 != 0) {
        piVar6 = *(int **)(param_1 + 0x400);
        *(undefined1 *)(param_1 + 0x413) = 1;
        if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("Writer must be present",0x16,&DAT_018a4568);
        }
        iVar1 = piVar6[2];
        if ((uint)(*piVar6 - iVar1) < uVar5) {
          FUN_0148d72c(piVar6,iVar1,uVar5,1,1);
          iVar1 = piVar6[2];
        }
        FUN_016dd1aa(piVar6[1] + iVar1,param_1,uVar5);
        iVar1 = piVar6[2];
        *(undefined1 *)(param_1 + 0x413) = 0;
        *(undefined4 *)(param_1 + 0x408) = 0;
        piVar6[2] = iVar1 + uVar5;
      }
      *(undefined4 *)(param_1 + 0x404) = 0;
    }
  }
  return;
}

