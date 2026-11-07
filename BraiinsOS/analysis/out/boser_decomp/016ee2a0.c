// FUN_016ee2a0 @ 016ee2a0 size=328 calls_out=1 calls_in=2
// strings: 

uint * FUN_016ee2a0(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_016ee2a0(param_1,param_1 + param_4 * 0x18,param_1 + param_4 * 0x2a,param_4
                                  );
    param_2 = (uint *)FUN_016ee2a0(param_2,param_2 + param_4 * 0x18,param_2 + param_4 * 0x2a,param_4
                                  );
    param_3 = (uint *)FUN_016ee2a0(param_3,param_3 + param_4 * 0x18,param_3 + param_4 * 0x2a,param_4
                                  );
  }
  uVar3 = *param_2;
  uVar6 = *param_1;
  uVar2 = (uint)(uVar6 < uVar3);
  uVar5 = (uint)(uVar6 >= uVar3 && uVar6 != uVar3);
  if (uVar6 == uVar3) {
    uVar1 = param_2[3];
    uVar4 = param_1[3];
    uVar5 = 0;
    uVar2 = (uint)(uVar4 < uVar1);
    if (uVar4 >= uVar1 && uVar4 != uVar1) {
      uVar5 = 1;
    }
  }
  uVar1 = *param_3;
  if (uVar6 != uVar1) {
    uVar6 = (uint)(uVar6 >= uVar1 && uVar6 != uVar1) - (uint)(uVar6 < uVar1);
  }
  else {
    uVar6 = param_3[3];
    uVar4 = param_1[3];
    uVar6 = (uint)(uVar4 >= uVar6 && uVar4 != uVar6) - (uint)(uVar4 < uVar6);
  }
  if (-1 < (int)(uVar6 ^ uVar5 - uVar2)) {
    if (uVar3 != uVar1) {
      uVar3 = (uint)(uVar3 >= uVar1 && uVar3 != uVar1) - (uint)(uVar3 < uVar1);
    }
    else {
      uVar3 = param_3[3];
      uVar6 = param_2[3];
      uVar3 = (uint)(uVar6 >= uVar3 && uVar6 != uVar3) - (uint)(uVar6 < uVar3);
    }
    param_1 = param_2;
    if ((int)(uVar3 ^ uVar5 - uVar2) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}

