// FUN_0122f55c @ 0122f55c size=1176 calls_out=2 calls_in=2
// strings: 

bool FUN_0122f55c(short *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  bVar12 = false;
  if (8 < param_2) {
    cVar2 = (char)param_1[1];
    bVar11 = cVar2 == ':';
    if (bVar11) {
      cVar2 = *(char *)((int)param_1 + 5);
    }
    if ((((bVar11 && cVar2 == ':') && ((*param_1 + 0xd5d6U & 0xf0f0) == 0)) &&
        ((*(short *)((int)param_1 + 3) + 0xd5d6U & 0xf0f0) == 0)) &&
       ((param_1[3] + 0xd5d6U & 0xf0f0) == 0)) {
      uVar9 = (short)(*param_1 + 0xfd0U & 0xf0f) * 0xa01 & 0xffff;
      uVar5 = uVar9 >> 8;
      if (uVar5 < 0x18) {
        uVar8 = (short)(*(short *)((int)param_1 + 3) + 0xfd0U & 0xf0f) * 0xa01 & 0xffff;
        uVar1 = uVar8 >> 8;
        bVar13 = 0x3a < uVar1;
        bVar11 = uVar1 == 0x3b;
        if (uVar1 < 0x3c) {
          uVar8 = ((short)(param_1[3] + 0xfd0U & 0xf0f) * 0xa01 & 0xffffU) >> 8;
          bVar13 = 0x3b < uVar8;
          bVar11 = uVar8 == 0x3c;
        }
        if (!bVar13 || bVar11) {
          uVar10 = 8;
          if ((char)param_1[4] == '.') {
            if (((param_2 != 9) && (0xfffffff5 < *(byte *)((int)param_1 + 9) - 0x3a)) &&
               (param_2 != 10)) {
              uVar10 = 10;
              do {
                if (9 < *(byte *)((int)param_1 + uVar10) - 0x30) goto LAB_0122f67c;
                uVar10 = uVar10 + 1;
              } while (param_2 != uVar10);
            }
          }
          else {
LAB_0122f67c:
            if (param_2 != uVar10) {
              if (param_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar10,param_2,&DAT_0188a768);
              }
              uVar6 = (uint)*(byte *)((int)param_1 + uVar10);
              if (uVar6 < 0x5a) {
                sVar4 = (short)(uVar9 >> 8);
                if (uVar6 == 0x2b) {
                  if (param_2 - uVar10 == 6) {
                    uVar5 = uVar10 + 3;
                    if (param_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(uVar5,param_2,&DAT_0188a778);
                    }
                    if (*(char *)((int)param_1 + uVar5) == ':') {
                      if (0xfffffffc < uVar10) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa36c(uVar10 + 1,uVar5,param_2,&DAT_0188a778);
                      }
                      sVar3 = *(short *)((int)param_1 + uVar10 + 1);
                      if ((sVar3 + 0xd5d6U & 0xf0f0) == 0) {
                        uVar5 = uVar10 + 6;
                        uVar10 = uVar10 + 4;
                        if ((uVar5 < uVar10) || (param_2 < uVar5)) {
                    /* WARNING: Subroutine does not return */
                          FUN_00faa36c(uVar10,uVar5,param_2,&DAT_0188a778);
                        }
                        if (((((*(short *)((int)param_1 + uVar10) + 0xd5d6U & 0xf0f0) == 0) &&
                             (uVar5 = (short)(sVar3 + 0xfd0U & 0xf0f) * 0xa01 & 0xffff,
                             uVar5 >> 8 < 0x18)) &&
                            (uVar9 = ((short)(*(short *)((int)param_1 + uVar10) + 0xfd0U & 0xf0f) *
                                      0xa01 & 0xffffU) >> 8, uVar9 < 0x3c)) &&
                           (bVar12 = true, uVar8 == 0x3c)) {
                          iVar7 = uVar1 - uVar9;
                          sVar3 = (short)iVar7;
                          uVar9 = iVar7 + ((uint)(sVar3 * -0x7777) >> 0x10);
                          uVar9 = (uint)(short)(sVar3 + ((short)((uint)(int)(short)uVar9 >> 5) +
                                                        (short)((uVar9 & 0xffff) >> 0xf)) * -0x3c);
                          uVar5 = (short)((sVar4 - (short)(uVar5 >> 8)) + (short)((int)uVar9 >> 0xf)
                                         ) * -0x5555 + 0xaaab;
                          bVar12 = false;
                          if (((uVar5 & 0xffff) >> 3 | uVar5 * 0x2000 & 0xffff) < 0xaaa) {
                            if ((int)uVar9 < 0) {
                              uVar9 = uVar9 + 0x3c;
                            }
                            return (uVar9 & 0xffff) == 0x3b;
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  uVar5 = param_2;
                  uVar9 = uVar6;
                  if (uVar6 == 0x2d) {
                    uVar5 = param_2 - uVar10;
                    uVar9 = param_2;
                  }
                  if (uVar6 == 0x2d && uVar5 == 6) {
                    uVar5 = uVar10 + 3;
                    if (uVar9 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                      FUN_00faa4a4(uVar5,uVar9,&DAT_0188a788);
                    }
                    if (*(char *)((int)param_1 + uVar5) == ':') {
                      if (0xfffffffc < uVar10) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa36c(uVar10 + 1,uVar5,uVar9,&DAT_0188a788);
                      }
                      sVar3 = *(short *)((int)param_1 + uVar10 + 1);
                      if ((sVar3 + 0xd5d6U & 0xf0f0) == 0) {
                        uVar5 = uVar10 + 6;
                        uVar10 = uVar10 + 4;
                        if ((uVar5 < uVar10) || (uVar9 < uVar5)) {
                    /* WARNING: Subroutine does not return */
                          FUN_00faa36c(uVar10,uVar5,uVar9,&DAT_0188a788);
                        }
                        if ((((*(short *)((int)param_1 + uVar10) + 0xd5d6U & 0xf0f0) == 0) &&
                            (uVar5 = (short)(sVar3 + 0xfd0U & 0xf0f) * 0xa01 & 0xffff,
                            uVar5 >> 8 < 0x18)) &&
                           ((uVar9 = ((short)(*(short *)((int)param_1 + uVar10) + 0xfd0U & 0xf0f) *
                                      0xa01 & 0xffffU) >> 8, uVar9 < 0x3c &&
                            (bVar12 = true, uVar8 == 0x3c)))) {
                          iVar7 = uVar1 + uVar9;
                          uVar9 = (uint)((short)((ushort)iVar7 & 0xff) * 0x89) >> 0xd;
                          uVar5 = (short)((short)uVar9 + (sVar4 + (short)(uVar5 >> 8) & 0xffU)) *
                                  -0x5555 + 0xaaab;
                          bVar12 = false;
                          if (((uVar5 & 0xffff) >> 3 | uVar5 * 0x2000 & 0xffff) < 0xaaa) {
                            return (iVar7 + uVar9 * -0x3c & 0xff) == 0x3b;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else if ((uVar6 == 0x5a || uVar6 == 0x7a) &&
                      (bVar12 = uVar10 == param_2 - 1, bVar12 && uVar8 == 0x3c)) {
                return uVar5 == 0x17 && uVar1 == 0x3b;
              }
            }
          }
        }
      }
    }
  }
  return bVar12;
}

