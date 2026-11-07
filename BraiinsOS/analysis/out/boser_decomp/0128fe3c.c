// FUN_0128fe3c @ 0128fe3c size=152 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_0128fe3c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_0128fca4(&local_1c,param_1,0);
  uVar2 = *param_2;
  iVar3 = param_2[1];
  iVar1 = FUN_01291dd8(local_1c,uVar2,iVar3);
  if (((iVar1 == 0) && (iVar1 = (**(code **)(iVar3 + 0x10))(uVar2,0x54), iVar1 == 0)) &&
     (iVar1 = FUN_0128e43c(local_18,local_14,uVar2,iVar3), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0128fed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(iVar3 + 0xc))(uVar2,"Z",1);
    return uVar2;
  }
  return 1;
}

