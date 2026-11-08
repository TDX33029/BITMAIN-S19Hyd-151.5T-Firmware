// FUN_018a9bec @ 018a9bec size=2164 calls_out=22 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffc0 */
/* WARNING: Removing unreachable block (ram,0xe727a420) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018a9bec(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  undefined **ppuVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint *extraout_r1;
  undefined *puVar11;
  uint *extraout_r1_00;
  undefined4 *puVar12;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint *extraout_r1_03;
  undefined4 uVar13;
  ushort extraout_r3;
  ushort extraout_r3_00;
  ushort extraout_r3_01;
  ushort extraout_r3_02;
  ushort extraout_r3_03;
  undefined4 uVar14;
  undefined4 unaff_r4;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  ushort uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint local_fc;
  uint local_e4;
  ushort local_e0;
  int local_c8;
  undefined8 local_bc;
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined *local_a0;
  undefined *puStack_9c;
  undefined *puStack_98;
  uint local_90;
  uint local_8c;
  undefined *local_88;
  undefined *local_84;
  undefined *local_80;
  undefined *puStack_7c;
  undefined *puStack_78;
  undefined8 local_74;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined *puStack_50;
  undefined4 local_48;
  char local_44;
  byte bStack_43;
  ushort uStack_42;
  undefined *local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined *puStack_34;
  undefined *puStack_30;
  
  uVar19 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar19 == (ushort *)0x0) || ((int)((ulonglong)uVar19 >> 0x20) != 2)) {
    *(undefined1 *)(param_1 + 1) = 0xb;
    *param_1 = 1;
    param_1[2] = &DAT_005239af;
    param_1[3] = 2;
  }
  else {
    uVar18 = *(ushort *)uVar19;
    uVar19 = FUN_018beed0(param_2,uVar18 << 8 | uVar18 >> 8);
    if ((int)uVar19 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 10;
    }
    else {
      local_b4 = 0;
      local_a8 = 0;
      local_c8 = 4;
      local_ac = 4;
      local_b0 = 0;
      if ((int)((ulonglong)uVar19 >> 0x20) != 0) {
        local_fc = 0xf0052;
        ppuVar6 = (undefined **)((uint)&local_48 | 4);
        puVar7 = (uint *)((uint)&local_68 | 4);
        uVar17 = 0;
        iVar10 = 0;
        uVar3 = CONCAT44(unaff_r4,local_e4);
LAB_018a9cf4:
        iVar4 = local_a8;
        local_e4 = (uint)uVar3;
        local_bc = uVar19;
        FUN_018be4cc(&local_48,&local_bc);
        uVar15 = (uint)local_40 >> 0x10;
        uVar18 = local_48._2_2_;
        if ((char)local_48 != '\x14') {
          uVar17 = CONCAT22(local_40._0_2_,uStack_42);
          puVar9 = (uint *)(local_48 >> 8 & 0xff);
          puVar11 = (undefined *)(uint)CONCAT11(bStack_43,local_44);
          cVar5 = (char)local_48;
          local_e0 = local_48._2_2_;
          goto LAB_018aa500;
        }
        uVar2 = CONCAT11(bStack_43,local_44);
        uVar19 = FUN_018beed0(&local_bc,2);
        puVar9 = (uint *)((ulonglong)uVar19 >> 0x20);
        if (((ushort *)uVar19 == (ushort *)0x0) || (puVar9 != (uint *)0x2)) {
          uVar17 = 0x20052;
          uVar15 = 0;
          puVar11 = &DAT_005239af;
          cVar5 = '\v';
          goto LAB_018aa500;
        }
        uVar1 = *(ushort *)uVar19;
        local_e0 = uVar1 << 8 | uVar1 >> 8;
        uVar20 = FUN_018beed0(&local_bc);
        uVar15 = (uint)((ulonglong)uVar20 >> 0x20);
        iVar8 = (int)uVar20;
        if (iVar8 == 0) {
          puVar9 = (uint *)(local_e4 >> 8);
          uVar15 = 0;
          puVar11 = (undefined *)((ulonglong)uVar3 >> 0x20);
          cVar5 = '\n';
          local_e0 = (ushort)((ulonglong)uVar3 >> 0x10);
          goto LAB_018aa500;
        }
        local_6c = 0;
        local_74 = uVar20;
        switch(uVar18) {
        case 0:
          FUN_018a92ec(&local_48,&local_74);
          puVar9 = (uint *)(uint)bStack_43;
          if (local_48 != 0) {
LAB_018aa3b4:
            uVar17 = (uint)local_40 >> 0x10 | (int)local_3c << 0x10;
LAB_018aa3c0:
            uVar15 = (uint)local_3c >> 0x10;
            puVar11 = local_40;
            cVar5 = local_44;
            local_e0 = uStack_42;
            goto LAB_018aa500;
          }
          local_68 = 3;
          break;
        default:
switchD_018a9d88_caseD_1:
          FUN_018c3e74(&local_48,&local_74);
          local_68 = 0x11;
          local_3c = (undefined *)CONCAT22(uVar2,uVar18);
          *puVar7 = local_48;
          puVar7[1] = CONCAT22(uStack_42,CONCAT11(bStack_43,local_44));
          puVar7[2] = (uint)local_40;
          puVar7[3] = (uint)local_3c;
          goto LAB_018aa0dc;
        case 5:
          FUN_018b6024(&local_48,&local_74);
          if (local_48 == 0x80000001) {
LAB_018aa3d8:
            puVar9 = (uint *)(uint)bStack_43;
            uVar17 = (uint)local_40 >> 0x10 | (int)local_3c << 0x10;
            goto LAB_018aa3c0;
          }
          local_68 = 0xc;
          goto LAB_018aa208;
        case 10:
          FUN_018aaaac(&local_48,&local_74);
          puVar9 = (uint *)(uint)bStack_43;
          if (local_48 != 0) goto LAB_018aa3b4;
          local_68 = 1;
          break;
        case 0xb:
          FUN_018aa788(&local_48,&local_74);
          puVar9 = (uint *)(uint)bStack_43;
          if (local_48 != 0) goto LAB_018aa3b4;
          local_68 = 0;
          break;
        case 0xd:
          FUN_018a9a58(&local_48,&local_74);
          puVar9 = (uint *)(uint)bStack_43;
          if (local_48 != 0) goto LAB_018aa3b4;
          local_68 = 2;
          break;
        case 0x10:
          FUN_018a9720(&local_48,&local_74);
          puVar9 = (uint *)(uint)bStack_43;
          if (local_48 != 0) goto LAB_018aa3b4;
          local_68 = 5;
          break;
        case 0x11:
          if (uVar15 != 0) goto switchD_018a9d88_caseD_1;
          local_68 = 0xd;
          goto LAB_018aa0dc;
        case 0x13:
          if (uVar15 != 0) goto switchD_018a9d88_caseD_1;
          local_68 = 0xb;
          goto LAB_018aa0dc;
        case 0x14:
          if (uVar15 != 0) {
            FUN_018c3e74(puVar7,&local_74);
            local_68 = 4;
            goto LAB_018aa0dc;
          }
          local_68 = 4;
          local_64 = 0x80000000;
          uVar19 = uVar20;
          goto LAB_018aa0e0;
        case 0x15:
          FUN_018b6280(&local_48,&local_74);
          if (local_48 == 0x80000000) goto LAB_018aa3d8;
          local_68 = 9;
LAB_018aa208:
          local_54 = local_38;
          puStack_50 = puStack_34;
          local_60 = (undefined *)CONCAT31(CONCAT21(uStack_42,bStack_43),local_44);
          local_64 = local_48;
          local_5c = local_40;
          local_58 = local_3c;
          goto LAB_018aa0dc;
        case 0x16:
          if (uVar15 != 0) goto switchD_018a9d88_caseD_1;
          local_68 = 0x10;
          goto LAB_018aa0dc;
        case 0x17:
          FUN_018aa91c(&local_48,&local_74);
          puVar9 = (uint *)(uint)bStack_43;
          if (local_48 != 0) goto LAB_018aa3b4;
          local_68 = 6;
          break;
        case 0x18:
          FUN_018c4324(&local_48,&local_74);
          puVar9 = (uint *)(uint)bStack_43;
          if (local_48 != 0) goto LAB_018aa3b4;
          local_68 = 10;
          break;
        case 0x19:
          FUN_018a89a4(&local_48,&local_74);
          puVar9 = (uint *)(uint)bStack_43;
          if (local_48 != 0) goto LAB_018aa3b4;
          local_68 = 8;
          break;
        case 0x1f:
          FUN_018a8818(&local_48,&local_74);
          puVar9 = (uint *)(uint)bStack_43;
          if (local_48 != 0) goto LAB_018aa3b4;
          local_68 = 7;
          break;
        case 0x20:
          local_6c = uVar15;
          FUN_018ee660(puVar7,iVar8,uVar15);
          local_68 = 0xe;
          goto LAB_018aa0dc;
        case 0x24:
          local_6c = uVar15;
          FUN_018ee660(puVar7,iVar8,uVar15);
          local_68 = 0xf;
          goto LAB_018aa0dc;
        }
        local_64 = CONCAT31(CONCAT21(uStack_42,bStack_43),local_44);
LAB_018aa0dc:
        uVar19 = local_74;
LAB_018aa0e0:
        puVar11 = local_60;
        local_74._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
        local_74._0_4_ = (undefined4)uVar19;
        uVar18 = (ushort)&local_5c;
        local_48 = local_68;
        local_44 = (char)local_64;
        bStack_43 = (byte)(local_64 >> 8);
        uStack_42 = (ushort)(local_64 >> 0x10);
        local_40 = local_60;
        local_3c = local_5c;
        local_38 = local_58;
        puStack_34 = local_54;
        puStack_30 = puStack_50;
        if (local_74._4_4_ <= local_6c) goto code_r0x018aa108;
        puVar9 = &switchD_018aa358::switchdataD_018aa35c;
        switch(local_68) {
        case 0:
        case 8:
          uVar13 = 1;
          uVar14 = 2;
          break;
        case 1:
        case 2:
        case 6:
          uVar13 = 2;
          uVar14 = 4;
          break;
        case 3:
          puVar12 = (undefined4 *)(local_60 + 4);
          for (puVar16 = local_5c; puVar16 != (undefined *)0x0; puVar16 = puVar16 + -1) {
            FUN_0134bd64(*puVar12,puVar12[1]);
            puVar12 = puVar12 + 5;
          }
          uVar13 = CONCAT22(uStack_42,CONCAT11(bStack_43,local_44));
          uVar14 = 0x14;
          goto LAB_018aa4f4;
        case 4:
          if (local_64 != 0x80000000) goto LAB_018aa3d0;
          goto switchD_018aa358_caseD_b;
        case 5:
          goto LAB_018aa4b4;
        case 7:
          for (puVar16 = (undefined *)0x0; local_5c != puVar16; puVar16 = puVar16 + 1) {
            puVar12 = (undefined4 *)(puVar11 + (int)puVar16 * 0x10);
            FUN_0134bd64(*puVar12,puVar12[1]);
          }
          uVar13 = CONCAT22(uStack_42,CONCAT11(bStack_43,local_44));
          uVar14 = 0x10;
LAB_018aa4f4:
          FUN_0134aee0(uVar13,puVar11,4,uVar14);
          puVar9 = extraout_r1_03;
          uVar18 = extraout_r3_03;
switchD_018aa358_caseD_b:
          uVar15 = 0;
          puVar11 = &DAT_00520f75;
          uVar17 = local_fc;
          cVar5 = '\x0e';
          local_e0 = uVar18;
LAB_018aa500:
          *(char *)(param_1 + 1) = cVar5;
          *param_1 = 1;
          *(ushort *)((int)param_1 + 6) = local_e0;
          *(char *)((int)param_1 + 5) = (char)puVar9;
          param_1[2] = ((uint)puVar11 & 0xffff) + uVar17 * 0x10000;
          param_1[3] = uVar15 << 0x10 | uVar17 >> 0x10;
          FUN_018aa578(&local_b0);
          return;
        case 9:
          FUN_018afbfc(ppuVar6);
          ppuVar6 = &local_38;
LAB_018aa4b4:
          FUN_018a8274(ppuVar6);
          puVar9 = extraout_r1_02;
          uVar18 = extraout_r3_02;
          goto switchD_018aa358_caseD_b;
        case 10:
        case 0xe:
        case 0xf:
LAB_018aa3d0:
          uVar17 = local_64;
LAB_018aa428:
          FUN_0134bd64(uVar17,puVar11);
          puVar9 = extraout_r1_00;
          uVar18 = extraout_r3_00;
        case 0xb:
        case 0xd:
        case 0x10:
          goto switchD_018aa358_caseD_b;
        case 0xc:
          iVar10 = 8;
          if (local_64 != 0x80000000) {
            FUN_018ab6b8(ppuVar6);
            iVar10 = 0xc;
          }
          uVar17 = *(uint *)((int)ppuVar6 + iVar10);
          puVar11 = (undefined *)((uint *)((int)ppuVar6 + iVar10))[1];
          goto LAB_018aa428;
        default:
          FUN_0134bd64(local_64,local_60);
          puVar9 = extraout_r1_01;
          uVar18 = extraout_r3_01;
          goto switchD_018aa358_caseD_b;
        }
        FUN_0134aee0(local_64,local_60,uVar13,uVar14);
        puVar9 = extraout_r1;
        uVar18 = extraout_r3;
        goto switchD_018aa358_caseD_b;
      }
LAB_018aa2c4:
      param_1[1] = local_b0;
      param_1[2] = local_ac;
      param_1[3] = local_a8;
      *param_1 = 0;
    }
  }
  return;
code_r0x018aa108:
  local_a0 = local_58;
  puStack_9c = local_54;
  puStack_98 = puStack_50;
  local_80 = local_58;
  puStack_7c = local_54;
  puStack_78 = puStack_50;
  local_88 = local_60;
  local_84 = local_5c;
  local_8c = local_64;
  local_90 = local_68;
  uVar19 = local_bc;
  if (iVar4 == local_b0) {
    FUN_015f5b48(&local_b0);
    local_c8 = local_ac;
    uVar19 = local_bc;
  }
  local_bc._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
  local_a8 = iVar4 + 1;
  uVar17 = uVar15 >> 0x10;
  puVar9 = (uint *)(local_c8 + iVar10);
  iVar10 = iVar10 + 0x1c;
  *puVar9 = local_90;
  puVar9[1] = local_8c;
  puVar9[2] = (uint)local_88;
  puVar9[3] = (uint)local_84;
  puVar9[4] = (uint)local_80;
  puVar9[5] = (uint)puStack_7c;
  puVar9[6] = (uint)puStack_78;
  uVar3 = uVar20;
  if (local_bc._4_4_ <= local_b4) goto LAB_018aa2c4;
  goto LAB_018a9cf4;
}

