// FUN_01a43fd4 @ 01a43fd4 size=60 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_01a43fd4(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x20);
  if ((iVar2 != -0x7ffffffd) && (-1 < iVar2)) {
    FUN_0134bd64(iVar2,*(undefined4 *)(param_1 + 0x24));
  }
  FUN_01a49da0(param_1);
  return uVar1;
}

