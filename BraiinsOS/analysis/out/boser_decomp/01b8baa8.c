// FUN_01b8baa8 @ 01b8baa8 size=136 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b8baa8(uint param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x1318);
    uVar3 = *(undefined4 *)(param_1 + 0x131c);
    if (param_1 < *(uint *)(param_1 + 0x10)) {
      bVar1 = false;
    }
    else if (param_1 < *(uint *)(param_1 + 0x14)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    FUN_01b86b0c(param_1 + 0x10,uVar2,uVar3);
    if (!bVar1) {
      FUN_01b86ab4(param_1,uVar2,uVar3);
    }
  }
  return 0;
}

