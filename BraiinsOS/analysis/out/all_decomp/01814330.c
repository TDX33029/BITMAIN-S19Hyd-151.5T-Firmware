// FUN_01814330 @ 01814330 size=1456 calls_out=0 calls_in=5
// strings: 

uint FUN_01814330(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  bool bVar21;
  
  uVar4 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_3 == 1) {
    uVar4 = *param_2 + uVar4;
    if (0xfff0 < uVar4) {
      uVar4 = uVar4 - 0xfff1;
    }
    param_1 = uVar4 + param_1;
    if (0xfff0 < param_1) {
      param_1 = param_1 - 0xfff1;
    }
    return uVar4 | param_1 << 0x10;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      iVar5 = *param_2 + uVar4;
      uVar4 = (uint)param_2[1] + iVar5;
      param_1 = uVar4 + param_1 + iVar5;
      if (param_3 != 2) {
        uVar4 = uVar4 + param_2[2];
        param_1 = param_1 + uVar4;
        if (param_3 != 3) {
          uVar4 = uVar4 + param_2[3];
          param_1 = param_1 + uVar4;
          if (param_3 != 4) {
            uVar4 = uVar4 + param_2[4];
            param_1 = param_1 + uVar4;
            if (param_3 != 5) {
              uVar4 = uVar4 + param_2[5];
              param_1 = param_1 + uVar4;
              if (param_3 != 6) {
                uVar4 = uVar4 + param_2[6];
                param_1 = param_1 + uVar4;
                if (param_3 != 7) {
                  uVar4 = uVar4 + param_2[7];
                  param_1 = param_1 + uVar4;
                  if (param_3 != 8) {
                    uVar4 = uVar4 + param_2[8];
                    param_1 = param_1 + uVar4;
                    if (param_3 != 9) {
                      uVar4 = uVar4 + param_2[9];
                      param_1 = param_1 + uVar4;
                      if (param_3 != 10) {
                        uVar4 = uVar4 + param_2[10];
                        param_1 = param_1 + uVar4;
                        if (param_3 != 0xb) {
                          uVar4 = uVar4 + param_2[0xb];
                          param_1 = param_1 + uVar4;
                          if (param_3 != 0xc) {
                            uVar4 = uVar4 + param_2[0xc];
                            param_1 = param_1 + uVar4;
                            if (param_3 != 0xd) {
                              uVar3 = (uint)param_2[0xd];
                              uVar4 = uVar4 + uVar3;
                              if (param_3 != 0xe) {
                                uVar3 = (uint)param_2[0xe];
                              }
                              param_1 = param_1 + uVar4;
                              if (param_3 != 0xe) {
                                uVar4 = uVar4 + uVar3;
                                param_1 = param_1 + uVar4;
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
    if (0xfff0 < uVar4) {
      uVar4 = uVar4 - 0xfff1;
    }
    return uVar4 | (param_1 % 0xfff1) * 0x10000;
  }
  if (param_3 < 0x15b0) {
LAB_018140c4:
    uVar3 = param_3 & 0xfffffff0;
    pbVar2 = param_2 + 0x10;
    do {
      pbVar1 = pbVar2 + 0x10;
      iVar5 = pbVar2[-0x10] + uVar4;
      iVar19 = (uint)pbVar2[-0xf] + iVar5;
      iVar12 = (uint)pbVar2[-0xe] + iVar19;
      iVar6 = (uint)pbVar2[-0xd] + iVar12;
      iVar13 = (uint)pbVar2[-0xc] + iVar6;
      iVar7 = (uint)pbVar2[-0xb] + iVar13;
      iVar14 = (uint)pbVar2[-10] + iVar7;
      iVar8 = (uint)pbVar2[-9] + iVar14;
      iVar15 = (uint)pbVar2[-8] + iVar8;
      iVar9 = (uint)pbVar2[-7] + iVar15;
      iVar16 = (uint)pbVar2[-6] + iVar9;
      iVar10 = (uint)pbVar2[-5] + iVar16;
      iVar17 = (uint)pbVar2[-4] + iVar10;
      iVar11 = (uint)pbVar2[-3] + iVar17;
      iVar18 = (uint)pbVar2[-2] + iVar11;
      uVar4 = (uint)pbVar2[-1] + iVar18;
      param_1 = param_1 + iVar5 + iVar19 + iVar12 + iVar6 + iVar13 + iVar7 + iVar14 + iVar8 + iVar15
                          + iVar9 + iVar16 + iVar10 + iVar17 + iVar11 + iVar18 + uVar4;
      pbVar2 = pbVar1;
    } while (param_2 + uVar3 + 0x10 != pbVar1);
    if ((param_3 & 0xf) == 0) goto LAB_018142dc;
    param_2 = param_2 + uVar3;
    uVar3 = (param_3 - 0x11) - (uVar3 - 0x10);
  }
  else {
    pbVar2 = param_2 + 0x15c0;
    do {
      uVar3 = param_3;
      param_3 = uVar3 - 0x15b0;
      pbVar1 = param_2 + 0x10;
      do {
        pbVar20 = pbVar1 + 0x10;
        iVar5 = pbVar1[-0x10] + uVar4;
        iVar13 = (uint)pbVar1[-0xf] + iVar5;
        iVar14 = (uint)pbVar1[-0xe] + iVar13;
        iVar15 = (uint)pbVar1[-0xd] + iVar14;
        iVar6 = (uint)pbVar1[-0xc] + iVar15;
        iVar16 = (uint)pbVar1[-0xb] + iVar6;
        iVar7 = (uint)pbVar1[-10] + iVar16;
        iVar17 = (uint)pbVar1[-9] + iVar7;
        iVar8 = (uint)pbVar1[-8] + iVar17;
        iVar18 = (uint)pbVar1[-7] + iVar8;
        iVar9 = (uint)pbVar1[-6] + iVar18;
        iVar19 = (uint)pbVar1[-5] + iVar9;
        iVar10 = (uint)pbVar1[-4] + iVar19;
        iVar11 = (uint)pbVar1[-3] + iVar10;
        iVar12 = (uint)pbVar1[-2] + iVar11;
        uVar4 = (uint)pbVar1[-1] + iVar12;
        param_1 = param_1 + iVar5 + iVar13 + iVar14 + iVar15 + iVar6 + iVar16 + iVar7 + iVar17 +
                            iVar8 + iVar18 + iVar9 + iVar19 + iVar10 + iVar11 + iVar12 + uVar4;
        pbVar1 = pbVar20;
      } while (pbVar2 != pbVar20);
      param_2 = param_2 + 0x15b0;
      pbVar2 = pbVar2 + 0x15b0;
      uVar4 = uVar4 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    } while (0x15af < param_3);
    if (param_3 == 0) {
      return uVar4 | param_1 * 0x10000;
    }
    if (0xf < param_3) goto LAB_018140c4;
    uVar3 = uVar3 - 0x15b1;
  }
  uVar4 = uVar4 + *param_2;
  param_1 = param_1 + uVar4;
  if (uVar3 != 0) {
    uVar4 = uVar4 + param_2[1];
    param_1 = param_1 + uVar4;
    if (uVar3 != 1) {
      uVar4 = uVar4 + param_2[2];
      param_1 = param_1 + uVar4;
      if (uVar3 != 2) {
        uVar4 = uVar4 + param_2[3];
        param_1 = param_1 + uVar4;
        if (uVar3 != 3) {
          uVar4 = uVar4 + param_2[4];
          param_1 = param_1 + uVar4;
          if (uVar3 != 4) {
            uVar4 = uVar4 + param_2[5];
            param_1 = param_1 + uVar4;
            if (uVar3 != 5) {
              uVar4 = uVar4 + param_2[6];
              param_1 = param_1 + uVar4;
              if (uVar3 != 6) {
                uVar4 = uVar4 + param_2[7];
                param_1 = param_1 + uVar4;
                if (uVar3 != 7) {
                  uVar4 = uVar4 + param_2[8];
                  param_1 = param_1 + uVar4;
                  if (uVar3 != 8) {
                    uVar4 = uVar4 + param_2[9];
                    param_1 = param_1 + uVar4;
                    if (uVar3 != 9) {
                      uVar4 = uVar4 + param_2[10];
                      param_1 = param_1 + uVar4;
                      if (uVar3 != 10) {
                        uVar4 = uVar4 + param_2[0xb];
                        param_1 = param_1 + uVar4;
                        if (uVar3 != 0xb) {
                          uVar4 = uVar4 + param_2[0xc];
                          param_1 = param_1 + uVar4;
                          if (uVar3 != 0xc) {
                            bVar21 = uVar3 != 0xd;
                            uVar4 = uVar4 + param_2[0xd];
                            if (bVar21) {
                              uVar3 = (uint)param_2[0xe];
                            }
                            param_1 = param_1 + uVar4;
                            if (bVar21) {
                              uVar4 = uVar4 + uVar3;
                              param_1 = param_1 + uVar4;
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
LAB_018142dc:
  return uVar4 % 0xfff1 | (param_1 % 0xfff1) * 0x10000;
}

