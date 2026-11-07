// FUN_00b92d34 @ 00b92d34 size=176 calls_out=1 calls_in=2
// strings: 

uint * FUN_00b92d34(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (uint *)FUN_00b92d34(param_1,param_1 + param_4 * 0x18,param_1 + param_4 * 0x2a,param_4
                                  );
    param_2 = (uint *)FUN_00b92d34(param_2,param_2 + param_4 * 0x18,param_2 + param_4 * 0x2a,param_4
                                  );
    param_3 = (uint *)FUN_00b92d34(param_3,param_3 + param_4 * 0x18,param_3 + param_4 * 0x2a,param_4
                                  );
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

