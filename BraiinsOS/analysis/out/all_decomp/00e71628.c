// FUN_00e71628 @ 00e71628 size=232 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_00e71628(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = param_2[1];
  uVar3 = 1;
  uVar2 = 1;
  if (((uVar4 != 0 || uVar4 < (0xfa < *param_2)) &&
      (uVar2 = 3, uVar4 != 0 || uVar4 < (0xffff < *param_2))) && (uVar2 = 9, uVar4 == 0)) {
    uVar2 = 5;
  }
  uVar7 = *param_1 + uVar2;
  uVar6 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  if (((uVar5 != 0 || uVar5 < (uVar4 != 0 || uVar4 < (uVar6 != 0 || uVar6 < (0xfa < param_2[2]))))
      && (uVar3 = 3,
         uVar5 != 0 || uVar5 < (uVar4 != 0 || uVar4 < (uVar6 != 0 || uVar6 < (0xffff < param_2[2])))
         )) && ((uVar3 = 5, uVar5 != 0 || uVar5 < (uVar4 != 0 || uVar4 < (uVar6 != 0)) &&
                (uVar3 = 0x11, uVar5 == 0 && (uVar4 != 0) <= uVar5)))) {
    uVar3 = 9;
  }
  uVar4 = uVar7 + uVar3;
  uVar5 = param_2[6];
  uVar2 = param_1[1] + (uint)CARRY4(*param_1,uVar2) + (uint)CARRY4(uVar7,uVar3);
  *param_1 = uVar4;
  param_1[1] = uVar2;
  if (uVar5 == 0x80000000) {
    *param_1 = uVar4 + 1;
    param_1[1] = uVar2 + (0xfffffffe < uVar4);
    return 0;
  }
  uVar1 = FUN_00ea158c(param_1,param_2[7],param_2[8]);
  return uVar1;
}

