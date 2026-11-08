// FUN_0162ecc8 @ 0162ecc8 size=648 calls_out=4 calls_in=2
// strings: 

void FUN_0162ecc8(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int local_2c;
  int local_28;
  int local_24;
  
  pbVar4 = (byte *)*param_2;
  if (param_2[1] == 9) {
    uVar1 = (uint)*pbVar4;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 | 0x20;
    }
    if (uVar1 == 0x6d) {
      uVar1 = (uint)pbVar4[1];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 == 0x61) {
        uVar1 = (uint)pbVar4[2];
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 == 0x6e) {
          uVar1 = (uint)pbVar4[3];
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 100) {
            uVar1 = (uint)pbVar4[4];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 == 0x61) {
              uVar1 = (uint)pbVar4[5];
              if (uVar1 - 0x41 < 0x1a) {
                uVar1 = uVar1 | 0x20;
              }
              if (uVar1 == 0x74) {
                uVar1 = (uint)pbVar4[6];
                if (uVar1 - 0x41 < 0x1a) {
                  uVar1 = uVar1 | 0x20;
                }
                if (uVar1 == 0x6f) {
                  uVar1 = (uint)pbVar4[7];
                  if (uVar1 - 0x41 < 0x1a) {
                    uVar1 = uVar1 | 0x20;
                  }
                  if (uVar1 == 0x72) {
                    uVar1 = (uint)pbVar4[8];
                    if (uVar1 - 0x41 < 0x1a) {
                      uVar1 = uVar1 | 0x20;
                    }
                    if (uVar1 == 0x79) {
                      *param_1 = 7;
                      *(undefined1 *)(param_1 + 1) = 1;
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
    else if (uVar1 == 0x61) {
      uVar1 = (uint)pbVar4[1];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 == 0x75) {
        uVar1 = (uint)pbVar4[2];
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 == 0x74) {
          uVar1 = (uint)pbVar4[3];
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 0x6f) {
            uVar1 = (uint)pbVar4[4];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 == 0x6d) {
              uVar1 = (uint)pbVar4[5];
              if (uVar1 - 0x41 < 0x1a) {
                uVar1 = uVar1 | 0x20;
              }
              if (uVar1 == 0x61) {
                uVar1 = (uint)pbVar4[6];
                if (uVar1 - 0x41 < 0x1a) {
                  uVar1 = uVar1 | 0x20;
                }
                if (uVar1 == 0x74) {
                  uVar1 = (uint)pbVar4[7];
                  if (uVar1 - 0x41 < 0x1a) {
                    uVar1 = uVar1 | 0x20;
                  }
                  if (uVar1 == 0x69) {
                    uVar1 = (uint)pbVar4[8];
                    if (uVar1 - 0x41 < 0x1a) {
                      uVar1 = uVar1 | 0x20;
                    }
                    if (uVar1 == 99) {
                      *param_1 = 7;
                      *(undefined1 *)(param_1 + 1) = 0;
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
  }
  FUN_006008c8(&local_2c,pbVar4,param_2[1]);
  if (local_2c == -0x80000000) {
    if (local_24 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,local_24);
    }
    if (local_24 == 0) {
      local_2c = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(local_24);
      local_2c = local_24;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_24);
      }
    }
    FUN_016dd1aa(iVar2,local_28,local_24);
    local_28 = iVar2;
  }
  uVar3 = param_2[2];
  *param_1 = 2;
  param_1[1] = uVar3;
  param_1[2] = local_2c;
  param_1[3] = local_28;
  param_1[4] = local_24;
  return;
}

