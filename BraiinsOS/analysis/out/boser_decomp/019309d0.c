// FUN_019309d0 @ 019309d0 size=84 calls_out=1 calls_in=1
// strings: 

void FUN_019309d0(undefined1 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0192fac8(param_2,2);
  if (((ushort *)uVar3 == (ushort *)0x0) || ((int)((ulonglong)uVar3 >> 0x20) != 2)) {
    *(char **)(param_1 + 4) = "u16";
    *(undefined4 *)(param_1 + 8) = 3;
    uVar2 = 0xc;
  }
  else {
    uVar1 = *(ushort *)uVar3;
    *(ushort *)(param_1 + 2) = uVar1 << 8 | uVar1 >> 8;
    uVar2 = 0x18;
  }
  *param_1 = uVar2;
  return;
}

