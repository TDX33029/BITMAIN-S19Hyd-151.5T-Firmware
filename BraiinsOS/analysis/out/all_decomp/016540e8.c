// FUN_016540e8 @ 016540e8 size=200 calls_out=3 calls_in=25
// strings: 

undefined4 FUN_016540e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = thunk_FUN_016de0ee(param_1,0x40);
  iVar3 = (int)uVar5 + (int)((ulonglong)uVar5 >> 0x20);
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') goto LAB_01654144;
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  cVar1 = *(char *)(iVar3 + 0x30);
  bVar4 = cVar1 == '\x01';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0x31);
  }
  if ((bVar4 && cVar1 == '\0') && (param_1 != 0)) {
    *(undefined1 *)(iVar3 + 0x30) = 0;
    uVar2 = FUN_01657fc4(param_2,param_3);
    if (*(char *)(iVar3 + 0x38) != '\x01') {
      if (*(char *)(iVar3 + 0x38) == '\x02') {
        return uVar2;
      }
      FUN_015e8e6c(iVar3,FUN_01655ec4);
      *(undefined1 *)(iVar3 + 0x38) = 1;
    }
    *(undefined2 *)(iVar3 + 0x30) = 1;
    return uVar2;
  }
LAB_01654144:
  uVar2 = FUN_01657fc4(param_2,param_3);
  return uVar2;
}

