// FUN_019ec558 @ 019ec558 size=92 calls_out=2 calls_in=176
// strings: 

undefined8 FUN_019ec558(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = thunk_FUN_01bee35a(param_1,0x20);
  iVar1 = (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20);
  if (*(char *)(iVar1 + 0x38) != '\x01') {
    if (*(char *)(iVar1 + 0x38) == '\x02') {
      return 0;
    }
    FUN_019a2bcc(iVar1,&LAB_019efb68);
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  uVar2 = *(undefined8 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  *(undefined4 *)(iVar1 + 0x1c) = param_2;
  return uVar2;
}

