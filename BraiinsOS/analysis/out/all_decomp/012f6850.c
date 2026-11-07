// FUN_012f6850 @ 012f6850 size=1108 calls_out=7 calls_in=7
// strings: 

undefined4 FUN_012f6850(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar7 = *(uint *)(param_1 + 0x1c);
  if (uVar7 <= uVar5) {
    if (uVar7 != 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      iVar4 = uVar7 * 0x74 + iVar3;
      do {
        if (*(char *)(iVar3 + 100) == '\x01') {
          iVar2 = *(int *)(iVar3 + 0x60);
          if (iVar2 == 0) goto LAB_012f6c88;
          uVar5 = *(uint *)(iVar2 + 8);
          uVar7 = *(uint *)(iVar2 + 0xc);
          if (uVar5 < uVar7) goto LAB_012f6c58;
          if (uVar7 != 0) {
            iVar2 = *(int *)(iVar2 + 4);
            iVar9 = iVar2 + uVar7 * 0x78;
            do {
              uVar5 = *(uint *)(iVar2 + 0x38);
              uVar7 = *(uint *)(iVar2 + 0x3c);
              if (uVar5 < uVar7) goto LAB_012f6c70;
              iVar8 = *(int *)(iVar2 + 0x34);
              iVar6 = uVar7 * 0x1c;
              while (iVar6 != 0) {
                if (*(char *)(iVar8 + 0xc) != '\x01') {
                  return 0;
                }
                pcVar1 = (char *)(iVar8 + 0x18);
                iVar6 = iVar6 + -0x1c;
                iVar8 = iVar8 + 0x1c;
                if (*pcVar1 == '\x02') {
                  return 0;
                }
              }
              iVar2 = iVar2 + 0x78;
            } while (iVar2 != iVar9);
          }
        }
        iVar3 = iVar3 + 0x74;
      } while (iVar3 != iVar4);
    }
    uVar5 = *(uint *)(param_1 + 0x28);
    uVar7 = *(uint *)(param_1 + 0x2c);
    if (uVar7 <= uVar5) {
      if (uVar7 != 0) {
        iVar3 = *(int *)(param_1 + 0x24);
        iVar4 = uVar7 * 0x74 + iVar3;
        do {
          if (*(char *)(iVar3 + 100) == '\x01') {
            iVar2 = *(int *)(iVar3 + 0x60);
            if (iVar2 == 0) goto LAB_012f6c88;
            uVar5 = *(uint *)(iVar2 + 8);
            uVar7 = *(uint *)(iVar2 + 0xc);
            if (uVar5 < uVar7) goto LAB_012f6c58;
            if (uVar7 != 0) {
              iVar2 = *(int *)(iVar2 + 4);
              iVar9 = iVar2 + uVar7 * 0x78;
              do {
                uVar5 = *(uint *)(iVar2 + 0x38);
                uVar7 = *(uint *)(iVar2 + 0x3c);
                if (uVar5 < uVar7) goto LAB_012f6c70;
                iVar8 = *(int *)(iVar2 + 0x34);
                iVar6 = uVar7 * 0x1c;
                while (iVar6 != 0) {
                  if (*(char *)(iVar8 + 0xc) != '\x01') {
                    return 0;
                  }
                  pcVar1 = (char *)(iVar8 + 0x18);
                  iVar6 = iVar6 + -0x1c;
                  iVar8 = iVar8 + 0x1c;
                  if (*pcVar1 == '\x02') {
                    return 0;
                  }
                }
                iVar2 = iVar2 + 0x78;
              } while (iVar2 != iVar9);
            }
          }
          iVar3 = iVar3 + 0x74;
        } while (iVar3 != iVar4);
      }
      uVar7 = *(uint *)(param_1 + 0x38);
      uVar5 = *(uint *)(param_1 + 0x3c);
      if (uVar5 <= uVar7) {
        if (uVar5 != 0) {
          iVar4 = *(int *)(param_1 + 0x34);
          iVar3 = uVar5 * 0xa0;
          do {
            iVar2 = FUN_012f6850(iVar4);
            if (iVar2 == 0) {
              return 0;
            }
            iVar4 = iVar4 + 0xa0;
            iVar3 = iVar3 + -0xa0;
          } while (iVar3 != 0);
        }
        uVar7 = *(uint *)(param_1 + 0x48);
        uVar5 = *(uint *)(param_1 + 0x4c);
        if (uVar5 <= uVar7) {
          if (uVar5 != 0) {
            iVar4 = *(int *)(param_1 + 0x44);
            iVar3 = uVar5 * 0x50;
            do {
              iVar2 = FUN_012f6cb4(iVar4);
              if (iVar2 == 0) {
                return 0;
              }
              iVar4 = iVar4 + 0x50;
              iVar3 = iVar3 + -0x50;
            } while (iVar3 != 0);
          }
          uVar5 = *(uint *)(param_1 + 0x58);
          uVar7 = *(uint *)(param_1 + 0x5c);
          if (uVar7 <= uVar5) {
            if (uVar7 != 0) {
              iVar3 = *(int *)(param_1 + 0x54);
              iVar4 = iVar3 + uVar7 * 0x20;
              do {
                if (*(char *)(iVar3 + 0x14) == '\x01') {
                  iVar2 = *(int *)(iVar3 + 0x10);
                  if (iVar2 == 0) goto LAB_012f6c88;
                  uVar5 = *(uint *)(iVar2 + 8);
                  uVar7 = *(uint *)(iVar2 + 0xc);
                  if (uVar5 < uVar7) goto LAB_012f6c58;
                  if (uVar7 != 0) {
                    iVar2 = *(int *)(iVar2 + 4);
                    iVar9 = iVar2 + uVar7 * 0x78;
                    do {
                      uVar5 = *(uint *)(iVar2 + 0x38);
                      uVar7 = *(uint *)(iVar2 + 0x3c);
                      if (uVar5 < uVar7) goto LAB_012f6c70;
                      iVar8 = *(int *)(iVar2 + 0x34);
                      iVar6 = uVar7 * 0x1c;
                      while (iVar6 != 0) {
                        if (*(char *)(iVar8 + 0xc) != '\x01') {
                          return 0;
                        }
                        pcVar1 = (char *)(iVar8 + 0x18);
                        iVar6 = iVar6 + -0x1c;
                        iVar8 = iVar8 + 0x1c;
                        if (*pcVar1 == '\x02') {
                          return 0;
                        }
                      }
                      iVar2 = iVar2 + 0x78;
                    } while (iVar2 != iVar9);
                  }
                }
                iVar3 = iVar3 + 0x20;
              } while (iVar3 != iVar4);
            }
            uVar5 = *(uint *)(param_1 + 0x68);
            uVar7 = *(uint *)(param_1 + 0x6c);
            if (uVar7 <= uVar5) {
              if (uVar7 != 0) {
                iVar3 = *(int *)(param_1 + 100);
                iVar4 = iVar3 + uVar7 * 0x20;
                do {
                  if (*(char *)(iVar3 + 0x14) == '\x01') {
                    iVar2 = *(int *)(iVar3 + 0x10);
                    if (iVar2 == 0) goto LAB_012f6c88;
                    uVar5 = *(uint *)(iVar2 + 8);
                    uVar7 = *(uint *)(iVar2 + 0xc);
                    if (uVar5 < uVar7) goto LAB_012f6c58;
                    if (uVar7 != 0) {
                      iVar2 = *(int *)(iVar2 + 4);
                      iVar9 = iVar2 + uVar7 * 0x78;
                      do {
                        uVar5 = *(uint *)(iVar2 + 0x38);
                        uVar7 = *(uint *)(iVar2 + 0x3c);
                        if (uVar5 < uVar7) {
LAB_012f6c70:
                    /* WARNING: Subroutine does not return */
                          FUN_00faa36c(0,uVar7,uVar5,&DAT_01890988);
                        }
                        iVar8 = *(int *)(iVar2 + 0x34);
                        iVar6 = uVar7 * 0x1c;
                        while (iVar6 != 0) {
                          if (*(char *)(iVar8 + 0xc) != '\x01') {
                            return 0;
                          }
                          pcVar1 = (char *)(iVar8 + 0x18);
                          iVar6 = iVar6 + -0x1c;
                          iVar8 = iVar8 + 0x1c;
                          if (*pcVar1 == '\x02') {
                            return 0;
                          }
                        }
                        iVar2 = iVar2 + 0x78;
                      } while (iVar2 != iVar9);
                    }
                  }
                  iVar3 = iVar3 + 0x20;
                } while (iVar3 != iVar4);
              }
              if (*(char *)(param_1 + 0x94) != '\0') {
                if (*(int *)(param_1 + 0x90) == 0) {
LAB_012f6c88:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_01890768);
                }
                uVar10 = FUN_0132bb74();
                iVar4 = (int)((ulonglong)uVar10 >> 0x20);
                iVar3 = (int)uVar10;
                if (iVar3 != iVar4) {
                  do {
                    uVar10 = FUN_0132bbdc(iVar3 + 0x30);
                    iVar2 = (int)uVar10;
                    while (iVar2 != (int)((ulonglong)uVar10 >> 0x20)) {
                      if (*(char *)(iVar2 + 0xc) != '\x01') {
                        return 0;
                      }
                      pcVar1 = (char *)(iVar2 + 0x18);
                      iVar2 = iVar2 + 0x1c;
                      if (*pcVar1 == '\x02') {
                        return 0;
                      }
                    }
                    iVar3 = iVar3 + 0x78;
                  } while (iVar3 != iVar4);
                }
              }
              FUN_0132bba8(param_1 + 0x70);
              return 1;
            }
          }
          goto LAB_012f6c58;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar5,uVar7,&DAT_01890988);
    }
  }
LAB_012f6c58:
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(0,uVar7,uVar5,&DAT_01890988);
}

