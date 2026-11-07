// FUN_01735bac @ 01735bac size=1136 calls_out=10 calls_in=2
// strings: size overflows MAX_SIZE | expected a header name; but got None | size overflows MAX_SIZE

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01735bac(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  undefined4 local_e0 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  int *local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a0;
  uint local_9c;
  int *local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint uStack_88;
  int *local_84;
  undefined4 local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int *local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_c4 = *(undefined4 *)(param_2 + 0x20);
  local_cc = *(int *)(param_2 + 0x24);
  local_d8 = *(undefined4 *)(param_2 + 0x2c);
  uStack_d4 = *(undefined4 *)(param_2 + 0x30);
  uStack_d0 = *(undefined4 *)(param_2 + 0x34);
  local_c0 = *(int *)(param_2 + 0x28) * 0x34 + local_cc;
  local_e0[0] = 0;
  local_c8 = local_cc;
  if (*(int *)(param_2 + 0x1c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_2 + 0x18));
  }
  FUN_006ced10(&local_98,local_e0);
  if (local_98 == (int *)0x2) {
LAB_01735c28:
    FUN_00713cb8(local_e0);
    return;
  }
  if (((uint)local_98 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74("expected a header name, but got None",0x24,&DAT_01d1e364);
  }
  do {
    local_b8 = local_84;
    uStack_b4 = local_80;
    uStack_b0 = uStack_7c;
    uStack_ac = uStack_78;
    uStack_a8 = uStack_74;
    local_70 = local_94;
    uStack_6c = local_90;
    uStack_68 = local_8c;
    uStack_64 = uStack_88;
    FUN_0141cbc4(&local_98,param_1);
    piVar14 = local_84;
    uVar11 = local_90;
    piVar3 = local_98;
    bVar4 = local_80._2_1_;
    if (local_80._2_1_ == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("size overflows MAX_SIZE",0x17,&local_48,&DAT_01d2f38c,&DAT_01d1e374);
    }
    local_a0 = local_8c;
    local_9c = uStack_88;
    uVar13 = local_80 & 0xffff;
    if (local_80._2_1_ == 2) {
      local_98 = local_b8;
      local_94 = uStack_b4;
      local_90 = uStack_b0;
      local_8c = uStack_ac;
      uStack_88 = uStack_a8;
      FUN_0141e608(&local_48,piVar3,uVar11);
      (**(code **)(local_48 + 0x10))(&local_3c,local_44,local_40);
    }
    else {
      local_44 = local_90;
      local_40 = local_8c;
      local_3c = uStack_88;
      local_48 = local_94;
      uVar11 = local_98[10];
      local_98 = local_b8;
      local_94 = uStack_b4;
      local_90 = uStack_b0;
      local_8c = uStack_ac;
      uStack_88 = uStack_a8;
      iVar7 = FUN_0141c310(piVar3,uVar13,&local_48);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("size overflows MAX_SIZE",0x17,&local_48,&DAT_01d2f38c,&DAT_01d1e474);
      }
      iVar7 = piVar3[6];
      uVar5 = 0;
      piVar8 = (int *)piVar3[7];
      uVar12 = uVar11;
      while( true ) {
        do {
          piVar9 = piVar14;
          piVar14 = (int *)0x0;
        } while (piVar8 <= piVar9);
        puVar10 = (ushort *)(iVar7 + (int)piVar9 * 4);
        uVar1 = *puVar10;
        uVar2 = (ushort)uVar13;
        if (uVar1 == 0xffff) break;
        *puVar10 = (ushort)uVar12;
        uVar5 = uVar5 + 1;
        uVar13 = (uint)puVar10[1];
        puVar10[1] = uVar2;
        uVar12 = (uint)uVar1;
        piVar14 = (int *)((int)piVar9 + 1);
      }
      puVar10[1] = uVar2;
      *puVar10 = (ushort)uVar12;
      if (((uVar5 < 0x80 & (bVar4 ^ 1)) == 0) && (*piVar3 == 0 && piVar3[1] == 0)) {
        *piVar3 = 1;
        piVar3[1] = 0;
      }
    }
    while( true ) {
      FUN_006ced10(&local_98,local_e0);
      if (local_98 == (int *)0x2) goto LAB_01735c28;
      if (((uint)local_98 & 1) != 0) break;
      if ((uint)piVar3[10] <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,piVar3[10],&DAT_01d1e484);
      }
      piVar14 = (int *)(piVar3[9] + uVar11 * 0x34);
      local_3c = uVar11;
      if (*piVar14 == 0) {
        iVar7 = piVar3[0xd];
        local_38 = local_84;
        uStack_34 = local_80;
        uStack_30 = uStack_7c;
        uStack_2c = uStack_78;
        uStack_28 = uStack_74;
        local_40 = 0;
        local_48 = 0;
        local_44 = uVar11;
        if (iVar7 == piVar3[0xb]) {
          FUN_01aa8fa8(piVar3 + 0xb);
        }
        puVar6 = (uint *)(piVar3[0xc] + iVar7 * 0x24);
        *puVar6 = local_48;
        puVar6[1] = local_44;
        puVar6[2] = local_40;
        puVar6[3] = local_3c;
        puVar6[4] = (uint)local_38;
        puVar6[5] = uStack_34;
        puVar6[6] = uStack_30;
        puVar6[7] = uStack_2c;
        puVar6[8] = uStack_28;
        piVar3[0xd] = iVar7 + 1;
        *piVar14 = 1;
        piVar14[1] = iVar7;
        piVar14[2] = iVar7;
      }
      else {
        uVar12 = piVar3[0xd];
        uVar13 = piVar14[2];
        local_38 = local_84;
        uStack_34 = local_80;
        uStack_30 = uStack_7c;
        uStack_2c = uStack_78;
        uStack_28 = uStack_74;
        local_40 = 0;
        local_48 = 1;
        local_44 = uVar13;
        if (uVar12 == piVar3[0xb]) {
          FUN_01aa8fa8(piVar3 + 0xb);
        }
        puVar6 = (uint *)(piVar3[0xc] + uVar12 * 0x24);
        *puVar6 = local_48;
        puVar6[1] = local_44;
        puVar6[2] = local_40;
        puVar6[3] = local_3c;
        puVar6[4] = (uint)local_38;
        puVar6[5] = uStack_34;
        puVar6[6] = uStack_30;
        puVar6[7] = uStack_2c;
        puVar6[8] = uStack_28;
        piVar3[0xd] = uVar12 + 1;
        if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar13,uVar12 + 1,&DAT_01d2f39c);
        }
        piVar14[2] = uVar12;
        *piVar14 = 1;
        iVar7 = piVar3[0xc] + uVar13 * 0x24;
        *(undefined4 *)(iVar7 + 8) = 1;
        *(uint *)(iVar7 + 0xc) = uVar12;
      }
    }
  } while( true );
}

