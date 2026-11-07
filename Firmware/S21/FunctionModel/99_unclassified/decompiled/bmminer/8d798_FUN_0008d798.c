// FUN_0008d798 @ 0008d798  size=1028  callers=1
// program: bmminer


undefined4 FUN_0008d798(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_424 [1028];
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = *(int *)(*(int *)(param_1 + 0x440) + 4);
  while( true ) {
    local_14 = local_14 + -1;
    if (local_14 < 0) {
      memset(acStack_424,0,0x401);
      local_1c = snprintf(acStack_424,0x401,"%.*s%0*d%s",*(int *)(param_1 + 0x42c),
                          (char *)(param_1 + 0x28),*(int *)(param_1 + 0x434),0,
                          (char *)(param_1 + 0x28 + *(int *)(param_1 + 0x430)));
      if (((int)local_1c < 0) || (0x400 < local_1c)) {
        piVar1 = __errno_location();
        FUN_00095b4c(2,"src/rotater.c",0x14f,"nwirte[%d], overflow or errno[%d]",local_1c,*piVar1);
        return 0xffffffff;
      }
      iVar2 = rename(*(char **)(param_1 + 0x20),acStack_424);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      piVar1 = __errno_location();
      FUN_00095b4c(2,"src/rotater.c",0x154,"rename[%s]->[%s] fail, errno[%d]",uVar3,acStack_424,
                   *piVar1);
      return 0xffffffff;
    }
    if (local_14 < *(int *)(*(int *)(param_1 + 0x440) + 4)) {
      local_20 = *(int *)(**(int **)(param_1 + 0x440) + local_14 * 4);
    }
    else {
      local_20 = 0;
    }
    if (local_20 == 0) break;
    if ((*(int *)(param_1 + 0x43c) < 1) || (local_14 < *(int *)(param_1 + 0x43c) + -1)) {
      memset(acStack_424,0,0x401);
      local_1c = snprintf(acStack_424,0x401,"%.*s%0*d%s",*(int *)(param_1 + 0x42c),
                          (char *)(param_1 + 0x28),*(int *)(param_1 + 0x434),local_14 + 1,
                          (char *)(param_1 + 0x28 + *(int *)(param_1 + 0x430)));
      if (((int)local_1c < 0) || (0x400 < local_1c)) {
        piVar1 = __errno_location();
        FUN_00095b4c(2,"src/rotater.c",0x13e,"nwirte[%d], overflow or errno[%d]",local_1c,*piVar1);
        return 0xffffffff;
      }
      iVar2 = rename((char *)(local_20 + 4),acStack_424);
      if (iVar2 != 0) {
        iVar2 = local_20 + 4;
        piVar1 = __errno_location();
        FUN_00095b4c(2,"src/rotater.c",0x143,"rename[%s]->[%s] fail, errno[%d]",iVar2,acStack_424,
                     *piVar1);
        return 0xffffffff;
      }
    }
    else {
      local_18 = unlink((char *)(local_20 + 4));
      if (local_18 != 0) {
        iVar2 = local_20 + 4;
        piVar1 = __errno_location();
        FUN_00095b4c(2,"src/rotater.c",0x131,"unlink[%s] fail, errno[%d]",iVar2,*piVar1);
        return 0xffffffff;
      }
    }
  }
  FUN_00095b4c(2,"src/rotater.c",0x129,"zc_arraylist_get fail");
  return 0xffffffff;
}

