// FUN_018a8b44 @ 018a8b44 size=1556 calls_out=16 calls_in=2
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffb0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018a8b44(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  undefined4 unaff_r4;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint local_b8;
  uint local_a8;
  char *local_a4;
  int local_94;
  undefined8 local_8c;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined *puStack_64;
  undefined *local_60;
  undefined8 local_5c;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined *local_40;
  char local_38;
  byte bStack_37;
  ushort uStack_36;
  char local_34;
  byte bStack_33;
  ushort uStack_32;
  undefined2 local_30;
  ushort uStack_2e;
  undefined4 local_2c;
  undefined *puStack_28;
  
  uVar15 = CONCAT44(unaff_r4,local_a8);
  local_48 = (undefined *)CONCAT22(local_48._2_2_,CONCAT11(local_48._1_1_,(undefined1)local_48));
  local_4c = CONCAT22(local_4c._2_2_,CONCAT11(local_4c._1_1_,(char)local_4c));
  uVar14 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar14 == (ushort *)0x0) || ((int)((ulonglong)uVar14 >> 0x20) != 2)) {
    *(undefined1 *)(param_1 + 1) = 0xb;
    *param_1 = 1;
    param_1[2] = &DAT_005239af;
    param_1[3] = 2;
  }
  else {
    uVar1 = *(ushort *)uVar14;
    uVar14 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
    if ((int)uVar14 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 10;
    }
    else {
      local_84 = 0;
      local_78 = 0;
      local_94 = 4;
      local_7c = 4;
      local_80 = 0;
      if ((int)((ulonglong)uVar14 >> 0x20) != 0) {
        iVar13 = 0;
        uVar12 = 0;
        local_b8 = 0xf0052;
        puVar5 = (undefined4 *)((uint)&local_50 | 4);
        do {
          iVar3 = local_78;
          puVar10 = (undefined *)((ulonglong)uVar15 >> 0x20);
          local_a8 = (uint)uVar15;
          uVar11 = 0;
          local_8c = uVar14;
          FUN_018be4cc(&local_38,&local_8c);
          uVar1 = uStack_36;
          if (local_38 != '\x14') {
            uVar11 = (uint)uStack_2e;
            uVar12 = CONCAT22(local_30,uStack_32);
            puVar10 = (undefined *)(uint)CONCAT11(bStack_33,local_34);
            local_a4 = (char *)(uint)uStack_36;
            puVar9 = (uint *)(uint)bStack_37;
            goto LAB_018a91d8;
          }
          uVar4 = CONCAT11(bStack_33,local_34);
          uVar15 = FUN_018beed0(&local_8c,2);
          puVar9 = (uint *)((ulonglong)uVar15 >> 0x20);
          if (((ushort *)uVar15 == (ushort *)0x0) || (puVar9 != (uint *)0x2)) {
            uVar11 = 0;
            puVar10 = &DAT_005239af;
            uVar12 = 0x20052;
            local_38 = '\v';
            goto LAB_018a91d8;
          }
          uVar2 = *(ushort *)uVar15;
          uVar15 = FUN_018beed0(&local_8c);
          uVar8 = (uint)((ulonglong)uVar15 >> 0x20);
          iVar6 = (int)uVar15;
          if (iVar6 == 0) {
            local_a4 = (char *)(local_a8 >> 0x10);
            puVar9 = (uint *)(local_a8 >> 8);
            local_38 = '\n';
            goto LAB_018a91d8;
          }
          local_54 = 0;
          uVar14 = uVar15;
          local_5c = uVar15;
          switch(uVar1) {
          case 5:
            uVar4 = 8;
            break;
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x12:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x21:
          case 0x22:
switchD_018a8cd4_caseD_6:
            FUN_018c3e74(&local_38,&local_5c);
            local_2c = (undefined *)CONCAT22(uVar4,uVar1);
            uVar4 = 0xe;
            *puVar5 = CONCAT22(uStack_36,CONCAT11(bStack_37,local_38));
            puVar5[1] = CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
            puVar5[2] = CONCAT22(uStack_2e,local_30);
            puVar5[3] = local_2c;
            uVar14 = local_5c;
            break;
          case 0xb:
            FUN_018aa788(&local_38,&local_5c);
            local_a4 = (char *)(uint)uStack_32;
            puVar9 = (uint *)(uint)bStack_33;
            puVar10 = (undefined *)CONCAT22(uStack_2e,local_30);
            if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) != 0) {
LAB_018a9140:
              uVar12 = (uint)puVar10 >> 0x10 | (int)local_2c << 0x10;
              uVar11 = (uint)local_2c >> 0x10;
              local_38 = local_34;
              goto LAB_018a91d8;
            }
            local_4c._0_1_ = local_34;
            uVar4 = 0;
            goto LAB_018a8f1c;
          case 0x10:
            FUN_018a9720(&local_38,&local_5c);
            local_a4 = (char *)(uint)uStack_32;
            puVar9 = (uint *)(uint)bStack_33;
            puVar10 = (undefined *)CONCAT22(uStack_2e,local_30);
            if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) != 0) goto LAB_018a9140;
            local_4c._0_1_ = local_34;
            uVar4 = 4;
            goto LAB_018a8f1c;
          case 0x11:
            FUN_018a98e4(&local_38,&local_5c);
            local_a4 = (char *)(uint)uStack_32;
            puVar9 = (uint *)(uint)bStack_33;
            puVar10 = (undefined *)CONCAT22(uStack_2e,local_30);
            if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) != 0) goto LAB_018a9140;
            local_4c._0_1_ = local_34;
            uVar4 = 9;
            goto LAB_018a8f1c;
          case 0x13:
            uVar4 = 7;
            break;
          case 0x14:
            uVar4 = 2;
            break;
          case 0x15:
            FUN_018bf5dc(&local_38,&local_5c);
            if (local_38 != '\x14') {
              local_a4 = (char *)(uint)uStack_36;
              puVar10 = (undefined *)CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
              puVar9 = (uint *)(uint)bStack_37;
              uVar12 = (uint)uStack_32 | CONCAT22(uStack_2e,local_30) << 0x10;
              uVar11 = (uint)uStack_2e;
              goto LAB_018a91d8;
            }
            local_50 = (uint)uStack_36 << 0x10;
            uVar4 = 6;
            uVar14 = local_5c;
            break;
          case 0x16:
            uVar4 = 0xd;
            break;
          case 0x17:
            FUN_018d880c(&local_38,&local_5c);
            if (local_38 != '\x14') {
              puVar10 = (undefined *)(uint)CONCAT11(bStack_33,local_34);
              local_a4 = (char *)(uint)uStack_36;
              puVar9 = (uint *)(uint)bStack_37;
              uVar11 = (uint)uStack_2e;
              uVar12 = CONCAT22(local_30,uStack_32);
              goto LAB_018a91d8;
            }
            local_50 = (uint)uStack_36 << 0x10;
            local_4c._0_2_ = CONCAT11(bStack_33,local_34);
            uVar4 = 10;
            uVar14 = local_5c;
            break;
          case 0x1f:
            FUN_018b5f6c(&local_38,&local_5c);
            local_a4 = (char *)(uint)uStack_32;
            puVar9 = (uint *)(uint)bStack_33;
            puVar10 = (undefined *)CONCAT22(uStack_2e,local_30);
            if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) == -0x80000000) goto LAB_018a9140;
            uVar4 = 5;
            local_40 = local_2c;
            local_48 = (undefined *)CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
            local_4c._0_2_ = CONCAT11(bStack_37,local_38);
            local_4c = CONCAT22(uStack_36,(undefined2)local_4c);
            local_44 = puVar10;
            uVar14 = local_5c;
            break;
          case 0x20:
            local_54 = uVar8;
            FUN_018ee660(puVar5,iVar6,uVar8);
            uVar4 = 0xb;
            uVar14 = local_5c;
            break;
          case 0x23:
            FUN_018c41e4(&local_38,&local_5c);
            local_a4 = (char *)(uint)uStack_32;
            puVar9 = (uint *)(uint)bStack_33;
            puVar10 = (undefined *)CONCAT22(uStack_2e,local_30);
            if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) != 0) goto LAB_018a9140;
            local_4c._0_1_ = local_34;
            uVar4 = 3;
