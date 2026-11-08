// FUN_01b1fa30 @ 01b1fa30 size=80 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01b1fa30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_01b1f904(*(undefined4 *)(iVar2 + 4));
  FUN_01b6b1c4(*(undefined4 *)(iVar2 + 0x1c));
  FUN_01b6b1c4(*(undefined4 *)(iVar2 + 0x20));
  uVar1 = FUN_01b6b1c4(iVar2);
  return uVar1;
}

