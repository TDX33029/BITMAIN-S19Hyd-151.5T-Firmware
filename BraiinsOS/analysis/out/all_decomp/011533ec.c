// FUN_011533ec @ 011533ec size=532 calls_out=3 calls_in=3
// strings: 

void FUN_011533ec(undefined4 *param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_2c;
  uint local_28;
  
  uVar3 = *param_2;
  uVar1 = param_2[2];
  if (uVar3 == uVar1) {
    uVar3 = 8;
    if (8 < uVar1 * 2) {
      uVar3 = uVar1 << 1;
    }
    FUN_01150958(&local_2c,uVar1,param_2[1],uVar3,1,1);
    if (local_2c != 0) {
      *(undefined2 *)((int)param_1 + 10) = 0;
      *(undefined4 *)((int)param_1 + 6) = 0;
      *(undefined2 *)(param_1 + 1) = 0x2601;
      *param_1 = 0;
      return;
    }
    uVar1 = param_2[2];
    *param_2 = uVar3;
    param_2[1] = local_28;
    if (uVar3 == uVar1) goto LAB_011534f8;
  }
  else if (uVar3 == uVar1) {
LAB_011534f8:
    FUN_01150aa8(param_2,uVar3,1);
    uVar1 = param_2[2];
  }
  *(byte *)(param_2[1] + uVar1) = (byte)param_4 | 0xa0;
  uVar2 = *param_2;
  uVar1 = param_2[2] + 1;
  param_2[2] = uVar1;
  uVar3 = uVar2 - uVar1;
  if (param_4 <= uVar3) {
LAB_01153590:
    if (uVar3 < param_4) {
      FUN_01150aa8(param_2,uVar1,param_4);
      uVar1 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + uVar1,param_3,param_4);
    uVar3 = param_2[2];
    *param_1 = 2;
    param_2[2] = uVar3 + param_4;
    return;
  }
  uVar4 = param_4 + uVar1;
  if (!CARRY4(param_4,uVar1)) {
    if (uVar4 <= uVar2 * 2) {
      uVar4 = uVar2 << 1;
    }
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    FUN_01150958(&local_2c,uVar2,param_2[1],uVar4,1,1);
    if (local_2c != 1) {
      uVar1 = param_2[2];
      uVar3 = uVar4 - uVar1;
      *param_2 = uVar4;
      param_2[1] = local_28;
      goto LAB_01153590;
    }
  }
  param_1[1] = 0x2601;
  param_1[2] = 0;
  *param_1 = 1;
  return;
}

