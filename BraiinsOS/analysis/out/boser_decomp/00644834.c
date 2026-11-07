// FUN_00644834 @ 00644834 size=1164 calls_out=2 calls_in=2
// strings: 

uint FUN_00644834(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = param_1[0x12];
  uVar6 = param_1[0x13];
  uVar2 = param_2[0x12];
  uVar4 = param_2[0x13];
  uVar7 = uVar5 ^ 3;
  if (uVar7 != 0 || uVar6 != 0) {
    unaff_r6 = uVar2 ^ 3;
  }
  if ((uVar7 != 0 || uVar6 != 0) && (unaff_r6 != 0 || uVar4 != 0)) {
    if ((char)param_2[0x20] != (char)param_1[0x20]) {
      return 0;
    }
    uVar8 = uVar5 ^ 2;
    uVar7 = uVar8;
    if (uVar8 != 0 || uVar6 != 0) {
      uVar7 = uVar2 ^ 2;
    }
    if ((uVar8 != 0 || uVar6 != 0) && (uVar7 != 0 || uVar4 != 0)) {
      if ((char)param_2[0x1a] != (char)param_1[0x1a]) {
        return 0;
      }
      if ((uVar5 & 1) == 0) {
        if ((uVar2 & 1) != 0) {
          return 0;
        }
      }
      else {
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        if (*(double *)(param_1 + 0x14) != *(double *)(param_2 + 0x14)) {
          return 0;
        }
      }
      if ((param_1[0x16] & 1) == 0) {
        if (param_2[0x16] != 0) {
          return 0;
        }
      }
      else {
        if (param_2[0x16] == 0) {
          return 0;
        }
        if (*(double *)(param_1 + 0x18) != *(double *)(param_2 + 0x18)) {
          return 0;
        }
      }
    }
    else {
      if (uVar8 == 0 && uVar6 == 0) {
        uVar2 = uVar2 ^ 2;
      }
      if ((uVar8 != 0 || uVar6 != 0) || (uVar2 != 0 || uVar4 != 0)) {
        return 0;
      }
    }
    if (param_1[0x1c] == 1) {
      if (param_2[0x1c] == 0) {
        return 0;
      }
      if (param_1[0x1d] != param_2[0x1d]) {
        return 0;
      }
    }
    else if (param_2[0x1c] != 0) {
      return 0;
    }
    if (param_1[0x1e] == 1) {
      if (param_2[0x1e] == 0) {
        return 0;
      }
      if (param_1[0x1f] != param_2[0x1f]) {
        return 0;
      }
    }
    else if (param_2[0x1e] != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0 && uVar6 == 0) {
      uVar2 = uVar2 ^ 3;
    }
    if ((uVar7 != 0 || uVar6 != 0) || (uVar2 != 0 || uVar4 != 0)) {
      return 0;
    }
  }
  if (param_1[0x22] == 1) {
    if (param_2[0x22] == 0) {
      return 0;
    }
    iVar3 = FUN_01017c44(param_1 + 0x23,param_2 + 0x23);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else if (param_2[0x22] != 0) {
    return 0;
  }
  uVar5 = param_1[1];
  uVar4 = *param_2;
  uVar6 = *param_1 ^ 2;
  uVar2 = uVar6;
  if (uVar6 != 0 || uVar5 != 0) {
    uVar2 = uVar4 ^ 2;
  }
  if ((uVar6 != 0 || uVar5 != 0) && (uVar2 != 0 || param_2[1] != 0)) {
    if ((char)param_2[0x10] != (char)param_1[0x10]) {
      return 0;
    }
    if ((*param_1 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        return 0;
      }
    }
    else {
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (*(double *)(param_1 + 2) != *(double *)(param_2 + 2)) {
        return 0;
      }
    }
    if ((param_1[4] & 1) == 0) {
      if (param_2[4] != 0) {
        return 0;
      }
    }
    else {
      if (param_2[4] == 0) {
        return 0;
      }
      if (*(double *)(param_1 + 6) != *(double *)(param_2 + 6)) {
        return 0;
      }
    }
    if ((param_1[8] & 1) == 0) {
      if (param_2[8] != 0) {
        return 0;
      }
    }
    else {
      if (param_2[8] == 0) {
        return 0;
      }
      if (*(double *)(param_1 + 10) != *(double *)(param_2 + 10)) {
        return 0;
      }
    }
    if ((param_1[0xc] & 1) == 0) {
      if (param_2[0xc] != 0) {
        return 0;
      }
    }
    else {
      if (param_2[0xc] == 0) {
        return 0;
      }
      if (*(double *)(param_1 + 0xe) != *(double *)(param_2 + 0xe)) {
        return 0;
      }
    }
  }
  else {
    if (uVar6 == 0 && uVar5 == 0) {
      uVar4 = uVar4 ^ 2;
    }
    if ((uVar6 != 0 || uVar5 != 0) || (uVar4 != 0 || param_2[1] != 0)) {
      return 0;
    }
  }
  uVar4 = param_1[0x26];
  uVar2 = param_2[0x26];
  bVar1 = uVar4 == 2 && uVar2 == 2;
  if (uVar4 != 2 && uVar2 != 2) {
    if ((uVar4 & 1) == 0) {
      if ((uVar2 & 1) != 0) {
        return 0;
      }
    }
    else {
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (param_1[0x27] != param_2[0x27]) {
        return 0;
      }
    }
    if (param_1[0x28] == 1) {
      if (param_2[0x28] == 0) {
        return 0;
      }
      if (param_1[0x29] != param_2[0x29]) {
        return 0;
      }
    }
    else if (param_2[0x28] != 0) {
      return 0;
    }
    if (param_1[0x2a] == 1) {
      if (param_2[0x2a] == 0) {
        return 0;
      }
      if (param_1[0x2b] != param_2[0x2b]) {
        return 0;
      }
    }
    else if (param_2[0x2a] != 0) {
      return 0;
    }
    if (param_1[0x2c] == 1) {
      if (param_2[0x2c] == 0) {
        return 0;
      }
      if (param_1[0x2d] != param_2[0x2d]) {
        return 0;
      }
    }
    else if (param_2[0x2c] != 0) {
      return 0;
    }
    if (param_1[0x2e] == 1) {
      if (param_2[0x2e] == 0) {
        return 0;
      }
      if (param_1[0x2f] != param_2[0x2f]) {
        return 0;
      }
    }
    else if (param_2[0x2e] != 0) {
      return 0;
    }
    uVar4 = param_1[0x30];
    uVar2 = param_2[0x30];
    bVar1 = uVar4 == 2 && uVar2 == 2;
    if (uVar4 != 2 && uVar2 != 2) {
      if ((char)param_2[0x32] != (char)param_1[0x32]) {
        return 0;
      }
      if ((uVar4 & 1) == 0) {
        if ((uVar2 & 1) != 0) {
          return 0;
        }
      }
      else {
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        if (param_1[0x31] != param_2[0x31]) {
          return 0;
        }
      }
      goto LAB_00644a28;
    }
  }
  if (!bVar1) {
    return 0;
  }
LAB_00644a28:
  if (param_1[0x33] == 0x80000000 || param_2[0x33] == 0x80000000) {
    return (uint)(param_1[0x33] == 0x80000000 && param_2[0x33] == 0x80000000);
  }
  uVar2 = FUN_006378fc(param_1[0x34],param_1[0x35],param_2[0x34],param_2[0x35]);
  return uVar2;
}

