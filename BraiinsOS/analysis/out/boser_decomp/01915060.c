// FUN_01915060 @ 01915060 size=140 calls_out=1 calls_in=1
// strings: 

int FUN_01915060(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  uVar4 = *(uint *)(param_1 + 0x14);
  iVar5 = 0;
  if (uVar4 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar1 = uVar2 - uVar3;
    if (uVar2 < uVar3) {
      uVar1 = uVar2;
    }
    if (uVar3 - uVar1 < uVar4) {
      iVar5 = uVar4 - (uVar3 - uVar1);
    }
    else {
      uVar3 = uVar1 + uVar4;
    }
  }
  local_10 = *(int *)(param_1 + 0xc);
  local_18 = local_10 + uVar1 * 0xc;
  local_c = local_10 + iVar5 * 0xc;
  local_14 = local_10 + uVar3 * 0xc;
  iVar5 = FUN_01908284(&local_18);
  return iVar5 - *(int *)(param_1 + 0x18);
}

