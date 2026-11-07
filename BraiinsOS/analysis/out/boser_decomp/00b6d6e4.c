// FUN_00b6d6e4 @ 00b6d6e4 size=272 calls_out=6 calls_in=5
// strings: 

void FUN_00b6d6e4(int param_1)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  **(undefined1 **)(param_1 + 0x58) = 0;
  if (iVar1 != 0) {
    thunk_FUN_01be4678();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  FUN_019a4834(uVar2,*(undefined4 *)(param_1 + 0x38));
  FUN_0132b958(*(undefined4 *)(param_1 + 0x30),uVar2,4,4);
  FUN_019602b0(param_1 + 0x48);
  if ((*(undefined1 **)(param_1 + 0x60) != (undefined1 *)0x0) &&
     (iVar1 = *(int *)(param_1 + 100), **(undefined1 **)(param_1 + 0x60) = 0, iVar1 != 0)) {
    thunk_FUN_01be4678();
  }
  if ((*(undefined1 **)(param_1 + 0x68) != (undefined1 *)0x0) &&
     (iVar1 = *(int *)(param_1 + 0x6c), **(undefined1 **)(param_1 + 0x68) = 0, iVar1 != 0)) {
    thunk_FUN_01be4678();
  }
  FUN_007adbb4(param_1 + 0x3c);
  bVar3 = *(int *)(param_1 + 0x70) != 0;
  iVar1 = extraout_r1;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x74);
  }
  if (bVar3 && iVar1 != 0) {
    thunk_FUN_01be4678();
  }
  if ((*(int *)(param_1 + 0x18) != 5) && (*(int *)(param_1 + 0x18) == 3)) {
    FUN_01bf01d6(*(undefined4 *)(param_1 + 0x1c));
  }
  if ((*(int *)(param_1 + 0x20) != 5) && (*(int *)(param_1 + 0x20) == 3)) {
    FUN_01bf01d6(*(undefined4 *)(param_1 + 0x24));
  }
  if ((*(int *)(param_1 + 0x28) == 5) || (*(int *)(param_1 + 0x28) != 3)) {
    return;
  }
  uVar2 = FUN_01beaf68(*(undefined4 *)(param_1 + 0x2c));
  iVar1 = thunk_FUN_01bee080(6,uVar2,0,0,0,0,0);
  if (iVar1 == -4) {
    iVar1 = 0;
  }
  FUN_01be3b5a(iVar1);
  return;
}

