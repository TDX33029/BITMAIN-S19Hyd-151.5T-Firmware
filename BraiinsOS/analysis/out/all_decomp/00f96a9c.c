// FUN_00f96a9c @ 00f96a9c size=92 calls_out=1 calls_in=4
// strings: 

int FUN_00f96a9c(int param_1,undefined1 *param_2)

{
  char local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined3 local_17;
  undefined1 uStack_14;
  undefined3 uStack_13;
  
  local_20 = param_2[4];
  if (local_20 != '\a') {
    local_1b = *(undefined4 *)(param_2 + 9);
    local_1f = *(undefined4 *)(param_2 + 5);
    local_17 = (undefined3)*(undefined4 *)(param_2 + 0xd);
    uStack_14 = (undefined1)*(undefined4 *)(param_2 + 0x10);
    uStack_13 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x10) >> 8);
    FUN_00f9ab2c(param_1 + 0x10,*param_2,&local_20);
  }
  return param_1;
}

