// FUN_006fdf4c @ 006fdf4c size=116 calls_out=4 calls_in=3
// strings: 

void FUN_006fdf4c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [28];
  
  uVar3 = *param_2;
  iVar2 = param_2[4];
  uVar1 = FUN_006fb3b4(uVar3,iVar2);
  FUN_006fb414(auStack_34,uVar3,param_2[1],param_2[2],param_2[3],iVar2 + 1,uVar1);
  FUN_006fa500(auStack_48,auStack_34);
  FUN_006fc9e8(param_1,auStack_48,param_3);
  return;
}

