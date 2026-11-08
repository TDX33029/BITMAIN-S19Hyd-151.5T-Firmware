// FUN_00fe3804 @ 00fe3804 size=328 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_00fe3804(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_30 [2];
  uint local_28;
  int local_24;
  undefined8 local_20;
  
  puVar1 = (uint *)(param_1 + 2);
  if (*param_1 == 1) {
    uVar3 = *puVar1;
    local_24 = param_1[3];
    if ((uint)(uVar3 < 0x80000000) <= (uint)-local_24) {
      uVar2 = 1;
      local_30[0] = CONCAT31(local_30[0]._1_3_,1);
      local_28 = uVar3;
      uVar3 = FUN_01967740(local_30,(int)&local_20 + 7,&DAT_01cf972c);
      local_30[0] = uVar3;
      FUN_0196bf0c(param_3,param_2);
      goto LAB_00fe3894;
    }
  }
  else {
    if (*param_1 != 2) {
      local_20 = *(undefined8 *)puVar1;
      local_28 = CONCAT31(local_28._1_3_,3);
      uVar3 = FUN_01967538(&local_28,(int)local_30 + 0x1f,&DAT_01cf972c);
      local_28 = uVar3;
      FUN_0196bf0c(param_3,param_2);
      return CONCAT44(uVar3,1);
    }
    uVar3 = *puVar1;
    local_24 = param_1[3];
    if (local_24 - (uint)(uVar3 < 0x80000000) != -1) {
      local_30[0] = CONCAT31(local_30[0]._1_3_,2);
      local_28 = uVar3;
      uVar3 = FUN_01967740(local_30,(int)&local_20 + 7,&DAT_01cf972c);
      local_30[0] = uVar3;
      FUN_0196bf0c(param_3,param_2);
      uVar2 = 1;
      goto LAB_00fe3894;
    }
  }
  uVar2 = 0;
LAB_00fe3894:
  return CONCAT44(uVar3,uVar2);
}

