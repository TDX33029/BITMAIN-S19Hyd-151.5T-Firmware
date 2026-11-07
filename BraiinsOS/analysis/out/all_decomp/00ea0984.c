// FUN_00ea0984 @ 00ea0984 size=108 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00ea0984(char *param_1)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_24 [12];
  undefined *local_18;
  undefined4 *local_14;
  
  if (*param_1 == '\x05') {
    return 0;
  }
  local_30 = *(undefined4 *)param_1;
  uStack_2c = *(undefined4 *)(param_1 + 4);
  local_14 = &DAT_0157d360;
  local_18 = &DAT_0187b3ec;
  FUN_00600d2c(auStack_24,&DAT_0057b627,&local_18);
  uVar1 = FUN_00ea0a20(&local_30,auStack_24);
  return uVar1;
}

