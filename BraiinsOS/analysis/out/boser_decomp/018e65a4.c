// FUN_018e65a4 @ 018e65a4 size=1772 calls_out=18 calls_in=2
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffc0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018e65a4(undefined4 *param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar11;
  ushort uVar12;
  ushort extraout_r3;
  ushort extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 extraout_r3_05;
  undefined4 extraout_r3_06;
  undefined4 extraout_r3_07;
  undefined4 uVar13;
  undefined4 unaff_r4;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint local_c4;
  uint local_b4;
  int local_98;
  ushort local_94;
  undefined8 local_84;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined4 local_68;
  undefined4 local_64;
  char *local_60;
  char *pcStack_5c;
  uint local_58;
  undefined8 local_54;
  uint local_4c;
  char local_48;
  byte local_47;
  byte bStack_46;
  byte bStack_45;
  char cStack_44;
  byte bStack_43;
  ushort uStack_42;
  undefined4 uStack_40;
  char *local_3c;
  uint local_38;
  char local_34;
  byte bStack_33;
  byte bStack_32;
  byte bStack_31;
  char local_30;
  byte bStack_2f;
  ushort uStack_2e;
  undefined2 uStack_2c;
  ushort uStack_2a;
  uint uStack_28;
  
  uStack_40 = (char *)CONCAT22(uStack_40._2_2_,CONCAT11(uStack_40._1_1_,(undefined1)uStack_40));
  FUN_01930f74(&local_48,&DAT_0056a6b8,param_2);
  if (local_48 == '\x18') {
    uVar19 = FUN_0192fac8(param_2,CONCAT22(uStack_42,CONCAT11(bStack_43,cStack_44)));
    if ((int)uVar19 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 0xb;
      return;
    }
    local_7c = 0;
    local_70 = 0;
    local_98 = 4;
    local_74 = 4;
    local_78 = 0;
    if ((int)((ulonglong)uVar19 >> 0x20) != 0) {
      iVar18 = 0;
      uVar17 = 0;
      uVar16 = 0;
      local_c4 = 0xf0052;
      puVar6 = (undefined2 *)((uint)&local_48 | 1);
      uVar4 = CONCAT44(unaff_r4,local_b4);
LAB_018e66a4:
      iVar5 = local_70;
      pcVar14 = (char *)((ulonglong)uVar4 >> 0x20);
      local_b4 = (uint)uVar4;
      uVar15 = 0;
      local_84 = uVar19;
      FUN_0190d660(&local_48,&local_84);
      if (local_48 != '\x18') {
        local_94 = CONCAT11(bStack_45,bStack_46);
        local_c4 = CONCAT13(uStack_40._1_1_,CONCAT12((undefined1)uStack_40,uStack_42));
        uVar12 = CONCAT11(bStack_43,cStack_44);
        local_34 = local_48;
LAB_018e6b7c:
        uVar15 = (uint)uStack_40._2_2_;
        pcVar14 = (char *)(uint)uVar12;
        uVar10 = (uint)local_47;
        uVar16 = (uint)(local_94 >> 8);
        goto LAB_018e6d20;
      }
      uVar2 = CONCAT11(bStack_43,cStack_44);
      sVar1 = CONCAT11(bStack_45,bStack_46);
      uVar19 = FUN_0192fac8(&local_84,2);
      uVar10 = (uint)((ulonglong)uVar19 >> 0x20);
      if (((ushort *)uVar19 == (ushort *)0x0) || (uVar10 != 2)) {
        pcVar14 = "u16";
        local_c4 = 0x30052;
        local_34 = '\f';
        goto LAB_018e6d20;
      }
      uVar12 = *(ushort *)uVar19;
      uVar16 = uVar12 & 0xff;
      local_94 = uVar12 >> 8;
      uVar20 = FUN_0192fac8(&local_84);
      uVar15 = (uint)((ulonglong)uVar20 >> 0x20);
      iVar7 = (int)uVar20;
      if (iVar7 == 0) {
        uVar15 = 0;
        uVar16 = local_b4 >> 0x18;
        local_94 = (ushort)((ulonglong)uVar4 >> 0x10);
        uVar10 = local_b4 >> 8;
        local_34 = '\v';
LAB_018e6c48:
        local_c4 = uVar17;
        goto LAB_018e6d20;
      }
      local_4c = 0;
      local_54._4_4_ = uVar15;
      uVar19 = uVar20;
      local_54 = uVar20;
      switch(sVar1) {
      case 5:
        uVar17 = 8;
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
      case 0x11:
      case 0x14:
      case 0x16:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x24:
      case 0x25:
switchD_018e673c_caseD_6:
        uVar17 = 0x10;
        FUN_018eda84(&cStack_44,sVar1,uVar2,&local_54);
        uVar19 = CONCAT44(extraout_r3_01,(undefined4)local_54);
        break;
      case 0xb:
        FUN_018e43e8(&local_34,&local_54);
        uVar11 = (uint)uStack_2e;
        uVar10 = (uint)bStack_2f;
        pcVar14 = (char *)CONCAT22(uStack_2a,uStack_2c);
        if (CONCAT13(bStack_31,CONCAT12(bStack_32,CONCAT11(bStack_33,local_34))) != 0) {
LAB_018e6c34:
          local_94 = (ushort)uVar11;
          uVar17 = (uint)pcVar14 >> 0x10 | uStack_28 << 0x10;
          uVar16 = uVar11 >> 8;
          uVar15 = uStack_28 >> 0x10;
          local_34 = local_30;
          goto LAB_018e6c48;
        }
        uVar17 = 0;
        uVar19 = local_54;
        goto LAB_018e6a08;
      case 0x10:
        FUN_018ee754(&local_34,&local_54);
        uVar11 = (uint)uStack_2e;
        uVar10 = (uint)bStack_2f;
        pcVar14 = (char *)CONCAT22(uStack_2a,uStack_2c);
        if (CONCAT13(bStack_31,CONCAT12(bStack_32,CONCAT11(bStack_33,local_34))) != 0)
        goto LAB_018e6c34;
        uVar17 = 4;
        uVar19 = local_54;
        goto LAB_018e6a08;
      case 0x12:
        FUN_0190cdf8(&local_34,&local_54);
        if (local_34 != '\x18') {
LAB_018e6c54:
          uVar10 = (uint)bStack_33;
          local_94 = (ushort)bStack_32;
          uVar16 = (uint)bStack_31;
          pcVar14 = (char *)CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30));
          local_c4 = (uint)uStack_2e | CONCAT22(uStack_2a,uStack_2c) << 0x10;
          uVar15 = (uint)uStack_2a;
          goto LAB_018e6d20;
        }
        uVar17 = 10;
        uVar9 = extraout_r3_03;
        uVar19 = local_54;
        goto LAB_018e68ec;
      case 0x13:
        FUN_0190cdf8(&local_34,&local_54);
        if (local_34 != '\x18') goto LAB_018e6c54;
        uVar17 = 9;
        uVar9 = extraout_r3_05;
        uVar19 = local_54;
LAB_018e68ec:
        local_54._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
        local_54._0_4_ = (undefined4)uVar19;
        local_47 = bStack_33;
        bStack_46 = bStack_32;
        uVar19 = CONCAT44(uVar9,(undefined4)local_54);
        break;
      case 0x15:
        uVar17 = 7;
        break;
      case 0x17:
        uVar17 = 2;
        break;
      case 0x18:
        FUN_019309d0(&local_34,&local_54);
        if (local_34 != '\x18') {
          local_94 = CONCAT11(bStack_31,bStack_32);
          pcVar14 = (char *)CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30));
          uVar16 = (uint)bStack_31;
          uVar10 = (uint)bStack_33;
          local_c4 = (uint)uStack_2e | CONCAT22(uStack_2a,uStack_2c) << 0x10;
          uVar15 = (uint)uStack_2a;
          goto LAB_018e6d20;
        }
        uVar17 = 6;
        bStack_46 = bStack_32;
        bStack_45 = bStack_31;
        uVar19 = CONCAT44(extraout_r3_04,(undefined4)local_54);
        break;
      case 0x19:
        uVar17 = 0xe;
        break;
      case 0x1a:
        FUN_0190ceb8(&local_34,&local_54);
        if (local_34 != '\x18') {
          uVar12 = CONCAT11(bStack_2f,local_30);
          local_94 = CONCAT11(bStack_31,bStack_32);
          local_c4 = CONCAT22(uStack_2c,uStack_2e);
          local_47 = bStack_33;
          uStack_40._2_2_ = uStack_2a;
          goto LAB_018e6b7c;
        }
        uVar17 = 0xb;
        bStack_46 = bStack_32;
        bStack_45 = bStack_31;
        cStack_44 = local_30;
        bStack_43 = bStack_2f;
        uVar19 = CONCAT44(extraout_r3_02,(undefined4)local_54);
        break;
      case 0x22:
        FUN_018ed9cc(&local_34,&local_54);
        puVar3 = (undefined1 *)CONCAT13(bStack_31,CONCAT12(bStack_32,CONCAT11(bStack_33,local_34)));
        uVar11 = (uint)uStack_2e;
        uVar10 = (uint)bStack_2f;
        pcVar14 = (char *)CONCAT22(uStack_2a,uStack_2c);
        if (puVar3 == &DAT_80000000) goto LAB_018e6c34;
        uVar17 = 5;
        local_38 = uStack_28;
        uStack_40 = (char *)CONCAT31(CONCAT21(uStack_2e,bStack_2f),local_30);
        cStack_44 = local_34;
        bStack_43 = bStack_33;
        uStack_42 = (ushort)((uint)puVar3 >> 0x10);
        local_3c = pcVar14;
        uVar19 = CONCAT44(puVar3,(undefined4)local_54);
        break;
      case 0x23:
        uVar17 = 0xc;
        local_4c = uVar15;
        FUN_018ee660(&cStack_44,iVar7);
        uVar19 = CONCAT44(extraout_r3_06,(undefined4)local_54);
        break;
      case 0x26:
        FUN_01935b68(&local_34,&local_54);
        uVar11 = (uint)uStack_2e;
        uVar10 = (uint)bStack_2f;
        pcVar14 = (char *)CONCAT22(uStack_2a,uStack_2c);
        if (CONCAT13(bStack_31,CONCAT12(bStack_32,CONCAT11(bStack_33,local_34))) != 0)
        goto LAB_018e6c34;
        uVar17 = 3;
        uVar19 = local_54;
        goto LAB_018e6a08;
      case 0x27:
        uVar17 = 0xd;
        local_4c = uVar15;
        FUN_018ee660(&cStack_44,iVar7);
        uVar19 = CONCAT44(extraout_r3_07,(undefined4)local_54);
        break;
      case 0x28:
        FUN_018e5260(&local_34,&local_54);
        uVar11 = (uint)uStack_2e;
        uVar10 = (uint)bStack_2f;
        pcVar14 = (char *)CONCAT22(uStack_2a,uStack_2c);
        if (CONCAT13(bStack_31,CONCAT12(bStack_32,CONCAT11(bStack_33,local_34))) != 0)
        goto LAB_018e6c34;
        uVar17 = 0xf;
        uVar19 = local_54;
