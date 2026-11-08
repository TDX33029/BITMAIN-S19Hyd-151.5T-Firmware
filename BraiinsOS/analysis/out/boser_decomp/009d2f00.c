// FUN_009d2f00 @ 009d2f00 size=92 calls_out=1 calls_in=2
// strings: 

void FUN_009d2f00(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 == uVar1) {
    FUN_009d2f5c(param_1);
    uVar1 = *param_1;
    uVar2 = param_1[3];
  }
  uVar3 = param_1[2] + uVar2;
  param_1[3] = uVar2 + 1;
  uVar2 = uVar3 - uVar1;
  if (uVar3 < uVar1) {
    uVar2 = uVar3;
  }
  FUN_01bed4e2(param_1[1] + uVar2 * 0x11,param_2,0x11);
  return;
}

