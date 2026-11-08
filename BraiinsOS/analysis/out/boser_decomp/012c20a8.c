// FUN_012c20a8 @ 012c20a8 size=184 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_012c20a8(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int unaff_r5;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  bool bVar7;
  
  uVar6 = 1;
  if (param_2 != 0) {
    bVar7 = false;
    bVar5 = false;
    bVar1 = false;
    iVar3 = 0;
    do {
      uVar4 = (uint)*(byte *)(param_1 + iVar3);
      bVar2 = bVar1;
      if (9 < uVar4 - 0x30) {
        if (uVar4 == 0x2e) {
          if (bVar5) {
            return 0;
          }
          if (iVar3 == 0) {
            return 0;
          }
          if (bVar1) {
            return 0;
          }
          bVar5 = true;
          bVar2 = false;
        }
        else {
          if (uVar4 != 0x45 && uVar4 != 0x65) {
            return 0;
          }
          if (iVar3 == 0) {
            return 0;
          }
          bVar7 = true;
          unaff_r5 = iVar3;
          bVar2 = true;
          if (bVar1) {
            return 0;
          }
        }
      }
      bVar1 = bVar2;
      iVar3 = iVar3 + 1;
    } while (param_2 != iVar3);
    uVar6 = 1;
    if ((bVar7) && (uVar6 = 0, unaff_r5 != param_2 + -1)) {
      uVar6 = 1;
    }
  }
  return uVar6;
}