LAB_018e6a08:
        local_54._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
        local_54._0_4_ = (undefined4)uVar19;
        cStack_44 = local_30;
        bStack_43 = bStack_2f;
        uStack_42 = uStack_2e;
        uStack_40 = pcVar14;
        uVar19 = CONCAT44(&uStack_40,(undefined4)local_54);
        break;
      default:
        uVar17 = 1;
        if (sVar1 != 0) goto switchD_018e673c_caseD_6;
      }
      local_54._0_4_ = (undefined4)uVar19;
      uVar12 = (ushort)((ulonglong)uVar19 >> 0x20);
      local_48 = (char)uVar17;
      if (local_54._4_4_ <= local_4c) goto code_r0x018e6a48;
      iVar18 = CONCAT22(uStack_42,CONCAT11(bStack_43,cStack_44));
      local_94 = uVar12;
      if (0xf < uVar17) {
        uVar10 = local_4c;
        if (iVar18 != -0x80000000) goto switchD_018e6be0_caseD_3;
        goto switchD_018e6be0_caseD_1;
      }
      uVar10 = (&switchD_018e6be0::switchdataD_018e6be4)[uVar17];
      switch(uVar17) {
      case 0:
        uVar9 = 1;
        uVar13 = 2;
        goto LAB_018e6cf4;
      case 3:
      case 4:
      case 5:
      case 0xc:
      case 0xd:
switchD_018e6be0_caseD_3:
        FUN_0134bd64(iVar18,uStack_40);
        uVar10 = extraout_r1;
        local_94 = extraout_r3;
        break;
      case 0xf:
        FUN_018e3ad4(uStack_40,local_3c);
        uVar9 = 4;
        uVar13 = 0x3c;
LAB_018e6cf4:
        FUN_0134aee0(iVar18,uStack_40,uVar9,uVar13);
        uVar10 = extraout_r1_00;
        local_94 = extraout_r3_00;
      }
