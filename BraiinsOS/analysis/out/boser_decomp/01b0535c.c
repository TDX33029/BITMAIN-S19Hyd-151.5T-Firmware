// FUN_01b0535c @ 01b0535c size=120 calls_out=3 calls_in=4
// strings: 

undefined4 FUN_01b0535c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_01b05020();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = iVar1;
  do {
    iVar3 = iVar2 + 0x10;
    FUN_01b04f90(iVar2);
    iVar2 = iVar3;
  } while (iVar3 != iVar1 + 0x100);
  thunk_FUN_01be4678(*(undefined4 *)(iVar1 + 0x108));
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  return 0;
}

