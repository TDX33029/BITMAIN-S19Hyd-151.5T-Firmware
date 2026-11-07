// FUN_0008e0fc @ 0008e0fc  size=424  callers=1
// program: bmminer


undefined4 FUN_0008e0fc(pthread_mutex_t *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  
  local_24 = 1;
  local_20 = 0;
  local_22 = 0;
  local_1c = 0;
  local_14 = pthread_mutex_trylock(param_1);
  if (local_14 == 0x10) {
    FUN_00095b4c(1,"src/rotater.c",0x1e1,
                 "pthread_mutex_trylock fail, as lock_mutex is locked by other threads");
    uVar3 = 0xffffffff;
  }
  else if (local_14 == 0) {
    iVar1 = fcntl(*(int *)((int)param_1 + 0x1c),6,&local_24);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      piVar2 = __errno_location();
      if ((*piVar2 == 0xb) || (piVar2 = __errno_location(), *piVar2 == 0xd)) {
        FUN_00095b4c(1,"src/rotater.c",0x1ed,"fcntl lock fail, as file is lock by other process");
      }
      else {
        uVar3 = *(undefined4 *)((int)param_1 + 0x1c);
        piVar2 = __errno_location();
        FUN_00095b4c(2,"src/rotater.c",0x1ef,"lock fd[%d] fail, errno[%d]",uVar3,*piVar2);
      }
      iVar1 = pthread_mutex_unlock(param_1);
      if (iVar1 != 0) {
        piVar2 = __errno_location();
        FUN_00095b4c(2,"src/rotater.c",0x1f2,"pthread_mutex_unlock fail, errno[%d]",*piVar2);
      }
      uVar3 = 0xffffffff;
    }
  }
  else {
    FUN_00095b4c(2,"src/rotater.c",0x1e4,"pthread_mutex_trylock fail, rc[%d]",local_14);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

