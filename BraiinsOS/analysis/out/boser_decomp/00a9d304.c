// FUN_00a9d304 @ 00a9d304 size=452 calls_out=4 calls_in=1
// strings: 

void FUN_00a9d304(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *unaff_r4;
  int unaff_r6;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 local_70;
  int iStack_6c;
  uint *puStack_68;
  uint *local_64;
  uint local_60;
  uint *local_5c;
  int iStack_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  int local_30 [3];
  
  puVar1 = (uint *)*param_2;
  iVar7 = param_2[1];
  uVar3 = param_2[3];
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    unaff_r4 = puVar1 + iVar7 * -6 + -6;
    unaff_r6 = iVar7 * 0x19 + 0x1d;
    uVar8 = 4;
  }
  uVar5 = ~*puVar1 & 0x80808080;
  puVar9 = puVar1 + 1;
  uVar6 = uVar3;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar6 = uVar3 + 1 >> 1;
  }
  if (*(uint *)(param_1 + 8) < uVar6) {
    FUN_01aa37a0(param_1,uVar6,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  puVar4 = &local_38;
  local_70 = uVar8;
  iStack_6c = unaff_r6;
  puStack_68 = unaff_r4;
  local_64 = puVar1;
  local_60 = uVar5;
  local_5c = puVar9;
  iStack_58 = (int)puVar1 + iVar7 + 1;
  local_54 = uVar3;
  while( true ) {
    uVar6 = 0;
    if (uVar3 == 0) break;
    uVar2 = uVar5;
    puVar4 = puVar9;
    if (uVar5 == 0) {
      do {
        puVar9 = puVar4 + 1;
        uVar6 = *puVar4;
        puVar1 = puVar1 + -0x18;
        puVar4 = puVar9;
      } while ((uVar6 & 0x80808080) == 0x80808080);
      uVar2 = uVar6 & 0x80808080 ^ 0x80808080;
      local_64 = puVar1;
      local_5c = puVar9;
    }
    uVar6 = uVar3 - 1;
    uVar5 = uVar2 - 1 & uVar2;
    uVar3 = (uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8
                          | uVar2 >> 0x18) >> 3;
    puVar4 = puVar1 + uVar3 * -6 + -5;
    local_50 = *puVar4;
    local_4c = puVar1[uVar3 * -6 + -4];
    uStack_48 = puVar1[uVar3 * -6 + -3];
    uStack_44 = puVar1[uVar3 * -6 + -2];
    uStack_40 = puVar1[uVar3 * -6 + -1];
    local_60 = uVar5;
    if (puVar1[uVar3 * -6 + -6] == 0x80000000) break;
    local_3c = puVar1[uVar3 * -6 + -6];
    local_38 = local_50;
    uStack_34 = local_4c;
    FUN_01aa42f8(local_30,param_1,&local_3c,&uStack_48);
    puVar4 = extraout_r1;
    if (local_30[0] != -0x80000000) {
      FUN_019bb7e0();
      puVar4 = extraout_r1_00;
    }
    uVar3 = uVar6;
  }
  local_54 = uVar6;
  FUN_00763280(&local_70,puVar4);
  return;
}

