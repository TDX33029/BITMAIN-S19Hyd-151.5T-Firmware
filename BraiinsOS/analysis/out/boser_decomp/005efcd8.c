// FUN_005efcd8 @ 005efcd8 size=76 calls_out=2 calls_in=0
// strings: 

int FUN_005efcd8(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = thunk_FUN_01bee35a(param_1,0x20);
  iVar1 = (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20);
  if (*(char *)(iVar1 + 0x38) != '\x01') {
    if (*(char *)(iVar1 + 0x38) == '\x02') {
      iVar1 = 0;
    }
    else {
      FUN_019a2bcc(iVar1,&LAB_019efb68);
      *(undefined1 *)(iVar1 + 0x38) = 1;
    }
  }
  return iVar1;
}

