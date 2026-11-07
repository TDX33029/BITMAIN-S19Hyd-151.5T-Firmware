// FUN_01b6a020 @ 01b6a020 size=300 calls_out=5 calls_in=1
// strings: 

void FUN_01b6a020(int param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    return;
  }
  FUN_01b257dc(param_2,0);
  iVar1 = FUN_01b3cae8();
  if (param_1 == iVar1) {
    uVar2 = FUN_01b3bdf0();
    iVar1 = FUN_01b4be38(param_2,param_3,uVar2,param_4,param_5 - (param_5 >> 1),param_6,param_7,
                         param_8,param_9,param_10,param_11);
    if (iVar1 == 0) {
      return;
    }
    param_4 = param_4 + (param_5 >> 1);
    param_1 = FUN_01b3be88();
  }
  FUN_01b4be38(param_2,param_3,param_1,param_4);
  return;
}

