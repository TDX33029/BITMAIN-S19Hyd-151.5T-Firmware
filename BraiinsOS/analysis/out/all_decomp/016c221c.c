// FUN_016c221c @ 016c221c size=504 calls_out=1 calls_in=2
// strings: 

uint * FUN_016c221c(uint *param_1,uint *param_2,uint *param_3,uint param_4,undefined4 *param_5)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_016c221c(param_1,param_1 + param_4 * 0x28,param_1 + param_4 * 0x46,param_4
                                   ,param_5);
    param_2 = (uint *)FUN_016c221c(param_2,param_2 + param_4 * 0x28,param_2 + param_4 * 0x46,param_4
                                   ,param_5);
    param_3 = (uint *)FUN_016c221c(param_3,param_3 + param_4 * 0x28,param_3 + param_4 * 0x46,param_4
                                   ,param_5);
  }
  if (*param_1 == 1) {
    uVar5 = *param_2 ^ 1;
    if (uVar5 != (*param_3 ^ 1)) {
      return param_1;
    }
  }
  else {
    piVar3 = *(int **)*param_5;
    if (*param_2 == 0) {
      cVar1 = (**(code **)(((undefined4 *)*piVar3)[1] + 0x10))
                        (*(undefined4 *)*piVar3,param_1 + 2,param_2 + 2);
      uVar5 = (uint)(cVar1 == -1);
      if (*param_1 == 1) {
        if (uVar5 != (*param_3 ^ 1)) {
          return param_1;
        }
        goto LAB_016c23b4;
      }
      piVar3 = *(int **)*param_5;
      if (*param_3 != 0) {
        if (cVar1 == -1) {
          return param_1;
        }
        goto LAB_016c2360;
      }
    }
    else {
      uVar5 = 0;
      if (*param_3 != 0) {
LAB_016c2360:
        uVar5 = 0;
        uVar4 = 1;
        uVar2 = *param_2;
        goto joined_r0x016c2368;
      }
    }
    cVar1 = (**(code **)(((undefined4 *)*piVar3)[1] + 0x10))
                      (*(undefined4 *)*piVar3,param_1 + 2,param_3 + 2);
    if (uVar5 != (cVar1 == -1)) {
      return param_1;
    }
  }
LAB_016c23b4:
  uVar4 = *param_3;
  piVar3 = *(int **)*param_5;
  uVar2 = *param_2;
joined_r0x016c2368:
  if (uVar2 == 1) {
    uVar2 = uVar4 ^ 1;
  }
  else {
    uVar2 = 0;
    if (uVar4 == 0) {
      cVar1 = (**(code **)(((undefined4 *)*piVar3)[1] + 0x10))
                        (*(undefined4 *)*piVar3,param_2 + 2,param_3 + 2);
      uVar2 = (uint)(cVar1 == -1);
    }
  }
  if (uVar5 != uVar2) {
    param_2 = param_3;
  }
  return param_2;
}

