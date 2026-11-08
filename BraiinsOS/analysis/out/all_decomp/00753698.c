// FUN_00753698 @ 00753698 size=92 calls_out=1 calls_in=1
// strings: 

void FUN_00753698(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1[3] != 0) {
    uVar2 = param_1[1];
    uVar1 = 0;
    if (uVar2 != 0) {
      FUN_016dd606(*param_1,0xff,uVar2 + 5);
      uVar1 = uVar2;
      if (7 < uVar2) {
        uVar1 = (uVar2 + 1 & 0xfffffff8) - (uVar2 + 1 >> 3);
      }
    }
    param_1[2] = uVar1;
    param_1[3] = 0;
  }
  return;
}

