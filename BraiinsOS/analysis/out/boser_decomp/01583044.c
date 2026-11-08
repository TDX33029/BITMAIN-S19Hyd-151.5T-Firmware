// FUN_01583044 @ 01583044 size=100 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01583044(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*param_2 == '\x04') {
    uVar4 = *(uint *)(param_2 + 0xc);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_2 + 0xc)) {
      uVar4 = *(uint *)(param_1 + 8);
    }
    iVar5 = uVar4 + 1;
    iVar1 = *(int *)(param_1 + 4);
    iVar3 = *(int *)(param_2 + 8);
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        return 1;
      }
      iVar2 = FUN_01577618(iVar1,iVar3,param_3);
      iVar1 = iVar1 + 0x14;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 != 0);
    uVar6 = 0;
  }
  return uVar6;
}

