// FUN_012a8c1c @ 012a8c1c size=96 calls_out=5 calls_in=2
// strings: 

void FUN_012a8c1c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  FUN_0134aee0(*param_1,param_1[1],4,8);
  FUN_012a4084(param_1 + 3);
  if (param_1[6] == 0) {
    return;
  }
  puVar1 = (undefined4 *)param_1[6];
  FUN_0134bd64(*puVar1,puVar1[1]);
  FUN_012a8c1c(puVar1 + 3);
  thunk_FUN_01be4678(puVar1);
  return;
}

