// FUN_019edbc4 @ 019edbc4 size=92 calls_out=2 calls_in=73
// strings: 

void FUN_019edbc4(uint param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  uVar2 = thunk_FUN_01bee35a(param_1,0x20);
  iVar1 = (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20);
  if (*(char *)(iVar1 + 0x38) != '\x01') {
    if (*(char *)(iVar1 + 0x38) == '\x02') {
      return;
    }
    FUN_019a2bcc(iVar1,&LAB_019efb68);
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  *(undefined1 *)(iVar1 + 0x31) = param_2;
  *(undefined1 *)(iVar1 + 0x30) = 1;
  return;
}

