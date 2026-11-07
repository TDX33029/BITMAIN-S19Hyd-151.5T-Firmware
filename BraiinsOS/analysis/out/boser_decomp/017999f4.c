// FUN_017999f4 @ 017999f4 size=60 calls_out=1 calls_in=8
// strings: 

void FUN_017999f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    uVar1 = FUN_01beaf68(*(undefined4 *)(param_1 + 0x20));
    iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
    if (iVar2 == -4) {
      iVar2 = 0;
    }
    FUN_01be3b5a(iVar2);
    return;
  }
  if (*(char *)(param_1 + 0x44) == '\x03') {
    FUN_01a6bbbc(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x45) = 0;
    return;
  }
  return;
}

