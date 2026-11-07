// FUN_0169b7d0 @ 0169b7d0 size=880 calls_out=0 calls_in=1
// strings: 

int FUN_0169b7d0(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    return 4;
  }
  if (param_2 == 1) {
    uVar7 = (uint)*param_1;
    if (uVar7 == 0x2b) {
      return 6;
    }
    if (uVar7 == 0x2d) {
      return 6;
    }
  }
  else {
    uVar7 = (uint)*param_1;
  }
  uVar4 = param_2;
  pbVar2 = param_1;
  if (uVar7 == 0x2b) {
    pbVar2 = param_1 + 1;
    uVar4 = param_2 - 1;
  }
  if (uVar4 < 9) {
    if (uVar4 == 0) {
      return 5;
    }
    uVar8 = 0;
    do {
      bVar1 = *pbVar2;
      if (9 < bVar1 - 0x30) goto code_r0x0169b8b4;
      pbVar2 = pbVar2 + 1;
      uVar4 = uVar4 - 1;
      uVar8 = (bVar1 - 0x30) + uVar8 * 10;
    } while (uVar4 != 0);
LAB_0169b854:
    if (uVar8 < 6) {
      return 5 - uVar8;
    }
  }
  else {
    uVar8 = 0;
    while( true ) {
      if (uVar4 == 0) goto LAB_0169b854;
      uVar5 = (uint)((ulonglong)uVar8 * 10);
      if ((int)((ulonglong)uVar8 * 10 >> 0x20) != 0) break;
      uVar6 = *pbVar2 - 0x30;
      uVar8 = uVar6 + uVar5;
      if ((9 < uVar6) || (uVar4 = uVar4 - 1, pbVar2 = pbVar2 + 1, CARRY4(uVar6,uVar5))) break;
    }
  }
code_r0x0169b8b4:
  switch(param_2) {
  case 0:
    return 4;
  case 3:
    iVar3 = 6;
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x6f) {
      return 6;
    }
    uVar7 = (uint)param_1[1];
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 != 0x66) {
      return 6;
    }
    uVar7 = (uint)param_1[2];
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 == 0x66) {
      iVar3 = 5;
    }
    return iVar3;
  case 4:
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 == 0x69) {
      uVar7 = (uint)param_1[1];
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar7 == 0x6e) {
        uVar7 = (uint)param_1[2];
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar7 == 0x66) {
          uVar7 = (uint)param_1[3];
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar7 == 0x6f) {
            return 2;
          }
        }
      }
    }
    else if (uVar7 == 0x77) {
      uVar7 = (uint)param_1[1];
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar7 == 0x61) {
        uVar7 = (uint)param_1[2];
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar7 == 0x72) {
          uVar7 = (uint)param_1[3];
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar7 == 0x6e) {
            return 3;
          }
        }
      }
    }
    break;
  case 5:
    if (uVar7 - 0x41 < 0x1a) {
      uVar7 = uVar7 | 0x20;
    }
    if (uVar7 == 100) {
      uVar7 = (uint)param_1[1];
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar7 == 0x65) {
        uVar7 = (uint)param_1[2];
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar7 == 0x62) {
          uVar7 = (uint)param_1[3];
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar7 == 0x75) {
            uVar7 = (uint)param_1[4];
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if (uVar7 == 0x67) {
              return 1;
            }
          }
        }
      }
    }
    else if (uVar7 == 0x74) {
      uVar7 = (uint)param_1[1];
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar7 == 0x72) {
        uVar7 = (uint)param_1[2];
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar7 == 0x61) {
          uVar7 = (uint)param_1[3];
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar7 == 99) {
            uVar7 = (uint)param_1[4];
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if (uVar7 == 0x65) {
              return 0;
            }
          }
        }
      }
    }
    else if (uVar7 == 0x65) {
      uVar7 = (uint)param_1[1];
      if (uVar7 - 0x41 < 0x1a) {
        uVar7 = uVar7 | 0x20;
      }
      if (uVar7 == 0x72) {
        uVar7 = (uint)param_1[2];
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar7 == 0x72) {
          uVar7 = (uint)param_1[3];
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          if (uVar7 == 0x6f) {
            uVar7 = (uint)param_1[4];
            if (uVar7 - 0x41 < 0x1a) {
              uVar7 = uVar7 | 0x20;
            }
            if (uVar7 == 0x72) {
              return 4;
            }
          }
        }
      }
    }
  }
  return 6;
}

