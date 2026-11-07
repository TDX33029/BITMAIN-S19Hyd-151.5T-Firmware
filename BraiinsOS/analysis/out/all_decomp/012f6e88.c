// FUN_012f6e88 @ 012f6e88 size=420 calls_out=2 calls_in=6
// strings: 

undefined4 FUN_012f6e88(int param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (uVar3 < uVar2) {
LAB_012f7010:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,uVar3,&DAT_01890988);
  }
  if (uVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar8 = iVar4 + uVar2 * 0x44;
    do {
      if (*(char *)(iVar4 + 0x34) == '\x01') {
        iVar5 = *(int *)(iVar4 + 0x30);
        if (iVar5 == 0) goto LAB_012f7020;
        uVar3 = *(uint *)(iVar5 + 8);
        uVar2 = *(uint *)(iVar5 + 0xc);
        if (uVar3 < uVar2) goto LAB_012f6ffc;
        if (uVar2 != 0) {
          iVar5 = *(int *)(iVar5 + 4);
          iVar9 = iVar5 + uVar2 * 0x78;
          do {
            uVar3 = *(uint *)(iVar5 + 0x38);
            uVar2 = *(uint *)(iVar5 + 0x3c);
            if (uVar3 < uVar2) goto LAB_012f6ffc;
            iVar6 = *(int *)(iVar5 + 0x34);
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
            iVar5 = iVar5 + 0x78;
          } while (iVar5 != iVar9);
        }
      }
      iVar4 = iVar4 + 0x44;
    } while (iVar4 != iVar8);
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    iVar4 = *(int *)(param_1 + 0x20);
    if (iVar4 == 0) {
LAB_012f7020:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar3 = *(uint *)(iVar4 + 8);
    uVar2 = *(uint *)(iVar4 + 0xc);
    if (uVar3 < uVar2) goto LAB_012f7010;
    if (uVar2 != 0) {
      iVar4 = *(int *)(iVar4 + 4);
      iVar8 = iVar4 + uVar2 * 0x78;
      do {
        uVar3 = *(uint *)(iVar4 + 0x38);
        uVar2 = *(uint *)(iVar4 + 0x3c);
        if (uVar3 < uVar2) {
LAB_012f6ffc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar2,uVar3,&DAT_01890988);
        }
        iVar9 = *(int *)(iVar4 + 0x34);
        iVar5 = uVar2 * 0x1c;
        while (iVar5 != 0) {
          if (*(char *)(iVar9 + 0xc) != '\x01') {
            return 0;
          }
          pcVar1 = (char *)(iVar9 + 0x18);
          iVar5 = iVar5 + -0x1c;
          iVar9 = iVar9 + 0x1c;
          if (*pcVar1 == '\x02') {
            return 0;
          }
        }
        iVar4 = iVar4 + 0x78;
      } while (iVar4 != iVar8);
    }
  }
  return 1;
}

