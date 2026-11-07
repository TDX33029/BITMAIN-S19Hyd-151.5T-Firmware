// FUN_019ec5bc @ 019ec5bc size=84 calls_out=2 calls_in=8
// strings: 

undefined1 FUN_019ec5bc(undefined4 param_1)

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
  *(undefined1 *)(iVar2 + 0x30) = 0;
  return uVar1;
}

