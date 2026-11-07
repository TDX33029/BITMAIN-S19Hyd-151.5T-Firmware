// FUN_00a61d78 @ 00a61d78 size=528 calls_out=5 calls_in=1
// strings: 

void FUN_00a61d78(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_90;
  int *local_8c;
  int local_88;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int local_50;
  int local_40;
  int local_3c;
  char local_38;
  char local_37;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*(char *)(param_2 + 0x49) != '\0') {
LAB_00a61d90:
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  iVar4 = *(int *)(param_2 + 0x30);
  FUN_00953db0(&local_80);
  if (local_80 == 1) {
    iVar3 = *(int *)(param_2 + 0x40);
    iVar4 = iVar4 + iVar3;
    *(undefined4 *)(param_2 + 0x40) = local_78;
    iVar3 = local_7c - iVar3;
    piVar2 = (int *)thunk_FUN_016d4a50(0x20);
  }
  else {
    if (*(char *)(param_2 + 0x49) != '\0') goto LAB_00a61d90;
    *(undefined1 *)(param_2 + 0x49) = 1;
    if (*(char *)(param_2 + 0x48) == '\x01') {
      iVar4 = *(int *)(param_2 + 0x40);
      iVar3 = *(int *)(param_2 + 0x44);
    }
    else {
      iVar4 = *(int *)(param_2 + 0x40);
      iVar3 = *(int *)(param_2 + 0x44);
      if (iVar3 == iVar4) goto LAB_00a61d90;
    }
    iVar3 = iVar3 - iVar4;
    iVar4 = *(int *)(param_2 + 0x30) + iVar4;
    piVar2 = (int *)thunk_FUN_016d4a50(0x20);
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x20);
  }
  local_88 = 1;
  local_90 = 4;
  *piVar2 = iVar4;
  piVar2[1] = iVar3;
  local_8c = piVar2;
  FUN_016dd1aa(&local_80,param_2,0x50);
  if (local_37 == '\0') {
    iVar4 = 0;
    do {
      iVar3 = local_50;
      FUN_00953db0(&local_30,&local_80);
      if (local_30 == 1) {
        iVar5 = local_2c - local_40;
        iVar1 = local_28;
      }
      else {
        if ((local_37 != '\0') ||
           ((local_37 = '\x01', local_38 != '\x01' && (local_3c == local_40)))) break;
        iVar5 = local_3c - local_40;
        iVar1 = local_40;
        iVar3 = local_50;
      }
      iVar3 = iVar3 + local_40;
      local_40 = iVar1;
      if (iVar4 + 1 == local_90) {
        FUN_00a8a86c(&local_90,iVar4 + 1,1,4,8);
        piVar2 = local_8c;
      }
      piVar2[iVar4 * 2 + 2] = iVar3;
      piVar2[iVar4 * 2 + 3] = iVar5;
      local_88 = iVar4 + 2;
      iVar4 = iVar4 + 1;
    } while (local_37 == '\0');
  }
  *param_1 = local_90;
  param_1[1] = (int)local_8c;
  param_1[2] = local_88;
  return;
}

