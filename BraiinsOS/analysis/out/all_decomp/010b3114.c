// FUN_010b3114 @ 010b3114 size=1196 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010b3114(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  uint local_b4;
  uint local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  uint uStack_6c;
  uint local_68;
  uint local_64;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_70 = (uint)local_70._2_2_ << 0x10;
  uVar11 = param_1[7];
  bVar19 = 0x3ffffffe < uVar11;
  bVar18 = uVar11 == 0x3fffffff;
  uVar12 = uVar11 * 4;
  if (uVar11 < 0x40000000) {
    bVar19 = 0x7ffffffd < uVar12;
    bVar18 = uVar12 == 0x7ffffffe;
  }
  if (bVar19 && !bVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar12);
  }
  uVar14 = param_1[6];
  uVar16 = 0;
  uVar2 = param_1[0xe];
  if (uVar12 == 0) {
    local_a4 = 2;
    local_a8 = 0;
  }
  else {
    local_a4 = thunk_FUN_016d4a50(uVar12);
    local_a8 = uVar11;
    if (local_a4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(2,uVar12);
    }
  }
  FUN_016dd1aa(local_a4,uVar14,uVar12);
  local_a0 = uVar11;
  uVar20 = FUN_00a5ee50(&local_a8);
  uVar12 = param_1[10];
  iVar1 = uVar12 * 0x30;
  if (0x2aaaaaa < uVar12) {
LAB_010b31c4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar16,iVar1);
  }
  if (iVar1 == 0) {
    local_64 = 4;
    local_68 = 0;
  }
  else {
    piVar5 = (int *)param_1[9];
    uVar11 = thunk_FUN_016d4a50(iVar1);
    if (uVar11 == 0) {
      uVar16 = 4;
      goto LAB_010b31c4;
    }
    local_68 = uVar12;
    local_64 = uVar11;
    if (uVar12 != 0) {
      puVar6 = (uint *)((uint)&local_38 | 5);
      iVar17 = 0;
      uVar14 = 0;
      piVar15 = piVar5;
      do {
        if (iVar1 == iVar17) break;
        iVar3 = piVar15[0xb];
        if ((undefined4 *)piVar15[7] == (undefined4 *)0x0) {
          uVar4 = *(undefined1 *)((int)piVar5 + iVar17 + 0x20);
          local_38 = 0;
        }
        else {
          (**(code **)piVar15[7])
                    (&local_a8,(int)piVar5 + iVar17 + 0x28,
                     *(undefined4 *)((int)piVar5 + iVar17 + 0x20),
                     *(undefined4 *)((int)piVar5 + iVar17 + 0x24));
          local_48 = CONCAT13((undefined1)local_a0,local_a4._1_3_);
          local_44._0_3_ = (undefined3)(local_a0 >> 8);
          local_44._3_1_ = (undefined1)local_9c;
          local_40._0_3_ = (undefined3)(local_9c >> 8);
          local_38 = local_a8;
          uVar4 = (undefined1)local_a4;
        }
        puVar6[1] = local_44;
        *(uint *)((int)puVar6 + 7) = CONCAT31((undefined3)local_40,local_44._3_1_);
        local_34 = CONCAT31(local_34._1_3_,uVar4);
        puVar8 = (undefined4 *)piVar15[3];
        iVar9 = piVar15[4];
        iVar10 = piVar15[5];
        *puVar6 = local_48;
        (*(code *)*puVar8)(&local_a8,piVar15 + 6,iVar9,iVar10);
        iVar9 = *piVar15;
        if (iVar9 == 1) {
          local_b4 = *(uint *)((int)piVar5 + iVar17 + 4);
          local_b0 = *(uint *)((int)piVar5 + iVar17 + 8);
        }
        uVar14 = uVar14 + 1;
        piVar15 = piVar15 + 0xc;
        local_54 = local_34;
        local_50 = local_30;
        uStack_4c = local_2c;
        local_58 = local_38;
        local_3c = local_9c;
        local_40 = local_a0;
        local_44 = local_a4;
        local_48 = local_a8;
        puVar7 = (uint *)(uVar11 + iVar17);
        *puVar7 = (uint)(iVar9 == 1);
        iVar17 = iVar17 + 0x30;
        puVar7[5] = local_a0;
        puVar7[1] = local_b4;
        puVar7[6] = local_9c;
        *(short *)(puVar7 + 0xb) = (short)iVar3;
        puVar7[2] = local_b0;
        puVar7[3] = local_a8;
        puVar7[4] = local_a4;
        puVar7[7] = local_38;
        puVar7[8] = local_34;
        puVar7[9] = local_30;
        puVar7[10] = local_2c;
      } while (uVar12 != uVar14);
    }
  }
  local_58 = local_68;
  local_54 = local_64;
  uVar16 = 0;
  uVar14 = param_1[0xd];
  bVar19 = 0x7fffffe < uVar14;
  bVar18 = uVar14 == 0x7ffffff;
  uVar11 = uVar14 * 0x20;
  if (uVar14 < 0x8000000) {
    bVar19 = 0x7ffffffb < uVar11;
    bVar18 = uVar11 == 0x7ffffffc;
  }
  local_50 = uVar12;
  if (bVar19 && !bVar18) {
LAB_010b33e4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar16,uVar11);
  }
  if (uVar11 == 0) {
    local_34 = 4;
    local_38 = 0;
  }
  else {
    puVar6 = (uint *)param_1[0xc];
    uVar12 = thunk_FUN_016d4a50(uVar11);
    if (uVar12 == 0) {
      uVar16 = 4;
      goto LAB_010b33e4;
    }
    local_38 = uVar14;
    local_34 = uVar12;
    if (uVar14 != 0) {
      uVar13 = 0;
      do {
        if (uVar11 == 0) break;
        (**(code **)puVar6[4])(&local_98,puVar6 + 7,puVar6[5],puVar6[6]);
        local_a8 = *puVar6;
        local_a4 = puVar6[1];
        local_a0 = puVar6[2];
        local_9c = puVar6[3];
        uVar11 = uVar11 - 0x20;
        puVar6 = puVar6 + 8;
        puVar7 = (uint *)(uVar12 + uVar13 * 0x20);
        uVar13 = uVar13 + 1;
        *puVar7 = local_a8;
        puVar7[1] = local_a4;
        puVar7[2] = local_a0;
        puVar7[3] = local_9c;
        puVar7[4] = local_98;
        puVar7[5] = local_94;
        puVar7[6] = (uint)local_90;
        puVar7[7] = local_90._4_4_;
      } while (uVar14 != uVar13);
    }
  }
  local_78 = local_34;
  local_7c = local_38;
  local_a4 = 0;
  local_48 = local_38;
  local_44 = local_34;
  local_a8 = *param_1;
  if (local_a8 == 0) {
    local_a8 = 0;
  }
  else if (local_a8 == 1) {
    local_a8 = 1;
  }
  else {
    local_a4 = param_1[1];
    local_38 = param_1[2];
    local_34 = param_1[3];
    local_30 = param_1[4];
    local_2c = param_1[5];
  }
  local_98 = local_30;
  local_80 = local_50;
  local_84 = local_54;
  local_70 = CONCAT22(local_70._2_2_,(short)uVar2);
  local_88 = local_58;
  local_a0 = local_38;
  local_9c = local_34;
  local_94 = local_2c;
  local_74 = uVar14;
  local_40 = uVar14;
  local_90 = uVar20;
  puVar6 = (uint *)thunk_FUN_016d4a50(0x40);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x40);
  }
  *puVar6 = local_a8;
  puVar6[1] = local_a4;
  puVar6[2] = local_a0;
  puVar6[3] = local_9c;
  puVar6[4] = local_98;
  puVar6[5] = local_94;
  *(undefined8 *)(puVar6 + 6) = local_90;
  puVar6[8] = local_88;
  puVar6[9] = local_84;
  puVar6[10] = local_80;
  puVar6[0xb] = local_7c;
  puVar6[0xc] = local_78;
  puVar6[0xd] = local_74;
  puVar6[0xe] = local_70;
  puVar6[0xf] = uStack_6c;
  return;
}

