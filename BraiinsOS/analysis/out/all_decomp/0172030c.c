// FUN_0172030c @ 0172030c size=128 calls_out=3 calls_in=4
// strings: 

undefined8 FUN_0172030c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0171464c(param_1,param_2[1]);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0171f268(*param_1,*param_2,param_2[1],0);
  uVar2 = param_2[3];
  param_1[1] = param_2[1];
  param_1[3] = uVar2;
  FUN_01714f48(param_1);
  return 1;
}

