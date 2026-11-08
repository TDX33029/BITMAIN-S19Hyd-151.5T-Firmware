// FUN_0199f550 @ 0199f550 size=300 calls_out=1 calls_in=4
// strings: 

bool FUN_0199f550(byte *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*param_1;
  uVar4 = (uint)*param_2;
  iVar3 = uVar6 - 5;
  if (uVar6 < 5 || iVar3 == 0) {
    iVar3 = 0;
  }
  iVar5 = uVar4 - 5;
  if (uVar4 < 6) {
    iVar5 = 0;
  }
  if (iVar3 != iVar5) {
    return false;
  }
  if (iVar3 == 0) {
    if (5 < uVar4) {
      return true;
    }
    if (uVar6 != uVar4) {
      return false;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    default:
      goto switchD_0199f5d8_caseD_0;
    case 1:
      if (*(int *)(param_1 + 8) != *(int *)(param_2 + 8)) {
        return false;
      }
      iVar3 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
      if (iVar3 != 0) {
        return false;
      }
      break;
    case 2:
    case 5:
      iVar3 = (uint)param_1[1] - (uint)param_2[1];
      goto LAB_0199f5b4;
    case 4:
      if (*(int *)(param_1 + 8) != *(int *)(param_2 + 8)) {
        return false;
      }
      iVar3 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
      if (iVar3 != 0) {
        return false;
      }
    }
    if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
      return false;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    if (iVar3 != 4) {
      return true;
    }
switchD_0199f5d8_caseD_0:
    if (*(int *)(param_1 + 8) != *(int *)(param_2 + 8)) {
      return false;
    }
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  iVar3 = thunk_FUN_01bed842(uVar1,uVar2);
LAB_0199f5b4:
  return iVar3 == 0;
}

