// FUN_0178e9e0 @ 0178e9e0 size=216 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0178e9e0(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    if (*(uint *)(param_1 + 0x24) < (uint)(*(int *)(param_1 + 0x14) * 0x3c)) {
      if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x14) * 0x1e) {
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 1;
      }
    }
    else {
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x10000;
    }
  }
  return 0;
}

