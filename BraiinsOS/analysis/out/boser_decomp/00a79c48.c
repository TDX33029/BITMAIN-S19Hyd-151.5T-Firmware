// FUN_00a79c48 @ 00a79c48 size=92 calls_out=2 calls_in=2
// strings: 

void FUN_00a79c48(undefined1 *param_1)

{
  undefined1 uVar1;
  uint local_18;
  undefined4 uStack_14;
  uint local_10;
  undefined4 local_c;
  
  FUN_00a49bec(&local_18);
  if ((local_18 & 0xff) == 4) {
    uVar1 = 4;
  }
  else {
    if ((local_18 & 0xff) != 5) {
      local_c = uStack_14;
      local_10 = local_18;
      FUN_0175191c(param_1,&local_10);
      return;
    }
    uVar1 = 5;
  }
  *param_1 = uVar1;
  return;
}

