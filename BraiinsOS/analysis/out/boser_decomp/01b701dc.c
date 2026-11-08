// FUN_01b701dc @ 01b701dc size=136 calls_out=3 calls_in=1
// strings: 

int FUN_01b701dc(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r3;
  undefined4 uVar3;
  
  iVar1 = FUN_01b6b0a8(0x14);
  if (iVar1 != 0) {
    iVar2 = FUN_01b6b0fc(4);
    uVar3 = extraout_r3;
    if (iVar2 != 0) {
      uVar3 = 4;
    }
    *(int *)(iVar1 + 4) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 0xc) = uVar3;
      return iVar1;
    }
    FUN_01b6b1c4(iVar1);
  }
  return 0;
}

