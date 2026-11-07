// FUN_014f53dc @ 014f53dc size=152 calls_out=4 calls_in=2
// strings: 

void FUN_014f53dc(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_014caa68(&local_1c);
  uVar2 = local_18;
  iVar1 = local_1c;
  if (local_1c == -0x80000000) {
    *(undefined4 *)(param_1 + 4) = local_18;
    *param_1 = 1;
    return;
  }
  FUN_01aa4a9c(&local_1c,local_18,local_14);
  if ((char)local_1c != '\x03') {
    *(int *)(param_1 + 1) = local_1c;
    param_1[5] = (undefined1)local_18;
  }
  else {
    uVar3 = FUN_014e5f34(local_1c._1_1_,local_1c._2_1_);
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  *param_1 = (char)local_1c == '\x03';
  FUN_019bb7e0(iVar1,uVar2);
  return;
}

