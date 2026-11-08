// FUN_01a4b454 @ 01a4b454 size=92 calls_out=1 calls_in=2
// strings: 

void FUN_01a4b454(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1[3] != 0) {
    uVar2 = param_1[1];
    uVar1 = 0;
    if (uVar2 != 0) {
      FUN_01bed93e(*param_1,0xff,uVar2 + 5);
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

