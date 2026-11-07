// FUN_01be0a14 @ 01be0a14 size=90 calls_out=4 calls_in=0
// strings: 

int FUN_01be0a14(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = **(uint **)(param_2 + 0x4c);
  if ((uVar4 & 0xf0000000) != 0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_01be0128();
  }
  uVar1 = FUN_01be04b0(param_3);
  iVar2 = FUN_01be0850(param_2,param_3,(uVar4 & 0xfffffff) >> 0x18,uVar1,
                       *(undefined4 *)(param_2 + 0x50));
  if (iVar2 != 8) {
    return iVar2;
  }
  iVar2 = FUN_01be228c(param_3);
  if (iVar2 == 0) {
    return 5;
  }
  iVar3 = 8;
  if (iVar2 != 1) {
    iVar3 = 9;
  }
  return iVar3;
}

