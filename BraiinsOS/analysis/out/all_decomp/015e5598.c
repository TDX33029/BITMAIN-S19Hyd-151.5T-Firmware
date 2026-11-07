// FUN_015e5598 @ 015e5598 size=320 calls_out=1 calls_in=4
// strings: 

bool FUN_015e5598(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*param_1;
  uVar2 = (uint)*param_2;
  iVar1 = uVar4 - 5;
  if (uVar4 < 5 || iVar1 == 0) {
    iVar1 = 0;
  }
  iVar3 = uVar2 - 5;
  if (uVar2 < 6) {
    iVar3 = 0;
  }
  if (iVar1 != iVar3) {
    return false;
  }
  if (iVar1 == 0) {
    if (5 < uVar2) {
      return true;
    }
    if (uVar4 != uVar2) {
      return false;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    default:
      goto switchD_015e5620_caseD_0;
    case 1:
      if (*(int *)(param_1 + 8) != *(int *)(param_2 + 8)) {
        return false;
      }
      iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
      if (iVar1 != 0) {
        return false;
      }
      break;
    case 2:
    case 5:
      return param_1[1] == param_2[1];
    case 4:
      if (*(int *)(param_1 + 8) != *(int *)(param_2 + 8)) {
        return false;
      }
      iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
      if (iVar1 != 0) {
        return false;
      }
    }
    if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
      iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc));
      return iVar1 == 0;
    }
  }
  else {
    if (iVar1 != 4) {
      return true;
    }
switchD_015e5620_caseD_0:
    if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
      iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
      return iVar1 == 0;
    }
  }
  return false;
}

