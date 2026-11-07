// FUN_0008e2a4 @ 0008e2a4  size=248  callers=1
// program: bmminer


undefined4 FUN_0008e2a4(pthread_mutex_t *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_14 = 0;
  local_24 = 2;
  local_20 = 0;
  local_22 = 0;
  local_1c = 0;
  iVar1 = fcntl(*(int *)((int)param_1 + 0x1c),6,&local_24);
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    uVar3 = *(undefined4 *)((int)param_1 + 0x1c);
    piVar2 = __errno_location();
    FUN_00095b4c(2,"src/rotater.c",0x206,"unlock fd[%s] fail, errno[%d]",uVar3,*piVar2);
  }
  iVar1 = pthread_mutex_unlock(param_1);
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    piVar2 = __errno_location();
    FUN_00095b4c(2,"src/rotater.c",0x20b,"pthread_mutext_unlock fail, errno[%d]",*piVar2);
  }
  return local_14;
}

