// FUN_019bb3cc @ 019bb3cc size=76 calls_out=2 calls_in=2
// strings: 

void FUN_019bb3cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01be8da0(param_2,param_3,param_4,0);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  param_1[1] = iVar1;
  *(undefined1 *)param_1 = 4;
  return;
}

