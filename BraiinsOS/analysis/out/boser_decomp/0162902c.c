// FUN_0162902c @ 0162902c size=140 calls_out=2 calls_in=7
// strings: 

void FUN_0162902c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack_2c;
  int iStack_28;
  int local_24;
  int *local_20;
  code *local_1c;
  undefined *local_18;
  code *local_14;
  undefined4 *local_10;
  undefined1 *local_c;
  
  uStack_2c = param_2;
  iStack_28 = param_3;
  if (param_3 != 0x10) {
    local_10 = &uStack_2c;
    local_14 = FUN_012fd02c;
    local_1c = FUN_012fd02c;
    local_20 = &local_24;
    local_c = &LAB_0141634c;
    local_18 = &DAT_0056ea2c;
    local_24 = param_3;
    FUN_00664898(param_1 + 4,&DAT_005b50ca,&local_20);
  }
  else {
    FUN_01bed4e2(param_1 + 1,param_2,0x10);
  }
  *(bool *)param_1 = param_3 != 0x10;
  return;
}

