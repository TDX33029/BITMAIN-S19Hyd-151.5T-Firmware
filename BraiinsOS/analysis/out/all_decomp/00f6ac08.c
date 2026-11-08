// FUN_00f6ac08 @ 00f6ac08 size=152 calls_out=0 calls_in=1
// strings: 

bool FUN_00f6ac08(byte *param_1,int param_2,byte *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = false;
  if (param_2 != 3) {
    return false;
  }
  uVar3 = (uint)*param_3;
  uVar2 = (uint)*param_1;
  if (uVar3 - 0x41 < 0x1a) {
    uVar3 = uVar3 | 0x20;
  }
  if (uVar2 - 0x41 < 0x1a) {
    uVar2 = uVar2 | 0x20;
  }
  if (uVar2 == uVar3) {
    uVar3 = (uint)param_3[1];
    uVar2 = (uint)param_1[1];
    if (uVar3 - 0x41 < 0x1a) {
      uVar3 = uVar3 | 0x20;
    }
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if (uVar2 == uVar3) {
      uVar2 = (uint)param_3[2];
      uVar3 = (uint)param_1[2];
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      bVar1 = uVar3 == uVar2;
    }
  }
  return bVar1;
}

