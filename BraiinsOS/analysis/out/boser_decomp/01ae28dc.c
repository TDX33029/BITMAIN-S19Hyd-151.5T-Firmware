// FUN_01ae28dc @ 01ae28dc size=1304 calls_out=11 calls_in=2
// strings: BUG: stack should be non-empty | BUG: list/path stacks out of sync | BUG: cannot pop from empty stackTLS_SRP_SHA_WITH_AES_256_CBC_SHAvideo/vnd.ms-playready.media.pyvServerNameMustContainOneHostName

void FUN_01ae28dc(uint *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *extraout_r1;
  int *piVar6;
  uint uVar7;
  uint *extraout_r3;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint local_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  uint uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8 [3];
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint uStack_78;
  uint uStack_74;
  
  uVar12 = param_2[0x13];
  uVar15 = param_2[0x14];
  iVar9 = param_2[0x15];
  param_2[0x13] = 0x80000000;
  puVar1 = (uint *)((uint)&local_98 | 4);
  puVar2 = param_1 + 2;
  if (uVar12 != 0x80000000) {
    if (*(char *)((int)param_2 + 0x27) != '\0') {
      FUN_019adea8(&local_98,uVar15,iVar9);
      if (local_98 != (undefined1 *)0x0) {
        uVar7 = *puVar1;
        uVar10 = puVar1[1];
        local_e0 = uVar7;
        local_dc = uVar10;
        FUN_01ae5434(&local_98,uVar15,iVar9);
        *puVar2 = (uint)local_98;
        param_1[3] = local_94;
        param_1[5] = uVar7;
        *param_1 = 1;
        param_1[1] = 0x80000000;
        param_1[7] = 0;
        param_1[6] = uVar10;
        param_1[4] = local_90;
        FUN_0134bd64(uVar12,uVar15);
        return;
      }
      param_2[1] = 0;
      *param_2 = 1;
      uVar7 = puVar1[2];
      param_2[2] = puVar1[1];
      param_2[3] = uVar7;
    }
    local_e0 = uVar12;
    local_dc = uVar15;
    local_d8 = iVar9;
    FUN_01ae48e0(&local_98,0,&local_e0,0);
    if (local_98 != (undefined1 *)0x0) {
      puVar1 = (uint *)((uint)&local_98 | 4);
      uVar12 = puVar1[1];
      uVar7 = puVar1[2];
      param_1[1] = *puVar1;
      param_1[2] = uVar12;
      param_1[3] = uVar7;
      uVar7 = puVar1[4];
      uVar10 = puVar1[5];
      uVar13 = puVar1[6];
      uVar12 = 1;
      param_1[4] = puVar1[3];
      param_1[5] = uVar7;
      param_1[6] = uVar10;
      param_1[7] = uVar13;
      goto LAB_01ae2d38;
    }
    FUN_01ae2e50(param_1,param_2);
    if (*param_1 != 2) {
      return;
    }
  }
  iVar9 = param_2[0xc];
  if (iVar9 != 0) {
    do {
      param_2[0x17] = iVar9;
      FUN_01ae3704(&local_140,param_2);
      if (local_138 != 0x80000000) {
        *puVar1 = local_140;
        puVar1[1] = uStack_13c;
        puVar1[2] = local_138;
        puVar1[3] = uStack_134;
        puVar1[4] = local_130;
        puVar1[5] = uStack_12c;
        puVar1[6] = uStack_128;
        puVar1[7] = uStack_124;
        *param_1 = 0;
        param_1[1] = (uint)local_98;
        param_1[2] = local_94;
        param_1[3] = local_90;
        param_1[4] = uStack_8c;
        param_1[5] = local_88;
        param_1[6] = local_84;
        param_1[7] = local_80;
        param_1[8] = local_7c;
        param_1[9] = uStack_78;
        return;
      }
      iVar9 = param_2[0xc];
      uVar12 = param_2[8];
      if (uVar12 < (uint)param_2[0x17]) {
LAB_01ae2998:
        if (iVar9 == 0) goto LAB_01ae2ddc;
LAB_01ae29a0:
        uVar12 = iVar9 - 1;
        puVar5 = (undefined4 *)(param_2[0xb] + uVar12 * 0x20);
        puVar3 = (undefined1 *)*puVar5;
        param_2[0xc] = uVar12;
        if (puVar3 == &DAT_80000004) {
LAB_01ae2ddc:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("BUG: cannot pop from empty stackTLS_SRP_SHA_WITH_AES_256_CBC_SHAvideo/vnd.ms-playready.media.pyvServerNameMustContainOneHostName"
                       ,0x20,&DAT_01d300f0);
        }
        local_94 = puVar5[1];
        local_90 = puVar5[2];
        uStack_8c = puVar5[3];
        local_88 = puVar5[4];
        local_84 = puVar5[5];
        local_80 = puVar5[6];
        local_7c = puVar5[7];
        local_98 = puVar3;
        FUN_01ae37c0(&local_98);
        if (*(char *)(param_2 + 9) == '\x01') {
          iVar4 = param_2[0xf];
          iVar9 = 0;
          piVar6 = extraout_r1;
          if (iVar4 != 0) {
            piVar6 = (int *)(param_2[0xe] + (iVar4 + -1) * 0xc);
            iVar9 = *piVar6;
            param_2[0xf] = iVar4 + -1;
          }
          if (iVar4 == 0 || iVar9 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("BUG: list/path stacks out of sync",0x21,&DAT_01d30100);
          }
          FUN_0134bd64(iVar9,piVar6[1]);
        }
        uVar7 = param_2[0x16];
        if (uVar12 < (uint)param_2[0x16]) {
          uVar7 = uVar12;
        }
        param_2[0x16] = uVar7;
      }
      else {
        bVar16 = iVar9 == 0;
        puVar8 = extraout_r3;
        if (!bVar16) {
          uVar12 = param_2[0xb] + iVar9 * 0x20;
          puVar8 = (uint *)(uVar12 - 0x20);
          bVar16 = puVar8 == (uint *)0x0;
        }
        if (bVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("BUG: stack should be non-empty",0x1e,&DAT_01d300c0);
        }
        uVar7 = *puVar8;
        if (uVar7 == 0x80000003) {
          puVar8 = *(uint **)(uVar12 - 0x18);
          if (puVar8 != *(uint **)(uVar12 - 0x10)) {
            *(uint **)(uVar12 - 0x18) = puVar8 + 10;
            uVar12 = puVar8[1];
            uVar7 = puVar8[2];
            uVar10 = puVar8[3];
            uVar13 = puVar8[4];
            *param_1 = *puVar8;
            param_1[1] = uVar12;
            param_1[2] = uVar7;
            param_1[3] = uVar10;
            param_1[4] = uVar13;
            uVar12 = puVar8[6];
            uVar7 = puVar8[7];
            uVar10 = puVar8[8];
            uVar13 = puVar8[9];
            param_1[5] = puVar8[5];
            param_1[6] = uVar12;
            param_1[7] = uVar7;
            param_1[8] = uVar10;
            param_1[9] = uVar13;
            goto LAB_01ae2b88;
          }
          *param_1 = 2;
          goto LAB_01ae29a0;
        }
        if (uVar7 == 0x80000002) {
          iVar9 = *(int *)(uVar12 - 4);
          FUN_019bb288(&local_e0,uVar12 - 0x1c);
          if ((local_e0 & 1) == 0) {
            *param_1 = 2;
          }
          else {
            if (local_d8 == 0) {
              local_84 = local_d4;
              local_80 = uStack_d0;
              local_90 = 0x80000000;
              local_94 = 0x80000000;
              local_7c = iVar9 + 1;
              local_98 = (undefined1 *)0x1;
            }
            else {
              local_b8[0] = local_d8;
              *(uint *)((uint)local_b8 | 4) = local_d4;
              ((uint *)((uint)local_b8 | 4))[1] = uStack_d0;
              local_ac = local_cc;
              uStack_a8 = uStack_c8;
              uStack_a4 = uStack_c4;
              uStack_a0 = uStack_c0;
              uStack_9c = uStack_bc;
              FUN_01ae47f4(&local_98,iVar9 + 1,local_b8);
              FUN_019db4b0(local_b8);
            }
            *param_1 = (uint)local_98;
            param_1[1] = local_94;
            param_1[2] = local_90;
            param_1[3] = uStack_8c;
            param_1[4] = local_88;
            param_1[5] = local_84;
            param_1[6] = local_80;
            param_1[7] = local_7c;
            param_1[8] = uStack_78;
            param_1[9] = uStack_74;
          }
LAB_01ae2b88:
          uVar10 = *param_1;
        }
        else {
          *puVar8 = 0x80000001;
          uVar10 = 2;
          if (uVar7 != 0x80000001) {
            param_1[1] = uVar7;
            uVar7 = *(uint *)(uVar12 - 0x18);
            uVar10 = *(uint *)(uVar12 - 0x14);
            uVar13 = *(uint *)(uVar12 - 0x10);
            uVar11 = *(uint *)(uVar12 - 0xc);
            uVar14 = *(uint *)(uVar12 - 8);
            *puVar2 = *(uint *)(uVar12 - 0x1c);
            param_1[3] = uVar7;
            param_1[4] = uVar10;
            param_1[5] = uVar13;
            param_1[6] = uVar11;
            param_1[7] = uVar14;
            uVar10 = 1;
          }
          *param_1 = uVar10;
        }
        if (uVar10 == 2) {
          iVar9 = param_2[0xc];
          goto LAB_01ae2998;
        }
        if ((uVar10 & 1) != 0) {
          return;
        }
        local_120 = *puVar2;
        uStack_11c = param_1[3];
        uStack_118 = param_1[4];
        uStack_114 = param_1[5];
        local_110 = param_1[6];
        uStack_10c = param_1[7];
        uStack_108 = param_1[8];
        uStack_104 = param_1[9];
        FUN_01ae2e50(param_1,param_2);
        if (*param_1 != 2) {
          return;
        }
      }
      iVar9 = param_2[0xc];
    } while (iVar9 != 0);
  }
  if (*(char *)((int)param_2 + 0x26) != '\0') {
    param_2[0x17] = 0;
    FUN_01ae3704(&local_100,param_2);
    if (local_f8 != 0x80000000) {
      *puVar1 = local_100;
      puVar1[1] = uStack_fc;
      puVar1[2] = local_f8;
      puVar1[3] = uStack_f4;
      puVar1[4] = local_f0;
      puVar1[5] = uStack_ec;
      puVar1[6] = uStack_e8;
      puVar1[7] = uStack_e4;
      *param_1 = 0;
      param_1[1] = (uint)local_98;
      param_1[2] = local_94;
      param_1[3] = local_90;
      param_1[4] = uStack_8c;
      param_1[5] = local_88;
      param_1[6] = local_84;
      param_1[7] = local_80;
      param_1[8] = local_7c;
      param_1[9] = uStack_78;
      return;
    }
  }
  uVar12 = 2;
LAB_01ae2d38:
  *param_1 = uVar12;
  return;
}