switchD_018e6be0_caseD_1:
      local_34 = '\x0f';
      uVar16 = 0;
      uVar15 = 0;
      pcVar14 = 
      "ServerExtensionServerNamesClientHelloPayloadServerHelloPayloadProtocolNamesSingleProtocolNameHelloRetryExtensionCertificateExtensionNewSessionTicketExtensionSystemRandomPSSdigest_algPKCS1digestinfo_prefixRingAlgorithm\x02\x01"
      ;
LAB_018e6d20:
      *(char *)(param_1 + 1) = local_34;
      *param_1 = 1;
      param_1[3] = uVar15 << 0x10 | local_c4 >> 0x10;
      param_1[2] = ((uint)pcVar14 & 0xffff) + local_c4 * 0x10000;
      *(ushort *)((int)param_1 + 6) = local_94 & 0xff | (ushort)(uVar16 << 8);
      *(char *)((int)param_1 + 5) = (char)uVar10;
      FUN_018e3950(&local_78);
      return;
    }
LAB_018e6b0c:
    param_1[1] = local_78;
    param_1[2] = local_74;
    param_1[3] = local_70;
    uVar9 = 0;
  }
  else {
    *(char *)(param_1 + 1) = local_48;
    uVar9 = 1;
    *(byte *)((int)param_1 + 7) = bStack_45;
    *(ushort *)((int)param_1 + 5) = CONCAT11(bStack_46,local_47);
    param_1[2] = CONCAT22(uStack_42,CONCAT11(bStack_43,cStack_44));
    param_1[3] = uStack_40;
  }
  *param_1 = uVar9;
  return;
