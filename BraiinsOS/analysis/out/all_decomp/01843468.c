// FUN_01843468 @ 01843468 size=90 calls_out=4 calls_in=0
// strings: 

int FUN_01843468(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = **(uint **)(param_2 + 0x4c);
  if ((uVar4 & 0xf0000000) != 0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_01842b7c();
  }
  uVar1 = FUN_01842f04(param_3);
  iVar2 = FUN_018432a4(param_2,param_3,(uVar4 & 0xfffffff) >> 0x18,uVar1,
                       *(undefined4 *)(param_2 + 0x50));
  if (iVar2 != 8) {
    return iVar2;
  }
  iVar2 = FUN_01844ce0(param_3);
  if (iVar2 == 0) {
    return 5;
  }
  iVar3 = 8;
  if (iVar2 != 1) {
    iVar3 = 9;
  }
  return iVar3;
}

