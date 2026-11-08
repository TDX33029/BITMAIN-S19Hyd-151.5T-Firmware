// FUN_0178e8b8 @ 0178e8b8 size=296 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_0178e8b8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    FUN_0178e7f4(param_1,param_2,param_3,param_4,1,1);
  }
  else {
    if (param_4 == *(int *)(param_1 + 0x3c) && param_3 == *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      if (*(uint *)(param_1 + 0x34) < *(uint *)(param_1 + 0x2c)) {
        if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x28)) {
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 2;
        }
      }
      else {
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x20000;
      }
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    if (0x1ff < *(uint *)(param_1 + 0x30)) {
      FUN_0178e87c(param_1);
    }
  }
  return 0;
}

