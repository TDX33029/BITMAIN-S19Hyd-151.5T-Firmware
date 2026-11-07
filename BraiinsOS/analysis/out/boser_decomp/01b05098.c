// FUN_01b05098 @ 01b05098 size=108 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_01b05098(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01b05020();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x100) != *(int *)(iVar1 + 0x104)) {
      iVar1 = iVar1 + *(int *)(iVar1 + 0x100) * 0x10;
      thunk_FUN_01be4678(*(undefined4 *)(iVar1 + 4));
      *(undefined4 *)(iVar1 + 4) = param_1;
      return 0;
    }
  }
  uVar2 = thunk_FUN_01be4678(param_1);
  return uVar2;
}

