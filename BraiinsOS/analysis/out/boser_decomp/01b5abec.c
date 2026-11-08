// FUN_01b5abec @ 01b5abec size=316 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_01b5abec(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_1 == 0) || (param_3 != 0 && param_2 == 0)) {
    return 0;
  }
  if (param_3 != 0) {
    bVar1 = *(char *)(param_1 + 0x17d) - 1;
    if (bVar1 < 2) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0xd0);
    uVar3 = *(uint *)(param_1 + 200);
    if (iVar2 != 0) {
      uVar4 = uVar3 - iVar2;
      iVar5 = param_1 + 0xd4;
      if (param_3 < uVar4) {
        FUN_01b26974(iVar5 + iVar2);
        *(uint *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + param_3;
        return 1;
      }
      FUN_01b26974(iVar5 + iVar2,param_2,uVar4,bVar1,param_4);
      iVar5 = FUN_01b599ac(param_1,iVar5,uVar3,uVar3);
      if (iVar5 != 0) {
        return 0;
      }
      param_2 = param_2 + uVar4;
      param_3 = (param_3 + iVar2) - uVar3;
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    else {
      uVar3 = FUN_01b599ac(param_1,param_2,param_3,uVar3);
    }
    if (uVar3 != 0) {
      FUN_01b26974(param_1 + 0xd4,param_2 + (param_3 - uVar3),uVar3);
      *(uint *)(param_1 + 0xd0) = uVar3;
    }
  }
  return 1;
}

