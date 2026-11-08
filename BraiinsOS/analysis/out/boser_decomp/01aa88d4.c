// FUN_01aa88d4 @ 01aa88d4 size=1520 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01aa88d4(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  int iStack_114;
  undefined4 local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int local_f8;
  undefined4 *local_f4;
  int local_f0;
  undefined4 *local_ec;
  int local_e8;
  undefined4 *puStack_e4;
  int iStack_e0;
  undefined4 *puStack_dc;
  int iStack_d8;
  int local_b8;
  int local_b4;
  undefined1 local_b0;
  byte local_af;
  undefined1 auStack_ae [14];
  int local_a0;
  uint local_9c;
  int local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  int local_88;
  undefined4 *local_84;
  ushort local_80;
  int local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 *puStack_5c;
  int iStack_58;
  undefined4 *puStack_54;
  undefined4 local_50;
  int local_48;
  uint local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_50 = CONCAT13(local_50._3_1_,CONCAT21(local_50._1_2_,(undefined1)local_50));
  iStack_114 = param_3[3];
  local_110 = *param_4;
  iStack_10c = param_4[1];
  iStack_108 = param_4[2];
  iStack_104 = param_4[3];
  local_100 = param_4[4];
  if (*param_2 == 3 && param_2[1] == 0) {
    uVar19 = (undefined1)param_2[2];
    bVar20 = *(byte *)((int)param_2 + 9);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x10))(&iStack_114,param_3[1],param_3[2]);
    }
    (**(code **)(local_110 + 0x10))(&iStack_104,iStack_10c,iStack_108);
    local_af = bVar20;
  }
  else {
    uVar19 = (undefined1)local_110;
    local_110._1_1_ = (byte)((uint)local_110 >> 8);
    bVar20 = local_110._1_1_;
    puVar21 = (undefined4 *)(uint)local_110._1_1_;
    cVar5 = (char)local_100;
    FUN_01bed4e2(&local_b8,param_2,0x48);
    local_70 = *param_3;
    local_6c = param_3[1];
    local_68 = param_3[2];
    iStack_64 = param_3[3];
    if (cVar5 == '\x02') {
      if (local_70 != 0) {
        (**(code **)(local_70 + 0x10))(&iStack_64,local_6c,local_68);
      }
    }
    else {
      FUN_01bed4e2((uint)&local_60 | 2,(int)param_4 + 2,0xe);
      local_60 = CONCAT31(CONCAT21(local_60._2_2_,bVar20),uVar19);
      local_50 = CONCAT13(*(undefined1 *)((int)param_4 + 0x13),
                          CONCAT21(*(undefined2 *)((int)param_4 + 0x11),cVar5));
      local_48 = *param_3;
      local_44 = param_3[1];
      local_40 = param_3[2];
      iStack_3c = param_3[3];
      iVar16 = FUN_01aa5cdc(&local_b8);
      if (iVar16 == 0) {
        uVar7 = FUN_0137e53c(&local_b8);
        iVar6 = local_40;
        uVar13 = local_44;
        iVar18 = local_48;
        uVar12 = local_9c;
        iVar16 = local_a0;
        uVar15 = 0;
        uVar23 = local_44 & 0xff;
        uVar22 = (uint)(local_80 & uVar7);
LAB_01aa8a9c:
        do {
          uVar8 = uVar22;
          uVar22 = 0;
        } while (uVar12 <= uVar8);
        puVar9 = (ushort *)(iVar16 + uVar8 * 4);
        local_f4 = (undefined4 *)(uint)*puVar9;
        if (local_f4 == (undefined4 *)0xffff) {
          local_38 = local_48;
          uStack_34 = local_44;
          iStack_30 = local_40;
          iStack_2c = iStack_3c;
          local_f8 = local_60;
          local_f4 = puStack_5c;
          local_f0 = iStack_58;
          local_ec = puStack_54;
          local_e8 = local_50;
          iVar16 = FUN_01aa5f84(&local_b8);
          puVar21 = local_90;
          if (iVar16 != 0) goto LAB_01aa8c34;
          if (local_9c <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar8,local_9c,&DAT_01d2f3bc);
          }
          puVar11 = (undefined2 *)(local_a0 + uVar8 * 4);
          *puVar11 = (short)local_90;
          puVar11[1] = uVar7;
          goto LAB_01aa8d14;
        }
        uVar1 = puVar9[1];
        if ((uVar8 - (local_80 & uVar1) & (uint)local_80) < uVar15) {
          local_38 = local_48;
          uStack_34 = local_44;
          iStack_30 = local_40;
          iStack_2c = iStack_3c;
          local_f8 = local_60;
          local_f4 = puStack_5c;
          local_f0 = iStack_58;
          local_ec = puStack_54;
          local_e8 = local_50;
          bVar3 = local_b8 != 2;
          bVar4 = local_b4 != 0;
          iVar16 = FUN_01aa5f84(&local_b8);
          puVar21 = &local_60;
          if (iVar16 == 0) {
            uVar13 = 0;
            uVar12 = (uint)local_90 & 0xffff;
            while( true ) {
              do {
                uVar22 = uVar8;
                uVar8 = 0;
              } while (local_9c <= uVar22);
              puVar9 = (ushort *)(local_a0 + uVar22 * 4);
              uVar1 = *puVar9;
              if (uVar1 == 0xffff) break;
              *puVar9 = (ushort)uVar12;
              uVar2 = puVar9[1];
              uVar13 = uVar13 + 1;
              puVar9[1] = uVar7;
              uVar12 = (uint)uVar1;
              uVar8 = uVar22 + 1;
              uVar7 = uVar2;
            }
            *puVar9 = (ushort)uVar12;
            puVar9[1] = uVar7;
            if ((uVar15 >> 9 != 0 && (bVar3 || bVar4) || 0x7f < uVar13) &&
                (local_b8 == 0 && local_b4 == 0)) {
              local_b8 = 1;
              local_b4 = 0;
            }
            goto LAB_01aa8d14;
          }
          goto LAB_01aa8c34;
        }
        if (uVar1 == uVar7) {
          if (local_90 <= local_f4) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(local_f4,local_90,&DAT_01d2f3ac);
          }
          iVar10 = (int)local_f4 * 0x34 + local_94;
          if ((*(int *)(iVar10 + 0x20) != 0) != (iVar18 == 0)) {
            if (*(int *)(iVar10 + 0x20) == 0) {
              if (*(byte *)(iVar10 + 0x24) == uVar23) goto LAB_01aa8d3c;
            }
            else if ((*(int *)(iVar10 + 0x28) == iVar6) &&
                    (iVar10 = thunk_FUN_01bed842(*(undefined4 *)(iVar10 + 0x24),uVar13,iVar6),
                    iVar10 == 0)) goto LAB_01aa8d3c;
          }
        }
        uVar15 = uVar15 + 1;
        uVar22 = uVar8 + 1;
        goto LAB_01aa8a9c;
      }
      (**(code **)(local_60 + 0x10))(&puStack_54,puStack_5c,iStack_58);
      if (local_48 != 0) {
        (**(code **)(local_48 + 0x10))(&iStack_3c,local_44,local_40);
      }
