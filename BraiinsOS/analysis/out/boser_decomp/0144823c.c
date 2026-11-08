// FUN_0144823c @ 0144823c size=180 calls_out=1 calls_in=2
// strings: 

uint * FUN_0144823c(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_0144823c(param_1,param_1 + param_4 * 4,param_1 + param_4 * 7,param_4);
    param_2 = (uint *)FUN_0144823c(param_2,param_2 + param_4 * 4,param_2 + param_4 * 7,param_4);
    param_3 = (uint *)FUN_0144823c(param_3,param_3 + param_4 * 4,param_3 + param_4 * 7,param_4);
  }
  uVar1 = *param_1 >> 0x18;
  bVar2 = uVar1 < *param_2 >> 0x18;
  if (bVar2 != *param_2 >> 0x18 < *param_3 >> 0x18) {
    param_2 = param_3;
  }
  if (bVar2 != uVar1 < *param_3 >> 0x18) {
    param_2 = param_1;
  }
  return param_2;
}

