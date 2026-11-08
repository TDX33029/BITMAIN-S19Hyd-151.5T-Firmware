// FUN_016d5830 @ 016d5830 size=844 calls_out=10 calls_in=1
// strings: 

void FUN_016d5830(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  int local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 *local_94;
  int local_90;
  int local_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  byte local_2c;
  
  local_114 = FUN_016d4a28(param_2);
  if (local_114 != 0x28) {
    FUN_016f4e14(&local_114,&DAT_0056f71c,&DAT_01d09d18);
LAB_016d5b78:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16d5b78);
    (*pcVar1)();
  }
  FUN_016da6b8(&local_98,param_2);
  local_110 = local_88;
  uStack_10c = iStack_84;
  uStack_108 = iStack_80;
  uStack_104 = iStack_7c;
  uStack_100 = iStack_78;
  uStack_fc = uStack_74;
  local_f8 = local_70;
  uStack_f4 = uStack_6c;
  uStack_f0 = uStack_68;
  uStack_ec = uStack_64;
  uStack_e8 = uStack_60;
  uStack_e4 = uStack_5c;
  if (local_98 == &DAT_80000004) {
    *param_1 = local_94;
    param_1[1] = local_90;
    param_1[2] = local_8c;
    param_1[3] = local_88;
    param_1[4] = iStack_84;
    param_1[5] = iStack_80;
    param_1[6] = iStack_7c;
    param_1[7] = iStack_78;
    param_1[8] = uStack_74;
    param_1[9] = local_70;
    param_1[10] = uStack_6c;
    param_1[0xb] = uStack_68;
    param_1[0xc] = uStack_64;
    param_1[0xd] = uStack_60;
    param_1[0xe] = uStack_5c;
    param_1[0xf] = local_58;
    FUN_016bedfc(param_3);
    return;
  }
  if (local_98 == (undefined1 *)0x80000003) {
    if (local_8c != 0) {
      bVar7 = 0;
      iVar3 = local_8c * 0x1c;
      pcVar6 = (char *)(local_90 + 0x18);
      do {
        bVar14 = 1;
        if ((*pcVar6 != '\a') && (bVar14 = bVar7, *pcVar6 == '\x06')) {
          *(byte *)(*param_2 + 100) = ~bVar7 & 1;
          break;
        }
        bVar7 = bVar14;
        iVar3 = iVar3 + -0x1c;
        pcVar6 = pcVar6 + 0x1c;
      } while (iVar3 != 0);
    }
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x3c);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x3c);
    }
    *puVar4 = local_94;
    puVar4[1] = local_90;
    puVar4[2] = local_8c;
    puVar4[3] = local_110;
    puVar4[4] = uStack_10c;
    puVar4[5] = uStack_108;
    puVar4[6] = uStack_104;
    puVar4[7] = uStack_100;
    puVar4[8] = uStack_fc;
    puVar4[9] = local_f8;
    puVar4[10] = uStack_f4;
    puVar4[0xb] = uStack_f0;
    puVar4[0xc] = uStack_ec;
    puVar4[0xd] = uStack_e8;
    puVar4[0xe] = uStack_e4;
    local_98 = (undefined1 *)0x1;
    iVar3 = param_3[2];
    if (iVar3 == *param_3) {
      local_94 = puVar4;
      FUN_015f5ab8(param_3);
    }
    param_3[2] = iVar3 + 1;
    puVar5 = (undefined4 *)(param_3[1] + iVar3 * 8);
    *puVar5 = 1;
    puVar5[1] = puVar4;
    iVar3 = param_3[1];
    iVar9 = param_3[2];
    iVar12 = param_3[3];
    param_1[1] = *param_3;
    param_1[2] = iVar3;
    param_1[3] = iVar9;
    param_1[4] = iVar12;
    iVar3 = param_3[5];
    iVar9 = param_3[6];
    iVar12 = param_3[7];
    iVar13 = param_3[8];
    param_1[5] = param_3[4];
    param_1[6] = iVar3;
    param_1[7] = iVar9;
    param_1[8] = iVar12;
    param_1[9] = iVar13;
    *param_1 = 0x22;
  }
  else {
    local_d4 = local_8c;
    local_d8 = local_90;
    local_dc = local_94;
    local_e0 = local_98;
    local_d0 = local_88;
    uStack_cc = iStack_84;
    uStack_c8 = iStack_80;
    uStack_c4 = iStack_7c;
    uStack_c0 = iStack_78;
    uStack_bc = uStack_74;
    local_b8 = local_70;
    uStack_b4 = uStack_6c;
    uStack_b0 = uStack_68;
    uStack_ac = uStack_64;
    uStack_a8 = uStack_60;
    uStack_a4 = uStack_5c;
    iVar3 = *param_2;
    local_9c = local_54;
    local_a0 = local_58;
    bVar7 = *(byte *)(iVar3 + 100);
    bVar14 = bVar7;
    if ((local_98 == (undefined1 *)0x80000002) && (local_8c != 0)) {
      bVar8 = 0;
      local_8c = local_8c * 0x1c;
      pcVar6 = (char *)(local_90 + 0x18);
      do {
        bVar2 = 1;
        if ((*pcVar6 != '\a') && (bVar2 = bVar8, *pcVar6 == '\x06')) {
          bVar14 = bVar8 ^ 1;
          break;
        }
        bVar8 = bVar2;
        local_8c = local_8c + -0x1c;
        pcVar6 = pcVar6 + 0x1c;
      } while (local_8c != 0);
    }
    if (*(int *)(iVar3 + 0x10) != 0) {
      FUN_01306fc8(&DAT_01d09d08);
      goto LAB_016d5b78;
    }
    *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
    local_98 = (undefined1 *)*param_3;
    local_94 = (undefined4 *)param_3[1];
    local_90 = param_3[2];
    local_8c = param_3[3];
    local_88 = param_3[4];
    iStack_84 = param_3[5];
    iStack_80 = param_3[6];
    iStack_7c = param_3[7];
    iStack_78 = param_3[8];
    FUN_01bed4e2(&uStack_74,&local_e0,0x48);
    iVar9 = *(int *)(iVar3 + 0x1c);
    local_2c = bVar7;
    if (iVar9 == *(int *)(iVar3 + 0x14)) {
      FUN_016f53d8();
    }
    FUN_01bed4e2(*(int *)(iVar3 + 0x18) + iVar9 * 0x70,&local_98,0x70);
    *(int *)(iVar3 + 0x1c) = iVar9 + 1;
    *(byte *)(iVar3 + 100) = bVar14 & 1;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    uVar10 = *(undefined4 *)(iVar3 + 0x54);
    uVar11 = *(undefined4 *)(iVar3 + 0x58);
    param_1[7] = *(undefined4 *)(iVar3 + 0x50);
    param_1[8] = uVar10;
    param_1[9] = uVar11;
    uVar10 = *(undefined4 *)(iVar3 + 0x54);
    uVar11 = *(undefined4 *)(iVar3 + 0x58);
    param_1[4] = *(undefined4 *)(iVar3 + 0x50);
    param_1[5] = uVar10;
    param_1[6] = uVar11;
    *param_1 = 0x22;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
  }
  return;
}

