// FUN_0138a6bc @ 0138a6bc size=280 calls_out=1 calls_in=4
// strings: 

void FUN_0138a6bc(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  uVar1 = 0x80000000;
  if (param_2 != 3) {
    local_30 = 0;
    local_1c = 0;
    local_20 = 0;
    iVar7 = *(int *)(*(int *)(param_3 + 0x13c) + 0x10);
    iVar2 = 4;
    local_24 = 4;
    if (iVar7 != 0) {
      iVar2 = *(int *)(*(int *)(param_3 + 0x13c) + 0xc) + iVar7 * 8;
    }
    local_28 = 0;
    if (iVar7 != 0 && iVar2 != 8) {
      uVar6 = *(uint *)(iVar2 + -4);
      uVar1 = 0;
      local_30 = uVar6 + iVar7 * -2;
      if (uVar6 < (uint)(iVar7 * 2)) {
        local_30 = 0;
      }
      if ((uint)(iVar7 * 2) < uVar6) {
        FUN_013c4434(&local_28,0,local_30,4,4);
        puVar4 = (undefined4 *)(local_24 + local_20 * 4);
        if (1 < local_30) {
          uVar3 = iVar7 << 1;
          if (uVar6 < (uint)(iVar7 << 1)) {
            uVar3 = uVar6;
          }
          iVar2 = ~uVar3 + uVar6;
          puVar5 = puVar4;
          do {
            puVar4 = puVar5 + 1;
            *puVar5 = 0;
            iVar2 = iVar2 + -1;
            puVar5 = puVar4;
          } while (iVar2 != 0);
          local_20 = local_30 + local_20 + -1;
        }
        *puVar4 = 0;
        uVar1 = local_28;
        local_34 = local_20 + 1;
      }
      else {
        local_34 = local_30;
      }
    }
    else {
      uVar1 = 0;
      local_34 = 0;
    }
    local_38 = local_24;
  }
  *param_1 = uVar1;
  param_1[1] = local_38;
  param_1[2] = local_34;
  param_1[3] = local_30;
  return;
}

