// FUN_00732ad8 @ 00732ad8 size=1624 calls_out=7 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00732ad8(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 uint *param_5)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  short sVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  char cVar15;
  int iVar16;
  undefined8 uVar17;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  uint *local_c4;
  short local_c0;
  undefined2 local_be;
  undefined2 uStack_bc;
  undefined2 local_ba;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint *local_a4;
  undefined4 local_a0;
  undefined4 local_8c;
  undefined2 local_84;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  uint *local_70;
  undefined2 local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  uint uStack_3c;
  short local_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 local_32;
  
  cVar15 = (char)param_2[0x52];
  if (cVar15 != 'P') {
    if (cVar15 == 'O') {
      local_a4 = (uint *)param_2[0x53];
      if (local_a4 == (uint *)0x0) {
        uVar12 = 0;
        local_a8 = *param_5 + 8;
        local_a4 = param_2;
      }
      else {
        uVar12 = 2;
        local_a8 = local_a4[0x46] + 8;
      }
    }
    else {
      uVar12 = (undefined1)param_2[0x53];
      local_a8 = param_2[0x54];
      local_a4 = (uint *)param_2[0x55];
      local_48 = CONCAT22(CONCAT11(local_48._3_1_,*(undefined1 *)((int)param_2 + 0x14b)),
                          *(undefined2 *)((int)param_2 + 0x149));
      local_d0 = (uint)*(uint3 *)((int)param_2 + 0x14d);
    }
    local_b0._0_3_ = CONCAT21((undefined2)local_48,cVar15);
    local_b0 = (uint *)CONCAT13(local_48._2_1_,(undefined3)local_b0);
    local_ac._0_3_ = CONCAT21((undefined2)local_d0,uVar12);
    local_ac = CONCAT13(local_d0._2_1_,(undefined3)local_ac);
    goto LAB_00732dd4;
  }
  if ((*param_2 & 1) == 0) {
    local_a8 = *param_5;
    param_2[0x53] = 0;
    *(undefined1 *)(param_2 + 0x52) = 0x4f;
    local_ac = local_ac & 0xffffff00;
    local_a8 = local_a8 + 8;
    local_b0 = (uint *)CONCAT31(local_b0._1_3_,0x4f);
    local_a4 = param_2;
    goto LAB_00732dd4;
  }
  uVar4 = param_2[2];
  uVar13 = param_2[3];
  local_b0 = param_2 + 0x2e;
  uVar5 = param_2[0x3c];
  uVar7 = param_2[0x3d];
  local_8c = 0;
  local_a8 = 0;
  local_b8 = param_2[0x34];
  local_b4 = param_2[0x35];
  local_ac = param_2[0x40] + 8;
  FUN_00718b48(&local_48,&local_b8);
  iVar16 = local_48;
  uVar11 = local_a8;
  if ((char)local_48 == 'O') {
    if (local_a8 == 0) {
      local_c4 = (uint *)0x0;
      local_c8 = (uint *)CONCAT31(local_c8._1_3_,0x45);
      goto LAB_00732e1c;
    }
    uVar2 = *(ushort *)((int)param_2 + 0xda);
    uVar17 = FUN_0134c25c(local_a0);
    sVar9 = 0x76;
    if (uVar2 < 5) {
      sVar9 = 0x2130;
    }
    local_7c = (uint)local_a4;
    local_80 = uVar11;
    local_70 = &local_a8;
    do {
      puVar10 = local_70;
      local_78._4_4_ = (int)((ulonglong)uVar17 >> 0x20);
      local_78._0_4_ = (undefined4 *)uVar17;
      iVar16 = local_78._4_4_ + -1;
      puVar14 = (undefined4 *)local_78 + 4;
      local_78 = uVar17;
      if (iVar16 == -1) {
        if (local_70[5] == 0) {
          uVar11 = *local_70;
          local_70[5] = 1;
          puVar10[6] = local_80 - uVar11;
        }
        local_7c = 0;
        local_80 = 0x2e;
        goto LAB_00732f40;
      }
      local_58 = *(undefined4 *)local_78;
      uStack_54 = ((undefined4 *)local_78)[1];
      uStack_50 = ((undefined4 *)local_78)[2];
      uStack_4c = ((undefined4 *)local_78)[3];
      FUN_00716a3c(&local_48,&local_80,*(undefined4 *)(local_70[3] + 0x20),&local_58);
      if (local_48 == 0x2e && local_44 == 0) {
        local_84 = local_32;
        local_c8 = (uint *)local_40;
        local_c4 = (uint *)uStack_3c;
        local_ba = local_32;
        local_c0 = local_38;
        local_be = uStack_36;
        uStack_bc = uStack_34;
        goto LAB_00732e34;
      }
      local_64 = local_32;
      uVar17 = CONCAT44(iVar16,puVar14);
    } while (local_38 != sVar9);
    local_84 = local_32;
    local_78._0_4_ = puVar14;
    local_78._4_4_ = iVar16;
    local_38 = sVar9;
    FUN_00717f68(&local_80,&local_48);
LAB_00732f40:
    local_c8 = (uint *)local_80;
    local_c4 = (uint *)local_7c;
    local_c0 = (short)local_78;
    local_be = (undefined2)((ulonglong)local_78 >> 0x10);
    uStack_bc = (undefined2)((ulonglong)local_78 >> 0x20);
    local_ba = (undefined2)((ulonglong)local_78 >> 0x30);
    local_cc = 0;
    local_d0 = 0;
    puVar8 = (uint *)0;
    puVar10 = (uint *)0x0;
    if (local_80 == 0x2e && local_7c == 0) goto LAB_00732fb0;
    FUN_0071d020(&local_b8,*param_5 + 8,*(undefined1 *)((int)param_2 + 0xd9),param_2[0x41],&local_c8
                );
    puVar10 = local_b0;
    if ((char)local_b8 == 'O') {
      puVar8 = (uint *)local_b4;
      goto LAB_00732fb0;
    }
    local_d2 = local_b8._3_1_;
    local_d4 = local_b8._1_2_;
    local_c4 = (uint *)local_b4;
    uVar11 = local_ac;
    local_c8._0_1_ = (char)local_b8;
  }
  else {
    FUN_01bed4e2((int)&local_c8 + 2,(uint)&local_48 | 2,0xe);
    local_c8._0_2_ = (undefined2)iVar16;
LAB_00732e1c:
LAB_00732e34:
    local_cc = 0;
    local_d0 = 1;
    puVar10 = (uint *)CONCAT22(local_be,local_c0);
    uVar11 = CONCAT22(local_ba,uStack_bc);
    local_d4 = local_c8._1_2_;
    local_d2 = local_c8._3_1_;
    puVar8 = local_c4;
    if ((char)local_c8 == 'O') {
LAB_00732fb0:
      piVar6 = (int *)*param_5;
      do {
        iVar16 = *piVar6;
        bVar3 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar3);
      *piVar6 = iVar16 + 1;
      if (iVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x73312c);
        (*pcVar1)();
      }
      param_1[8] = uVar4;
      param_1[9] = uVar13;
      param_1[10] = uVar5;
      param_1[0xb] = uVar7;
      param_1[0xc] = puVar8;
      param_1[0xd] = puVar10;
      param_1[0xe] = piVar6;
      param_1[0xf] = local_8c;
      *param_1 = param_2;
      param_1[1] = param_5;
      param_1[2] = param_2;
      param_1[3] = param_2;
      param_1[4] = param_3;
      param_1[5] = param_4;
      param_1[6] = param_2;
      param_1[7] = param_5;
      return;
    }
  }
  cVar15 = (char)param_2[0x52];
  if (cVar15 == 'P') {
    *(undefined2 *)((int)param_2 + 0x149) = local_d4;
    *(char *)(param_2 + 0x52) = (char)local_c8;
    param_2[0x54] = (uint)puVar10;
    param_2[0x55] = uVar11;
    *(undefined1 *)((int)param_2 + 0x14b) = local_d2;
    param_2[0x53] = (uint)local_c4;
    cVar15 = (char)local_c8;
LAB_00732ebc:
    uVar12 = (undefined1)param_2[0x53];
    local_a8 = param_2[0x54];
    local_a4 = (uint *)param_2[0x55];
    local_48 = CONCAT22(CONCAT11(local_48._3_1_,*(undefined1 *)((int)param_2 + 0x14b)),
                        *(undefined2 *)((int)param_2 + 0x149));
    local_d0 = (uint)*(uint3 *)((int)param_2 + 0x14d);
  }
  else {
    if (cVar15 != 'O') goto LAB_00732ebc;
    local_a4 = (uint *)param_2[0x53];
    if (local_a4 == (uint *)0x0) {
      local_a8 = *param_5;
      uVar12 = 0;
      local_a4 = param_2;
    }
    else {
      local_a8 = local_a4[0x46];
      uVar12 = 2;
    }
    local_a8 = local_a8 + 8;
  }
  local_b0._0_3_ = CONCAT21((undefined2)local_48,cVar15);
  local_b0 = (uint *)CONCAT13(local_48._2_1_,(undefined3)local_b0);
  local_ac._0_3_ = CONCAT21((undefined2)local_d0,uVar12);
  local_ac = CONCAT13(local_d0._2_1_,(undefined3)local_ac);
LAB_00732dd4:
  local_b8 = 0;
  local_d0 = param_3;
  local_cc = param_4;
  local_c8 = param_2;
  local_c4 = param_5;
  FUN_0071f198(param_1 + 2,&local_d0,&local_b0);
  *param_1 = 0;
  return;
}

