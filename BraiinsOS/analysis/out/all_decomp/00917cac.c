// FUN_00917cac @ 00917cac size=620 calls_out=3 calls_in=1
// strings: 

void FUN_00917cac(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_3 == 0x11) {
    cVar1 = *param_2;
    bVar3 = cVar1 == 't';
    if (bVar3) {
      cVar1 = param_2[1];
    }
    bVar4 = bVar3 && cVar1 == 'e';
    if (bVar3 && cVar1 == 'e') {
      bVar4 = param_2[2] == 'l';
    }
    if (bVar4) {
      cVar1 = param_2[3];
      bVar3 = cVar1 == 'e';
      if (bVar3) {
        cVar1 = param_2[4];
      }
      if (bVar3 && cVar1 == 'm') {
        cVar1 = param_2[5];
        bVar3 = cVar1 == 'e';
        if (bVar3) {
          cVar1 = param_2[6];
        }
        if (bVar3 && cVar1 == 't') {
          cVar1 = param_2[7];
          bVar3 = cVar1 == 'r';
          if (bVar3) {
            cVar1 = param_2[8];
          }
          if (bVar3 && cVar1 == 'y') {
            cVar1 = param_2[9];
            bVar3 = cVar1 == '_';
            if (bVar3) {
              cVar1 = param_2[10];
            }
            if (bVar3 && cVar1 == 'e') {
              cVar1 = param_2[0xb];
              bVar3 = cVar1 == 'n';
              if (bVar3) {
                cVar1 = param_2[0xc];
              }
              if (bVar3 && cVar1 == 'a') {
                cVar1 = param_2[0xd];
                bVar3 = cVar1 == 'b';
                if (bVar3) {
                  cVar1 = param_2[0xe];
                }
                if (bVar3 && cVar1 == 'l') {
                  cVar1 = param_2[0xf];
                  bVar3 = cVar1 == 'e';
                  if (bVar3) {
                    cVar1 = param_2[0x10];
                  }
                  if (bVar3 && cVar1 == 'd') {
                    *param_1 = 2;
                    uVar2 = 0;
LAB_00917d70:
                    *(undefined1 *)(param_1 + 1) = uVar2;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_3 == 0x1c) {
    cVar1 = *param_2;
    bVar3 = cVar1 == 't';
    if (bVar3) {
      cVar1 = param_2[1];
    }
    if (bVar3 && cVar1 == 'e') {
      cVar1 = param_2[2];
      bVar3 = cVar1 == 'l';
      if (bVar3) {
        cVar1 = param_2[3];
      }
      if (bVar3 && cVar1 == 'e') {
        cVar1 = param_2[4];
        bVar3 = cVar1 == 'm';
        if (bVar3) {
          cVar1 = param_2[5];
        }
        if (bVar3 && cVar1 == 'e') {
          cVar1 = param_2[6];
          bVar3 = cVar1 == 't';
          if (bVar3) {
            cVar1 = param_2[7];
          }
          if (bVar3 && cVar1 == 'r') {
            cVar1 = param_2[8];
            bVar3 = cVar1 == 'y';
            if (bVar3) {
              cVar1 = param_2[9];
            }
            if (bVar3 && cVar1 == '_') {
              cVar1 = param_2[10];
              bVar3 = cVar1 == 's';
              if (bVar3) {
                cVar1 = param_2[0xb];
              }
              if (bVar3 && cVar1 == 'u') {
                cVar1 = param_2[0xc];
                bVar3 = cVar1 == 'b';
                if (bVar3) {
                  cVar1 = param_2[0xd];
                }
                if (bVar3 && cVar1 == 'm') {
                  cVar1 = param_2[0xe];
                  bVar3 = cVar1 == 'i';
                  if (bVar3) {
                    cVar1 = param_2[0xf];
                  }
                  if (bVar3 && cVar1 == 't') {
                    cVar1 = param_2[0x10];
                    bVar3 = cVar1 == '_';
                    if (bVar3) {
                      cVar1 = param_2[0x11];
                    }
                    if (bVar3 && cVar1 == 'p') {
                      cVar1 = param_2[0x12];
                      bVar3 = cVar1 == 'e';
                      if (bVar3) {
                        cVar1 = param_2[0x13];
                      }
                      if (bVar3 && cVar1 == 'r') {
                        cVar1 = param_2[0x14];
                        bVar3 = cVar1 == 'i';
                        if (bVar3) {
                          cVar1 = param_2[0x15];
                        }
                        if (bVar3 && cVar1 == 'o') {
                          cVar1 = param_2[0x16];
                          bVar3 = cVar1 == 'd';
                          if (bVar3) {
                            cVar1 = param_2[0x17];
                          }
                          if (bVar3 && cVar1 == '_') {
                            cVar1 = param_2[0x18];
                            bVar3 = cVar1 == 's';
                            if (bVar3) {
                              cVar1 = param_2[0x19];
                            }
                            if (bVar3 && cVar1 == 'e') {
                              cVar1 = param_2[0x1a];
                              bVar3 = cVar1 == 'c';
                              if (bVar3) {
                                cVar1 = param_2[0x1b];
                              }
                              if (bVar3 && cVar1 == 's') {
                                *param_1 = 2;
                                uVar2 = 1;
                                goto LAB_00917d70;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_006008c8(&local_54);
  FUN_00924444(&local_48,local_50,local_4c,&DAT_01867bd0,2);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  param_1[4] = uStack_38;
  param_1[5] = uStack_34;
  param_1[6] = local_30;
  param_1[7] = uStack_2c;
  param_1[8] = uStack_28;
  param_1[9] = uStack_24;
  param_1[10] = uStack_20;
  param_1[0xb] = uStack_1c;
  if ((local_54 & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_50);
  return;
}

