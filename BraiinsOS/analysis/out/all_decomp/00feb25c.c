// FUN_00feb25c @ 00feb25c size=152 calls_out=1 calls_in=1
// strings: 

void FUN_00feb25c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  FUN_00fe53bc(&local_2c,*(undefined4 *)(param_2 + 0x10),uVar1,param_3);
  if ((local_2c != 1) || (uVar1 >> 1 <= local_24)) {
    param_1[1] = 0xc;
    param_1[4] = 0;
    param_1[5] = param_3;
    *param_1 = 1;
    return;
  }
  *(undefined2 *)(param_2 + 0x40) = 0x101;
  param_1[3] = local_24;
  if (local_24 == 0) {
    *(undefined1 *)(param_2 + 0x43) = 1;
  }
  param_1[1] = local_28;
  param_1[2] = 0x80000011;
  *param_1 = 0;
  return;
}

