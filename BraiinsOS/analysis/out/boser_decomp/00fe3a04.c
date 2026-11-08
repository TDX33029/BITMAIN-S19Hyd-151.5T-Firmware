// FUN_00fe3a04 @ 00fe3a04 size=312 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_00fe3a04(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_30 [2];
  int local_28;
  int local_24;
  undefined8 local_20;
  
  piVar1 = param_1 + 2;
  if (*param_1 == 1) {
    iVar3 = *piVar1;
    local_24 = param_1[3];
    if (local_24 != 0) {
      uVar2 = 1;
      local_30[0] = CONCAT31(local_30[0]._1_3_,1);
      local_28 = iVar3;
      iVar3 = FUN_01967740(local_30,(int)&local_20 + 7,&DAT_01cf9934);
      local_30[0] = iVar3;
      FUN_0196bf0c(param_3,param_2);
      goto LAB_00fe3a84;
    }
  }
  else {
    if (*param_1 != 2) {
      local_20 = *(undefined8 *)piVar1;
      local_28 = CONCAT31(local_28._1_3_,3);
      iVar3 = FUN_01967538(&local_28,(int)local_30 + 0x1f,&DAT_01cf9934);
      local_28 = iVar3;
      FUN_0196bf0c(param_3,param_2);
      return CONCAT44(iVar3,1);
    }
    iVar3 = *piVar1;
    local_24 = param_1[3];
    if (local_24 != 0) {
      local_30[0] = CONCAT31(local_30[0]._1_3_,2);
      local_28 = iVar3;
      iVar3 = FUN_01967740(local_30,(int)&local_20 + 7,&DAT_01cf9934);
      local_30[0] = iVar3;
      FUN_0196bf0c(param_3,param_2);
      uVar2 = 1;
      goto LAB_00fe3a84;
    }
  }
  uVar2 = 0;
LAB_00fe3a84:
  return CONCAT44(iVar3,uVar2);
}

