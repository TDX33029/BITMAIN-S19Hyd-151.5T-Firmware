// FUN_00723240 @ 00723240 size=436 calls_out=1 calls_in=2
// strings: 

uint * FUN_00723240(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_00723240(param_1,param_1 + param_4 * 0x18,param_1 + param_4 * 0x2a,param_4
                                  );
    param_2 = (uint *)FUN_00723240(param_2,param_2 + param_4 * 0x18,param_2 + param_4 * 0x2a,param_4
                                  );
    param_3 = (uint *)FUN_00723240(param_3,param_3 + param_4 * 0x18,param_3 + param_4 * 0x2a,param_4
                                  );
  }
  uVar1 = param_2[4];
  uVar6 = param_1[4];
  if (uVar6 < uVar1) {
    uVar3 = param_3[4];
    bVar2 = true;
    if (uVar3 <= uVar6) {
      if (uVar3 < uVar6) {
        return param_1;
      }
      if (param_3[1] < param_1[1] || param_1[1] - param_3[1] < (uint)(*param_3 <= *param_1)) {
        return param_1;
      }
    }
  }
  else if (uVar6 == uVar1) {
    uVar9 = *param_2;
    uVar7 = *param_1;
    uVar8 = param_2[1];
    uVar5 = param_1[1];
    uVar3 = param_3[4];
    bVar2 = uVar5 <= uVar8 && (uint)(uVar9 <= uVar7) <= uVar5 - uVar8;
    if (uVar6 < uVar3) {
      bVar2 = true;
      if (uVar8 < uVar5 || uVar5 - uVar8 < (uint)(uVar9 <= uVar7)) {
        return param_1;
      }
    }
    else if (uVar6 == uVar3) {
      if ((uVar5 <= uVar8 && (uint)(uVar9 <= uVar7) <= uVar5 - uVar8) !=
          (uVar5 <= param_3[1] && (uint)(*param_3 <= uVar7) <= uVar5 - param_3[1])) {
        return param_1;
      }
    }
    else {
      bVar2 = false;
      if (uVar5 <= uVar8 && (uint)(uVar9 <= uVar7) <= uVar5 - uVar8) {
        return param_1;
      }
    }
  }
  else {
    uVar3 = param_3[4];
    if (uVar6 < uVar3) {
      return param_1;
    }
    bVar2 = false;
    if ((uVar6 <= uVar3) &&
       (param_1[1] <= param_3[1] && (uint)(*param_3 <= *param_1) <= param_1[1] - param_3[1])) {
      return param_1;
    }
  }
  bVar4 = true;
  if (((uVar3 <= uVar1) && (bVar4 = false, uVar1 <= uVar3)) &&
     (param_2[1] <= param_3[1] && (uint)(*param_3 <= *param_2) <= param_2[1] - param_3[1])) {
    bVar4 = true;
  }
  if (bVar2 != bVar4) {
    param_2 = param_3;
  }
  return param_2;
}

