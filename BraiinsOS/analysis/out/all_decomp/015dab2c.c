// FUN_015dab2c @ 015dab2c size=408 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_015dab2c(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_28;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (uint *)FUN_015dab2c(param_1,param_1 + param_4 * 0x18,param_1 + param_4 * 0x2a,param_4
                                  );
    param_2 = (uint *)FUN_015dab2c(param_2,param_2 + param_4 * 0x18,param_2 + param_4 * 0x2a,param_4
                                  );
    param_3 = (uint *)FUN_015dab2c(param_3,param_3 + param_4 * 0x18,param_3 + param_4 * 0x2a,param_4
                                  );
  }
  uVar8 = param_2[4];
  uVar4 = param_1[4];
  uVar3 = param_2[1];
  uVar2 = *param_1;
  uVar7 = param_1[1];
  if (uVar4 < uVar8) {
    uVar5 = param_3[4];
    uVar9 = 1;
    local_28 = *param_3;
    uVar6 = param_3[1];
    uVar1 = local_28;
    if (uVar5 <= uVar4) {
      if (uVar4 <= uVar5) {
        uVar1 = uVar7 - (uVar6 + (local_28 > uVar2));
        if (!(uVar6 < uVar7 || uVar7 - uVar6 < (uint)(local_28 <= uVar2))) goto LAB_015dac84;
      }
      goto LAB_015dac2c;
    }
  }
  else {
    uVar5 = param_3[4];
    local_28 = *param_3;
    uVar6 = param_3[1];
    uVar9 = (uint)(uVar4 <= uVar8 && (uVar7 <= uVar3 && (uint)(*param_2 <= uVar2) <= uVar7 - uVar3))
    ;
    if (uVar4 < uVar5) {
      bVar10 = uVar9 == 0;
      uVar9 = 1;
      uVar1 = uVar5;
      if (bVar10) goto LAB_015dac2c;
    }
    else {
      uVar1 = (uint)(uVar4 == uVar5 &&
                    (uVar7 <= uVar6 && (uint)(local_28 <= uVar2) <= uVar7 - uVar6));
      if (uVar9 != uVar1) {
LAB_015dac2c:
        return CONCAT44(uVar1,param_1);
      }
    }
  }
LAB_015dac84:
  uVar2 = 1;
  if (uVar5 <= uVar8) {
    uVar1 = (uint)(uVar8 == uVar5);
    uVar2 = (uint)(uVar8 == uVar5 &&
                  (uVar3 <= uVar6 && (uint)(local_28 <= *param_2) <= uVar3 - uVar6));
  }
  if (uVar9 != uVar2) {
    param_2 = param_3;
  }
  return CONCAT44(uVar1,param_2);
}

