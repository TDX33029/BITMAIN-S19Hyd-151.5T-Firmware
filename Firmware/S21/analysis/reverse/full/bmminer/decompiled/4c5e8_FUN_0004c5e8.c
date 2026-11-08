// FUN_0004c5e8 @ 0004c5e8  size=56  callers=0
// program: bmminer


void FUN_0004c5e8(sem_t *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = sem_post(param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_0004acc0(param_1,param_2,param_3,param_4);
  return;
}

