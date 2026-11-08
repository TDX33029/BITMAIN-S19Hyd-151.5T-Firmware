// FUN_01b04fc8 @ 01b04fc8 size=88 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01b04fc8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = param_1;
  do {
    iVar3 = iVar2 + 0x10;
    FUN_01b04f90(iVar2);
    iVar2 = iVar3;
  } while (iVar3 != param_1 + 0x100);
  thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x108));
  uVar1 = thunk_FUN_01be4678(param_1);
  return uVar1;
}

