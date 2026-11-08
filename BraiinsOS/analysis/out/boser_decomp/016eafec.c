// FUN_016eafec @ 016eafec size=92 calls_out=1 calls_in=1
// strings: 

bool FUN_016eafec(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  iVar2 = FUN_016eaf14();
  bVar1 = true;
  if (iVar2 == 0) {
    bVar1 = false;
    if (0x7f < param_1) {
      return false;
    }
    if (9 < param_1 - 0x30) {
      uVar3 = param_1 - 0x41;
      bVar5 = 0x19 < uVar3;
      bVar4 = uVar3 == 0x1a;
      if (bVar5) {
        uVar3 = param_1 - 0x61;
        bVar4 = uVar3 == 0x19;
      }
      if ((bVar5 && 0x18 < uVar3) && !bVar4) {
        return (param_1 & 0x7d) != 0x3c;
      }
    }
  }
  return bVar1;
}

