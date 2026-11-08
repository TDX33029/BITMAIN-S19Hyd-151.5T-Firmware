// FUN_00eff16c @ 00eff16c size=420 calls_out=1 calls_in=3
// strings: 

int FUN_00eff16c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0xc]) {
  default:
    uVar1 = FUN_00effb18(param_1 + 0xd);
    uVar1 = uVar1 + ((LZCOUNT(uVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    break;
  case '\x01':
    uVar1 = 4;
    if (*(char *)((int)param_1 + 0x31) == '\x05') {
      uVar1 = 2;
    }
    break;
  case '\x02':
    uVar1 = (uint)*(byte *)((int)param_1 + 0x31);
    if (uVar1 != 2) {
      uVar1 = 4;
    }
    break;
  case '\x04':
    break;
  }
  iVar4 = 0;
  iVar6 = 0;
  if ((*param_1 & 1) != 0) {
    uVar2 = param_1[3];
    if (param_1[2] == 0 && uVar2 == 0) {
      iVar3 = 2;
    }
    else {
      uVar5 = LZCOUNT(param_1[2] | 1) | 0x20;
      if (uVar2 != 0) {
        uVar5 = LZCOUNT(uVar2);
      }
      iVar3 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
    }
    uVar2 = param_1[4];
    if (uVar2 == 0) {
      iVar6 = 0;
    }
    else {
      uVar5 = LZCOUNT(uVar2 | 1) | 0x20;
      if ((int)uVar2 < 0) {
        uVar5 = LZCOUNT((int)uVar2 >> 0x1f);
      }
      iVar6 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    iVar6 = iVar6 + iVar3;
  }
  if ((param_1[6] & 3) == 2) {
    iVar4 = 2;
  }
  else if (param_1[6] != 3) {
    uVar2 = param_1[9];
    iVar3 = 0;
    if (param_1[8] != 0 || uVar2 != 0) {
      uVar5 = LZCOUNT(param_1[8] | 1) | 0x20;
      if (uVar2 != 0) {
        uVar5 = LZCOUNT(uVar2);
      }
      iVar3 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    uVar2 = param_1[10];
    if (uVar2 != 0) {
      uVar5 = LZCOUNT(uVar2 | 1) | 0x20;
      if ((int)uVar2 < 0) {
        uVar5 = LZCOUNT((int)uVar2 >> 0x1f);
      }
      iVar4 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
    }
    iVar4 = iVar4 + iVar3 + 4;
  }
  return iVar6 + uVar1 + iVar4;
}

