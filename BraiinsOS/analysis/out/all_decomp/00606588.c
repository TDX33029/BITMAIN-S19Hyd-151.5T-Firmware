// FUN_00606588 @ 00606588 size=276 calls_out=9 calls_in=0
// strings: 

undefined4
FUN_00606588(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_3 == 0x20) {
    iVar1 = FUN_0173af98(0x3b5,0,param_2,0x20);
    if (iVar1 == 0) {
      return 1;
    }
  }
  else {
    FUN_016e1d94(&local_28);
    local_30 = local_28;
    local_2c = local_24;
    iVar1 = FUN_016ea010(&local_30);
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = FUN_0173a71c();
    if (iVar2 != 0x3b5) {
      FUN_01739ee4(iVar1);
      return 1;
    }
  }
  FUN_0172aab0(&local_28);
  local_30 = 0;
  iVar2 = FUN_0173e7c4(&local_28,&local_30,0,0,iVar1);
  uVar3 = 1;
  if (iVar2 == 1) {
    iVar2 = FUN_0173ce50(&local_28,param_6,param_7,param_4,param_5);
    uVar3 = 0;
    if (iVar2 != 1) {
      uVar3 = 1;
    }
  }
  FUN_0172aae8(&local_28);
  FUN_01739ee4(iVar1);
  return uVar3;
}