code_r0x018e6a48:
  local_64 = CONCAT22(uStack_42,CONCAT11(bStack_43,cStack_44));
  local_6c = *puVar6;
  *(undefined2 *)((uint)&local_68 | 1) = local_6c;
  local_60 = uStack_40;
  pcStack_5c = local_3c;
  local_6a = *(undefined1 *)(puVar6 + 1);
  *(undefined1 *)((undefined2 *)((uint)&local_68 | 1) + 1) = local_6a;
  local_68 = CONCAT31(local_68._1_3_,local_48);
  local_58 = local_38;
  uVar19 = local_84;
  if (iVar5 == local_78) {
    FUN_0161d664(&local_78);
    local_98 = local_74;
    uVar19 = local_84;
  }
  local_84._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
  puVar8 = (undefined4 *)(local_98 + iVar18);
  iVar18 = iVar18 + 0x14;
  uVar17 = uVar15 >> 0x10;
  *puVar8 = local_68;
  puVar8[1] = local_64;
  puVar8[2] = local_60;
  puVar8[3] = pcStack_5c;
  puVar8[4] = local_58;
  local_70 = iVar5 + 1;
  uVar4 = uVar20;
  if (local_84._4_4_ <= local_7c) goto LAB_018e6b0c;
  goto LAB_018e66a4;
}

