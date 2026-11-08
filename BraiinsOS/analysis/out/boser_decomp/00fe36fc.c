// FUN_00fe36fc @ 00fe36fc size=104 calls_out=2 calls_in=1
// strings: 

void FUN_00fe36fc(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_20 [16];
  
  local_20[0] = 0xd;
  uVar1 = FUN_01967538(local_20,&DAT_01c252ec,&DAT_01d064b8);
  iVar2 = *param_2;
  *param_1 = 1;
  param_1[1] = uVar1;
  if (iVar2 == 4 || iVar2 == 2) {
    FUN_019bb7e0(param_2[2],param_2[3]);
    return;
  }
  return;
}

