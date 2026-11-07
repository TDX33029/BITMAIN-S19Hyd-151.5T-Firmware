// FUN_012f5598 @ 012f5598 size=700 calls_out=5 calls_in=7
// strings: 

undefined4 FUN_012f5598(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = *(uint *)(param_1 + 0x50);
  uVar3 = *(uint *)(param_1 + 0x54);
  if (uVar3 <= uVar4) {
    if (uVar3 != 0) {
      iVar6 = *(int *)(param_1 + 0x4c);
      iVar8 = uVar3 * 0xa0;
      do {
        iVar2 = FUN_012f6850(iVar6);
        if (iVar2 == 0) {
          return 0;
        }
        iVar6 = iVar6 + 0xa0;
        iVar8 = iVar8 + -0xa0;
      } while (iVar8 != 0);
    }
    uVar4 = *(uint *)(param_1 + 0x60);
    uVar3 = *(uint *)(param_1 + 100);
    if (uVar4 < uVar3) goto LAB_012f57f0;
    if (uVar3 != 0) {
      iVar6 = *(int *)(param_1 + 0x5c);
      iVar8 = uVar3 * 0x50;
      do {
        iVar2 = FUN_012f6cb4(iVar6);
        if (iVar2 == 0) {
          return 0;
        }
        iVar6 = iVar6 + 0x50;
        iVar8 = iVar8 + -0x50;
      } while (iVar8 != 0);
    }
    uVar4 = *(uint *)(param_1 + 0x70);
    uVar3 = *(uint *)(param_1 + 0x74);
    if (uVar4 < uVar3) goto LAB_012f57f0;
    if (uVar3 != 0) {
      iVar6 = *(int *)(param_1 + 0x6c);
      iVar8 = uVar3 * 0x30;
      do {
        iVar2 = FUN_012f6e88(iVar6);
        if (iVar2 == 0) {
          return 0;
        }
        iVar6 = iVar6 + 0x30;
        iVar8 = iVar8 + -0x30;
      } while (iVar8 != 0);
    }
    uVar3 = *(uint *)(param_1 + 0x80);
    uVar4 = *(uint *)(param_1 + 0x84);
    if (uVar3 < uVar4) {
LAB_012f5804:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar4,uVar3,&DAT_01890988);
    }
    if (uVar4 != 0) {
      iVar8 = *(int *)(param_1 + 0x7c);
      iVar6 = uVar4 * 0x74 + iVar8;
      do {
        if (*(char *)(iVar8 + 100) == '\x01') {
          iVar2 = *(int *)(iVar8 + 0x60);
          if (iVar2 == 0) goto LAB_012f5830;
          uVar3 = *(uint *)(iVar2 + 8);
          uVar4 = *(uint *)(iVar2 + 0xc);
          if (uVar3 < uVar4) goto LAB_012f5804;
          if (uVar4 != 0) {
            iVar2 = *(int *)(iVar2 + 4);
            iVar9 = iVar2 + uVar4 * 0x78;
            do {
              uVar3 = *(uint *)(iVar2 + 0x3c);
              if (*(uint *)(iVar2 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,uVar3,*(uint *)(iVar2 + 0x38),&DAT_01890988);
              }
              iVar7 = *(int *)(iVar2 + 0x34);
              iVar5 = uVar3 * 0x1c;
              while (iVar5 != 0) {
                if (*(char *)(iVar7 + 0xc) != '\x01') {
                  return 0;
                }
                pcVar1 = (char *)(iVar7 + 0x18);
                iVar5 = iVar5 + -0x1c;
                iVar7 = iVar7 + 0x1c;
                if (*pcVar1 == '\x02') {
                  return 0;
                }
              }
              iVar2 = iVar2 + 0x78;
            } while (iVar2 != iVar9);
          }
        }
        iVar8 = iVar8 + 0x74;
      } while (iVar8 != iVar6);
    }
    if (*(char *)(param_1 + 0x9c) != '\0') {
      iVar8 = *(int *)(param_1 + 0x98);
      if (iVar8 == 0) goto LAB_012f5830;
      uVar3 = *(uint *)(iVar8 + 0xa8);
      uVar4 = *(uint *)(iVar8 + 0xac);
      if (uVar3 < uVar4) goto LAB_012f5804;
      if (uVar4 != 0) {
        iVar8 = *(int *)(iVar8 + 0xa4);
        iVar6 = iVar8 + uVar4 * 0x78;
        do {
          uVar3 = *(uint *)(iVar8 + 0x3c);
          if (*(uint *)(iVar8 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar3,*(uint *)(iVar8 + 0x38),&DAT_01890988);
          }
          iVar9 = *(int *)(iVar8 + 0x34);
          iVar2 = uVar3 * 0x1c;
          while (iVar2 != 0) {
            if (*(char *)(iVar9 + 0xc) != '\x01') {
              return 0;
            }
            pcVar1 = (char *)(iVar9 + 0x18);
            iVar2 = iVar2 + -0x1c;
            iVar9 = iVar9 + 0x1c;
            if (*pcVar1 == '\x02') {
              return 0;
            }
          }
          iVar8 = iVar8 + 0x78;
        } while (iVar8 != iVar6);
      }
    }
    if (*(char *)(param_1 + 0xa4) != '\x01') {
      return 1;
    }
    iVar8 = *(int *)(param_1 + 0xa0);
    if (iVar8 == 0) {
LAB_012f5830:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar4 = *(uint *)(iVar8 + 8);
    uVar3 = *(uint *)(iVar8 + 0xc);
    if (uVar3 <= uVar4) {
      return 1;
    }
  }
LAB_012f57f0:
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(0,uVar3,uVar4,&DAT_01890988);
}

