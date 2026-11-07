// FUN_01979d08 @ 01979d08 size=72 calls_out=2 calls_in=3
// strings: 

void FUN_01979d08(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01be9c4e(param_2,param_3 | 0x80000,param_4);
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

