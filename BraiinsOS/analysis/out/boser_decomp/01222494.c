// FUN_01222494 @ 01222494 size=476 calls_out=0 calls_in=1
// strings: 

void FUN_01222494(undefined4 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  
  if ((int)param_3 < 0xc) {
    if (param_3 == 4) {
      if (*param_2 == 0x6d) {
        bVar1 = param_2[1];
        bVar3 = bVar1 == 0x6f;
        if (bVar3) {
          bVar1 = param_2[2];
        }
        if ((bVar3 && bVar1 == 100) && (uVar2 = 1, param_2[3] == 0x65)) goto LAB_012225fc;
      }
    }
    else if (param_3 == 7) {
      bVar1 = *param_2;
      bVar3 = bVar1 == 0x65;
      if (bVar3) {
        bVar1 = param_2[1];
      }
      if (bVar3 && bVar1 == 0x6e) {
        bVar1 = param_2[2];
        bVar3 = bVar1 == 0x61;
        if (bVar3) {
          bVar1 = param_2[3];
        }
        if (bVar3 && bVar1 == 0x62) {
          bVar1 = param_2[4];
          bVar3 = bVar1 == 0x6c;
          if (bVar3) {
            bVar1 = param_2[5];
          }
          if ((bVar3 && bVar1 == 0x65) && (uVar2 = 0, param_2[6] == 100)) goto LAB_012225fc;
        }
      }
    }
  }
  else if (param_3 == 0xc) {
    if (*param_2 == 0x70) {
      bVar1 = param_2[1];
      bVar3 = bVar1 == 0x6f;
      if (bVar3) {
        bVar1 = param_2[2];
      }
      if (bVar3 && bVar1 == 0x77) {
        bVar1 = param_2[3];
        bVar3 = bVar1 == 0x65;
        if (bVar3) {
          bVar1 = param_2[4];
        }
        if (bVar3 && bVar1 == 0x72) {
          bVar1 = param_2[5];
          bVar3 = bVar1 == 0x5f;
          if (bVar3) {
            bVar1 = param_2[6];
          }
          if (bVar3 && bVar1 == 0x74) {
            bVar1 = param_2[7];
            bVar3 = bVar1 == 0x61;
            if (bVar3) {
              bVar1 = param_2[8];
            }
            if (bVar3 && bVar1 == 0x72) {
              bVar1 = param_2[9];
              bVar3 = bVar1 == 0x67;
              if (bVar3) {
                bVar1 = param_2[10];
              }
              if (bVar3 && bVar1 == 0x65) {
                bVar1 = param_2[0xb];
                uVar2 = 2;
LAB_01222664:
                if (bVar1 != 0x74) {
                  uVar2 = 4;
                }
                goto LAB_012225fc;
              }
            }
          }
        }
      }
    }
  }
  else {
    bVar3 = param_3 == 0xf;
    if (bVar3) {
      param_3 = (uint)*param_2;
    }
    if ((bVar3 && param_3 == 0x68) && (param_2[1] == 0x61)) {
      bVar1 = param_2[2];
      bVar3 = bVar1 == 0x73;
      if (bVar3) {
        bVar1 = param_2[3];
      }
      if (bVar3 && bVar1 == 0x68) {
        bVar1 = param_2[4];
        bVar3 = bVar1 == 0x72;
        if (bVar3) {
          bVar1 = param_2[5];
        }
        if (bVar3 && bVar1 == 0x61) {
          bVar1 = param_2[6];
          bVar3 = bVar1 == 0x74;
          if (bVar3) {
            bVar1 = param_2[7];
          }
          if (bVar3 && bVar1 == 0x65) {
            bVar1 = param_2[8];
            bVar3 = bVar1 == 0x5f;
            if (bVar3) {
              bVar1 = param_2[9];
            }
            if (bVar3 && bVar1 == 0x74) {
              bVar1 = param_2[10];
              bVar3 = bVar1 == 0x61;
              if (bVar3) {
                bVar1 = param_2[0xb];
              }
              if (bVar3 && bVar1 == 0x72) {
                bVar1 = param_2[0xc];
                bVar3 = bVar1 == 0x67;
                if (bVar3) {
                  bVar1 = param_2[0xd];
                }
                if (bVar3 && bVar1 == 0x65) {
                  bVar1 = param_2[0xe];
                  uVar2 = 3;
                  goto LAB_01222664;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 4;
LAB_012225fc:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 2;
  return;
}

