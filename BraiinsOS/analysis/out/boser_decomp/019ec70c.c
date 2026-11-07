// FUN_019ec70c @ 019ec70c size=96 calls_out=2 calls_in=43
// strings: 

byte FUN_019ec70c(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = thunk_FUN_01bee35a(param_1,0x20);
  iVar1 = (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20);
  if (*(char *)(iVar1 + 0x38) != '\x01') {
    if (*(char *)(iVar1 + 0x38) == '\x02') {
      return 2;
    }
    FUN_019a2bcc(iVar1,&LAB_019efb68);
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  return ~*(byte *)(iVar1 + 0x30) & 1 | *(char *)(iVar1 + 0x31) != '\0';
}

