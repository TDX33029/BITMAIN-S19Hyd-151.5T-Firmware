// FUN_016e435c @ 016e435c size=216 calls_out=2 calls_in=3
// strings: 

void FUN_016e435c(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar1 = param_2[1] - *param_2;
  iVar3 = param_1[2];
  if ((uint)(*param_1 - iVar3) < uVar1 >> 4) {
    uVar1 = FUN_006520b4(param_1,iVar3,uVar1 >> 4,4,0x10);
    iVar3 = param_1[2];
  }
  iVar5 = param_1[1];
  local_48 = *param_2;
  local_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  uStack_38 = param_2[4];
  if (local_48 != local_44) {
    uVar4 = local_48 + 0x10;
    do {
      local_48 = uVar4;
      uVar4 = *(uint *)(local_48 - 0x10);
      bVar6 = uVar4 != 0x80000000;
      if (bVar6) {
        local_30 = *(uint *)(local_48 - 0xc);
        uStack_2c = *(uint *)(local_48 - 8);
        uStack_28 = *(uint *)(local_48 - 4);
        puVar2 = (uint *)(iVar5 + iVar3 * 0x10);
        *puVar2 = uVar4;
        iVar3 = iVar3 + 1;
        puVar2[1] = local_30;
        puVar2[2] = uStack_2c;
        puVar2[3] = uStack_28;
        uVar4 = local_48 + 0x10;
        uVar1 = local_48;
      }
    } while (bVar6 && uVar1 != local_44);
  }
  param_1[2] = iVar3;
  FUN_016f1e44(&local_48);
  return;
}

