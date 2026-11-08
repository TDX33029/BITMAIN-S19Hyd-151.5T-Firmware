// FUN_012f6cb4 @ 012f6cb4 size=452 calls_out=2 calls_in=7
// strings: 

undefined4 FUN_012f6cb4(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (*(uint *)(param_1 + 0x18) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,*(uint *)(param_1 + 0x18),&DAT_01890988);
  }
  if (uVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar8 = iVar3 + uVar2 * 0x28;
    do {
      if (*(char *)(iVar3 + 0x1c) == '\x01') {
        iVar4 = *(int *)(iVar3 + 0x18);
        if (iVar4 == 0) goto LAB_012f6e58;
        uVar5 = *(uint *)(iVar4 + 8);
        uVar2 = *(uint *)(iVar4 + 0xc);
        if (uVar5 < uVar2) goto LAB_012f6e34;
        if (uVar2 != 0) {
          iVar4 = *(int *)(iVar4 + 4);
          iVar9 = iVar4 + uVar2 * 0x78;
          do {
            uVar5 = *(uint *)(iVar4 + 0x38);
            uVar2 = *(uint *)(iVar4 + 0x3c);
            if (uVar5 < uVar2) goto LAB_012f6e34;
            iVar6 = *(int *)(iVar4 + 0x34);
            iVar7 = uVar2 * 0x1c;
            while (iVar7 != 0) {
              if (*(char *)(iVar6 + 0xc) != '\x01') {
                return 0;
              }
              pcVar1 = (char *)(iVar6 + 0x18);
              iVar7 = iVar7 + -0x1c;
              iVar6 = iVar6 + 0x1c;
              if (*pcVar1 == '\x02') {
                return 0;
              }
            }
            iVar4 = iVar4 + 0x78;
          } while (iVar4 != iVar9);
        }
      }
      iVar3 = iVar3 + 0x28;
    } while (iVar3 != iVar8);
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    iVar3 = *(int *)(param_1 + 0x40);
    if (iVar3 == 0) {
LAB_012f6e58:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar5 = *(uint *)(iVar3 + 8);
    uVar2 = *(uint *)(iVar3 + 0xc);
    if (uVar5 < uVar2) {
LAB_012f6e34:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar2,uVar5,&DAT_01890988);
    }
    if (uVar2 != 0) {
      iVar3 = *(int *)(iVar3 + 4);
      iVar8 = iVar3 + uVar2 * 0x78;
      do {
        uVar5 = *(uint *)(iVar3 + 0x38);
        uVar2 = *(uint *)(iVar3 + 0x3c);
        if (uVar5 < uVar2) goto LAB_012f6e34;
        iVar9 = *(int *)(iVar3 + 0x34);
        iVar4 = uVar2 * 0x1c;
        while (iVar4 != 0) {
          if (*(char *)(iVar9 + 0xc) != '\x01') {
            return 0;
          }
          pcVar1 = (char *)(iVar9 + 0x18);
          iVar4 = iVar4 + -0x1c;
          iVar9 = iVar9 + 0x1c;
          if (*pcVar1 == '\x02') {
            return 0;
          }
        }
        iVar3 = iVar3 + 0x78;
      } while (iVar3 != iVar8);
    }
  }
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,*(uint *)(param_1 + 0x2c),*(uint *)(param_1 + 0x28),&DAT_01890988);
  }
  return 1;
}

