// FUN_0158d9d0 @ 0158d9d0 size=672 calls_out=6 calls_in=0
// strings: 

void FUN_0158d9d0(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  bool bVar14;
  bool bVar15;
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_34;
  
  if (*param_3 != '\x04') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar3 = *(uint *)(param_2 + 0x14);
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar10 = 0;
  uVar7 = uVar9 - uVar3;
  if (uVar9 < uVar3) {
    uVar7 = 0;
  }
  bVar15 = 0x3fffffe < uVar7;
  bVar14 = uVar7 == 0x3ffffff;
  uVar6 = uVar7 * 0x40;
  if (uVar7 < 0x4000000) {
    bVar15 = 0x7ffffffb < uVar6;
    bVar14 = uVar6 == 0x7ffffffc;
  }
  if (!bVar15 || bVar14) {
    iVar12 = 0;
    if (uVar6 == 0) {
      iVar2 = 4;
      uVar7 = 0;
    }
    else {
      uVar10 = 4;
      iVar2 = FUN_01298504(uVar6,4);
      if (iVar2 == 0) goto LAB_0158da18;
    }
    iVar8 = *(int *)(param_3 + 8);
    iVar5 = iVar8 + uVar9 * 0x18;
    local_90 = 0;
    local_84 = 0;
    uVar6 = uVar3;
    iVar4 = 1;
    local_8c = uVar7;
    local_88 = iVar2;
    do {
      iVar11 = iVar4;
      uVar7 = iVar11 - 1;
      if (uVar6 == 0) {
        if (iVar8 == iVar5) goto code_r0x0158dbd4;
      }
      else {
        if (((uint)(iVar5 - iVar8) >> 3) * -0x55555555 <= uVar6) goto code_r0x0158dbd4;
        local_90 = uVar6 + local_90;
        iVar8 = iVar8 + uVar6 * 0x18;
      }
      local_3c = local_90;
      local_40 = 0x80000001;
      local_34 = param_4;
      FUN_015737d4(&local_80,param_2,iVar8,&local_40,param_5,param_6);
      if (uVar7 == local_8c) {
        FUN_0155ab78(&local_8c);
        iVar2 = local_88;
      }
      local_90 = local_90 + 1;
      puVar13 = (undefined4 *)(iVar2 + iVar12);
      iVar8 = iVar8 + 0x18;
      iVar12 = iVar12 + 0x40;
      *puVar13 = local_80;
      puVar13[1] = local_7c;
      puVar13[2] = local_78;
      puVar13[3] = local_74;
      puVar13[4] = local_70;
      puVar13[5] = local_6c;
      puVar13[6] = local_68;
      puVar13[7] = uStack_64;
      puVar13[8] = uStack_60;
      puVar13[9] = uStack_5c;
      puVar13[10] = local_58;
      puVar13[0xb] = uStack_54;
      puVar13[0xc] = uStack_50;
      puVar13[0xd] = uStack_4c;
      puVar13[0xe] = uStack_48;
      puVar13[0xf] = uStack_44;
      uVar6 = 0;
      iVar4 = iVar11 + 1;
      local_84 = iVar11;
    } while( true );
  }
LAB_0158da18:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar10,uVar6);
code_r0x0158dbd4:
  iVar4 = iVar2;
  do {
    if (iVar12 == 0) {
      local_7c = local_8c;
      local_80 = 0x80000000;
      local_70 = 0;
      local_78 = iVar2;
      local_74 = uVar7;
      goto LAB_0158dc30;
    }
    pcVar1 = (char *)(iVar4 + 0x3c);
    iVar12 = iVar12 + -0x40;
    iVar4 = iVar4 + 0x40;
  } while (*pcVar1 != '\0');
  local_74 = local_8c;
  local_80 = 0;
  local_68 = 0;
  local_78 = 0;
  local_7c = 4;
  local_70 = iVar2;
  local_6c = uVar7;
LAB_0158dc30:
  local_40 = CONCAT31(CONCAT21(local_40._2_2_,uVar3 < uVar9),1);
  uVar10 = FUN_01531708(&local_40);
  FUN_0155ff10(&local_80,uVar10);
  *param_1 = local_80;
  param_1[1] = local_7c;
  param_1[2] = local_78;
  param_1[3] = local_74;
  param_1[4] = local_70;
  param_1[5] = local_6c;
  param_1[6] = local_68;
  return;
}

