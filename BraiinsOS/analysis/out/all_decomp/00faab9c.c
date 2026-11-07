// FUN_00faab9c @ 00faab9c size=88 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_00faab9c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00faabf8(*param_1);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418617,2), iVar1 == 0)) {
    uVar2 = FUN_00faabf8(param_1[1],param_2);
    return uVar2;
  }
  return 1;
}

