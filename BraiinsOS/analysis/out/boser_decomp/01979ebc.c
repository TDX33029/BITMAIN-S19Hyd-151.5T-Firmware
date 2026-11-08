// FUN_01979ebc @ 01979ebc size=92 calls_out=2 calls_in=1
// strings: 

void FUN_01979ebc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_14;
  
  local_14 = 1;
  iVar1 = FUN_01be9b78(param_2,param_3,param_4,&local_14,4);
  if (iVar1 == 0) {
    *(undefined1 *)param_1 = 4;
  }
  else {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
  }
  return;
}

