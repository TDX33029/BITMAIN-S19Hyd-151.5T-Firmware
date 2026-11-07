// FUN_00713444 @ 00713444 size=1696 calls_out=12 calls_in=64
// strings: expected a header name; but got None | size overflows MAX_SIZE | size overflows MAX_SIZE

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00713444(int *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined *local_118;
  undefined4 local_d8 [2];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint local_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint auStack_64 [7];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_bc = *(undefined4 *)(param_2 + 0x20);
  local_c4 = *(int *)(param_2 + 0x24);
  local_d0 = *(undefined4 *)(param_2 + 0x2c);
  uStack_cc = *(undefined4 *)(param_2 + 0x30);
  uStack_c8 = *(undefined4 *)(param_2 + 0x34);
  local_b8 = *(int *)(param_2 + 0x28) * 0x34 + local_c4;
  local_d8[0] = 0;
  local_c0 = local_c4;
  if (*(int *)(param_2 + 0x1c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_2 + 0x18));
  }
  FUN_006ced10(&local_98,local_d8);
  if (local_98 == 2) {
LAB_007134c0:
    FUN_00713cb8(local_d8);
    return;
  }
  if ((local_98 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74("expected a header name, but got None",0x24,&DAT_01d1e364);
  }
  local_118 = &DAT_01d1e434;
  do {
    local_b0 = local_84;
    uStack_ac = uStack_80;
    uStack_a8 = uStack_7c;
    uStack_a4 = uStack_78;
    uStack_a0 = uStack_74;
    local_70 = local_94;
    local_6c = uStack_90;
    local_68 = uStack_8c;
    auStack_64[0] = uStack_88;
    iVar3 = FUN_007142a8(param_1);
    if (iVar3 != 0) {
      if (local_70 != 0) {
        (**(code **)(local_70 + 0x10))(auStack_64,local_6c,local_68);
      }
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("size overflows MAX_SIZE",0x17,&local_98,&DAT_01d2f38c,&DAT_01d1e374);
    }
    uVar4 = FUN_0137e53c(param_1,&local_70);
    uVar13 = local_68;
    uVar19 = local_6c;
    uVar12 = local_70;
    uVar4 = uVar4 & 0xffff;
    uVar1 = *(ushort *)(param_1 + 0xe);
    uVar18 = 0;
    uVar5 = local_6c & 0xff;
    iVar17 = param_1[6];
    uVar16 = param_1[7];
    iVar3 = param_1[9];
    uVar11 = param_1[10];
    uVar15 = uVar1 & uVar4;
LAB_007135a8:
    do {
      uVar6 = uVar15;
      uVar15 = 0;
    } while (uVar16 <= uVar6);
    puVar7 = (ushort *)(iVar17 + uVar6 * 4);
    uVar15 = (uint)*puVar7;
    if ((uVar15 == 0xffff) || (uVar2 = puVar7[1], (uVar6 - (uVar1 & uVar2) & (uint)uVar1) < uVar18))
    {
      iVar3 = *param_1;
      iVar8 = param_1[1];
      local_40 = local_68;
      local_3c = auStack_64[0];
      uVar15 = param_1[10];
      local_98 = local_b0;
      local_94 = uStack_ac;
      uStack_90 = uStack_a8;
      uStack_8c = uStack_a4;
      uStack_88 = uStack_a0;
      local_48 = uVar12;
      local_44 = uVar19;
      iVar17 = FUN_0071418c(param_1,uVar4,&local_48);
      if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("size overflows MAX_SIZE",0x17,&local_98,&DAT_01d2f38c,&DAT_01d1e474);
      }
      iVar17 = param_1[6];
      uVar13 = param_1[7];
      uVar19 = 0;
      uVar12 = uVar15 & 0xffff;
      while( true ) {
        do {
          uVar5 = uVar6;
          uVar6 = 0;
        } while (uVar13 <= uVar5);
        puVar7 = (ushort *)(iVar17 + uVar5 * 4);
        uVar1 = *puVar7;
        uVar2 = (ushort)uVar4;
        if (uVar1 == 0xffff) break;
        *puVar7 = (ushort)uVar12;
        uVar4 = (uint)puVar7[1];
        uVar19 = uVar19 + 1;
        puVar7[1] = uVar2;
        uVar12 = (uint)uVar1;
        uVar6 = uVar5 + 1;
      }
      iVar17 = *param_1;
      iVar14 = param_1[1];
      puVar7[1] = uVar2;
      *puVar7 = (ushort)uVar12;
      if ((0x7f < uVar19 || uVar18 >> 9 != 0 && (iVar3 != 2 || iVar8 != 0)) &&
         (iVar17 == 0 && iVar14 == 0)) {
        *param_1 = 1;
        param_1[1] = 0;
      }
      goto LAB_0071383c;
    }
    if (uVar2 != uVar4) {
LAB_00713674:
      uVar18 = uVar18 + 1;
      uVar15 = uVar6 + 1;
      goto LAB_007135a8;
    }
    if (uVar11 <= uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar15,uVar11,&DAT_01d1e3f4);
    }
    iVar8 = uVar15 * 0x34 + iVar3;
    if ((*(int *)(iVar8 + 0x20) != 0) == (uVar12 == 0)) goto LAB_00713674;
    if (*(int *)(iVar8 + 0x20) == 0) {
      if (*(byte *)(iVar8 + 0x24) == uVar5) goto LAB_00713a04;
      goto LAB_00713674;
    }
    if ((*(uint *)(iVar8 + 0x28) != uVar13) ||
       (iVar8 = thunk_FUN_01bed842(*(undefined4 *)(iVar8 + 0x24),uVar19,uVar13), iVar8 != 0))
    goto LAB_00713674;
    if (uVar12 != 0) {
      (**(code **)(uVar12 + 0x10))(auStack_64,uVar19,uVar13);
    }
