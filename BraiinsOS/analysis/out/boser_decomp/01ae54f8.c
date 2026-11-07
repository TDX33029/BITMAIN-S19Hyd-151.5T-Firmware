// FUN_01ae54f8 @ 01ae54f8 size=444 calls_out=1 calls_in=2
// strings: 

uint * FUN_01ae54f8(uint *param_1,uint *param_2,uint *param_3,uint param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_01ae54f8(param_1,param_1 + param_4 * 0x28,param_1 + param_4 * 0x46,param_4
                                   ,param_5);
    param_2 = (uint *)FUN_01ae54f8(param_2,param_2 + param_4 * 0x28,param_2 + param_4 * 0x46,param_4
                                   ,param_5);
    param_3 = (uint *)FUN_01ae54f8(param_3,param_3 + param_4 * 0x28,param_3 + param_4 * 0x46,param_4
                                   ,param_5);
  }
  if (*param_1 == 1) {
    uVar3 = *param_3;
    uVar5 = *param_2 ^ 1;
LAB_01ae558c:
    uVar3 = uVar3 ^ 1;
  }
  else {
    puVar2 = (undefined4 *)*param_5;
    if (*param_2 == 0) {
      cVar1 = (**(code **)((*(undefined4 **)*puVar2)[1] + 0x10))
                        (**(undefined4 **)*puVar2,param_1 + 2,param_2 + 2);
      uVar3 = *param_3;
      uVar5 = (uint)(cVar1 == -1);
      if (*param_1 == 1) goto LAB_01ae558c;
      puVar2 = (undefined4 *)*param_5;
      if (uVar3 != 0) {
        if (cVar1 == -1) {
          return param_1;
        }
        uVar3 = 1;
        uVar5 = 0;
        goto LAB_01ae5650;
      }
    }
    else {
      uVar3 = 1;
      uVar5 = 0;
      if (*param_3 != 0) goto LAB_01ae5650;
    }
    cVar1 = (**(code **)((*(undefined4 **)*puVar2)[1] + 0x10))
                      (**(undefined4 **)*puVar2,param_1 + 2,param_3 + 2);
    uVar3 = (uint)(cVar1 == -1);
  }
  if (uVar5 != uVar3) {
    return param_1;
  }
  uVar3 = *param_3;
  puVar2 = (undefined4 *)*param_5;
LAB_01ae5650:
  if (*param_2 == 1) {
    uVar4 = uVar3 ^ 1;
  }
  else {
    uVar4 = 0;
    if (uVar3 == 0) {
      cVar1 = (**(code **)((*(undefined4 **)*puVar2)[1] + 0x10))
                        (**(undefined4 **)*puVar2,param_2 + 2,param_3 + 2);
      uVar4 = (uint)(cVar1 == -1);
    }
  }
  if (uVar5 != uVar4) {
    param_2 = param_3;
  }
  return param_2;
}

