// FUN_0158dcac @ 0158dcac size=124 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0158dcac(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if (*param_2 == '\x04') {
    iVar1 = *(int *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0xc);
    iVar3 = *(int *)(param_1 + 0x14);
    iVar4 = iVar1;
    if (iVar3 != 0) {
      if (uVar2 <= iVar3 - 1U) {
        return 1;
      }
      iVar4 = iVar1 + iVar3 * 0x18;
    }
    do {
      if (iVar4 == iVar1 + uVar2 * 0x18) {
        return 1;
      }
      iVar3 = FUN_01577618(param_1,iVar4,param_3);
      iVar4 = iVar4 + 0x18;
    } while (iVar3 != 0);
    uVar5 = 0;
  }
  return uVar5;
}

