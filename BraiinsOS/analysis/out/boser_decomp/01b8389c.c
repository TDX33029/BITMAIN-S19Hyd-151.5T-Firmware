// FUN_01b8389c @ 01b8389c size=148 calls_out=2 calls_in=1
// strings: 

uint FUN_01b8389c(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  uint uVar1;
  
  if (param_6 == 0) {
    uVar1 = FUN_01b830e8();
  }
  else {
    uVar1 = FUN_01b8374c(param_2,param_3 - param_2,param_4,param_5,param_7);
  }
  if (((uVar1 < 0xffffff89) && (uVar1 != 0)) &&
     (uVar1 = (param_2 + uVar1) - param_1, param_5 - 1U <= uVar1)) {
    uVar1 = 0;
  }
  return uVar1;
}

