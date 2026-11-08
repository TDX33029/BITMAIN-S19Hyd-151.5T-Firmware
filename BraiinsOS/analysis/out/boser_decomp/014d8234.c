// FUN_014d8234 @ 014d8234 size=108 calls_out=2 calls_in=6
// strings: 

undefined4 FUN_014d8234(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uStack_9;
  
  uVar3 = *param_1;
  if (uVar3 != 0x80000015) {
    uVar2 = 0x15;
    if ((int)uVar3 < 0) {
      uVar2 = uVar3 ^ 0x80000000;
    }
    if (uVar2 != 0x12) {
      bVar4 = uVar2 == 0x15;
      if (bVar4) {
        uVar2 = param_1[2];
      }
      if (!bVar4 || uVar2 != 0) {
        uVar1 = FUN_014c8278(param_1,&uStack_9,&DAT_01cf9cd4);
        return uVar1;
      }
    }
    FUN_014c81b0();
  }
  return 0;
}

