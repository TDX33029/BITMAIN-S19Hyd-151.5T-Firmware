// FUN_00a605d0 @ 00a605d0 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00a605d0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 == 6 && param_1[1] == 0) {
    return;
  }
  if ((uVar1 & 7) == 4) {
    FUN_0187266c((char)param_1[2],param_1[3]);
    return;
  }
  if (uVar1 == 5) {
    return;
  }
  FUN_01760ec4();
  return;
}

