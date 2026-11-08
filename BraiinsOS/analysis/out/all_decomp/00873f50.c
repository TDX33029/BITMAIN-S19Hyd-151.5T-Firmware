// FUN_00873f50 @ 00873f50 size=168 calls_out=1 calls_in=3
// strings: 

uint * FUN_00873f50(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_00873f50(param_1,param_1 + param_4 * 8,param_1 + param_4 * 0xe,param_4);
    param_2 = (uint *)FUN_00873f50(param_2,param_2 + param_4 * 8,param_2 + param_4 * 0xe,param_4);
    param_3 = (uint *)FUN_00873f50(param_3,param_3 + param_4 * 8,param_3 + param_4 * 0xe,param_4);
  }
  uVar1 = *param_2;
  uVar2 = *param_1;
  if (uVar2 < uVar1 != uVar1 < *param_3) {
    param_2 = param_3;
  }
  if (uVar2 < uVar1 != uVar2 < *param_3) {
    param_2 = param_1;
  }
  return param_2;
}

