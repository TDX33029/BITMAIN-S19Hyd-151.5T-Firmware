// FUN_00bad8c4 @ 00bad8c4 size=92 calls_out=1 calls_in=1
// strings: 

void FUN_00bad8c4(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 == uVar1) {
    FUN_00aa2c5c(param_1);
    uVar1 = *param_1;
    uVar2 = param_1[3];
  }
  uVar3 = param_1[2] + uVar2;
  param_1[3] = uVar2 + 1;
  uVar2 = uVar3 - uVar1;
  if (uVar3 < uVar1) {
    uVar2 = uVar3;
  }
  FUN_016dd1aa(uVar2 * 0x118 + param_1[1],param_2,0x118);
  return;
}

