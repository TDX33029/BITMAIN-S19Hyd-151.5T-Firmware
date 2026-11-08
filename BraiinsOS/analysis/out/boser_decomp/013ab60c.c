// FUN_013ab60c @ 013ab60c size=120 calls_out=2 calls_in=0
// strings: 

void FUN_013ab60c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  undefined1 local_1a;
  undefined1 local_19;
  
  if (param_5 == 0) {
    puVar1 = &local_1a;
    local_1a = 0;
  }
  else {
    puVar1 = &local_19;
    local_19 = 0x10;
  }
  FUN_01284394(param_6,puVar1,1);
  FUN_013ab31c(param_1,param_2,param_6);
  FUN_013ab31c(param_3,param_4,param_6);
  return;
}

