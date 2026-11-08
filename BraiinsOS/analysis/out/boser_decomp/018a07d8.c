// FUN_018a07d8 @ 018a07d8 size=540 calls_out=3 calls_in=2
// strings: {recursion limit reached} | !null

uint FUN_018a07d8(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    if (param_1[4] == 0) {
      return 0;
    }
    uVar3 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
    return uVar3;
  }
  uVar3 = param_1[2];
  if (uVar3 < (uint)param_1[1]) {
    cVar1 = *(char *)(*param_1 + uVar3);
    param_1[2] = uVar3 + 1;
    if (cVar1 == 'N') {
      if (param_1[4] == 0) {
        return 0;
      }
      iVar2 = FUN_012fb940(param_1[4],"!null",5);
    }
    else {
      if (cVar1 == 'O') {
        iVar2 = param_1[3];
        param_1[3] = iVar2 + 1U;
        if (iVar2 + 1U < 0x1f5) {
          iVar2 = FUN_018a07d8(param_1);
          while( true ) {
            if (iVar2 != 0) {
              return 1;
            }
            if (*param_1 == 0) break;
            uVar3 = param_1[2];
            if ((uVar3 < (uint)param_1[1]) && (*(char *)(*param_1 + uVar3) == 'E')) {
              param_1[2] = uVar3 + 1;
              param_1[3] = param_1[3] + -1;
              return 0;
            }
            if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],&DAT_0053147c,3), iVar2 != 0))
            {
              return 1;
            }
            iVar2 = FUN_018a07d8(param_1);
          }
          if (param_1[4] != 0) {
            iVar2 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10);
            goto LAB_018a0890;
          }
          goto LAB_018a0898;
        }
        if ((param_1[4] != 0) &&
           (iVar2 = FUN_012fb940(param_1[4],"{recursion limit reached}",0x19), iVar2 != 0)) {
          return 1;
        }
        *(undefined1 *)(param_1 + 1) = 1;
        goto LAB_018a08a0;
      }
      if (cVar1 != 'R') goto LAB_018a0870;
      iVar2 = FUN_0189e514(param_1,0);
      if (iVar2 != 0) {
        return 1;
      }
      if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"..=",3), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_0189e514(param_1,0);
    }
    uVar3 = (uint)(iVar2 != 0);
  }
  else {
LAB_018a0870:
    if (param_1[4] != 0) {
      iVar2 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10);
LAB_018a0890:
      if (iVar2 != 0) {
        return 1;
      }
    }
LAB_018a0898:
    *(undefined1 *)(param_1 + 1) = 0;
LAB_018a08a0:
    uVar3 = 0;
    *param_1 = 0;
  }
  return uVar3;
}

