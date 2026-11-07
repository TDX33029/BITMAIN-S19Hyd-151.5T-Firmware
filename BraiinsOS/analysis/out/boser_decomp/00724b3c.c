// FUN_00724b3c @ 00724b3c size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00724b3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == -0x80000000) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  FUN_00724b98(uVar2,*(undefined4 *)(param_1 + 0x18));
  FUN_0134c054(iVar1,uVar2,4,0x30);
  return;
}

