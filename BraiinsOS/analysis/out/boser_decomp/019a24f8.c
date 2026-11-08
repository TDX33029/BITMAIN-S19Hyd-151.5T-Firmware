// FUN_019a24f8 @ 019a24f8 size=188 calls_out=2 calls_in=5
// strings: 

undefined4 FUN_019a24f8(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_38;
  int iStack_34;
  int local_30;
  undefined4 local_2c;
  int local_24;
  
  if (param_2 == 0) {
    uVar2 = FUN_012fb940(param_3,1,0);
    return uVar2;
  }
  uVar2 = *param_3;
  iVar3 = param_3[1];
  local_38 = param_1;
  iStack_34 = param_2;
  do {
    FUN_01307c98(&local_30,&local_38);
    if (local_30 == 0) {
      return 0;
    }
    if (local_24 == 0) {
      uVar2 = FUN_012fb940(param_3,local_30,local_2c);
      return uVar2;
    }
    iVar1 = (**(code **)(iVar3 + 0xc))(uVar2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(iVar3 + 0x10))(uVar2,0xfffd);
  } while (iVar1 == 0);
  return 1;
}

