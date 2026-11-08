// FUN_01a646f4 @ 01a646f4 size=1220 calls_out=10 calls_in=1
// strings: 

void FUN_01a646f4(uint *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint unaff_r7;
  int local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 local_90;
  int local_88;
  uint local_84;
  int local_80;
  int iStack_7c;
  uint uStack_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  while( true ) {
    FUN_015a6508(&local_d8,param_3);
    uVar1 = local_cc;
    uVar3 = local_d0;
    if (local_d8 == 1) {
      *param_1 = local_d4;
      param_1[1] = local_d0;
      param_1[2] = local_cc;
      return;
    }
    if ((local_d4 & 1) == 0) {
      *param_2 = 1;
      param_2[1] = param_4;
      FUN_015a60ec(&local_d8,param_3);
      FUN_01a64694(param_2 + 2);
      param_2[2] = local_d8;
      param_2[3] = local_d4;
      param_2[4] = local_d0;
      param_2[5] = local_cc;
      param_2[6] = iStack_c8;
      param_2[7] = uStack_c4;
      *param_1 = 0x80000003;
      param_1[1] = (uint)param_2;
      return;
    }
    uVar5 = param_3[1];
    if ((local_cc < local_d0) || (uVar5 < local_cc)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(local_d0,local_cc,uVar5,&DAT_01d2cad8);
    }
    if (local_cc - local_d0 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(1,local_cc - local_d0,&DAT_01d2cae8);
    }
    iVar2 = *param_3;
    pcVar4 = (char *)(iVar2 + local_d0);
    if (pcVar4[1] == '*') {
      if (local_cc != uVar5) {
        *param_1 = 0x80000002;
        return;
      }
      if (local_d0 != 0) {
        local_84 = local_d0;
        local_80 = param_3[2];
        iStack_7c = param_3[3];
        uStack_78 = param_3[4];
        local_88 = iVar2;
        FUN_015a60ec(&local_d8,&local_88);
        FUN_01a64694(param_2 + 2);
        param_2[2] = local_d8;
        param_2[3] = local_d4;
        param_2[4] = local_d0;
        param_2[5] = local_cc;
        param_2[6] = iStack_c8;
        param_2[7] = uStack_c4;
        FUN_015a6258(&local_d8,param_3,uVar3);
        *param_3 = local_d8;
        param_3[1] = local_d4;
        param_3[2] = local_d0;
        param_3[3] = local_cc;
        param_3[4] = iStack_c8;
      }
      FUN_015a60ec(&local_d0,param_3);
      local_90 = 0x200;
      local_b0 = 0;
      local_b8 = 0;
      local_a4 = 0;
      local_ac = 0;
      local_98 = 0;
      local_a0 = 0;
      local_a8 = 4;
      local_9c = 4;
      local_94 = 1;
      local_b4 = 1;
      local_d8 = 1;
      local_d4 = param_4;
      FUN_019bb7e0(0,1);
      FUN_0134c054(0,4,4,4);
      uVar3 = FUN_01a64bdc(param_2,&local_d8);
      *(undefined1 *)(param_2 + 0x12) = 1;
      if ((uint)param_2[0xd] <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar3,param_2[0xd],&DAT_01d2caf8);
      }
      iVar2 = param_2[0xc];
      *param_1 = 0x80000003;
      param_1[1] = uVar3 * 0x4c + iVar2;
      return;
    }
    if (*pcVar4 != '{') break;
    if (local_d0 != 0) {
      if (uVar5 < local_d0) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_d0,uVar5,&DAT_01cfc5f8);
      }
      local_80 = param_3[2];
      iStack_7c = param_3[3];
      uStack_78 = param_3[4];
      local_84 = local_d0;
      local_88 = iVar2;
      FUN_015a60ec(&local_d8,&local_88);
      FUN_01a64694(param_2 + 2);
      param_2[2] = local_d8;
      param_2[3] = local_d4;
      param_2[4] = local_d0;
      param_2[5] = local_cc;
      param_2[6] = iStack_c8;
      param_2[7] = uStack_c4;
      FUN_015a6258(&local_d8,param_3,uVar3);
      *param_3 = local_d8;
      param_3[1] = local_d4;
      param_3[2] = local_d0;
      param_3[3] = local_cc;
      param_3[4] = iStack_c8;
      uVar5 = param_3[1];
    }
    unaff_r7 = uVar1 - uVar3;
    if (uVar1 < uVar3) {
      unaff_r7 = 0;
    }
    if (uVar5 < unaff_r7) goto LAB_01a64b54;
    local_88 = *param_3;
    local_80 = param_3[2];
    iStack_7c = param_3[3];
    uStack_78 = param_3[4];
    local_84 = unaff_r7;
    FUN_015a60ec(&local_d0,&local_88);
    local_90 = 0x100;
    local_a8 = 4;
    local_9c = 4;
    local_94 = 0;
    local_b0 = 0;
    local_b4 = 1;
    local_b8 = 0;
    local_a4 = 0;
    local_ac = 0;
    local_98 = 0;
    local_a0 = 0;
    local_d8 = 0;
    FUN_019bb7e0(0,1);
    FUN_0134c054(0,4,4,4);
    uVar3 = FUN_01a64bdc(param_2,&local_d8);
    *(undefined1 *)(param_2 + 0x12) = 1;
    if ((uint)param_2[0xd] <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,param_2[0xd],&DAT_01d2cb08);
    }
    puVar6 = (undefined4 *)(uVar3 * 0x4c + param_2[0xc]);
    puVar6[0x11] = puVar6[0x11] + 1;
    if (uVar5 <= unaff_r7) {
      *puVar6 = 1;
      puVar6[1] = param_4;
      *param_1 = 0x80000003;
      param_1[1] = (uint)puVar6;
      return;
    }
    FUN_015a6258(&local_88,param_3,unaff_r7);
    unaff_r7 = uStack_78;
    *param_3 = local_88;
    param_3[1] = local_84;
    param_3[2] = local_80;
    param_3[3] = iStack_7c;
    param_3[4] = uStack_78;
    local_28 = 0x300;
    local_58 = 4;
    local_40 = 4;
    local_34 = 4;
    local_2c = 1;
    local_54 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 1;
    local_68 = 0;
    local_48 = 0;
    local_4c = 1;
    local_50 = 0;
    local_3c = 0;
    local_44 = 0;
    local_30 = 0;
    local_38 = 0;
    local_70[0] = 0;
    uVar3 = FUN_01a64bdc(puVar6,local_70);
    if ((uint)puVar6[0xd] <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,puVar6[0xd],&DAT_01d2cb18);
    }
    param_2 = (undefined4 *)(uVar3 * 0x4c + puVar6[0xc]);
  }
  FUN_0160e9f8(0,pcVar4,"{",&DAT_01d2cb28);
LAB_01a64b54:
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(0,unaff_r7,uVar5,&DAT_01cfc5f8);
}

