// FUN_0193dba8 @ 0193dba8 size=72 calls_out=2 calls_in=2
// strings: 

void FUN_0193dba8(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 1) {
    bVar2 = uVar1 == 0;
    if (bVar2) {
      uVar1 = (uint)(byte)param_1[7];
    }
    if (bVar2 && uVar1 == 0) {
      FUN_0193c71c(param_1 + 2);
      return;
    }
    return;
  }
  uVar1 = param_1[2];
  bVar2 = uVar1 == 0 && param_1[3] == 0;
  if (uVar1 != 0 || param_1[3] != 0) {
    uVar1 = param_1[4];
    bVar2 = uVar1 == 0;
  }
  if (bVar2) {
    return;
  }
  FUN_01443048(uVar1,param_1[5]);
  return;
}

