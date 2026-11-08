// FUN_015fc9f4 @ 015fc9f4 size=292 calls_out=4 calls_in=1
// strings: internal error: entered unreachable code: waitid with WEXITED should not return None

void FUN_015fc9f4(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_24;
  uint local_20;
  int local_1c;
  
  if (*param_2 == 1) {
    iVar3 = param_2[1];
    *param_1 = 4;
    *(int *)(param_1 + 4) = iVar3;
    return;
  }
  if (param_2[3] == -1) {
    iVar3 = param_2[2];
    local_24 = 0;
    while (iVar1 = FUN_016da356(iVar3,&local_24,0), iVar1 == -1) {
      piVar2 = (int *)FUN_016d2bc8();
      if (*piVar2 != 4) {
        *(int *)(param_1 + 4) = *piVar2;
        param_1[3] = 0;
        *(undefined2 *)(param_1 + 1) = 0;
        *param_1 = 0;
        return;
      }
    }
    local_1c = local_24;
  }
  else {
    FUN_015f05c4(&local_24,param_2[3],4);
    if (local_24 == 0) {
      if ((local_20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("internal error: entered unreachable code: waitid with WEXITED should not return None"
                     ,0xa9,&DAT_018aad58);
      }
    }
    else if ((local_20 & 0xff) != 4) {
      *(int *)(param_1 + 4) = local_1c;
      *param_1 = (char)local_20;
      param_1[3] = (char)(local_20 >> 0x18);
      *(short *)(param_1 + 1) = (short)(local_20 >> 8);
      return;
    }
  }
  *(int *)(param_1 + 4) = local_1c;
  *param_2 = 1;
  param_2[1] = local_1c;
  *param_1 = 4;
  return;
}

