// FUN_014880e4 @ 014880e4 size=112 calls_out=4 calls_in=6
// strings: 

void FUN_014880e4(undefined4 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)*param_1;
  if (puVar2 == &DAT_80000005) {
    return;
  }
  uVar1 = 5;
  if ((int)puVar2 < 0) {
    uVar1 = (uint)puVar2 ^ 0x80000000;
  }
  switch(uVar1) {
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
    FUN_0165d0b8(param_1);
    FUN_0134aee0(puVar2,param_1[1],8,0x10);
    return;
  }
}

