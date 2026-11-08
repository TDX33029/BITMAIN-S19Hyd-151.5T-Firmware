// FUN_00618ff0 @ 00618ff0 size=396 calls_out=1 calls_in=2
// strings: 

uint * FUN_00618ff0(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_28;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_00618ff0(param_1,param_1 + param_4 * 0x18,param_1 + param_4 * 0x2a,param_4
                                  );
    param_2 = (uint *)FUN_00618ff0(param_2,param_2 + param_4 * 0x18,param_2 + param_4 * 0x2a,param_4
                                  );
    param_3 = (uint *)FUN_00618ff0(param_3,param_3 + param_4 * 0x18,param_3 + param_4 * 0x2a,param_4
                                  );
  }
  uVar3 = param_2[4];
  uVar4 = param_1[4];
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar6 = param_2[1];
  if (uVar4 < uVar3) {
    uVar2 = param_3[4];
    bVar5 = true;
    local_28 = *param_3;
    uVar9 = param_3[1];
    if (uVar2 <= uVar4) {
      if (uVar2 < uVar4) {
        return param_1;
      }
      if (uVar9 < uVar8 || uVar8 - uVar9 < (uint)(local_28 <= uVar7)) {
        return param_1;
      }
    }
  }
  else {
    uVar9 = param_3[1];
    bVar1 = (uint)(*param_2 <= uVar7) <= uVar8 - uVar6;
    local_28 = *param_3;
    uVar2 = param_3[4];
    bVar5 = uVar4 <= uVar3 && (uVar8 <= uVar6 && bVar1);
    if (uVar4 < uVar2) {
      bVar5 = true;
      if (uVar4 > uVar3 || (uVar8 > uVar6 || !bVar1)) {
        return param_1;
      }
    }
    else if (bVar5 != (uVar4 == uVar2 &&
                      (uVar8 <= uVar9 && (uint)(local_28 <= uVar7) <= uVar8 - uVar9))) {
      return param_1;
    }
  }
  bVar1 = true;
  if (uVar2 <= uVar3) {
    bVar1 = uVar3 == uVar2 && (uVar6 <= uVar9 && (uint)(local_28 <= *param_2) <= uVar6 - uVar9);
  }
  if (bVar5 != bVar1) {
    param_2 = param_3;
  }
  return param_2;
}

