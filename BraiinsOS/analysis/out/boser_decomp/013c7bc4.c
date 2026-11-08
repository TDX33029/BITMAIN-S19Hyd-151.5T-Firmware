// FUN_013c7bc4 @ 013c7bc4 size=152 calls_out=5 calls_in=4
// strings: 

void FUN_013c7bc4(undefined2 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [72];
  char local_30 [12];
  char local_24 [12];
  
  FUN_01bed93e(auStack_78,0,0x41);
  FUN_013c7c70(local_30,param_2,auStack_78,0);
  if (local_30[0] == '\a') {
    FUN_01bed4e2(param_1,auStack_78,0x44);
  }
  else {
    FUN_01bed4e2((uint)local_24 | 1,(uint)local_30 | 1,0xb);
    local_24[0] = local_30[0];
    uVar1 = FUN_013e677c(local_24);
    *(undefined4 *)(param_1 + 2) = uVar1;
    *param_1 = 2;
    FUN_0079217c(auStack_78);
  }
  return;
}

