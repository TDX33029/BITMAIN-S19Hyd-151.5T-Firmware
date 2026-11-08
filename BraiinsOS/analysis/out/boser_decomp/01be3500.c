// FUN_01be3500 @ 01be3500 size=70 calls_out=2 calls_in=1
// strings: 

void FUN_01be3500(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (((param_3 & 0x40) != 0) || (uVar1 = 0, (~param_3 & 0x404000) == 0)) {
    uVar1 = param_4;
  }
  thunk_FUN_01bee080(0x142,param_1,param_2,param_3 | 0x20000,uVar1,0,0);
  FUN_01be3b5a();
  return;
}

