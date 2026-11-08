// FUN_00f20128 @ 00f20128 size=68 calls_out=3 calls_in=1
// strings: 

void FUN_00f20128(undefined4 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 == &DAT_80000005) {
    return;
  }
  uVar2 = 5;
  if ((int)puVar1 < 0) {
    uVar2 = (uint)puVar1 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
  case 1:
  case 3:
    return;
  case 2:
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  case 4:
    FUN_0165d624(param_1 + 1);
    return;
  default:
    FUN_00f20180();
    return;
  }
}

