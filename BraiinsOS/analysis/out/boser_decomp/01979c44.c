// FUN_01979c44 @ 01979c44 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_01979c44(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 2;
  local_14 = 0;
  iVar1 = FUN_01be9b78(param_2,1,param_3,&local_18,8);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
  }
  else {
    *(undefined1 *)param_1 = 4;
  }
  return;
}

