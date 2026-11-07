// FUN_0162ef18 @ 0162ef18 size=52 calls_out=1 calls_in=1
// strings: 

void FUN_0162ef18(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = uVar1 - 3;
  if (uVar1 < 3) {
    iVar2 = 0;
  }
  if (iVar2 - 1U < 3) {
    return;
  }
  if ((iVar2 == 0) && (uVar1 < 2)) {
    return;
  }
  FUN_0134bd64(param_1[1],param_1[2]);
  return;
}

