// FUN_0103b340 @ 0103b340 size=1040 calls_out=10 calls_in=2
// strings: 

void FUN_0103b340(undefined2 *param_1,short *param_2)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined2 uVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  undefined2 uVar21;
  undefined2 uStack_78;
  undefined2 local_76;
  undefined2 uStack_74;
  undefined2 local_72;
  undefined2 uStack_70;
  undefined2 local_6e;
  undefined2 uStack_6c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*param_2 == 1) {
    pbVar20 = *(byte **)(param_2 + 4);
    uVar18 = *(uint *)(param_2 + 6);
  }
  else {
    uVar18 = (uint)(ushort)param_2[1];
    if (0x20 < uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar18,0x20,&DAT_01883538);
    }
    pbVar20 = (byte *)(param_2 + 2);
  }
  FUN_016dd606(&local_58,0,0x24);
  uVar14 = (uint)&local_58 | 4;
  puVar12 = (undefined4 *)((uint)&local_58 | 2);
  if (uVar18 < 0x21) {
    uVar1 = local_58 >> 0x10;
    if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar1,0x20,0x20,&DAT_018832f8);
    }
    uVar13 = 0;
    uVar11 = 0;
    pbVar16 = pbVar20;
    if (uVar1 != 0x20) {
      uVar8 = 0x20 - uVar1;
      do {
        if (uVar18 == uVar11) break;
        if (uVar8 == uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar8,uVar8,&DAT_018832e8);
        }
        bVar10 = pbVar20[uVar11];
        if (bVar10 - 0x41 < 0x1a) {
          bVar10 = bVar10 | 0x20;
        }
        *(byte *)(uVar14 + uVar1 + uVar11) = bVar10;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
      pbVar16 = pbVar20 + uVar11;
    }
    pbVar20 = pbVar20 + uVar18;
    local_58 = CONCAT22((short)(uVar11 + uVar1),(short)local_58);
    if (pbVar16 != pbVar20) {
      pbVar17 = pbVar16 + 1;
      bVar10 = *pbVar16;
      if (bVar10 - 0x41 < 0x1a) {
        bVar10 = bVar10 | 0x20;
      }
      FUN_0104afe8(&local_30,puVar12,uVar11 + uVar1 & 0xffff);
      if (local_28 == local_30) {
        FUN_006029c0(&local_30);
      }
      iVar9 = local_28 + 1;
      *(byte *)(local_2c + local_28) = bVar10;
      uVar18 = (int)pbVar20 - (int)pbVar17;
      local_28 = iVar9;
      if ((uint)(local_30 - iVar9) < uVar18) {
        FUN_0104e980(&local_30,iVar9,uVar18,1,1);
      }
      if (pbVar17 != pbVar20) {
        do {
          bVar10 = *pbVar17;
          if (bVar10 - 0x41 < 0x1a) {
            bVar10 = bVar10 | 0x20;
          }
          *(byte *)(local_2c + local_28) = bVar10;
          local_28 = local_28 + 1;
          uVar18 = uVar18 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar18 != 0);
      }
      local_6e = (undefined2)local_28;
      uStack_6c = (undefined2)((uint)local_28 >> 0x10);
      local_72 = (undefined2)local_2c;
      uStack_70 = (undefined2)((uint)local_2c >> 0x10);
      local_76 = (undefined2)local_30;
      uStack_74 = (undefined2)((uint)local_30 >> 0x10);
      if ((short)local_58 != 0 && local_54 != 0) {
        thunk_FUN_016d3fb4(local_50);
      }
      uVar13 = 1;
      *(undefined2 *)(puVar12 + 3) = uStack_6c;
      puVar12[2] = CONCAT22(local_6e,uStack_70);
      puVar12[1] = CONCAT22(local_72,uStack_74);
      *puVar12 = CONCAT22(local_76,uStack_78);
    }
  }
  else {
    FUN_0104afe8(&local_30,puVar12,uVar18);
    local_6e = (undefined2)local_28;
    uStack_6c = (undefined2)((uint)local_28 >> 0x10);
    local_72 = (undefined2)local_2c;
    uStack_70 = (undefined2)((uint)local_2c >> 0x10);
    local_76 = (undefined2)local_30;
    uStack_74 = (undefined2)((uint)local_30 >> 0x10);
    if ((short)local_58 != 0 && local_54 != 0) {
      thunk_FUN_016d3fb4(local_50);
    }
    *(undefined2 *)(puVar12 + 3) = uStack_6c;
    *puVar12 = CONCAT22(local_76,uStack_78);
    puVar12[2] = CONCAT22(local_6e,uStack_70);
    puVar12[1] = CONCAT22(local_72,uStack_74);
    local_58 = CONCAT22(local_58._2_2_,1);
    if ((uint)(local_54 - local_4c) < uVar18) {
      FUN_0104e980(uVar14,local_4c,uVar18,1,1);
    }
    do {
      bVar10 = *pbVar20;
      if (bVar10 - 0x41 < 0x1a) {
        bVar10 = bVar10 | 0x20;
      }
      *(byte *)(local_50 + local_4c) = bVar10;
      local_4c = local_4c + 1;
      uVar18 = uVar18 - 1;
      pbVar20 = pbVar20 + 1;
    } while (uVar18 != 0);
    uVar13 = (short)local_58;
  }
  iVar5 = local_4c;
  iVar4 = local_50;
  iVar9 = local_54;
  uVar3 = local_58._2_2_;
  sVar2 = param_2[0x20];
  if (param_2[0x12] == 1) {
    iVar19 = *(int *)(param_2 + 0x18);
    uVar6 = 0;
    if (iVar19 < 0) {
LAB_0103b5e0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,iVar19);
    }
    uVar6 = *(undefined4 *)(param_2 + 0x16);
    uVar21 = 1;
    if (iVar19 == 0) {
      iVar15 = 0;
      iVar7 = 1;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(iVar19,uVar6);
      iVar15 = iVar19;
      if (iVar7 == 0) {
        uVar6 = 1;
        goto LAB_0103b5e0;
      }
    }
    FUN_016dd1aa(iVar7,uVar6,iVar19);
  }
  else {
    iVar15 = *(int *)(param_2 + 0x14);
    iVar7 = *(int *)(param_2 + 0x16);
    iVar19 = *(int *)(param_2 + 0x18);
    local_58 = *(uint *)(param_2 + 0x1a);
    local_54 = *(int *)(param_2 + 0x1c);
    local_50 = *(int *)(param_2 + 0x1e);
    local_30._0_2_ = param_2[0x13];
    uVar21 = 0;
  }
  *(int *)(param_1 + 2) = iVar9;
  param_1[1] = uVar3;
  *param_1 = uVar13;
  *(char *)(param_1 + 0x20) = (char)sVar2;
  *(int *)(param_1 + 4) = iVar4;
  *(int *)(param_1 + 6) = iVar5;
  *(undefined4 *)(param_1 + 8) = uStack_48;
  *(undefined4 *)(param_1 + 10) = uStack_44;
  *(undefined4 *)(param_1 + 0xc) = uStack_40;
  *(undefined4 *)(param_1 + 0xe) = uStack_3c;
  *(undefined4 *)(param_1 + 0x10) = uStack_38;
  param_1[0x13] = (short)local_30;
  param_1[0x12] = uVar21;
  *(int *)(param_1 + 0x14) = iVar15;
  *(int *)(param_1 + 0x16) = iVar7;
  *(int *)(param_1 + 0x18) = iVar19;
  *(uint *)(param_1 + 0x1a) = local_58;
  *(int *)(param_1 + 0x1c) = local_54;
  *(int *)(param_1 + 0x1e) = local_50;
  return;
}

