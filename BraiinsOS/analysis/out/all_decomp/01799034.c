// FUN_01799034 @ 01799034 size=1516 calls_out=3 calls_in=1
// strings: 

void FUN_01799034(int param_1,uint *param_2,int param_3,uint param_4,undefined4 *param_5,int param_6
                 ,int param_7)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *extraout_r1;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int local_64;
  uint local_4c;
  uint *local_48 [4];
  uint *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  
  uVar13 = *param_2;
  puVar11 = (undefined4 *)((int)param_5 + param_6);
  local_2c = DAT_018ddaf8;
  if (*(int *)(param_1 + 0x9a4) == 0) {
    local_64 = 0;
    if (*(int *)(param_1 + 0x9a8) != 0) {
      local_64 = *(int *)(param_1 + 0x9ac);
    }
  }
  else {
    local_64 = *(int *)(*(int *)(param_1 + 0x9a4) + 4);
  }
  iVar2 = *(int *)(param_1 + 0x860);
  puVar4 = *(uint **)(iVar2 + 0x11ec);
  local_48[0] = *(uint **)(iVar2 + 0x11e8);
  local_48[1] = puVar4;
  local_48[2] = *(uint **)(iVar2 + 0x11f0);
  local_4c = uVar13;
  if (uVar13 < param_4) {
    puVar15 = (undefined4 *)(param_3 + uVar13 * 0x10);
    while( true ) {
      uVar12 = puVar15[2];
      puVar7 = (uint *)*puVar15;
      if (uVar12 == 0 && puVar7 == (uint *)0x0) break;
      puVar16 = (undefined1 *)((int)puVar7 + 3);
      uVar14 = puVar15[1];
      if (param_7 != 2) {
        puVar4 = local_48[0];
        if (uVar14 == 0) {
          iVar2 = 1;
          if (local_48[1] == puVar7) {
LAB_01799574:
            puVar16 = (undefined1 *)(2 - iVar2);
            puVar7 = local_48[1];
LAB_01799580:
            local_48[1] = local_48[2];
          }
          else if (local_48[2] == puVar7) {
LAB_017993dc:
            puVar16 = (undefined1 *)(3 - iVar2);
            puVar7 = local_48[2];
          }
          else {
            if ((uint *)((int)local_48[0] + -1) != puVar7) {
              if ((undefined1 *)0x3 < puVar16) goto LAB_01799550;
              if (puVar16 == (undefined1 *)0x0) goto LAB_0179916c;
              puVar9 = puVar16;
              if (puVar16 != (undefined1 *)0x3) goto LAB_017993c8;
              puVar7 = (uint *)((int)local_48[0] + -1);
            }
            puVar16 = (undefined1 *)0x3;
          }
LAB_017993e4:
          local_48[2] = local_48[1];
          local_48[1] = local_48[0];
          local_48[0] = puVar7;
        }
        else {
          iVar2 = 0;
          if (local_48[0] == puVar7) {
            puVar16 = (undefined1 *)0x1;
          }
          else {
            if (local_48[1] == puVar7) goto LAB_01799574;
            if (local_48[2] == puVar7) goto LAB_017993dc;
            if (puVar16 < (undefined1 *)0x4) {
              puVar9 = (undefined1 *)((int)puVar7 + 2);
              if (puVar9 != (undefined1 *)0x0) {
LAB_017993c8:
                puVar7 = local_48[(int)puVar9];
                if (puVar9 != (undefined1 *)0x1) goto LAB_017993e4;
                goto LAB_01799580;
              }
            }
            else {
LAB_01799550:
              local_48[2] = local_48[1];
              local_48[1] = local_48[0];
              local_48[0] = puVar7;
            }
          }
        }
      }
LAB_0179916c:
      if (*(int *)(param_1 + 0x138) != 0) {
        puVar7 = (uint *)(1 << (*(uint *)(param_1 + 0xc0) & 0xff));
        puVar4 = (uint *)(uVar12 + uVar14 + param_2[2]);
        uVar8 = (uint)(*(int *)(param_1 + 0x160) != 0);
        iVar2 = *(int *)(param_1 + 0xd0);
        param_2[2] = (uint)puVar4;
        if (puVar4 <= puVar7) {
          puVar7 = (uint *)((int)puVar4 + local_64);
        }
        if (iVar2 == 3) {
          uVar8 = 1;
        }
        if ((undefined1 *)((int)puVar7 + 3) < puVar16 || uVar12 < 4 - uVar8) goto LAB_01799510;
      }
      if (*(uint *)(param_1 + 0x310) <= local_4c - *param_2) goto LAB_01799510;
      puVar18 = *(undefined4 **)(param_1 + 0x300);
      if (puVar11 + -8 < (undefined4 *)((int)param_5 + uVar14)) {
        FUN_01797874(puVar18,param_5);
        puVar4 = extraout_r1;
LAB_017994cc:
        *(uint *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + uVar14;
        puVar18 = *(undefined4 **)(param_1 + 0x2f8);
        if (0xffff < uVar14) {
          *(undefined4 *)(param_1 + 0x318) = 1;
          *(int *)(param_1 + 0x31c) = (int)puVar18 - *(int *)(param_1 + 0x2f4) >> 3;
        }
      }
      else {
        local_48[3] = (uint *)*param_5;
        puVar4 = (uint *)param_5[1];
        uStack_34 = param_5[2];
        puStack_38 = puVar4;
        uStack_30 = param_5[3];
        puVar18[3] = param_5[3];
        *puVar18 = local_48[3];
        puVar18[1] = puVar4;
        puVar18[2] = uStack_34;
        iVar2 = *(int *)(param_1 + 0x300);
        if (0x10 < uVar14) {
          puVar4 = (uint *)param_5[5];
          uStack_34 = param_5[6];
          uStack_30 = param_5[7];
          local_48[3] = (uint *)param_5[4];
          puStack_38 = puVar4;
          *(undefined4 *)(iVar2 + 0x10) = param_5[4];
          *(uint **)(iVar2 + 0x14) = puVar4;
          *(undefined4 *)(iVar2 + 0x18) = uStack_34;
          *(undefined4 *)(iVar2 + 0x1c) = uStack_30;
          if (0x10 < (int)(uVar14 - 0x10)) {
            puVar18 = (undefined4 *)(iVar2 + 0x20);
            puVar19 = param_5 + 0x10;
            do {
              uVar3 = puVar19[-7];
              uVar5 = puVar19[-6];
              puVar17 = puVar18 + 8;
              uVar10 = puVar19[-5];
              *puVar18 = puVar19[-8];
              puVar18[1] = uVar3;
              puVar18[2] = uVar5;
              puVar18[3] = uVar10;
              puVar4 = (uint *)puVar19[-3];
              uStack_34 = puVar19[-2];
              uStack_30 = puVar19[-1];
              local_48[3] = (uint *)puVar19[-4];
              puStack_38 = puVar4;
              puVar18[4] = puVar19[-4];
              puVar18[5] = puVar4;
              puVar18[6] = uStack_34;
              puVar18[7] = uStack_30;
              puVar18 = puVar17;
              puVar19 = puVar19 + 8;
            } while (puVar17 < (undefined4 *)(iVar2 + uVar14));
          }
          goto LAB_017994cc;
        }
        *(undefined4 **)(param_1 + 0x300) = (undefined4 *)(iVar2 + uVar14);
        puVar18 = *(undefined4 **)(param_1 + 0x2f8);
      }
      *(short *)(puVar18 + 1) = (short)uVar14;
      *puVar18 = puVar16;
      uVar1 = (undefined2)(uVar12 - 3);
      if (uVar12 - 3 < 0x10000) {
        *(undefined2 *)((int)puVar18 + 6) = uVar1;
        *(undefined4 **)(param_1 + 0x2f8) = puVar18 + 2;
      }
      else {
        *(int *)(param_1 + 0x31c) = (int)puVar18 - *(int *)(param_1 + 0x2f4) >> 3;
        puVar4 = (uint *)&SUB_00000002;
        *(undefined4 *)(param_1 + 0x318) = 2;
        *(undefined2 *)((int)puVar18 + 6) = uVar1;
        *(undefined4 **)(param_1 + 0x2f8) = puVar18 + 2;
      }
      if (param_4 == local_4c + 1) {
        param_5 = (undefined4 *)((int)param_5 + uVar12 + uVar14);
        puVar15 = (undefined4 *)(param_3 + param_4 * 0x10);
        local_4c = param_4;
        break;
      }
      local_4c = local_4c + 1;
      param_5 = (undefined4 *)((int)param_5 + uVar12 + uVar14);
      puVar15 = puVar15 + 4;
    }
    puVar4 = local_48[0];
    if (uVar13 != local_4c && param_7 == 2) {
      uVar12 = local_4c - 1;
      puVar4 = *(uint **)(param_3 + uVar12 * 0x10);
      if (uVar12 < uVar13 + 2) {
        if (uVar13 + 1 == uVar12) {
          local_48[2] = local_48[0];
          local_48[0] = *(uint **)(param_3 + (local_4c + 0xffffffe) * 0x10);
        }
        else {
          local_48[2] = local_48[1];
        }
        local_48[1] = local_48[0];
      }
      else {
        local_48[2] = *(uint **)(param_3 + (local_4c + 0xffffffd) * 0x10);
        local_48[1] = *(uint **)(param_3 + (local_4c + 0xffffffd) * 0x10 + 0x10);
      }
    }
  }
  else {
    puVar15 = (undefined4 *)(param_3 + uVar13 * 0x10);
    puVar4 = local_48[0];
  }
  local_48[0] = puVar4;
  iVar2 = *(int *)(param_1 + 0x864);
  *(uint **)(iVar2 + 0x11e8) = local_48[0];
  *(uint **)(iVar2 + 0x11ec) = local_48[1];
  *(uint **)(iVar2 + 0x11f0) = local_48[2];
  iVar2 = puVar15[1];
  puVar4 = local_48[1];
  if (iVar2 != 0) {
    FUN_016dd1aa(*(undefined4 *)(param_1 + 0x300),param_5,iVar2,local_48 + 3);
    iVar6 = puVar15[1];
    *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + iVar2;
    param_5 = (undefined4 *)((int)param_5 + iVar6);
    param_2[2] = param_2[2] + iVar6;
    puVar4 = param_2;
  }
  if (param_5 == puVar11) {
    uVar3 = 0;
    *param_2 = local_4c + 1;
  }
  else {
LAB_01799510:
    uVar3 = 0xffffff95;
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,puVar4,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

