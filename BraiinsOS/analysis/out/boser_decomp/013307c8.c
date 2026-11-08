// FUN_013307c8 @ 013307c8 size=144 calls_out=1 calls_in=1
// strings: 

void FUN_013307c8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  FUN_0132b9b0(&local_2c,*(undefined4 *)(param_2 + 0x10),uVar2,param_3);
  if ((local_2c == 1) && (local_24 < uVar2 >> 1)) {
    *(undefined2 *)(param_2 + 0x40) = 0x101;
    param_1[3] = local_24;
    uVar1 = 0;
    if (local_24 == 0) {
      *(undefined1 *)(param_2 + 0x43) = 1;
    }
    param_1[1] = local_28;
    param_1[2] = 0x80000011;
  }
  else {
    param_1[1] = 0xc;
    uVar1 = 1;
    param_1[4] = 0;
    param_1[5] = param_3;
  }
  *param_1 = uVar1;
  return;
}

