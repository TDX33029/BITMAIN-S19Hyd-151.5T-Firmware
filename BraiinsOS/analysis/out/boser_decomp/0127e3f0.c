// FUN_0127e3f0 @ 0127e3f0 size=148 calls_out=1 calls_in=1
// strings: 

void FUN_0127e3f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  undefined4 uStack_34;
  undefined4 uStack_30;
  ushort local_2a;
  undefined4 *local_28;
  undefined1 *local_24;
  ushort *local_20;
  code *local_1c;
  undefined1 *local_18;
  code *local_14;
  undefined *local_10;
  code *local_c;
  
  if (param_4 - 1 < 0xe10) {
    *param_1 = 0x80000000;
    *(ushort *)(param_1 + 1) = param_4;
  }
  else {
    local_20 = &local_2a;
    local_c = FUN_012fcf18;
    local_14 = FUN_012fcf18;
    local_1c = FUN_012fcf18;
    local_28 = &uStack_34;
    local_10 = &DAT_004046da;
    local_18 = &DAT_005bdef0;
    local_24 = &LAB_018a13b8;
    uStack_34 = param_2;
    uStack_30 = param_3;
    local_2a = param_4;
    FUN_00664898(param_1,&DAT_005b5efd,&local_28);
  }
  return;
}

