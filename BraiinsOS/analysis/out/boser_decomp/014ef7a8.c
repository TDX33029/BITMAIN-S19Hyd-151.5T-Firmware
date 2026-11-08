// FUN_014ef7a8 @ 014ef7a8 size=464 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_014ef7a8(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  pbVar2 = param_1;
  if (param_2 == 0x24) {
    pbVar2 = (byte *)(uint)*param_1;
  }
  if (param_2 == 0x24 && pbVar2 == (byte *)0x73) {
    bVar1 = param_1[1];
    bVar4 = bVar1 == 0x79;
    if (bVar4) {
      bVar1 = param_1[2];
    }
    if (bVar4 && bVar1 == 0x73) {
      bVar1 = param_1[3];
      bVar4 = bVar1 == 0x75;
      if (bVar4) {
        bVar1 = param_1[4];
      }
      if (bVar4 && bVar1 == 0x70) {
        bVar1 = param_1[5];
        bVar4 = bVar1 == 0x67;
        if (bVar4) {
          bVar1 = param_1[6];
        }
        if (bVar4 && bVar1 == 0x72) {
          bVar1 = param_1[7];
          bVar4 = bVar1 == 0x61;
          if (bVar4) {
            bVar1 = param_1[8];
          }
          if (bVar4 && bVar1 == 100) {
            bVar1 = param_1[9];
            bVar4 = bVar1 == 0x65;
            if (bVar4) {
              bVar1 = param_1[10];
            }
            if (bVar4 && bVar1 == 0x5f) {
              bVar1 = param_1[0xb];
              bVar4 = bVar1 == 0x65;
              if (bVar4) {
                bVar1 = param_1[0xc];
              }
              if (bVar4 && bVar1 == 0x6d) {
                bVar1 = param_1[0xd];
                bVar4 = bVar1 == 0x6d;
                if (bVar4) {
                  bVar1 = param_1[0xe];
                }
                if (bVar4 && bVar1 == 99) {
                  bVar1 = param_1[0xf];
                  bVar4 = bVar1 == 0x5f;
                  if (bVar4) {
                    bVar1 = param_1[0x10];
                  }
                  if (bVar4 && bVar1 == 0x73) {
                    bVar1 = param_1[0x11];
                    bVar4 = bVar1 == 0x74;
                    if (bVar4) {
                      bVar1 = param_1[0x12];
                    }
                    if (bVar4 && bVar1 == 0x6d) {
                      bVar1 = param_1[0x13];
                      bVar4 = bVar1 == 0x33;
                      if (bVar4) {
                        bVar1 = param_1[0x14];
                      }
                      if (bVar4 && bVar1 == 0x32) {
                        bVar1 = param_1[0x15];
                        bVar4 = bVar1 == 0x6d;
                        if (bVar4) {
                          bVar1 = param_1[0x16];
                        }
                        if (bVar4 && bVar1 == 0x70) {
                          bVar1 = param_1[0x17];
                          bVar4 = bVar1 == 0x31;
                          if (bVar4) {
                            bVar1 = param_1[0x18];
                          }
                          if (bVar4 && bVar1 == 0x35) {
                            bVar1 = param_1[0x19];
                            bVar4 = bVar1 == 0x37;
                            if (bVar4) {
                              bVar1 = param_1[0x1a];
                            }
                            if (bVar4 && bVar1 == 99) {
                              bVar1 = param_1[0x1b];
                              bVar4 = bVar1 == 0x5f;
                              if (bVar4) {
                                bVar1 = param_1[0x1c];
                              }
                              if (bVar4 && bVar1 == 0x69) {
                                bVar1 = param_1[0x1d];
                                bVar4 = bVar1 == 0x69;
                                if (bVar4) {
                                  bVar1 = param_1[0x1e];
                                }
                                if (bVar4 && bVar1 == 0x33) {
                                  bVar1 = param_1[0x1f];
                                  bVar4 = bVar1 == 0x5f;
                                  if (bVar4) {
                                    bVar1 = param_1[0x20];
                                  }
                                  if (bVar4 && bVar1 == 0x62) {
                                    bVar1 = param_1[0x21];
                                    bVar4 = bVar1 == 0x6d;
                                    if (bVar4) {
                                      bVar1 = param_1[0x22];
                                    }
                                    if ((bVar4 && bVar1 == 99) && (param_1[0x23] == 0x31)) {
                                      return 0;
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
      }
    }
  }
  FUN_006643f0(&local_1c);
  uVar3 = FUN_014dedb0(local_18,local_14,&DAT_01cfa384,1);
  if (local_1c != -0x80000000) {
    FUN_019bb7e0(local_1c,local_18);
  }
  return uVar3;
}

