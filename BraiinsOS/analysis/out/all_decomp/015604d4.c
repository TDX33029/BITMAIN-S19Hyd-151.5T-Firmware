// FUN_015604d4 @ 015604d4 size=236 calls_out=4 calls_in=1
// strings: 

void FUN_015604d4(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_60 [60];
  int local_24;
  undefined4 local_20;
  
  uVar5 = *param_2;
  uVar1 = param_2[3];
  if (uVar1 == uVar5) {
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar4 = param_2[2];
      uVar2 = uVar4 + 1;
      uVar6 = uVar1 - 1;
      uVar3 = uVar2 - uVar1;
      if (uVar2 < uVar1) {
        uVar3 = uVar2;
      }
      param_2[2] = uVar3;
      param_2[3] = uVar6;
      FUN_016dd1aa(auStack_60,param_2[1] + uVar4 * 0x48,0x48);
      uVar1 = uVar6;
      if ((local_24 != -0x80000000) && (FUN_0155e9e8(auStack_60), local_24 != 0)) {
        thunk_FUN_016d3fb4(local_20);
      }
    }
  }
  FUN_016dd1aa(auStack_60,param_1,0x48);
  if (uVar1 == uVar5) {
    FUN_01560648(param_2);
    uVar5 = *param_2;
    uVar1 = param_2[3];
  }
  uVar3 = param_2[2] + uVar1;
  param_2[3] = uVar1 + 1;
  uVar1 = uVar3 - uVar5;
  if (uVar3 < uVar5) {
    uVar1 = uVar3;
  }
  FUN_016dd1aa(param_2[1] + uVar1 * 0x48,param_1,0x48);
  return;
}

