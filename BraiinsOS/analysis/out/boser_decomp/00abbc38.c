// FUN_00abbc38 @ 00abbc38 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00abbc38(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0167459c(param_2);
  if (iVar1 == 0) {
    FUN_00abb634(param_1,param_2);
    return;
  }
  *param_1 = 0x80000001;
  param_1[1] = iVar1;
  return;
}

