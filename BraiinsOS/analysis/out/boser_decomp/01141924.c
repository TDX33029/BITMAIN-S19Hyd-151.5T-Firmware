// FUN_01141924 @ 01141924 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_01141924(undefined1 *param_1)

{
  undefined1 uVar1;
  char local_20 [24];
  
  FUN_00e58dec(local_20);
  if (local_20[0] == '\x03') {
    uVar1 = 5;
  }
  else {
    if (local_20[0] != '\x04') {
      FUN_013b8db0(param_1,local_20);
      return;
    }
    uVar1 = 6;
  }
  *param_1 = uVar1;
  return;
}

