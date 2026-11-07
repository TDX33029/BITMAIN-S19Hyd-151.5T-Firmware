// FUN_01966f00 @ 01966f00 size=60 calls_out=2 calls_in=53
// strings: 

int FUN_01966f00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_01965294(param_2,param_1);
    thunk_FUN_01be4678(param_1);
  }
  else {
    iVar1 = param_1;
  }
  return iVar1;
}

