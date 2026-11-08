// FUN_0155a914 @ 0155a914 size=552 calls_out=7 calls_in=0
// strings: 

void FUN_0155a914(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  uint local_b0;
  int local_ac;
  int local_a8;
  uint local_a4 [3];
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [24];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 == '\x05') {
    uVar6 = *(uint *)(param_3 + 0xc);
    uVar7 = 0;
    bVar12 = 0x3fffffe < uVar6;
    bVar11 = uVar6 == 0x3ffffff;
    uVar9 = uVar6 * 0x40;
    if (uVar6 < 0x4000000) {
      bVar12 = 0x7ffffffb < uVar9;
      bVar11 = uVar9 == 0x7ffffffc;
    }
    if (bVar12 && !bVar11) {
LAB_0155a950:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,uVar9);
    }
    iVar10 = 0;
    if (uVar9 == 0) {
      iVar2 = 4;
      local_b0 = 0;
    }
    else {
      uVar7 = 4;
      iVar2 = FUN_01298504(uVar9,4);
      local_b0 = uVar6;
      if (iVar2 == 0) goto LAB_0155a950;
    }
    local_a4[2] = *(uint *)(param_3 + 4);
    local_98 = *(undefined4 *)(param_3 + 8);
    local_84 = uVar6;
    if (local_a4[2] == 0) {
      local_84 = 0;
    }
    local_a4[0] = (uint)(local_a4[2] != 0);
    iVar8 = 1;
    local_a8 = 0;
    puVar5 = (undefined4 *)((uint)local_80 | 4);
    local_90 = 0;
    local_a4[1] = 0;
    local_ac = iVar2;
    local_94 = local_a4[0];
    local_8c = local_a4[2];
    local_88 = local_98;
    while( true ) {
      iVar3 = FUN_01a41998(local_a4);
      uVar9 = iVar8 - 1;
      if (iVar3 == 0) break;
      FUN_006666fc(&local_68,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
      *puVar5 = local_68;
      puVar5[1] = uStack_64;
      puVar5[2] = uStack_60;
      local_80[0] = 3;
      FUN_015737d4(&local_68,param_2,local_80,param_4,param_5,param_6);
      if (uVar9 == local_b0) {
        FUN_0155ab78(&local_b0);
        iVar2 = local_ac;
      }
      puVar4 = (undefined4 *)(iVar2 + iVar10);
      *puVar4 = local_68;
      puVar4[1] = uStack_64;
      puVar4[2] = uStack_60;
      puVar4[3] = uStack_5c;
      puVar4[4] = uStack_58;
      puVar4[5] = local_54;
      puVar4[6] = uStack_50;
      puVar4[7] = uStack_4c;
      puVar4[8] = uStack_48;
      puVar4[9] = uStack_44;
      puVar4[10] = local_40;
      puVar4[0xb] = uStack_3c;
      puVar4[0xc] = uStack_38;
      puVar4[0xd] = uStack_34;
      puVar4[0xe] = uStack_30;
      puVar4[0xf] = uStack_2c;
      local_a8 = iVar8;
      FUN_00e0febc(local_80);
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x40;
    }
    iVar8 = iVar2;
    do {
      if (iVar10 == 0) {
        param_1[1] = local_b0;
        param_1[2] = iVar2;
        param_1[3] = uVar9;
        *param_1 = 0x80000000;
        param_1[4] = 0;
        return;
      }
      pcVar1 = (char *)(iVar8 + 0x3c);
      iVar10 = iVar10 + -0x40;
      iVar8 = iVar8 + 0x40;
    } while (*pcVar1 != '\0');
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = local_b0;
    param_1[4] = iVar2;
    param_1[5] = uVar9;
    param_1[6] = 0;
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

