// FUN_01645540 @ 01645540 size=92 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_01645540(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = thunk_FUN_016de0ee(param_1,0x40);
  iVar1 = (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20);
  if (*(char *)(iVar1 + 0x38) != '\x01') {
    if (*(char *)(iVar1 + 0x38) == '\x02') {
      return 0;
    }
    FUN_015e8e6c(iVar1,FUN_01655ec4);
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  uVar2 = *(undefined8 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  *(undefined4 *)(iVar1 + 0x1c) = param_2;
  return uVar2;
}

