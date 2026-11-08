// FUN_01be669c @ 01be669c size=318 calls_out=2 calls_in=2
// strings: 

void FUN_01be669c(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int local_50;
  int local_3c;
  int local_38;
  int local_34;
  
  local_50 = param_2;
  while( true ) {
    bVar1 = *(byte *)(param_1 + 8);
    if ((*(byte *)(param_1 + 9) & param_4) == 0) {
      return;
    }
    if (bVar1 != 0) break;
    FUN_01be669c(param_1 + 0x14,local_50,param_3,param_4);
    FUN_01be669c(param_1 + 0x28,local_50 + 4,param_3 + 8,param_4);
    param_1 = param_1 + 0x3c;
    iVar3 = param_3 + 0x48;
    param_3 = param_3 + 0x4c;
    FUN_01be669c(param_1,local_50 + 0x44,iVar3,param_4);
    local_50 = local_50 + 0x48;
  }
  iVar3 = 0;
  pbVar6 = (byte *)(param_1 + 0xb);
  iVar4 = 0;
  while( true ) {
    iVar7 = param_3 + iVar4;
    iVar8 = local_50 + iVar3;
    if ((int)(uint)*(byte *)(param_1 + 0xb) <= (int)(pbVar6 + (-0xb - param_1))) break;
    pbVar6 = pbVar6 + 1;
    uVar5 = (uint)*pbVar6;
    iVar4 = iVar4 + (uVar5 - iVar3);
    iVar4 = iVar4 + (-iVar4 & 7U);
    iVar3 = param_3 + iVar4;
    if (param_4 == 1) {
      FUN_01bed4e2(iVar8,iVar7);
      FUN_01bed4e2(&local_38,iVar3,8);
      local_3c = local_38;
      FUN_01bed4e2(local_50 + uVar5,&local_3c,4);
    }
    else {
      FUN_01bed4e2(iVar7,iVar8);
      FUN_01bed4e2(&local_3c,local_50 + uVar5,4);
      local_38 = local_3c;
      local_34 = local_3c >> 0x1f;
      FUN_01bed4e2(iVar3,&local_38,8);
    }
    iVar4 = iVar4 + 8;
    iVar3 = uVar5 + 4;
  }
  iVar2 = iVar7;
  iVar4 = iVar8;
  if (param_4 == 1) {
    iVar2 = iVar8;
    iVar4 = iVar7;
  }
  if (param_4 != 1) {
    iVar2 = iVar7;
    iVar4 = iVar8;
  }
  FUN_01bed4e2(iVar2,iVar4,(uint)bVar1 - iVar3);
  return;
}

