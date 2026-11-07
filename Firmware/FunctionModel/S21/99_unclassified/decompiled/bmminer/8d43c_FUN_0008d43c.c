// FUN_0008d43c @ 0008d43c  size=860  callers=1
// program: bmminer


undefined4 FUN_0008d43c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char acStack_428 [1028];
  int *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0;
  local_20 = 0;
  local_14 = 0;
  local_24 = *(int **)**(undefined4 **)(param_1 + 0x440);
  for (; local_14 < *(int *)(*(int *)(param_1 + 0x440) + 4); local_14 = local_14 + 1) {
    local_24 = *(int **)(**(int **)(param_1 + 0x440) + local_14 * 4);
    if (((0 < *(int *)(param_1 + 0x43c)) &&
        (local_14 < *(int *)(*(int *)(param_1 + 0x440) + 4) - *(int *)(param_1 + 0x43c))) &&
       (local_1c = unlink((char *)(local_24 + 1)), local_1c != 0)) {
      piVar4 = local_24 + 1;
      piVar1 = __errno_location();
      FUN_00095b4c(2,"src/rotater.c",0xf6,"unlink[%s] fail, errno[%d]",piVar4,*piVar1);
      return 0xffffffff;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x440) + 4) < 1) {
    local_18 = 0;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x440) + 4) + -1 < *(int *)(*(int *)(param_1 + 0x440) + 4)) {
      local_24 = *(int **)(**(int **)(param_1 + 0x440) +
                          (*(int *)(*(int *)(param_1 + 0x440) + 4) + 0x3fffffff) * 4);
    }
    else {
      local_24 = (int *)0x0;
    }
    if (local_24 == (int *)0x0) {
      FUN_00095b4c(2,"src/rotater.c",0x100,"zc_arraylist_get fail");
      return 0xffffffff;
    }
    local_18 = *local_24;
    iVar2 = *(int *)(*(int *)(param_1 + 0x440) + 4) + -1;
    if (local_18 < iVar2) {
      local_18 = iVar2;
    }
    local_18 = local_18 + 1;
  }
  memset(acStack_428,0,0x401);
  local_20 = snprintf(acStack_428,0x401,"%.*s%0*d%s",*(int *)(param_1 + 0x42c),
                      (char *)(param_1 + 0x28),*(int *)(param_1 + 0x434),local_18,
                      (char *)(param_1 + 0x28 + *(int *)(param_1 + 0x430)));
  if (((int)local_20 < 0) || (0x400 < local_20)) {
    piVar1 = __errno_location();
    FUN_00095b4c(2,"src/rotater.c",0x110,"nwirte[%d], overflow or errno[%d]",local_20,*piVar1);
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = rename(*(char **)(param_1 + 0x20),acStack_428);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      piVar1 = __errno_location();
      FUN_00095b4c(2,"src/rotater.c",0x115,"rename[%s]->[%s] fail, errno[%d]",uVar3,acStack_428,
                   *piVar1);
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

