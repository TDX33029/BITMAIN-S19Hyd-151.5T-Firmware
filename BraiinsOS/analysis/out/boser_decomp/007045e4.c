// FUN_007045e4 @ 007045e4 size=272 calls_out=6 calls_in=1
// strings: 

void FUN_007045e4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar2 = FUN_01b6eca4(param_2,param_3);
  bVar1 = false;
  if (iVar2 == 0) {
    iVar3 = 0xf;
  }
  else {
    iVar3 = FUN_01b46f98();
    if (iVar3 == 0) {
      iVar3 = 0xf;
    }
    else {
      iVar4 = FUN_01b478a4(iVar3,iVar2);
      if (iVar4 == 1) {
        bVar1 = true;
        goto LAB_00704660;
      }
      FUN_01b46fd8(iVar3);
      iVar3 = 0xb;
    }
    FUN_01b564e4(iVar2);
  }
LAB_00704660:
  FUN_00703b44(&local_30,param_2,param_3,6);
  FUN_00703b44(&local_28,param_2,param_3,0x390);
  if (local_30 == 0) {
    iVar2 = 0;
    if (local_28 == 0) {
      FUN_01b46fd8(local_24);
    }
  }
  else {
    local_2c = local_24;
    iVar2 = local_28;
  }
  if (bVar1) {
    *param_1 = 0;
    param_1[1] = iVar3;
    if (iVar2 == 0) {
      FUN_01b46fd8(local_2c);
      return;
    }
  }
  else {
    *param_1 = iVar2;
    param_1[1] = local_2c;
  }
  return;
}

