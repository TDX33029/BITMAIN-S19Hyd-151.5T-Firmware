// FUN_0159fb64 @ 0159fb64 size=1108 calls_out=2 calls_in=2
// strings: 

bool FUN_0159fb64(short *param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  if (8 < param_2) {
    cVar3 = (char)param_1[1];
    bVar13 = cVar3 == ':';
    if (bVar13) {
      cVar3 = *(char *)((int)param_1 + 5);
    }
    if ((((bVar13 && cVar3 == ':') && ((*param_1 + 0xd5d6U & 0xf0f0) == 0)) &&
        ((*(short *)((int)param_1 + 3) + 0xd5d6U & 0xf0f0) == 0)) &&
       ((param_1[3] + 0xd5d6U & 0xf0f0) == 0)) {
      uVar11 = 0xa01;
      uVar10 = (short)(*param_1 + 0xfd0U & 0xf0f) * 0xa01 & 0xffff;
      uVar6 = uVar10 >> 8;
      if (uVar6 < 0x18) {
        uVar2 = ((short)(*(short *)((int)param_1 + 3) + 0xfd0U & 0xf0f) * 0xa01 & 0xffffU) >> 8;
        bVar14 = 0x3a < uVar2;
        bVar13 = uVar2 == 0x3b;
        if (uVar2 < 0x3c) {
          uVar11 = ((short)(param_1[3] + 0xfd0U & 0xf0f) * 0xa01 & 0xffffU) >> 8;
          bVar14 = 0x3b < uVar11;
          bVar13 = uVar11 == 0x3c;
        }
        if (!bVar14 || bVar13) {
          uVar5 = (uint)*(byte *)(param_1 + 4);
          if (uVar5 == 0x2e) {
            if (param_2 != 9) {
              uVar12 = 9;
              bVar13 = false;
              do {
                uVar5 = (uint)*(byte *)((int)param_1 + uVar12);
                if (9 < uVar5 - 0x30) {
                  if (!bVar13) {
                    return false;
                  }
                  goto LAB_0159fc78;
                }
                uVar12 = uVar12 + 1;
                bVar13 = true;
              } while (param_2 != uVar12);
            }
          }
          else {
            uVar12 = 8;
LAB_0159fc78:
            if (param_2 != uVar12) {
              if (param_2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar12,param_2,&DAT_01cfc380);
              }
              if (uVar5 < 0x5a) {
                sVar4 = (short)(uVar10 >> 8);
                if (uVar5 == 0x2b) {
                  if (param_2 - uVar12 != 6) {
                    return false;
                  }
                  uVar6 = uVar12 + 3;
                  if (param_2 <= uVar6) {
                    puVar9 = &DAT_01cfc390;
                    goto LAB_0159ffac;
                  }
                  if (*(char *)((int)param_1 + uVar6) != ':') {
                    return false;
                  }
                  uVar10 = uVar12 + 1;
                  if (uVar12 < 0xfffffffd) {
                    psVar7 = (short *)((int)param_1 + uVar10);
                    if ((*psVar7 + 0xd5d6U & 0xf0f0) != 0) {
                      return false;
                    }
                    uVar6 = uVar12 + 6;
                    uVar10 = uVar12 + 4;
                    if ((uVar10 <= uVar6) && (uVar6 <= param_2)) {
                      if ((*(short *)((int)param_1 + uVar10) + 0xd5d6U & 0xf0f0) != 0) {
                        return false;
                      }
                      uVar6 = (short)(*psVar7 + 0xfd0U & 0xf0f) * 0xa01 & 0xffff;
                      if (0x17 < uVar6 >> 8) {
                        return false;
                      }
                      uVar10 = ((short)(*(short *)((int)param_1 + uVar10) + 0xfd0U & 0xf0f) * 0xa01
                               & 0xffffU) >> 8;
                      if (0x3b < uVar10) {
                        return false;
                      }
                      if (uVar11 != 0x3c) {
                        return true;
                      }
                      iVar8 = uVar2 - uVar10;
                      sVar1 = (short)iVar8;
                      uVar11 = iVar8 + ((uint)(sVar1 * -0x7777) >> 0x10);
                      uVar11 = (uint)(short)(sVar1 + ((short)((uint)(int)(short)uVar11 >> 5) +
                                                     (short)((uVar11 & 0xffff) >> 0xf)) * -0x3c);
                      uVar6 = (short)((sVar4 - (short)(uVar6 >> 8)) + (short)((int)uVar11 >> 0xf)) *
                              -0x5555 + 0xaaab;
                      if (0xaa9 < ((uVar6 & 0xffff) >> 3 | uVar6 * 0x2000 & 0xffff)) {
                        return false;
                      }
                      if ((int)uVar11 < 0) {
                        uVar11 = uVar11 + 0x3c;
                      }
                      uVar6 = (uVar11 & 0xffff) - 0x3b;
                      goto LAB_0159fdfc;
                    }
                  }
                  puVar9 = &DAT_01cfc390;
                }
                else {
                  bVar13 = uVar5 == 0x2d;
                  if (bVar13) {
                    uVar5 = param_2 - uVar12;
                  }
                  if (!bVar13 || uVar5 != 6) {
                    return false;
                  }
                  uVar6 = uVar12 + 3;
                  if (param_2 <= uVar6) {
                    puVar9 = &DAT_01cfc3a0;
LAB_0159ffac:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar12 + 3,param_2,puVar9);
                  }
                  if (*(char *)((int)param_1 + uVar6) != ':') {
                    return false;
                  }
                  uVar10 = uVar12 + 1;
                  if (uVar12 < 0xfffffffd) {
                    psVar7 = (short *)((int)param_1 + uVar10);
                    if ((*psVar7 + 0xd5d6U & 0xf0f0) != 0) {
                      return false;
                    }
                    uVar6 = uVar12 + 6;
                    uVar10 = uVar12 + 4;
                    if ((uVar10 <= uVar6) && (uVar6 <= param_2)) {
                      if ((*(short *)((int)param_1 + uVar10) + 0xd5d6U & 0xf0f0) != 0) {
                        return false;
                      }
                      uVar6 = (short)(*psVar7 + 0xfd0U & 0xf0f) * 0xa01 & 0xffff;
                      if (0x17 < uVar6 >> 8) {
                        return false;
                      }
                      uVar10 = ((short)(*(short *)((int)param_1 + uVar10) + 0xfd0U & 0xf0f) * 0xa01
                               & 0xffffU) >> 8;
                      if (0x3b < uVar10) {
                        return false;
                      }
                      if (uVar11 != 0x3c) {
                        return true;
                      }
                      uVar10 = uVar10 + uVar2;
                      uVar6 = (short)(sVar4 + (short)(uVar6 >> 8) + (short)(uVar10 / 0x3c)) *
                              -0x5555 + 0xaaab;
                      if (0xaa9 < ((uVar6 & 0xffff) >> 3 | uVar6 * 0x2000 & 0xffff)) {
                        return false;
                      }
                      uVar6 = uVar10 % 0x3c - 0x3b;
                      goto LAB_0159fdfc;
                    }
                  }
                  puVar9 = &DAT_01cfc3a0;
                }
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(uVar10,uVar6,param_2,puVar9);
              }
              if (uVar5 == 0x5a || uVar5 == 0x7a) {
                bVar13 = uVar12 != param_2 - 1;
                if (bVar13 || uVar11 != 0x3c) {
                  return !bVar13;
                }
                uVar6 = uVar6 ^ 0x17 | uVar2 ^ 0x3b;
LAB_0159fdfc:
                return uVar6 == 0;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

