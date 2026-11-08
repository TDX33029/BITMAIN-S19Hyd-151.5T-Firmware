// FUN_015fb108 @ 015fb108 size=400 calls_out=3 calls_in=2
// strings: 

void FUN_015fb108(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *unaff_r11;
  undefined4 local_58;
  undefined4 *local_54;
  uint *local_50;
  uint *local_4c;
  uint local_48;
  uint *local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  
  puVar6 = (uint *)*param_2;
  iVar2 = param_2[1];
  uVar5 = param_2[3];
  if (iVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 4;
    unaff_r11 = puVar6 + iVar2 * -3 + -3;
    param_2 = (undefined4 *)(iVar2 * 0xd + 0x11);
  }
  uVar8 = ~*puVar6 & 0x80808080;
  puVar4 = puVar6 + 1;
  uVar1 = uVar5;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = uVar5 + 1 >> 1;
  }
  if (*(uint *)(param_1 + 8) < uVar1) {
    FUN_015d63b8(param_1,uVar1,param_1 + 0x10);
  }
  local_58 = uVar7;
  local_54 = param_2;
  local_50 = unaff_r11;
  local_4c = puVar6;
  local_48 = uVar8;
  local_44 = puVar4;
  local_40 = (int)puVar6 + iVar2 + 1;
  local_3c = uVar5;
  while( true ) {
    uVar1 = 0;
    if (uVar5 == 0) break;
    puVar3 = puVar4;
    uVar9 = uVar8;
    if (uVar8 == 0) {
      do {
        puVar4 = puVar3 + 1;
        uVar1 = *puVar3;
        puVar6 = puVar6 + -0xc;
        puVar3 = puVar4;
      } while ((uVar1 & 0x80808080) == 0x80808080);
      uVar9 = uVar1 & 0x80808080 ^ 0x80808080;
      local_4c = puVar6;
      local_44 = puVar4;
    }
    uVar1 = uVar5 - 1;
    uVar8 = uVar9 - 1 & uVar9;
    uVar5 = LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                    uVar9 >> 0x18);
    iVar2 = (uVar5 >> 3) * -2 - (uVar5 >> 3);
    local_38 = puVar6[iVar2 + -2];
    local_34 = puVar6[iVar2 + -1];
    local_48 = uVar8;
    if (puVar6[iVar2 + -3] == 0x80000000) break;
    local_30 = puVar6[iVar2 + -3];
    local_2c = local_38;
    uStack_28 = local_34;
    FUN_015dcc90(param_1,&local_30);
    uVar5 = uVar1;
  }
  local_3c = uVar1;
  FUN_015d243c(&local_58);
  return;
}

