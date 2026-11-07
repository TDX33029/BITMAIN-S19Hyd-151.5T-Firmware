// FUN_007ac02c @ 007ac02c size=152 calls_out=4 calls_in=2
// strings: 

void FUN_007ac02c(int *param_1)

{
  undefined4 *puVar1;
  int local_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  char local_20 [4];
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_14;
  
  if ((*param_1 != 2 || param_1[1] != 0) && (FUN_007abe98(local_40,param_1), local_40[0] != 0)) {
    puVar1 = (undefined4 *)((uint)local_40 | 4);
    local_18 = &local_30;
    local_30 = *puVar1;
    uStack_2c = puVar1[1];
    uStack_28 = puVar1[2];
    local_14 = FUN_007ac168;
    FUN_019a7060(local_20,&DAT_01d51ad0,&DAT_005b5c7e,&local_18);
    if (local_20[0] != '\x04') {
      FUN_0069263c(local_20[0],local_1c);
    }
    FUN_007a90c8(&local_30);
  }
  return;
}

