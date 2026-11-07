// FUN_00ea14e8 @ 00ea14e8 size=164 calls_out=0 calls_in=0
// strings: 

undefined4
FUN_00ea14e8(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_1;
  uVar1 = 1;
  if ((((param_6 != 0 ||
         param_6 < (param_5 != 0 || param_5 < (param_4 != 0 || param_4 < (0xfa < param_3)))) &&
       (uVar1 = 3,
       param_6 != 0 ||
       param_6 < (param_5 != 0 || param_5 < (param_4 != 0 || param_4 < (0xffff < param_3))))) &&
      (uVar1 = 5, param_6 != 0 || param_6 < (param_5 != 0 || param_5 < (param_4 != 0)))) &&
     (uVar1 = 0x11, param_6 == 0 && (param_5 != 0) <= param_6)) {
    uVar1 = 9;
  }
  uVar3 = 5;
  if (param_7 < 0x10000) {
    uVar3 = 3;
  }
  if (param_7 < 0xfb) {
    uVar3 = 1;
  }
  uVar4 = uVar5 + uVar3;
  uVar2 = uVar4 + uVar1;
  *param_1 = uVar2 + 1;
  param_1[1] = param_1[1] + (uint)CARRY4(uVar5,uVar3) + (uint)CARRY4(uVar4,uVar1) +
               (uint)(0xfffffffe < uVar2);
  return 0;
}

