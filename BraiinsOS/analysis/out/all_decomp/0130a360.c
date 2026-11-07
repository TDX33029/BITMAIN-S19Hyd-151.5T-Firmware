// FUN_0130a360 @ 0130a360 size=1340 calls_out=9 calls_in=10
// strings: 

void FUN_0130a360(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar1 = *(uint *)(param_1 + 8);
    iVar8 = 1;
    if (0x7f < uVar1) {
      iVar8 = 2;
      if (0x3fff < uVar1) {
        iVar8 = 3;
      }
      if ((0x1fffff < uVar1) && (iVar8 = 5, uVar1 < 0x10000000)) {
        iVar8 = 4;
      }
    }
    iVar8 = uVar1 + iVar8 + 1;
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 <= uVar5) {
    if (uVar1 != 0) {
      iVar7 = *(int *)(param_1 + 0x14);
      iVar6 = uVar1 * 0x74;
      do {
        uVar1 = FUN_0130c068(iVar7);
        iVar3 = 1;
        if (0x7f < uVar1) {
          iVar3 = 2;
          if (0x3fff < uVar1) {
            iVar3 = 3;
          }
          if ((0x1fffff < uVar1) && (iVar3 = 5, uVar1 < 0x10000000)) {
            iVar3 = 4;
          }
        }
        iVar7 = iVar7 + 0x74;
        iVar6 = iVar6 + -0x74;
        iVar8 = iVar8 + uVar1 + iVar3 + 1;
      } while (iVar6 != 0);
    }
    uVar5 = *(uint *)(param_1 + 0x28);
    uVar1 = *(uint *)(param_1 + 0x2c);
    if (uVar1 <= uVar5) {
      if (uVar1 != 0) {
        iVar7 = *(int *)(param_1 + 0x24);
        iVar6 = uVar1 * 0x74;
        do {
          uVar1 = FUN_0130c068(iVar7);
          iVar3 = 1;
          if (0x7f < uVar1) {
            iVar3 = 2;
            if (0x3fff < uVar1) {
              iVar3 = 3;
            }
            if ((0x1fffff < uVar1) && (iVar3 = 5, uVar1 < 0x10000000)) {
              iVar3 = 4;
            }
          }
          iVar7 = iVar7 + 0x74;
          iVar6 = iVar6 + -0x74;
          iVar8 = iVar8 + uVar1 + iVar3 + 1;
        } while (iVar6 != 0);
      }
      uVar5 = *(uint *)(param_1 + 0x38);
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= uVar5) {
        if (uVar1 != 0) {
          iVar7 = *(int *)(param_1 + 0x34);
          iVar6 = uVar1 * 0xa0;
          do {
            uVar1 = FUN_0130a360(iVar7);
            iVar3 = 1;
            if (0x7f < uVar1) {
              iVar3 = 2;
              if (0x3fff < uVar1) {
                iVar3 = 3;
              }
              if ((0x1fffff < uVar1) && (iVar3 = 5, uVar1 < 0x10000000)) {
                iVar3 = 4;
              }
            }
            iVar7 = iVar7 + 0xa0;
            iVar6 = iVar6 + -0xa0;
            iVar8 = iVar8 + uVar1 + iVar3 + 1;
          } while (iVar6 != 0);
        }
        uVar5 = *(uint *)(param_1 + 0x48);
        uVar1 = *(uint *)(param_1 + 0x4c);
        if (uVar1 <= uVar5) {
          if (uVar1 != 0) {
            iVar7 = *(int *)(param_1 + 0x44);
            iVar6 = uVar1 * 0x50;
            do {
              uVar1 = FUN_0130c364(iVar7);
              iVar3 = 1;
              if (0x7f < uVar1) {
                iVar3 = 2;
                if (0x3fff < uVar1) {
                  iVar3 = 3;
                }
                if ((0x1fffff < uVar1) && (iVar3 = 5, uVar1 < 0x10000000)) {
                  iVar3 = 4;
                }
              }
              iVar7 = iVar7 + 0x50;
              iVar6 = iVar6 + -0x50;
              iVar8 = iVar8 + uVar1 + iVar3 + 1;
            } while (iVar6 != 0);
          }
          uVar5 = *(uint *)(param_1 + 0x58);
          uVar1 = *(uint *)(param_1 + 0x5c);
          if (uVar1 <= uVar5) {
            if (uVar1 != 0) {
              iVar7 = *(int *)(param_1 + 0x54);
              iVar6 = uVar1 << 5;
              do {
                uVar1 = FUN_0130c6f4(iVar7);
                iVar3 = 1;
                if (0x7f < uVar1) {
                  iVar3 = 2;
                  if (0x3fff < uVar1) {
                    iVar3 = 3;
                  }
                  if ((0x1fffff < uVar1) && (iVar3 = 5, uVar1 < 0x10000000)) {
                    iVar3 = 4;
                  }
                }
                iVar7 = iVar7 + 0x20;
                iVar6 = iVar6 + -0x20;
                iVar8 = iVar8 + uVar1 + iVar3 + 1;
              } while (iVar6 != 0);
            }
            uVar5 = *(uint *)(param_1 + 0x68);
            uVar1 = *(uint *)(param_1 + 0x6c);
            if (uVar1 <= uVar5) {
              if (uVar1 != 0) {
                iVar7 = *(int *)(param_1 + 100);
                iVar6 = uVar1 << 5;
                do {
                  uVar1 = FUN_0130c8b0(iVar7);
                  iVar3 = 1;
                  if (0x7f < uVar1) {
                    iVar3 = 2;
                    if (0x3fff < uVar1) {
                      iVar3 = 3;
                    }
                    if ((0x1fffff < uVar1) && (iVar3 = 5, uVar1 < 0x10000000)) {
                      iVar3 = 4;
                    }
                  }
                  iVar7 = iVar7 + 0x20;
                  iVar6 = iVar6 + -0x20;
                  iVar8 = iVar8 + uVar1 + iVar3 + 1;
                } while (iVar6 != 0);
              }
              if (*(char *)(param_1 + 0x94) == '\x01') {
                if (*(int *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_01890768);
                }
                uVar1 = FUN_01303a30();
                iVar6 = 1;
                if (0x7f < uVar1) {
                  iVar6 = 2;
                  if (0x3fff < uVar1) {
                    iVar6 = 3;
                  }
                  if ((0x1fffff < uVar1) && (iVar6 = 5, uVar1 < 0x10000000)) {
                    iVar6 = 4;
                  }
                }
                iVar8 = iVar8 + uVar1 + iVar6 + 1;
              }
              uVar5 = *(uint *)(param_1 + 0x78);
              uVar1 = *(uint *)(param_1 + 0x7c);
              if (uVar1 <= uVar5) {
                if (uVar1 != 0) {
                  iVar6 = *(int *)(param_1 + 0x74);
                  puVar4 = (uint *)(iVar6 + 0xc);
                  do {
                    iVar7 = 0;
                    if (puVar4[-3] == 1) {
                      uVar5 = puVar4[-2];
                      iVar7 = 2;
                      if (0x7f < uVar5) {
                        iVar7 = 3;
                      }
                      if (0x3fff < uVar5) {
                        iVar7 = 4;
                        if (0x1fffff < uVar5) {
                          iVar7 = 5;
                        }
                        if ((0xfffffff < uVar5) && (iVar7 = 0xb, uVar5 < 0x80000000)) {
                          iVar7 = 6;
                        }
                      }
                    }
                    if (puVar4[-1] == 1) {
                      uVar5 = *puVar4;
                      iVar3 = 2;
                      if (0x7f < uVar5) {
                        iVar3 = 3;
                      }
                      if (0x3fff < uVar5) {
                        iVar3 = 4;
                        if (0x1fffff < uVar5) {
                          iVar3 = 5;
                        }
                        if ((0xfffffff < uVar5) && (iVar3 = 0xb, uVar5 < 0x80000000)) {
                          iVar3 = 6;
                        }
                      }
                      iVar7 = iVar3 + iVar7;
                    }
                    iVar3 = FUN_01337c54(puVar4[1]);
                    uVar5 = iVar3 + iVar7;
                    iVar7 = 1;
                    puVar4[2] = uVar5;
                    if (0x7f < uVar5) {
                      iVar7 = 2;
                      if (0x3fff < uVar5) {
                        iVar7 = 3;
                      }
                      if ((0x1fffff < uVar5) && (iVar7 = 5, uVar5 < 0x10000000)) {
                        iVar7 = 4;
                      }
                    }
                    iVar8 = iVar8 + uVar5 + iVar7 + 1;
                    puVar2 = puVar4 + 3;
                    puVar4 = puVar4 + 6;
                  } while (puVar2 != (uint *)(iVar6 + uVar1 * 0x18));
                }
                uVar5 = *(uint *)(param_1 + 0x88);
                uVar1 = *(uint *)(param_1 + 0x8c);
                if (uVar1 <= uVar5) {
                  if (uVar1 != 0) {
                    iVar6 = uVar1 * 0xc;
                    puVar4 = (uint *)(*(int *)(param_1 + 0x84) + 8);
                    do {
                      uVar1 = *puVar4;
                      iVar7 = 1;
                      if (0x7f < uVar1) {
                        iVar7 = 2;
                        if (0x3fff < uVar1) {
                          iVar7 = 3;
                        }
                        if ((0x1fffff < uVar1) && (iVar7 = 5, uVar1 < 0x10000000)) {
                          iVar7 = 4;
                        }
                      }
                      iVar6 = iVar6 + -0xc;
                      iVar8 = uVar1 + iVar7 + iVar8 + 1;
                      puVar4 = puVar4 + 3;
                    } while (iVar6 != 0);
                  }
                  iVar6 = FUN_01337c54(*(undefined4 *)(param_1 + 0x98));
                  *(int *)(param_1 + 0x9c) = iVar6 + iVar8;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(0,uVar1,uVar5,&DAT_01890988);
}

