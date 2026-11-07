// FUN_019e6ba4 @ 019e6ba4 size=64 calls_out=1 calls_in=2
// strings: 

void FUN_019e6ba4(uint *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = uVar1 - 2;
  if (uVar1 < 2) {
    uVar3 = 2;
  }
  if (uVar3 < 2) {
    cVar2 = (char)param_1[1];
    if (cVar2 == '\x04') {
      return;
    }
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    cVar2 = (char)param_1[1];
  }
  FUN_0069263c(cVar2,param_1[2]);
  return;
}

