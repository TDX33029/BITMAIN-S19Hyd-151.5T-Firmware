// FUN_006199f8 @ 006199f8 size=188 calls_out=1 calls_in=2
// strings: 

uint * FUN_006199f8(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (uint *)FUN_006199f8(param_1,param_1 + param_4 * 0x18,param_1 + param_4 * 0x2a,param_4
                                  );
    param_2 = (uint *)FUN_006199f8(param_2,param_2 + param_4 * 0x18,param_2 + param_4 * 0x2a,param_4
                                  );
    param_3 = (uint *)FUN_006199f8(param_3,param_3 + param_4 * 0x18,param_3 + param_4 * 0x2a,param_4
                                  );
  }
  uVar2 = param_3[1];
  uVar3 = param_2[1];
  uVar4 = param_1[1];
  bVar1 = uVar4 <= uVar3 && (uint)(*param_2 <= *param_1) <= uVar4 - uVar3;
  if (bVar1 != (uVar3 <= uVar2 && (uint)(*param_3 <= *param_2) <= uVar3 - uVar2)) {
    param_2 = param_3;
  }
  if (bVar1 != (uVar4 <= uVar2 && (uint)(*param_3 <= *param_1) <= uVar4 - uVar2)) {
    param_2 = param_1;
  }
  return param_2;
}

