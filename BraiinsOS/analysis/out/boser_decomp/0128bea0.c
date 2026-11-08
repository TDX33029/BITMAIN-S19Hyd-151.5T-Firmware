// FUN_0128bea0 @ 0128bea0 size=196 calls_out=1 calls_in=1
// strings: invalid offset second | invalid offset minute | invalid offset hour

void FUN_0128bea0(uint *param_1)

{
  char *pcVar1;
  uint uVar2;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint uStack_c;
  
  FUN_0128c5e8(&local_20);
  if (local_20 == 1) {
    *param_1 = local_18;
    param_1[1] = local_14;
    param_1[2] = local_10;
    param_1[3] = uStack_c;
  }
  else {
    if (local_18 < 0x19) {
      if (local_14 < 0x3c) {
        if (local_10 < 0x3c) {
          param_1[2] = 0x3b9aca10;
          *param_1 = (local_18 * 0xe10 + local_14 * 0x3c + local_10) * local_1c;
          return;
        }
        pcVar1 = "invalid offset second";
      }
      else {
        pcVar1 = "invalid offset minute";
      }
      uVar2 = 0x15;
    }
    else {
      uVar2 = 0x13;
      pcVar1 = "invalid offset hour";
    }
    *param_1 = (uint)pcVar1;
    param_1[1] = uVar2;
    param_1[2] = 0x3b9aca05;
  }
  return;
}

