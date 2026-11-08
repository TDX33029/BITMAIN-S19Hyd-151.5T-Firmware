// FUN_0155e2d0 @ 0155e2d0 size=380 calls_out=4 calls_in=0
// strings: 

void FUN_0155e2d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined4 *local_80;
  uint local_74;
  int local_70;
  uint local_6c;
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
  
  uVar6 = *(uint *)(param_2 + 8);
  uVar5 = 0;
  bVar11 = 0x3fffffe < uVar6;
  bVar10 = uVar6 == 0x3ffffff;
  uVar1 = uVar6 * 0x40;
  if (uVar6 < 0x4000000) {
    bVar11 = 0x7ffffffb < uVar1;
    bVar10 = uVar1 == 0x7ffffffc;
    local_80 = param_1;
  }
  if (!(!bVar11 || bVar10)) {
LAB_0155e2fc:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,uVar1);
  }
  uVar9 = 0;
  if (uVar1 == 0) {
    iVar3 = 4;
    local_74 = 0;
  }
  else {
    uVar5 = 4;
    iVar3 = FUN_01298504(uVar1,4);
    local_74 = uVar6;
    if (iVar3 == 0) goto LAB_0155e2fc;
  }
  local_6c = 0;
  if (uVar6 != 0) {
    iVar7 = *(int *)(param_2 + 4);
    iVar8 = uVar6 * 0x14;
    local_70 = iVar3;
    do {
      uVar9 = local_6c;
      FUN_015737d4(&local_68,iVar7,param_3,param_4,param_5,param_6);
      if (uVar9 == local_74) {
        FUN_0155ab78(&local_74);
        iVar3 = local_70;
      }
      puVar4 = (undefined4 *)(iVar3 + uVar9 * 0x40);
      iVar7 = iVar7 + 0x14;
      *puVar4 = local_68;
      puVar4[1] = uStack_64;
      puVar4[2] = uStack_60;
      puVar4[3] = uStack_5c;
      puVar4[4] = uStack_58;
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + -0x14;
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
      local_6c = uVar9;
    } while (iVar8 != 0);
  }
  iVar8 = uVar9 << 6;
  iVar7 = iVar3;
  do {
    if (iVar8 == 0) {
      *local_80 = 0x80000000;
      local_80[1] = local_74;
      local_80[2] = iVar3;
      local_80[3] = uVar9;
      local_80[4] = 0;
      return;
    }
    pcVar2 = (char *)(iVar7 + 0x3c);
    iVar8 = iVar8 + -0x40;
    iVar7 = iVar7 + 0x40;
  } while (*pcVar2 != '\0');
  *local_80 = 0;
  local_80[1] = 4;
  local_80[2] = 0;
  local_80[3] = local_74;
  local_80[4] = iVar3;
  local_80[5] = uVar9;
  local_80[6] = 0;
  return;
}