LAB_00713a04:
    local_98 = local_b0;
    local_94 = uStack_ac;
    uStack_90 = uStack_a8;
    uStack_8c = uStack_a4;
    uStack_88 = uStack_a0;
    uVar12 = param_1[10];
    if (uVar12 <= uVar15) {
LAB_00713ac4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar15,uVar12,local_118);
    }
    piVar9 = (int *)(param_1[9] + uVar15 * 0x34);
    if (*piVar9 == 1) {
      FUN_00713d00(param_1,piVar9[1]);
      uVar12 = param_1[10];
    }
    if (uVar12 <= uVar15) {
      local_118 = &DAT_01d1e444;
      goto LAB_00713ac4;
    }
    iVar3 = uVar15 * 0x34 + param_1[9];
    local_48 = *(uint *)(iVar3 + 0xc);
    local_44 = *(uint *)(iVar3 + 0x10);
    local_40 = *(uint *)(iVar3 + 0x14);
    local_3c = *(uint *)(iVar3 + 0x18);
    local_38 = *(uint *)(iVar3 + 0x1c);
    *(uint *)(iVar3 + 0xc) = local_98;
    *(uint *)(iVar3 + 0x10) = local_94;
    *(uint *)(iVar3 + 0x14) = uStack_90;
    *(uint *)(iVar3 + 0x18) = uStack_8c;
    *(uint *)(iVar3 + 0x1c) = uStack_88;
    (**(code **)(local_48 + 0x10))(&local_3c,local_44,local_40);
LAB_0071383c:
    while( true ) {
      FUN_006ced10(&local_98,local_d8);
      if (local_98 == 2) goto LAB_007134c0;
      if ((local_98 & 1) != 0) break;
      if ((uint)param_1[10] <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar15,param_1[10],&DAT_01d1e484);
      }
      piVar9 = (int *)(param_1[9] + uVar15 * 0x34);
      local_3c = uVar15;
      if (*piVar9 == 0) {
        iVar3 = param_1[0xd];
        local_38 = local_84;
        uStack_34 = uStack_80;
        uStack_30 = uStack_7c;
        uStack_2c = uStack_78;
        uStack_28 = uStack_74;
        local_40 = 0;
        local_48 = 0;
        local_44 = uVar15;
        if (iVar3 == param_1[0xb]) {
          FUN_01ac589c(param_1 + 0xb);
        }
        puVar10 = (uint *)(param_1[0xc] + iVar3 * 0x24);
        *puVar10 = local_48;
        puVar10[1] = local_44;
        puVar10[2] = local_40;
        puVar10[3] = local_3c;
        puVar10[4] = local_38;
        puVar10[5] = uStack_34;
        puVar10[6] = uStack_30;
        puVar10[7] = uStack_2c;
        puVar10[8] = uStack_28;
        piVar9[2] = iVar3;
        param_1[0xd] = iVar3 + 1;
        *piVar9 = 1;
        piVar9[1] = iVar3;
      }
      else {
        uVar12 = param_1[0xd];
        uVar19 = piVar9[2];
        local_38 = local_84;
        uStack_34 = uStack_80;
        uStack_30 = uStack_7c;
        uStack_2c = uStack_78;
        uStack_28 = uStack_74;
        local_40 = 0;
        local_48 = 1;
        local_44 = uVar19;
        if (uVar12 == param_1[0xb]) {
          FUN_01ac589c(param_1 + 0xb);
        }
        puVar10 = (uint *)(param_1[0xc] + uVar12 * 0x24);
        *puVar10 = local_48;
        puVar10[1] = local_44;
        puVar10[2] = local_40;
        puVar10[3] = local_3c;
        puVar10[4] = local_38;
        puVar10[5] = uStack_34;
        puVar10[6] = uStack_30;
        puVar10[7] = uStack_2c;
        puVar10[8] = uStack_28;
        param_1[0xd] = uVar12 + 1;
        if (uVar12 < uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar19,uVar12 + 1,&DAT_01d2f39c);
        }
        iVar3 = param_1[0xc];
        piVar9[2] = uVar12;
        iVar3 = iVar3 + uVar19 * 0x24;
        *piVar9 = 1;
        *(undefined4 *)(iVar3 + 8) = 1;
        *(uint *)(iVar3 + 0xc) = uVar12;
      }
    }
  } while( true );
}

