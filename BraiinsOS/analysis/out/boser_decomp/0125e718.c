// FUN_0125e718 @ 0125e718 size=152 calls_out=3 calls_in=0
// strings: Failed to write fan speed | Failed to read fan period

undefined4 FUN_0125e718(int param_1,int param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28 [6];
  
  uVar2 = FUN_014b6cd8(param_1 + 0xc);
  local_2c = (int)(uVar2 >> 0x20);
  if ((uVar2 & 1) == 0) {
    local_2c = FUN_014b700c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                            (uint)(param_2 * local_2c) / 100);
    if (local_2c == 0) {
      return 0;
    }
    local_34 = "Failed to write fan speed";
  }
  else {
    local_34 = "Failed to read fan period";
  }
  local_30 = 0x19;
  local_28[0] = 3;
  uVar1 = FUN_0125f73c(&local_34,local_28);
  return uVar1;
}

