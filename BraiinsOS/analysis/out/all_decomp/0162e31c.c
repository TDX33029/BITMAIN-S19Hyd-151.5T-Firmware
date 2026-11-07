// FUN_0162e31c @ 0162e31c size=560 calls_out=4 calls_in=4
// strings: 

void FUN_0162e31c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  int local_2c;
  int local_28;
  int local_24;
  
  pbVar3 = (byte *)*param_2;
  iVar4 = param_2[1];
  if (iVar4 == 4) {
    uVar1 = (uint)*pbVar3;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 | 0x20;
    }
    if (uVar1 == 0x6e) {
      uVar1 = (uint)pbVar3[1];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 == 0x6f) {
        uVar1 = (uint)pbVar3[2];
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 == 0x6e) {
          uVar1 = (uint)pbVar3[3];
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 0x65) {
            *param_1 = 7;
            *(undefined1 *)(param_1 + 1) = 2;
            return;
          }
        }
      }
    }
    else if (uVar1 == 0x7a) {
      uVar1 = (uint)pbVar3[1];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 == 0x65) {
        uVar1 = (uint)pbVar3[2];
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 == 0x72) {
          uVar1 = (uint)pbVar3[3];
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 0x6f) {
            *param_1 = 7;
            *(undefined1 *)(param_1 + 1) = 1;
            return;
          }
        }
      }
    }
  }
  else if (iVar4 == 5) {
    uVar1 = (uint)*pbVar3;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 | 0x20;
    }
    if (uVar1 == 0x73) {
      uVar1 = (uint)pbVar3[1];
      if (uVar1 - 0x41 < 0x1a) {
        uVar1 = uVar1 | 0x20;
      }
      if (uVar1 == 0x70) {
        uVar1 = (uint)pbVar3[2];
        if (uVar1 - 0x41 < 0x1a) {
          uVar1 = uVar1 | 0x20;
        }
        if (uVar1 == 0x61) {
          uVar1 = (uint)pbVar3[3];
          if (uVar1 - 0x41 < 0x1a) {
            uVar1 = uVar1 | 0x20;
          }
          if (uVar1 == 99) {
            uVar1 = (uint)pbVar3[4];
            if (uVar1 - 0x41 < 0x1a) {
              uVar1 = uVar1 | 0x20;
            }
            if (uVar1 == 0x65) {
              *param_1 = 7;
              *(undefined1 *)(param_1 + 1) = 0;
              return;
            }
          }
        }
      }
    }
  }
  FUN_006008c8(&local_2c,pbVar3,iVar4);
  if (local_2c == -0x80000000) {
    if (local_24 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,local_24);
    }
    if (local_24 == 0) {
      local_2c = 0;
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(local_24);
      local_2c = local_24;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_24);
      }
    }
    FUN_016dd1aa(iVar4,local_28,local_24);
    local_28 = iVar4;
  }
  uVar2 = param_2[2];
  *param_1 = 2;
  param_1[1] = uVar2;
  param_1[2] = local_2c;
  param_1[3] = local_28;
  param_1[4] = local_24;
  return;
}

