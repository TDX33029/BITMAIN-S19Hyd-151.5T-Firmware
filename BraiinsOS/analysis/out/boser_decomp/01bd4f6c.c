// FUN_01bd4f6c @ 01bd4f6c size=104 calls_out=2 calls_in=1
// strings: 

uint FUN_01bd4f6c(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar1 = FUN_01bd4e8c(param_2);
    return uVar1;
  }
  uVar1 = FUN_01bd4e8c(param_2 ^ *param_1,param_3 + -1);
  uVar2 = FUN_01bd4ea8(param_1 + 1);
  return uVar2 & uVar1;
}

