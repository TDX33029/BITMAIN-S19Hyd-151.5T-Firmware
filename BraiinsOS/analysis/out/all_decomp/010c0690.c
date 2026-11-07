// FUN_010c0690 @ 010c0690 size=336 calls_out=2 calls_in=5
// strings: 

bool FUN_010c0690(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined4 local_30;
  byte *pbStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  int local_10;
  undefined2 local_c;
  
  if (param_2 != 0) {
    iVar2 = param_2;
    pbVar3 = param_1;
    do {
      if ((*pbVar3 != 9) && (0x5e < *pbVar3 - 0x20)) {
        return false;
      }
      pbVar3 = pbVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uStack_24 = 0;
  local_c = 1;
  local_18 = 1;
  local_14 = 0;
  local_1c = 0x2c;
  local_30 = 0x2c;
  pbStack_2c = param_1;
  iStack_28 = param_2;
  local_20 = param_2;
  local_10 = param_2;
  iVar2 = FUN_010c07e0(&local_30);
  if (iVar2 != 0) {
    uVar4 = FUN_010ceb84();
    pbVar3 = (byte *)uVar4;
    if ((int)((ulonglong)uVar4 >> 0x20) == 7) {
      uVar1 = (uint)*pbVar3;
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 == 99) {
        uVar1 = (uint)pbVar3[1];
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 == 0x68) {
          uVar1 = (uint)pbVar3[2];
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 0x75) {
            uVar1 = (uint)pbVar3[3];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 == 0x6e) {
              uVar1 = (uint)pbVar3[4];
              if (uVar1 - 0x41 < 0x1a) {
                uVar1 = uVar1 | 0x20;
              }
              if (uVar1 == 0x6b) {
                uVar1 = (uint)pbVar3[5];
                if (uVar1 - 0x41 < 0x1a) {
                  uVar1 = uVar1 | 0x20;
                }
                if (uVar1 == 0x65) {
                  uVar1 = (uint)pbVar3[6];
                  if (uVar1 - 0x41 < 0x1a) {
                    uVar1 = uVar1 | 0x20;
                  }
                  return uVar1 == 100;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

