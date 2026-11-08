// FUN_018bf5dc @ 018bf5dc size=88 calls_out=1 calls_in=1
// strings: 

void FUN_018bf5dc(undefined1 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar3 == (ushort *)0x0) || ((int)((ulonglong)uVar3 >> 0x20) != 2)) {
    *(undefined **)(param_1 + 4) = &DAT_005239af;
    *(undefined4 *)(param_1 + 8) = 2;
    uVar2 = 0xb;
  }
  else {
    uVar1 = *(ushort *)uVar3;
    *(ushort *)(param_1 + 2) = uVar1 << 8 | uVar1 >> 8;
    uVar2 = 0x14;
  }
  *param_1 = uVar2;
  return;
}

