// FUN_0162a4b8 @ 0162a4b8 size=120 calls_out=1 calls_in=6
// strings: 

void FUN_0162a4b8(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puStack_2c;
  int iStack_28;
  int local_24;
  int *local_20;
  code *local_1c;
  undefined *local_18;
  code *local_14;
  undefined4 **local_10;
  undefined1 *local_c;
  
  if (param_3 == 4) {
    uVar1 = *param_2;
    *param_1 = 0x80000000;
    param_1[1] = uVar1;
  }
  else {
    local_10 = &puStack_2c;
    local_20 = &local_24;
    local_c = &LAB_0141634c;
    local_14 = FUN_012fd02c;
    local_18 = &DAT_0056e8c0;
    local_1c = FUN_012fd02c;
    puStack_2c = param_2;
    iStack_28 = param_3;
    local_24 = param_3;
    FUN_00664898(param_1,&DAT_005b443c,&local_20);
  }
  return;
}

