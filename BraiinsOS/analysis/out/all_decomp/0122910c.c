// FUN_0122910c @ 0122910c size=848 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_0122910c(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = *param_3;
  if (param_2 <= uVar4) {
    return 0;
  }
  uVar5 = uVar4;
  do {
    iVar1 = 1;
    uVar2 = (uint)*(byte *)(param_1 + uVar5);
    if (uVar2 != 0x5f) {
      uVar3 = uVar2 - 0x30;
      bVar6 = 9 < uVar3;
      if (bVar6) {
        uVar3 = (uVar2 & 0xdf) - 0x41;
      }
      if (bVar6 && 0x19 < uVar3) {
        if (uVar2 != 0x25) break;
        if (param_2 <= uVar5 + 2) {
          return 0;
        }
        uVar2 = (uint)((byte *)(param_1 + uVar5))[1];
        if ((9 < uVar2 - 0x30) && (5 < (uVar2 & 0xdf) - 0x41)) {
          return 0;
        }
        uVar2 = (uint)*(byte *)(param_1 + uVar5 + 2);
        iVar1 = 3;
        if ((9 < uVar2 - 0x30) && (5 < (uVar2 & 0xdf) - 0x41)) {
          return 0;
        }
      }
    }
    uVar5 = iVar1 + uVar5;
    *param_3 = uVar5;
  } while (uVar5 < param_2);
  if (uVar5 <= uVar4) {
    return 0;
  }
  while (uVar5 < param_2) {
    uVar4 = (uint)*(byte *)(param_1 + uVar5);
    if (uVar4 == 0x2e) {
      uVar4 = uVar5 + 1;
      *param_3 = uVar4;
      if (param_2 <= uVar4) {
        return 0;
      }
      uVar5 = uVar4;
      do {
        iVar1 = 1;
        uVar2 = (uint)*(byte *)(param_1 + uVar5);
        if (uVar2 != 0x5f) {
          uVar3 = uVar2 - 0x30;
          bVar6 = 9 < uVar3;
          if (bVar6) {
            uVar3 = (uVar2 & 0xdf) - 0x41;
          }
          if (bVar6 && 0x19 < uVar3) {
            if (uVar2 != 0x25) break;
            if (param_2 <= uVar5 + 2) {
              return 0;
            }
            uVar2 = (uint)((byte *)(param_1 + uVar5))[1];
            if ((9 < uVar2 - 0x30) && (5 < (uVar2 & 0xdf) - 0x41)) {
              return 0;
            }
            uVar2 = (uint)*(byte *)(param_1 + uVar5 + 2);
            iVar1 = 3;
            if ((9 < uVar2 - 0x30) && (5 < (uVar2 & 0xdf) - 0x41)) {
              return 0;
            }
          }
        }
        uVar5 = iVar1 + uVar5;
        *param_3 = uVar5;
      } while (uVar5 < param_2);
      if (uVar5 <= uVar4) {
        return 0;
      }
    }
    else {
      if (((uVar4 != 0x25 && uVar4 != 0x5f) && (9 < uVar4 - 0x30)) && (0x19 < (uVar4 & 0xdf) - 0x41)
         ) break;
      uVar4 = uVar5;
      do {
        iVar1 = 1;
        uVar2 = (uint)*(byte *)(param_1 + uVar4);
        if (uVar2 != 0x5f) {
          uVar3 = uVar2 - 0x30;
          bVar6 = 9 < uVar3;
          if (bVar6) {
            uVar3 = (uVar2 & 0xdf) - 0x41;
          }
          if (bVar6 && 0x19 < uVar3) {
            if (uVar2 != 0x25) break;
            if (param_2 <= uVar4 + 2) {
              return 0;
            }
            uVar2 = (uint)((byte *)(param_1 + uVar4))[1];
            if ((9 < uVar2 - 0x30) && (5 < (uVar2 & 0xdf) - 0x41)) {
              return 0;
            }
            uVar2 = (uint)*(byte *)(param_1 + uVar4 + 2);
            iVar1 = 3;
            if ((9 < uVar2 - 0x30) && (5 < (uVar2 & 0xdf) - 0x41)) {
              return 0;
            }
          }
        }
        uVar4 = iVar1 + uVar4;
        *param_3 = uVar4;
      } while (uVar4 < param_2);
      bVar6 = uVar4 <= uVar5;
      uVar5 = uVar4;
      if (bVar6) {
        return 0;
      }
    }
  }
  if (param_2 <= uVar5) {
    return 1;
  }
  iVar1 = 1;
  if (*(char *)(param_1 + uVar5) != '*') {
    if (*(char *)(param_1 + uVar5) != ':') {
      return 1;
    }
    uVar4 = uVar5 + 1;
    *param_3 = uVar4;
    if (param_2 <= uVar4) {
      return 0;
    }
    if (*(byte *)(param_1 + uVar4) - 0x3a < 0xfffffff7) {
      return 0;
    }
    uVar4 = uVar5 + 2;
    *param_3 = uVar4;
    if (param_2 <= uVar4) {
      return 1;
    }
    if (9 < *(byte *)(param_1 + uVar4) - 0x30) {
      return 1;
    }
    *param_3 = uVar5 + 3;
    if (param_2 + ~uVar5 == 2) {
      return 1;
    }
    if (9 < *(byte *)(param_1 + uVar5 + 3) - 0x30) {
      return 1;
    }
    *param_3 = uVar5 + 4;
    if ((param_2 + ~uVar5 == 3) || (iVar1 = 5, 9 < *(byte *)(param_1 + uVar5 + 4) - 0x30)) {
      return 1;
    }
  }
  *param_3 = uVar5 + iVar1;
  return 1;
}

