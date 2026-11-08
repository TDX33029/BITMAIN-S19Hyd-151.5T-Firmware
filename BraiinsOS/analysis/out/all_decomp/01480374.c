// FUN_01480374 @ 01480374 size=176 calls_out=1 calls_in=0
// strings: 

void FUN_01480374(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((*(int *)(param_2 + 0x21c) != -0x80000000) && (*(int *)(param_2 + 0x224) == 2)) &&
     (**(short **)(param_2 + 0x220) == 0x3268)) {
    iVar2 = 0x2dc;
    if (*(int *)(param_2 + 0x2d0) == 2) {
      iVar2 = 0x2e0;
    }
    uVar1 = *(undefined4 *)(param_2 + iVar2);
LAB_01480410:
    FUN_010cbb88(param_1,uVar1);
    *(undefined1 *)(param_1 + 0xc) = 0;
    return;
  }
  if (*(int *)(param_2 + 0x2d0) == 2) {
    FUN_010cbb88(param_1,*(undefined4 *)(param_2 + 0x2e0));
    return;
  }
  if ((*(int *)(param_2 + 0x4fc) != -0x80000000) && (*(int *)(param_2 + 0x504) == 2)) {
    if (**(short **)(param_2 + 0x500) == 0x3268) {
      uVar1 = *(undefined4 *)(param_2 + 0x2dc);
      goto LAB_01480410;
    }
  }
  FUN_010cbb88(param_1,*(undefined4 *)(param_2 + 0x2dc));
  return;
}

