// FUN_01224b2c @ 01224b2c size=96 calls_out=2 calls_in=2
// strings: 

void FUN_01224b2c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  undefined8 local_18;
  
  iVar1 = FUN_01965c98(param_2);
  if (iVar1 == 0) {
    FUN_01224810(&local_20,param_2);
    if (local_20 != 1) {
      uVar2 = 0;
      *(undefined8 *)(param_1 + 2) = local_18;
      goto LAB_01224b70;
    }
    iVar1 = local_1c;
  }
  param_1[1] = iVar1;
  uVar2 = 1;
LAB_01224b70:
  *param_1 = uVar2;
  return;
}

