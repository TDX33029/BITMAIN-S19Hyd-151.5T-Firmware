// FUN_010c0ac8 @ 010c0ac8 size=408 calls_out=2 calls_in=5
// strings: 

undefined4 FUN_010c0ac8(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined4 local_38;
  byte *pbStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  int local_18;
  undefined2 local_14;
  
  if (param_2 != 0) {
    iVar2 = param_2;
    pbVar3 = param_1;
    do {
      if ((*pbVar3 != 9) && (0x5e < *pbVar3 - 0x20)) {
        return 0;
      }
      pbVar3 = pbVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_14 = 1;
  local_20 = 1;
  local_1c = 0;
  local_24 = 0x2c;
  uStack_2c = 0;
  local_38 = 0x2c;
  pbStack_34 = param_1;
  iStack_30 = param_2;
  local_28 = param_2;
  local_18 = param_2;
  do {
    do {
      do {
        do {
          do {
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        iVar2 = FUN_014f1360(&local_38);
                        if (iVar2 == 0) {
                          return 0;
                        }
                        uVar4 = FUN_010ceb84();
                        pbVar3 = (byte *)uVar4;
                      } while ((int)((ulonglong)uVar4 >> 0x20) != 10);
                      uVar1 = (uint)*pbVar3;
                      if (uVar1 - 0x41 < 0x1a) {
                        uVar1 = uVar1 | 0x20;
                      }
                    } while (uVar1 != 0x6b);
                    uVar1 = (uint)pbVar3[1];
                    if (uVar1 - 0x41 < 0x1a) {
                      uVar1 = uVar1 | 0x20;
                    }
                  } while (uVar1 != 0x65);
                  uVar1 = (uint)pbVar3[2];
                  if (uVar1 - 0x41 < 0x1a) {
                    uVar1 = uVar1 | 0x20;
                  }
                } while (uVar1 != 0x65);
                uVar1 = (uint)pbVar3[3];
                if (uVar1 - 0x41 < 0x1a) {
                  uVar1 = uVar1 | 0x20;
                }
              } while (uVar1 != 0x70);
              uVar1 = (uint)pbVar3[4];
              if (uVar1 - 0x41 < 0x1a) {
                uVar1 = uVar1 | 0x20;
              }
            } while (uVar1 != 0x2d);
            uVar1 = (uint)pbVar3[5];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
          } while (uVar1 != 0x61);
          uVar1 = (uint)pbVar3[6];
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
        } while (uVar1 != 0x6c);
        uVar1 = (uint)pbVar3[7];
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
      } while (uVar1 != 0x69);
      uVar1 = (uint)pbVar3[8];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
    } while (uVar1 != 0x76);
    uVar1 = (uint)pbVar3[9];
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 | 0x20;
    }
  } while (uVar1 != 0x65);
  return 1;
}

