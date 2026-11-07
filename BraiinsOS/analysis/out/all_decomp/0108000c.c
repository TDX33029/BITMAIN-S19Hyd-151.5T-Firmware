// FUN_0108000c @ 0108000c size=296 calls_out=3 calls_in=1
// strings: 

void FUN_0108000c(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  bool bVar7;
  int local_58;
  int local_54;
  int local_50;
  int *local_48;
  undefined4 local_44;
  uint local_40;
  uint uStack_3c;
  int local_38;
  undefined4 local_34;
  
  while( true ) {
    FUN_010977d4(&local_58,param_2);
    uVar3 = local_34;
    iVar4 = local_38;
    uVar2 = local_44;
    piVar1 = local_48;
    if (local_58 == -0x80000000) {
      *param_1 = -0x80000000;
      return;
    }
    uVar6 = (*(uint **)(param_2 + 0x20))[1];
    bVar7 = local_40 <= **(uint **)(param_2 + 0x20);
    iVar5 = uVar6 - (uStack_3c + !bVar7);
    if (uStack_3c < uVar6 || uVar6 - uStack_3c < (uint)bVar7) break;
    if (local_58 != 0) {
      thunk_FUN_016d3fb4(local_54,iVar5);
      iVar5 = extraout_r1;
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(uVar3,iVar5);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar1;
      bVar7 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar7);
    *piVar1 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(piVar1,uVar2);
    }
  }
  if (local_38 != 0) {
    thunk_FUN_016d3fb4(local_34,iVar5);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *local_48;
    bVar7 = (bool)hasExclusiveAccess(local_48);
  } while (!bVar7);
  *local_48 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(local_48,local_44);
  }
  param_1[1] = local_54;
  param_1[2] = local_50;
  *param_1 = local_58;
  return;
}

