// FUN_015e349c @ 015e349c size=100 calls_out=3 calls_in=0
// strings: 

void FUN_015e349c(undefined4 *param_1,int param_2)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [12];
  undefined1 *local_18;
  code *local_14;
  
  FUN_015dea04(auStack_24,*(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x48));
  local_14 = FUN_015e8860;
  local_18 = auStack_24;
  FUN_00664898(&local_30,&DAT_00590e5f,&local_18);
  FUN_015dee24(auStack_24);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  return;
}

