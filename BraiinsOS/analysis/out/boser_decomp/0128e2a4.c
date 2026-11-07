// FUN_0128e2a4 @ 0128e2a4 size=96 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_0128e2a4(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 3) {
    iVar1 = 0;
    do {
      if (iVar1 == 3) {
        return 1;
      }
      uVar2 = (uint)*(byte *)(param_3 + iVar1);
      uVar3 = (uint)*(byte *)(param_1 + iVar1);
      iVar1 = iVar1 + 1;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 | 0x20;
      }
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
    } while (uVar3 == uVar2);
  }
  return 0;
}

