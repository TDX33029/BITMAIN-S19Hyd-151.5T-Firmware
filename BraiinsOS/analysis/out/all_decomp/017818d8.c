// FUN_017818d8 @ 017818d8 size=188 calls_out=3 calls_in=1
// strings: 

int FUN_017818d8(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  
  iVar1 = FUN_0177a9c0(0x14);
  if (iVar1 != 0) {
    iVar2 = FUN_0177aa28(4);
    uVar3 = extraout_r2;
    if (iVar2 != 0) {
      uVar3 = 4;
    }
    *(int *)(iVar1 + 4) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 0xc) = uVar3;
      return iVar1;
    }
    FUN_0177aafc(iVar1);
  }
  return 0;
}

