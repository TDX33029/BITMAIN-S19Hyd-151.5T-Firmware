// FUN_01a4d818 @ 01a4d818 size=1068 calls_out=14 calls_in=2
// strings: assertion failed: root.is_empty()

void FUN_01a4d818(int *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint local_238 [24];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint local_188;
  uint local_184;
  uint local_17c [2];
  uint local_174;
  int local_170;
  int local_16c;
  uint local_168;
  undefined4 local_120 [2];
  undefined1 auStack_118 [104];
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  uint *local_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  local_1cc = 0x80000003;
  local_1d8 = 0x80000003;
  FUN_01a4a968(local_238);
  local_b0 = local_1d8;
  local_ac = uStack_1d4;
  local_a8 = uStack_1d0;
  uStack_a4 = local_1cc;
  uStack_a0 = uStack_1c8;
  uStack_9c = uStack_1c4;
  puVar1 = (uint *)((uint)&local_98 | 4);
  *puVar1 = local_238[0];
  puVar1[1] = local_238[1];
  puVar1[2] = local_238[2];
  puVar1[3] = local_238[3];
  puVar1[4] = local_238[4];
  puVar1[5] = local_238[5];
  puVar1[6] = local_238[6];
  puVar1[7] = local_238[7];
  puVar1[8] = local_238[8];
  puVar1[9] = local_238[9];
  puVar1[10] = local_238[10];
  puVar1[0xb] = local_238[0xb];
  FUN_01bed4e2(local_238,param_2 + 0x60,0x60);
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(int *)(param_2 + 100) = local_98;
  *(uint **)(param_2 + 0x68) = local_94;
  *(int *)(param_2 + 0x6c) = local_90;
  *(int *)(param_2 + 0x70) = iStack_8c;
  *(int *)(param_2 + 0x74) = local_88;
  *(int *)(param_2 + 0x78) = local_84;
  *(undefined4 *)(param_2 + 0x7c) = local_80;
  *(undefined4 *)(param_2 + 0x80) = uStack_7c;
  *(undefined4 *)(param_2 + 0x84) = local_78;
  *(undefined4 *)(param_2 + 0x88) = uStack_74;
  *(undefined4 *)(param_2 + 0x8c) = uStack_70;
  *(undefined4 *)(param_2 + 0x90) = uStack_6c;
  *(undefined4 *)(param_2 + 0x94) = uStack_68;
  *(undefined4 *)(param_2 + 0x98) = local_b0;
  *(int *)(param_2 + 0x9c) = local_ac;
  *(int *)(param_2 + 0xa0) = local_a8;
  *(undefined4 *)(param_2 + 0xa4) = uStack_a4;
  *(undefined4 *)(param_2 + 0xa8) = uStack_a0;
  *(undefined4 *)(param_2 + 0xac) = uStack_9c;
  *(undefined2 *)(param_2 + 0xbc) = 0;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  local_b0 = *(undefined4 *)(param_2 + 0xcc);
  iVar4 = *(int *)(param_2 + 0xd0);
  iVar5 = *(int *)(param_2 + 0xd4);
  *(undefined4 *)(param_2 + 0xcc) = 0;
  *(undefined4 *)(param_2 + 0xd0) = 4;
  *(undefined4 *)(param_2 + 0xd4) = 0;
  local_ac = iVar4;
  local_a8 = iVar5;
  if (iVar5 == 0) {
    iVar4 = FUN_01a55be4(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: root.is_empty()",0x21,&DAT_01d2c1a4);
    }
    iVar4 = 0;
    do {
      uVar6 = local_238[iVar4];
      local_238[iVar4] = *(uint *)(param_2 + iVar4 * 4);
      *(uint *)(param_2 + iVar4 * 4) = uVar6;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x18);
LAB_01a4d9b8:
    *param_1 = -0x7ffffffd;
    FUN_01a4c510(&local_b0);
    goto LAB_01a4daa8;
  }
  iVar7 = iVar5 + -1;
  if (*(char *)(param_2 + 0xdc) == '\0') {
    FUN_01a4dcbc(&local_98,param_2,iVar4,iVar7,0);
    if (local_98 == -0x7ffffffd) {
      FUN_01a54fec(&local_170,local_94,iVar4 + iVar7 * 0x48);
      if (local_170 != -0x80000000) {
        FUN_01bed4e2(auStack_118,local_238,0x60);
        local_120[0] = 2;
        FUN_01a4be0c(&local_170,local_120);
        goto LAB_01a4dbc4;
      }
      if (*(uint *)(local_16c + 8) <= local_168) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(local_168,*(uint *)(local_16c + 8),&DAT_01d2c114);
      }
      puVar1 = (uint *)(*(int *)(local_16c + 4) + local_168 * 0xc0);
      uVar6 = *puVar1;
      bVar8 = uVar6 == 2;
      if (bVar8) {
        uVar6 = (uint)(byte)puVar1[0x19];
      }
      if (!bVar8 || uVar6 != 1) {
        FUN_01a4dee0(&local_98,iVar4,iVar5,iVar7);
        *param_1 = local_98;
        param_1[1] = (int)local_94;
        param_1[2] = local_90;
        param_1[3] = iStack_8c;
        param_1[4] = local_88;
        param_1[5] = local_84;
        goto LAB_01a4daa0;
      }
      iVar4 = 0;
      do {
        uVar6 = local_238[iVar4];
        local_238[iVar4] = puVar1[iVar4 + 2];
        puVar1[iVar4 + 2] = uVar6;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x18);
      goto LAB_01a4d9b8;
    }
LAB_01a4da8c:
    param_1[2] = local_90;
    param_1[3] = iStack_8c;
    param_1[4] = local_88;
    param_1[5] = local_84;
    *param_1 = local_98;
    param_1[1] = (int)local_94;
  }
  else {
    FUN_01a4dcbc(&local_98,param_2,iVar4,iVar7,0);
    if (local_98 != -0x7ffffffd) goto LAB_01a4da8c;
    FUN_01a54fec(&local_1d8,local_94,iVar4 + iVar7 * 0x48);
    local_80 = 0;
    local_88 = 0;
    local_94 = (uint *)0x0;
    local_84 = 8;
    local_98 = 3;
    piVar2 = (int *)FUN_01a55af4(&local_1d8,&local_98);
    if (*piVar2 == 3) {
      puVar1 = (uint *)(piVar2 + 1);
LAB_01a4db10:
      FUN_01bed4e2(&local_90,local_238,0x60);
      local_98 = 2;
      uVar6 = puVar1[5];
      if (uVar6 == puVar1[3]) {
        FUN_01a54bd8();
      }
      FUN_01bed4e2(puVar1[4] + uVar6 * 0x70,&local_98,0x70);
      puVar1[5] = uVar6 + 1;
      if (uVar6 == 0xffffffff) {
        local_188 = 0;
        uVar6 = extraout_r2;
LAB_01a4db6c:
        uVar3 = 0;
      }
      else {
        FUN_01a56a10(&local_188,puVar1[4]);
        uVar6 = extraout_r2_00;
        if (puVar1[5] == 0) goto LAB_01a4db6c;
        uVar3 = 0;
        uVar6 = puVar1[4];
        if (puVar1[4] + puVar1[5] * 0x70 != 0x70) {
          FUN_01a56a10(local_17c);
          uVar3 = local_17c[0];
          uVar6 = local_174;
        }
      }
      puVar1[2] = uVar6;
      *puVar1 = local_188 & uVar3;
      puVar1[1] = local_184;
LAB_01a4dbc4:
      *param_1 = -0x7ffffffd;
      FUN_01a4c510(&local_b0);
      return;
    }
    FUN_01a4dee0(&local_98,iVar4,iVar5,iVar7);
    puVar1 = local_94;
    if (local_98 == -0x7ffffffd) goto LAB_01a4db10;
    param_1[2] = local_90;
    param_1[3] = iStack_8c;
    param_1[4] = local_88;
    param_1[5] = local_84;
    *param_1 = local_98;
    param_1[1] = (int)local_94;
  }
LAB_01a4daa0:
  FUN_01a4c510(&local_b0);
LAB_01a4daa8:
  FUN_01a4caac(local_238);
  return;
}

