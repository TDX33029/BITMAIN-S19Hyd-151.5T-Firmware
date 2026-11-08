// FUN_015fb9bc @ 015fb9bc size=192 calls_out=2 calls_in=2
// strings: 

int FUN_015fb9bc(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x25) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    *(undefined1 *)(param_1 + 0x24) = 1;
    uVar2 = FUN_015fb9bc(param_1);
    iVar1 = (int)uVar2;
    if ((iVar1 != 0 && (int)((ulonglong)uVar2 >> 0x20) != 0) ||
       (iVar1 = 0, *(char *)(param_1 + 0x25) == '\x01')) {
      return iVar1;
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  FUN_015fba7c(&local_1c,param_1);
  if (local_1c == 0) {
    *(undefined1 *)(param_1 + 0x25) = 1;
    return iVar1 + *(int *)(param_1 + 0x1c);
  }
  *(undefined4 *)(param_1 + 0x20) = local_18;
  return iVar1 + local_14;
}

