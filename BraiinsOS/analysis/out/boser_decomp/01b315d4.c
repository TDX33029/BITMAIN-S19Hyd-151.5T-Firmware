// FUN_01b315d4 @ 01b315d4 size=156 calls_out=2 calls_in=3
// strings: 

int FUN_01b315d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_01b314bc(param_6);
  FUN_01b314bc(param_1,param_3,param_2,param_4,-param_5);
  if (param_5 < 0) {
    param_5 = -param_5;
  }
  FUN_01b2b82c(param_1,-iVar1,param_1,param_6,param_5 + param_4);
  return -iVar1;
}

