// FUN_013ff6c0 @ 013ff6c0 size=236 calls_out=1 calls_in=2
// strings: 

uint * FUN_013ff6c0(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (uint *)FUN_013ff6c0(param_1,param_1 + param_4 * 0x18,param_1 + param_4 * 0x2a,param_4
                                  );
    param_2 = (uint *)FUN_013ff6c0(param_2,param_2 + param_4 * 0x18,param_2 + param_4 * 0x2a,param_4
                                  );
    param_3 = (uint *)FUN_013ff6c0(param_3,param_3 + param_4 * 0x18,param_3 + param_4 * 0x2a,param_4
                                  );
  }
  uVar3 = *param_2;
  uVar1 = *param_1;
  uVar2 = *param_3;
  bVar4 = uVar3 <= uVar1;
  if (uVar1 == uVar3) {
    bVar4 = param_2[3] <= param_1[3];
  }
  bVar5 = uVar2 <= uVar1;
  if (uVar1 == uVar2) {
    bVar5 = param_3[3] <= param_1[3];
  }
  if (!bVar4 == !bVar5) {
    bVar5 = uVar2 <= uVar3;
    if (uVar3 == uVar2) {
      bVar5 = param_3[3] <= param_2[3];
    }
    param_1 = param_2;
    if (!bVar4 != !bVar5) {
      param_1 = param_3;
    }
  }
  return param_1;
}

