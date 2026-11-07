// FUN_016406c8 @ 016406c8 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_016406c8(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  int iStack_1c;
  undefined *local_18;
  code *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  
  local_10 = (undefined1 *)&local_20;
  if (param_3 == 4) {
    uVar1 = *param_2;
    *param_1 = 0x80000000;
    param_1[1] = uVar1;
  }
  else {
    local_c = &LAB_0141634c;
    local_14 = FUN_012fd02c;
    local_18 = &DAT_0056e8c0;
    local_20 = param_2;
    iStack_1c = param_3;
    FUN_00664898(param_1,&DAT_005a5aaf,&local_18);
  }
  return;
}

