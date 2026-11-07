// FUN_015ab458 @ 015ab458 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_015ab458(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01be3388(param_2,0x406,0);
  if (iVar1 != -1) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = iVar1;
    return;
  }
  puVar2 = (undefined4 *)FUN_01be3244();
  param_1[2] = *puVar2;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  uVar3 = FUN_01beaf68(param_2);
  iVar1 = thunk_FUN_01bee080(6,uVar3,0,0,0,0,0);
  if (iVar1 == -4) {
    iVar1 = 0;
  }
  FUN_01be3b5a(iVar1);
  return;
}

