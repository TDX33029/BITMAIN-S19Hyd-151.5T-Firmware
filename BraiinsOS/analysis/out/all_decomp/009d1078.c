// FUN_009d1078 @ 009d1078 size=424 calls_out=1 calls_in=2
// strings: 

uint * FUN_009d1078(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (7 < param_4) {
    uVar3 = param_4 >> 3;
    iVar4 = uVar3 * 8 - (param_4 >> 3);
    param_1 = (uint *)FUN_009d1078(param_1,param_1 + uVar3 * 0x10,param_1 + iVar4 * 4,uVar3);
    param_2 = (uint *)FUN_009d1078(param_2,param_2 + uVar3 * 0x10,param_2 + iVar4 * 4,uVar3);
    param_3 = (uint *)FUN_009d1078(param_3,param_3 + uVar3 * 0x10,param_3 + iVar4 * 4,uVar3);
  }
  uVar5 = param_2[2];
  uVar3 = param_1[2];
  bVar6 = uVar3 < uVar5;
  if (((uVar3 == uVar5) &&
      (uVar1 = *param_2 ^ (uint)((int)*param_2 >> 0x1f) >> 1,
      uVar2 = *param_1 ^ (uint)((int)*param_1 >> 0x1f) >> 1, bVar6 = (int)uVar2 < (int)uVar1,
      uVar2 == uVar1)) &&
     (bVar6 = false,
     (int)(param_1[1] ^ (uint)((int)param_1[1] >> 0x1f) >> 1) <
     (int)(param_2[1] ^ (uint)((int)param_2[1] >> 0x1f) >> 1))) {
    bVar6 = true;
  }
  uVar1 = param_3[2];
  bVar7 = uVar3 < uVar1;
  if ((uVar3 == uVar1) &&
     (uVar3 = *param_3 ^ (uint)((int)*param_3 >> 0x1f) >> 1,
     uVar2 = *param_1 ^ (uint)((int)*param_1 >> 0x1f) >> 1, bVar7 = (int)uVar2 < (int)uVar3,
     uVar2 == uVar3)) {
    bVar7 = (int)(param_1[1] ^ (uint)((int)param_1[1] >> 0x1f) >> 1) <
            (int)(param_3[1] ^ (uint)((int)param_3[1] >> 0x1f) >> 1);
  }
  if (bVar6 == bVar7) {
    bVar7 = uVar5 < uVar1;
    if (((uVar5 == uVar1) &&
        (uVar3 = *param_3 ^ (uint)((int)*param_3 >> 0x1f) >> 1,
        uVar5 = *param_2 ^ (uint)((int)*param_2 >> 0x1f) >> 1, bVar7 = (int)uVar5 < (int)uVar3,
        uVar5 == uVar3)) &&
       (bVar7 = false,
       (int)(param_2[1] ^ (uint)((int)param_2[1] >> 0x1f) >> 1) <
       (int)(param_3[1] ^ (uint)((int)param_3[1] >> 0x1f) >> 1))) {
      bVar7 = true;
    }
    param_1 = param_2;
    if (bVar6 != bVar7) {
      param_1 = param_3;
    }
  }
  return param_1;
}

