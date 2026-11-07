// FUN_00efdb4c @ 00efdb4c size=108 calls_out=2 calls_in=1
// strings: 

void FUN_00efdb4c(char param_1,byte param_2,undefined4 param_3)

{
  byte local_12;
  char local_11;
  
  local_12 = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_12,1);
  local_11 = param_2 << 1;
  FUN_01284394(param_3,&local_11,1);
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_00efe13c(1,1,param_3);
  return;
}