LAB_018a8f1c:
            local_4c._0_2_ = CONCAT11(bStack_33,(char)local_4c);
            local_4c = CONCAT22(uStack_32,(undefined2)local_4c);
            local_34 = (char)local_4c;
            local_48 = puVar10;
            local_44 = local_2c;
            uVar14 = local_5c;
            break;
          case 0x24:
            local_54 = uVar8;
            FUN_018ee660(puVar5,iVar6,uVar8);
            uVar4 = 0xc;
            uVar14 = local_5c;
            break;
          default:
            if (uVar1 != 0) goto switchD_018a8cd4_caseD_6;
            uVar4 = 1;
          }
          local_5c._4_4_ = (uint)((ulonglong)uVar14 >> 0x20);
          local_5c._0_4_ = (undefined4)uVar14;
          local_50 = CONCAT22(local_50._2_2_,uVar4);
          if (local_54 < local_5c._4_4_) {
            puStack_28 = local_40;
            puVar9 = &switchD_018a90f4::switchdataD_018a90f8;
            switch(uVar4) {
            case 0:
              FUN_0134aee0(local_4c,local_48,1,2);
              puVar9 = extraout_r1_01;
              break;
            case 1:
            case 2:
            case 6:
            case 7:
            case 8:
            case 10:
            case 0xd:
              break;
            case 3:
            case 5:
            case 0xb:
            case 0xc:
              FUN_0134bd64(local_4c,local_48);
              puVar9 = extraout_r1;
              break;
            case 4:
            case 9:
              FUN_018a8274((uint)&local_38 | 4);
              puVar9 = extraout_r1_00;
              break;
            default:
              FUN_0134bd64(local_4c,local_48);
              puVar9 = extraout_r1_02;
            }
            puVar10 = &DAT_00520f84;
            local_38 = '\x0e';
            uVar11 = 0;
            local_a4 = &local_38;
            uVar12 = local_b8;
LAB_018a91d8:
            *(char *)(param_1 + 1) = local_38;
            *param_1 = 1;
            *(short *)((int)param_1 + 6) = (short)local_a4;
            *(char *)((int)param_1 + 5) = (char)puVar9;
            param_1[2] = ((uint)puVar10 & 0xffff) + uVar12 * 0x10000;
            param_1[3] = uVar11 << 0x10 | uVar12 >> 0x10;
            FUN_018a924c(&local_80);
            return;
          }
          local_6c = local_4c;
          local_68 = local_48;
          puStack_64 = local_44;
          local_70 = CONCAT22(local_50._2_2_,uVar4);
          local_60 = local_40;
          uVar14 = local_8c;
          if (iVar3 == local_80) {
            FUN_0161d664(&local_80);
            local_94 = local_7c;
            uVar14 = local_8c;
          }
          local_8c._4_4_ = (uint)((ulonglong)uVar14 >> 0x20);
          local_78 = iVar3 + 1;
          uVar12 = uVar8 >> 0x10;
          puVar7 = (undefined4 *)(local_94 + iVar13);
          iVar13 = iVar13 + 0x14;
          *puVar7 = local_70;
          puVar7[1] = local_6c;
          puVar7[2] = local_68;
          puVar7[3] = puStack_64;
          puVar7[4] = local_60;
          local_a4 = (char *)((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
        } while (local_84 < local_8c._4_4_);
      }
      param_1[1] = local_80;
      param_1[2] = local_7c;
      param_1[3] = local_78;
      *param_1 = 0;
    }
  }
  return;
}

