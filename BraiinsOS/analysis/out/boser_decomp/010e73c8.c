// FUN_010e73c8 @ 010e73c8 size=92 calls_out=2 calls_in=2
// strings: 

undefined1 FUN_010e73c8(undefined4 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = thunk_FUN_01bee35a(param_1,0x20);
  iVar2 = (int)uVar3 + (int)((ulonglong)uVar3 >> 0x20);
  if (*(char *)(iVar2 + 0x38) != '\x01') {
    if (*(char *)(iVar2 + 0x38) == '\x02') {
      return 2;
    }
    FUN_019a2bcc(iVar2,&LAB_019efb68);
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  uVar1 = *(undefined1 *)(iVar2 + 0x30);
  *(undefined1 *)(iVar2 + 0x31) = param_2;
  *(char *)(iVar2 + 0x30) = (char)param_1;
  return uVar1;
}