LAB_01aa8c34:
      bVar20 = (byte)puVar21;
      uVar19 = 6;
    }
    FUN_0070e92c(&local_b8);
    local_af = bVar20;
  }
  iVar18 = 0;
  iVar16 = 3;
  local_b0 = uVar19;
LAB_01aa8c48:
  *(byte *)((int)param_1 + 9) = local_af;
  *(undefined1 *)(param_1 + 2) = local_b0;
  *param_1 = iVar16;
  param_1[1] = iVar18;
  FUN_01bed4e2((int)param_1 + 10,&local_f8,0x3e);
  return;
LAB_01aa8d3c:
  piVar17 = (int *)(local_94 + (int)local_f4 * 0x34);
  local_ec = local_f4;
  if (*piVar17 == 0) {
    local_e8 = local_60;
    puStack_e4 = puStack_5c;
    iStack_e0 = iStack_58;
    puStack_dc = puStack_54;
    iStack_d8 = local_50;
    local_f0 = 0;
    local_f8 = 0;
    if (local_84 == local_8c) {
      FUN_01aa8fa8(&local_8c);
    }
    piVar14 = (int *)(local_88 + (int)local_84 * 0x24);
    *piVar14 = local_f8;
    piVar14[1] = (int)local_f4;
    piVar14[2] = local_f0;
    piVar14[3] = (int)local_ec;
    piVar14[4] = local_e8;
    piVar14[5] = (int)puStack_e4;
    piVar14[6] = iStack_e0;
    piVar14[7] = (int)puStack_dc;
    piVar14[8] = iStack_d8;
    *piVar17 = 1;
    piVar17[1] = (int)local_84;
    piVar17[2] = (int)local_84;
  }
  else {
    puVar21 = (undefined4 *)piVar17[2];
    local_e8 = local_60;
    puStack_e4 = puStack_5c;
    iStack_e0 = iStack_58;
    puStack_dc = puStack_54;
    iStack_d8 = local_50;
    local_f0 = 0;
    local_f8 = 1;
    local_f4 = puVar21;
    if (local_84 == local_8c) {
      FUN_01aa8fa8(&local_8c);
    }
    piVar14 = (int *)(local_88 + (int)local_84 * 0x24);
    *piVar14 = local_f8;
    piVar14[1] = (int)local_f4;
    piVar14[2] = local_f0;
    piVar14[3] = (int)local_ec;
    piVar14[4] = local_e8;
    piVar14[5] = (int)puStack_e4;
    piVar14[6] = iStack_e0;
    piVar14[7] = (int)puStack_dc;
    piVar14[8] = iStack_d8;
    iVar16 = (int)local_84 + 1;
    if (local_84 < puVar21) {
      local_84 = (undefined4 *)iVar16;
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(puVar21,iVar16,&DAT_01d2f39c);
    }
    piVar17[2] = (int)local_84;
    *piVar17 = 1;
    local_88 = local_88 + (int)puVar21 * 0x24;
    *(undefined4 *)(local_88 + 8) = 1;
    *(undefined4 **)(local_88 + 0xc) = local_84;
  }
  local_84 = (undefined4 *)((int)local_84 + 1);
  if (iVar18 != 0) {
    (**(code **)(iVar18 + 0x10))(&iStack_3c,uVar13,iVar6);
  }
LAB_01aa8d14:
  iVar18 = local_b4;
  iVar16 = local_b8;
  FUN_01bed4e2(&local_f8,auStack_ae,0x3e);
  goto LAB_01aa8c48;
}

