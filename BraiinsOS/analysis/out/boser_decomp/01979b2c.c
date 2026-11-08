// FUN_01979b2c @ 01979b2c size=84 calls_out=2 calls_in=1
// strings: 

void FUN_01979b2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 uStack00000000;
  
  iVar1 = FUN_01be9b78(param_2,param_3,param_4,&param_5,4);
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

