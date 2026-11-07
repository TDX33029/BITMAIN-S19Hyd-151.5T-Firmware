// FUN_01223840 @ 01223840 size=108 calls_out=2 calls_in=3
// strings: 

void FUN_01223840(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uStack_9;
  
  uVar1 = *param_2;
  if (uVar1 == 0x80000015) {
    *param_1 = 2;
    return;
  }
  uVar2 = 0x15;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  if (uVar2 != 0x12) {
    if (uVar2 == 0x15) {
      uVar1 = param_2[2];
    }
    if (uVar2 != 0x15 || uVar1 != 0) {
      FUN_012223f8(param_1,param_2,&uStack_9,&DAT_01cf9cd4);
      return;
    }
  }
  *param_1 = 2;
  FUN_012222e0(param_2);
  return;
}

