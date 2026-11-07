// FUN_014f412c @ 014f412c size=156 calls_out=5 calls_in=1
// strings: 

void FUN_014f412c(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_014f4a6c(&local_3c);
  uVar2 = local_38;
  iVar1 = local_3c;
  if (local_3c == -0x80000000) {
    *(undefined4 *)(param_1 + 4) = local_38;
    *param_1 = 1;
    return;
  }
  FUN_01aa52f4(&local_3c,local_38,local_34);
  if ((char)local_3c != '\x01') {
    FUN_01bed4e2(param_1 + 1,(uint)&local_3c | 1,0x20);
  }
  else {
    uVar3 = FUN_014e6144(local_38,local_34);
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  *param_1 = (char)local_3c == '\x01';
  FUN_019bb7e0(iVar1,uVar2);
  return;
}

