// FUN_000350e0 @ 000350e0  size=56  callers=0
// program: bmminer


void FUN_000350e0(sem_t *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = sem_post(param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_000337e0(param_1,param_2,param_3,param_4);
  return;
}

