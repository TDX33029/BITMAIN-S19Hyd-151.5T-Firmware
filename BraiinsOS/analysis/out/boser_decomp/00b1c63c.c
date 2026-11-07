// FUN_00b1c63c @ 00b1c63c size=172 calls_out=1 calls_in=2
// strings: 

uint * FUN_00b1c63c(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_00b1c63c(param_1,param_1 + param_4 * 0x10,param_1 + param_4 * 0x1c,param_4
                                  );
    param_2 = (uint *)FUN_00b1c63c(param_2,param_2 + param_4 * 0x10,param_2 + param_4 * 0x1c,param_4
                                  );
    param_3 = (uint *)FUN_00b1c63c(param_3,param_3 + param_4 * 0x10,param_3 + param_4 * 0x1c,param_4
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

