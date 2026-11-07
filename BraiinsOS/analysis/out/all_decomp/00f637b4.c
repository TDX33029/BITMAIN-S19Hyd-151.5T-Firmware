// FUN_00f637b4 @ 00f637b4 size=396 calls_out=0 calls_in=1
// strings: 

bool FUN_00f637b4(char *param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_2 < 8) {
    if (param_2 == 0) {
      return false;
    }
    bVar7 = true;
    if (*param_1 != '\0') {
      if (param_2 == 1) {
        return false;
      }
      if (param_1[1] != '\0') {
        if (param_2 == 2) {
          return false;
        }
        if (param_1[2] != '\0') {
          if (param_2 == 3) {
            return false;
          }
          if (param_1[3] != '\0') {
            if (param_2 == 4) {
              return false;
            }
            if (param_1[4] != '\0') {
              if (param_2 == 5) {
                return false;
              }
              if ((param_1[5] != '\0') && (bVar7 = false, param_2 != 6)) {
                bVar7 = param_1[6] == '\0';
              }
            }
          }
        }
      }
    }
    return bVar7;
  }
  uVar4 = ((uint)(param_1 + 3) & 0xfffffffc) - (int)param_1;
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = (int)param_1 - ((uint)(param_1 + 3) & 0xfffffffc);
    pcVar1 = param_1;
    do {
      if (*pcVar1 == '\0') {
        return true;
      }
      bVar7 = iVar2 != -1;
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (bVar7);
    if (param_2 - 8 < uVar4) goto LAB_00f638c8;
  }
  do {
    uVar5 = *(uint *)(param_1 + uVar4);
    uVar3 = *(uint *)((int)(param_1 + uVar4) + 4);
    if (((0x1010100 - uVar5 | uVar5) & 0x80808080 & (0x1010100 - uVar3 | uVar3)) != 0x80808080)
    break;
    uVar4 = uVar4 + 8;
  } while (uVar4 <= param_2 - 8);
LAB_00f638c8:
  bVar7 = false;
  if (param_2 != uVar4) {
    pcVar1 = param_1 + uVar4;
    iVar2 = ~uVar4 + param_2;
    do {
      bVar7 = *pcVar1 == '\0';
      if (*pcVar1 == '\0') {
        return true;
      }
      bVar6 = iVar2 != 0;
      pcVar1 = pcVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (bVar6);
  }
  return bVar7;
}

