// FUN_01b05ba8 @ 01b05ba8 size=156 calls_out=4 calls_in=1
// strings: 

int FUN_01b05ba8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (-1 < param_3) {
    iVar1 = FUN_01b6b78c(param_2,param_3);
    for (uVar5 = 0; uVar2 = FUN_01b05b14(), uVar5 < uVar2; uVar5 = uVar5 + 1) {
      iVar3 = FUN_01b05b44(uVar5);
      iVar4 = FUN_01b6b78c(*(undefined4 *)(iVar3 + 0x10),10);
      if ((iVar1 == iVar4) &&
         (iVar4 = FUN_01b6b9fc(*(undefined4 *)(iVar3 + 0x10),param_2,iVar1), iVar4 == 0)) {
        return iVar3;
      }
    }
  }
  return 0;
}

