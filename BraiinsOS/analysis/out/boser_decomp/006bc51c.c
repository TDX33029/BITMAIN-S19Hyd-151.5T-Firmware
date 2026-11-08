// FUN_006bc51c @ 006bc51c size=108 calls_out=2 calls_in=22
// strings: 

void FUN_006bc51c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01ac6cbc(param_2,"\"",1);
  *param_1 = '\x04';
  FUN_006bc590(param_1,param_2,param_3,param_4);
  if (*param_1 == '\x04') {
    FUN_01ac6cbc(param_2,"\"",1);
    return;
  }
  return;
}

