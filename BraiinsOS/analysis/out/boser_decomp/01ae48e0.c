// FUN_01ae48e0 @ 01ae48e0 size=312 calls_out=4 calls_in=2
// strings: 

void FUN_01ae48e0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  
  puVar1 = (undefined4 *)((uint)&local_98 | 4);
  if (param_4 == 0) {
    uVar4 = param_3[1];
    uVar6 = param_3[2];
    FUN_019ad254(&local_98,uVar4,uVar6);
    if (local_98 == 0) goto LAB_01ae49e0;
    local_9c = puVar1[1];
    uVar2 = *puVar1;
    FUN_01ae5434(&local_98,uVar4,uVar6);
  }
  else {
    uVar4 = param_3[1];
    uVar6 = param_3[2];
    FUN_019adea8(&local_98,uVar4,uVar6);
    if (local_98 == 0) {
LAB_01ae49e0:
      uVar5 = puVar1[5];
      uVar4 = puVar1[0x19];
      uVar6 = puVar1[0x1a];
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      param_1[4] = *param_3;
      param_1[5] = uVar2;
      param_1[6] = uVar3;
      param_1[7] = uVar5;
      param_1[2] = uVar4;
      param_1[3] = uVar6;
      *(char *)(param_1 + 9) = (char)param_4;
      param_1[8] = param_2;
      *param_1 = 0;
      return;
    }
    local_9c = puVar1[1];
    uVar2 = *puVar1;
    FUN_01ae5434(&local_98,uVar4,uVar6);
  }
  param_1[2] = local_98;
  uVar6 = *param_3;
  param_1[3] = local_94;
  param_1[4] = local_90;
  param_1[5] = uVar2;
  param_1[6] = local_9c;
  param_1[7] = param_2;
  *param_1 = 1;
  param_1[1] = 0x80000000;
  FUN_0134bd64(uVar6,uVar4);
  return;
}

