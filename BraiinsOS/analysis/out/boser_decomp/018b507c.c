// FUN_018b507c @ 018b507c size=184 calls_out=2 calls_in=1
// strings: 

void FUN_018b507c(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar2 = FUN_018beed0(param_2,4);
  if (((uint *)uVar2 == (uint *)0x0) || ((int)((ulonglong)uVar2 >> 0x20) != 4)) {
    *(undefined1 *)(param_1 + 1) = 0xb;
    *param_1 = 0x80000000;
    param_1[2] = "u32";
    param_1[3] = 3;
  }
  else {
    uVar1 = *(uint *)uVar2;
    FUN_018c4324(&local_28,param_2);
    if (local_28 == 1) {
      param_1[1] = local_24;
      param_1[2] = uStack_20;
      param_1[3] = uStack_1c;
      *param_1 = 0x80000000;
    }
    else {
      *param_1 = local_24;
      param_1[1] = uStack_20;
      param_1[2] = uStack_1c;
      param_1[3] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                   uVar1 >> 0x18;
    }
  }
  return;
}

