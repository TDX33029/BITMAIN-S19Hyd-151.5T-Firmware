// FUN_01381aac @ 01381aac size=96 calls_out=3 calls_in=1
// strings: 

void FUN_01381aac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar3;
  
  FUN_013b8790(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x18c);
  FUN_0138a02c(uVar3,*(undefined4 *)(param_1 + 400));
  FUN_0134c054(*(undefined4 *)(param_1 + 0x188),uVar3,8,0xf8,unaff_r4,unaff_r5);
  iVar1 = *(int *)(param_1 + 0x178);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x174) - iVar2);
  }
  FUN_0134c054(*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x16c),4,0xc);
  return;
}

