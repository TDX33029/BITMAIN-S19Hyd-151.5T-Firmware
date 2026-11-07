// FUN_00604a40 @ 00604a40 size=156 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_00604a40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0173b2c8(param_1,0);
  if (iVar1 == 0) {
    return 1;
  }
  iVar2 = FUN_0173b7a0();
  uVar4 = 1;
  if (iVar2 == 1) {
    uVar3 = *(uint *)(param_2 + 0x44);
    if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,0x40,&DAT_018a77d0);
    }
    iVar2 = FUN_0173b878(iVar1,param_3,param_4,param_2 + 4,uVar3);
    uVar4 = 0;
    if (iVar2 != 1) {
      uVar4 = 1;
    }
  }
  FUN_01739f80(iVar1);
  return uVar4;
}

