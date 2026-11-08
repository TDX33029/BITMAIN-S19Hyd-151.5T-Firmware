// FUN_0008e76c @ 0008e76c  size=1012  callers=0
// program: bmminer


undefined4 FUN_0008e76c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ssize_t sVar3;
  undefined4 uVar4;
  int local_80;
  int iStack_7c;
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 0;
  iVar1 = FUN_0008bbbc(*(undefined4 *)(param_1 + 0x1878),param_2);
  if (iVar1 != 0) {
    FUN_00095b4c(2,"src/rule.c",0x54,"zlog_format_gen_msg fail");
    return 0xffffffff;
  }
  iVar1 = FUN_00099160(param_1 + 0x1030,&local_80);
  if (iVar1 == 0) {
    if ((iStack_1c == *(int *)(param_1 + 0x144c) && local_20 == *(int *)(param_1 + 0x1448)) &&
       (iStack_7c == *(int *)(param_1 + 0x1444) && local_80 == *(int *)(param_1 + 0x1440))) {
      local_14 = 0;
    }
    else {
      local_14 = 1;
    }
  }
  else {
    piVar2 = __errno_location();
    if (*piVar2 != 2) {
      piVar2 = __errno_location();
      FUN_00095b4c(2,"src/rule.c",0x5b,"stat fail on [%s], errno[%d]",param_1 + 0x1030,*piVar2);
      return 0xffffffff;
    }
    local_14 = 1;
    local_18 = 1;
  }
  if (local_14 != 0) {
    close(*(int *)(param_1 + 0x1438));
    iVar1 = open64((char *)(param_1 + 0x1030),*(uint *)(param_1 + 0x102c) | 0x441,
                   *(undefined4 *)(param_1 + 0x1028));
    *(int *)(param_1 + 0x1438) = iVar1;
    if (*(int *)(param_1 + 0x1438) < 0) {
      piVar2 = __errno_location();
      FUN_00095b4c(2,"src/rule.c",0x6b,"open file[%s] fail, errno[%d]",param_1 + 0x1030,*piVar2);
      return 0xffffffff;
    }
    if ((local_18 != 0) && (iVar1 = FUN_00099160(param_1 + 0x1030,&local_80), iVar1 != 0)) {
      piVar2 = __errno_location();
      FUN_00095b4c(2,"src/rule.c",0x72,"stat fail on new file[%s], errno[%d]",param_1 + 0x1030,
                   *piVar2);
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x1440) = local_80;
    *(int *)(param_1 + 0x1444) = iStack_7c;
    *(int *)(param_1 + 0x1448) = local_20;
    *(int *)(param_1 + 0x144c) = iStack_1c;
  }
  sVar3 = write(*(int *)(param_1 + 0x1438),(void *)**(undefined4 **)(param_2 + 0x1c),
                *(int *)(*(int *)(param_2 + 0x1c) + 4) - **(int **)(param_2 + 0x1c));
  if (sVar3 < 0) {
    piVar2 = __errno_location();
    FUN_00095b4c(2,"src/rule.c",0x7d,"write fail, errno[%d]",*piVar2);
    uVar4 = 0xffffffff;
  }
  else {
    if ((*(int *)(param_1 + 0x1868) != 0) &&
       (*(int *)(param_1 + 0x186c) = *(int *)(param_1 + 0x186c) + 1,
       *(uint *)(param_1 + 0x1868) <= *(uint *)(param_1 + 0x186c))) {
      *(undefined4 *)(param_1 + 0x186c) = 0;
      iVar1 = fsync(*(int *)(param_1 + 0x1438));
      if (iVar1 != 0) {
        uVar4 = *(undefined4 *)(param_1 + 0x1438);
        piVar2 = __errno_location();
        FUN_00095b4c(2,"src/rule.c",0x85,"fsync[%d] fail, errno[%d]",uVar4,*piVar2);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

