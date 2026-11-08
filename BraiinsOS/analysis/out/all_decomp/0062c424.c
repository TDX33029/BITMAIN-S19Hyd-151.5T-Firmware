// FUN_0062c424 @ 0062c424 size=1636 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0062c424(uint *param_1,uint *param_2,undefined4 param_3,uint param_4,uint *param_5)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  uint3 *puVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  uint **ppuVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  undefined1 uVar15;
  uint **ppuVar16;
  uint *puVar17;
  int *piVar18;
  uint **ppuVar19;
  uint uVar20;
  short sVar21;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  short local_b0;
  undefined2 uStack_ae;
  undefined2 local_ac;
  undefined2 uStack_aa;
  undefined4 local_a8;
  uint *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint *local_98;
  uint *local_94;
  int *local_90;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined2 local_74;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  uint **local_64;
  uint **local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_48;
  uint *local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  short local_38;
  undefined4 uStack_36;
  undefined2 local_32;
  
  local_48 = CONCAT13(local_48._3_1_,
                      CONCAT12(local_48._2_1_,CONCAT11(local_48._1_1_,(undefined1)local_48)));
  cVar4 = (char)param_2[0x52];
  local_b4 = param_5;
  local_b8 = param_2;
  if (cVar4 != 'P') {
    if (cVar4 == 'O') {
      local_94 = (uint *)param_2[0x53];
      if (local_94 == (uint *)0x0) {
        uVar15 = 0;
        local_98 = (uint *)(*param_5 + 8);
        local_94 = param_2;
      }
      else {
        uVar15 = 2;
        local_98 = (uint *)(local_94[0x46] + 8);
      }
    }
    else {
      uVar15 = (undefined1)param_2[0x53];
      local_98 = (uint *)param_2[0x54];
      local_94 = (uint *)param_2[0x55];
      local_48 = CONCAT22(CONCAT11(local_48._3_1_,*(undefined1 *)((int)param_2 + 0x14b)),
                          *(undefined2 *)((int)param_2 + 0x149));
      local_c0 = (uint)*(uint3 *)((int)param_2 + 0x14d);
    }
    local_a0._0_3_ = CONCAT21((short)local_48,cVar4);
    local_a0 = (uint *)CONCAT13(local_48._2_1_,(undefined3)local_a0);
    local_9c._0_3_ = CONCAT21((undefined2)local_c0,uVar15);
    local_9c = CONCAT13(local_c0._2_1_,(undefined3)local_9c);
    goto LAB_0062c844;
  }
  if ((*param_2 & 1) == 0) {
    uVar20 = *param_5;
    param_2[0x53] = 0;
    *(undefined1 *)(param_2 + 0x52) = 0x4f;
    local_9c = local_9c & 0xffffff00;
    local_98 = (uint *)(uVar20 + 8);
    local_a0 = (uint *)CONCAT31(local_a0._1_3_,0x4f);
    local_94 = param_2;
    goto LAB_0062c844;
  }
  uVar20 = param_2[0x3c];
  if (uVar20 != 0) {
    local_d0 = param_2[0x3d];
  }
  uVar12 = param_2[2];
  uVar10 = param_2[3];
  local_a8 = param_2[0x34];
  local_a4 = (uint *)param_2[0x35];
  local_7c = 0;
  local_98 = (uint *)0x0;
  local_a0 = param_2 + 0x2e;
  local_9c = param_2[0x40] + 8;
  FUN_006096b4(&local_48,&local_a8);
  uVar9 = uStack_36;
  uVar11 = local_48 & 0xff;
  if (uVar11 == 0x4f) {
    if (local_98 == (uint *)0x0) {
      uVar11 = 0x45;
      goto LAB_0062c614;
    }
    sVar21 = 0x76;
    if (*(ushort *)((int)param_2 + 0xda) < 5) {
      sVar21 = 0x2130;
    }
    if (*local_90 == 1) {
      puVar17 = (uint *)local_90[2];
      local_64 = (uint **)local_90[3];
    }
    else {
      local_64 = (uint **)local_90[1];
      if (&DAT_00000005 < local_64) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,local_64,5,&DAT_01882304);
      }
      puVar17 = (uint *)(local_90 + 2);
    }
    ppuVar16 = &local_98;
    local_60 = ppuVar16;
    local_70 = local_98;
    local_6c = local_94;
    local_68 = puVar17;
    if (local_64 == (uint **)0x0) {
      if ((local_84 & 1) == 0) {
        local_80 = 0;
        local_84 = 1;
      }
LAB_0062c8c4:
      local_b4 = (uint *)0x0;
      local_b8 = (uint *)&DAT_0000002e;
    }
    else {
      do {
        uStack_36 = uVar9;
        uVar8 = uStack_36._2_2_;
        ppuVar7 = local_60;
        puVar13 = local_70;
        ppuVar19 = (uint **)((int)local_64 + -1);
        local_68 = puVar17;
        uStack_36._2_2_ = uVar8;
        if (ppuVar19 == (uint **)0xffffffff) {
          if (local_60[5] == (uint *)0x0) {
            local_94 = *local_60;
            local_60[5] = (uint *)0x1;
            ppuVar7[6] = (uint *)((int)puVar13 - (int)local_94);
          }
          goto LAB_0062c8c4;
        }
        uVar9 = uStack_36;
        FUN_006067fc(&local_48,&local_70,local_60[3][8],puVar17);
        uVar9 = uStack_36;
        local_ac = (undefined2)((uint)uVar9 >> 0x10);
        if (local_48 == 0x2e && local_44 == (uint *)0x0) {
          local_b0 = local_38;
          uVar11 = (uint)local_40 & 0xff;
          local_78 = uVar9;
          local_74 = local_32;
          local_b8 = local_40;
          local_b4 = (uint *)CONCAT22(uStack_3a,local_3c);
          uStack_ae = (undefined2)uVar9;
          uStack_aa = local_32;
          goto LAB_0062c628;
        }
        puVar17 = puVar17 + 4;
        ppuVar16 = (uint **)CONCAT22(uStack_3a,local_3c);
        local_64 = ppuVar19;
        local_54 = local_32;
        local_68 = puVar17;
        local_58 = uVar9;
        local_94 = local_40;
      } while (local_38 != sVar21);
      local_74 = local_32;
      local_78 = uVar9;
      local_38 = sVar21;
      uStack_36._2_2_ = local_ac;
      FUN_0060872c(&local_70,&local_48);
      local_b4 = local_6c;
      local_b8 = local_70;
      local_94 = local_68;
      ppuVar16 = local_64;
    }
    local_b0 = (short)local_94;
    uStack_ae = (undefined2)((uint)local_94 >> 0x10);
    local_ac = SUB42(ppuVar16,0);
    uStack_aa = (undefined2)((uint)ppuVar16 >> 0x10);
    piVar18 = (int *)*param_5;
    local_bc = 0;
    puVar13 = (uint *)((uint)local_b8 ^ 0x2e | (uint)local_b4);
    local_c0 = 0;
    puVar17 = (uint *)0x0;
    if (puVar13 == (uint *)0x0) {
LAB_0062c928:
      do {
        iVar14 = *piVar18;
        bVar6 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar6);
      *piVar18 = iVar14 + 1;
      if (iVar14 < 0) {
        software_udf(0xfdee,0x62c9e4);
        return;
      }
      param_1[8] = uVar12;
      param_1[9] = uVar10;
      param_1[10] = uVar20;
      param_1[0xb] = local_d0;
      param_1[0xc] = (uint)puVar17;
      param_1[0xd] = (uint)puVar13;
      param_1[0xe] = (uint)piVar18;
      param_1[0xf] = local_7c;
      local_38 = (short)param_3;
      uStack_36._2_2_ = (undefined2)param_4;
      *param_1 = local_48;
      param_1[1] = (uint)local_44;
      param_1[2] = (uint)local_40;
      param_1[3] = (uint)param_2;
      param_1[4] = CONCAT22(uStack_36._2_2_,local_38);
      param_1[5] = param_4 & 0xffff0000;
      param_1[6] = (uint)param_2;
      param_1[7] = (uint)local_b4;
      return;
    }
    FUN_00611d9c(&local_a8,piVar18 + 2,*(undefined1 *)((int)param_2 + 0xd9),param_2[0x41],&local_b8)
    ;
    uVar11 = local_a8 & 0xff;
    if (uVar11 == 0x4f) {
      puVar17 = local_a4;
      puVar13 = local_a0;
      goto LAB_0062c928;
    }
    bVar5 = (byte)param_2[0x52];
    puVar17 = local_a4;
  }
  else {
    local_b4 = local_44;
    local_b0 = (short)local_40;
    uStack_ae = local_40._2_2_;
    local_ac = local_3c;
    uStack_aa = uStack_3a;
    local_b8 = (uint *)(local_48 & 0xffffff00);
LAB_0062c614:
    local_b8 = (uint *)CONCAT31(local_b8._1_3_,(char)uVar11);
LAB_0062c628:
    local_c0 = 1;
    local_a8._1_2_ = (undefined2)((uint)local_b8 >> 8);
    local_9c = CONCAT22(uStack_aa,local_ac);
    local_a0 = (uint *)CONCAT22(uStack_ae,local_b0);
    bVar5 = (byte)param_2[0x52];
    local_a8._3_1_ = local_b8._3_1_;
    puVar17 = local_b4;
  }
  uVar20 = (uint)bVar5;
  if (uVar20 == 0x50) {
    *(undefined1 *)((int)param_2 + 0x14b) = local_a8._3_1_;
    *(undefined2 *)((int)param_2 + 0x149) = local_a8._1_2_;
    param_2[0x54] = (uint)local_a0;
    param_2[0x55] = local_9c;
    *(char *)(param_2 + 0x52) = (char)uVar11;
    param_2[0x53] = (uint)puVar17;
    uVar20 = uVar11;
  }
  if (uVar20 == 0x4f) {
    puVar17 = (uint *)param_2[0x53];
    if (puVar17 == (uint *)0x0) {
      uVar11 = *param_5;
      uVar15 = 0;
    }
    else {
      uVar11 = puVar17[0x46];
      uVar15 = 2;
      param_2 = puVar17;
    }
    local_98 = (uint *)(uVar11 + 8);
  }
  else {
    puVar1 = (undefined1 *)((int)param_2 + 0x14b);
    puVar2 = (undefined2 *)((int)param_2 + 0x149);
    puVar3 = (uint3 *)((int)param_2 + 0x14d);
    uVar15 = (undefined1)param_2[0x53];
    local_98 = (uint *)param_2[0x54];
    param_2 = (uint *)param_2[0x55];
    local_48._3_1_ = (undefined1)(local_48 >> 0x18);
    local_48 = CONCAT22(CONCAT11(local_48._3_1_,*puVar1),*puVar2);
    local_c0 = (uint)*puVar3;
  }
  local_a0._0_3_ = CONCAT21((short)local_48,(char)uVar20);
  local_a0 = (uint *)CONCAT13(local_48._2_1_,(undefined3)local_a0);
  local_9c._0_3_ = CONCAT21((undefined2)local_c0,uVar15);
  local_9c = CONCAT13(local_c0._2_1_,(undefined3)local_9c);
  local_94 = param_2;
LAB_0062c844:
  local_a8 = 0;
  local_c0 = param_3;
  local_bc = param_4;
  FUN_0061e9f8(param_1 + 2,&local_c0,&local_a0);
  *param_1 = 0;
  return;
}

