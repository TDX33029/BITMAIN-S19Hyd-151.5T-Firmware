// FUN_015077b4 @ 015077b4 size=2640 calls_out=29 calls_in=1
// strings: ClientExtension | DistinguishedNames

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015077b4(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *extraout_r2;
  char *extraout_r2_00;
  char *extraout_r2_01;
  char *extraout_r2_02;
  char *extraout_r2_03;
  undefined1 *puVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  char *unaff_r10;
  char *unaff_r11;
  char *pcVar15;
  char *extraout_r12;
  char *extraout_r12_00;
  char *extraout_r12_01;
  char *extraout_r12_02;
  char *extraout_r12_03;
  char *extraout_r12_04;
  char *extraout_r12_05;
  char *extraout_r12_06;
  char *extraout_r12_07;
  char *extraout_r12_08;
  char *extraout_r12_09;
  char *extraout_r12_10;
  char *extraout_r12_11;
  char *extraout_r12_12;
  char *extraout_r12_13;
  char *extraout_r12_14;
  char *extraout_r12_15;
  char *extraout_r12_16;
  uint local_104;
  char *local_f8;
  char *local_f4;
  char *local_ec;
  int local_dc;
  char *local_d0;
  int local_cc;
  char *local_c8;
  char *local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  char *local_b0;
  char *pcStack_ac;
  char *pcStack_a8;
  undefined1 *local_98;
  uint local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *pcStack_84;
  char *pcStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *pcStack_64;
  char *pcStack_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  byte local_50;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  undefined4 local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  FUN_0152d84c(&local_50,&DAT_005654a0,param_2);
  if (local_50 != 0x18) {
    *(byte *)(param_1 + 1) = local_50;
    *(byte *)((int)param_1 + 7) = bStack_4d;
    *(ushort *)((int)param_1 + 5) = CONCAT11(bStack_4e,bStack_4f);
    param_1[2] = local_4c;
    param_1[3] = local_48;
    *param_1 = 1;
    return;
  }
  pcVar9 = (char *)param_2[1];
  uVar11 = param_2[2];
  local_c8 = local_4c;
  if (pcVar9 + -uVar11 < local_4c) {
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = 0xb;
    return;
  }
  pcVar4 = local_4c + uVar11;
  param_2[2] = (int)pcVar4;
  if ((CARRY4(uVar11,(uint)local_4c)) || (pcVar9 < pcVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar11,pcVar4,pcVar9,&DAT_018a78f8);
  }
  local_cc = *param_2 + uVar11;
  local_c4 = (char *)0x0;
  local_b8 = 0;
  local_dc = 4;
  local_bc = 4;
  local_c0 = 0;
  if (local_4c != (char *)0x0) {
    iVar8 = 0;
    pcVar9 = (char *)0x0;
    uVar11 = 0;
    local_f4 = (char *)0x0;
    local_f8 = (char *)0x0;
    do {
      iVar14 = local_b8;
      FUN_0152a85c(&local_50,&local_cc);
      pcVar4 = local_c8;
      pcVar5 = (char *)(uint)local_50;
      if (pcVar5 != (char *)0x18) {
        unaff_r10 = (char *)((uint)local_4c & 0xffff);
        local_104 = (uint)bStack_4d;
        pcVar15 = (char *)(uint)bStack_4f;
        pcVar13 = (char *)(CONCAT11(bStack_4d,bStack_4e) & 0xff);
        pcVar4 = local_48;
        pcVar9 = local_4c;
        goto LAB_01508178;
      }
      if ((uint)((int)local_c8 - (int)local_c4) < 2) {
        pcVar5 = (char *)0xc;
        local_104 = uVar11;
        pcVar13 = pcVar9;
        unaff_r10 = 
        "u16u32u64min_versionmax_versionflagsendpoint_hostendpoint_portdevicechannel_idseq_numerror_codelast_seq_numnew_submits_accepted_countnew_shares_sumjob_idmin_ntimeversionversion_rolling_allowedmerkle_pathcoinbase_tx_prefixcoinbase_tx_suffixnoncentimeextranoncefuture_jobmerkle_rootrequest_idused_versionmax_targetmin_extranonce_sizeextranonce_sizeextranonce_prefixreason_codenominal_hash_ratemaximum_targetprev_hashnbitsBUG: Invalid message structure that couldn\'t be serialized with stratum serializerHeaderis_channel_messageextension_typemsg_lengthMalformedFrameheaderpayloadSerializationErrorTextDeserializationErrorDifferentExtensionStratumSerdeErrorVarSeq_16mGeneric-Sequence: Use stratum sized types instead"
        ;
        pcVar4 = (char *)0x3;
        pcVar15 = (char *)0x0;
        goto LAB_01508174;
      }
      uVar1 = CONCAT11(bStack_4d,bStack_4e);
      pcVar13 = (char *)CONCAT22((ushort)local_4c,CONCAT11(bStack_4d,bStack_4e));
      pcVar6 = local_c4 + 2;
      pcVar9 = local_c4;
      if (((char *)0xfffffffd < local_c4) || (local_c8 < pcVar6)) {
LAB_01508270:
        local_c4 = pcVar6;
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(pcVar9,local_c4,local_c8,&DAT_018a78f8);
      }
      uVar11 = (uint)*(ushort *)(local_c4 + local_cc);
      pcVar9 = (char *)(uint)(*(ushort *)(local_c4 + local_cc) >> 8);
      uVar12 = uVar11 << 0x18 | (int)pcVar9 << 0x10;
      if ((uint)((int)local_c8 - (int)pcVar6) < uVar12 >> 0x10) {
        pcVar5 = (char *)0xb;
        local_104 = (uint)local_ec >> 0x18;
        pcVar13 = (char *)(((uint)local_ec & 0xffffff) >> 0x10);
        pcVar4 = (char *)0x0;
        pcVar15 = (char *)(((uint)local_ec & 0xffff) >> 8);
        local_c4 = pcVar6;
        goto LAB_01508174;
      }
      unaff_r10 = (char *)(uVar12 >> 0x10);
      pcVar10 = pcVar6 + (int)unaff_r10;
      if ((CARRY4((uint)pcVar6,(uint)unaff_r10)) || (local_c8 < pcVar10)) {
        pcVar9 = pcVar6;
        pcVar6 = pcVar10;
        goto LAB_01508270;
      }
      local_ec = pcVar6 + local_cc;
      local_6c = (char *)0x0;
      pcStack_84 = pcVar4;
      local_c4 = pcVar10;
      local_74 = local_ec;
      local_70 = unaff_r10;
      if (0x29 < uVar1) {
switchD_015079f8_caseD_1:
        if (uVar11 == 0) {
          pcVar15 = (char *)0x1;
          pcVar6 = (char *)0x0;
          local_6c = unaff_r10;
        }
        else {
LAB_01507ee8:
          local_6c = unaff_r10;
          pcVar15 = (char *)thunk_FUN_016d4a50(unaff_r10);
          pcVar6 = unaff_r10;
          if (pcVar15 == (char *)0x0) {
            pcVar9 = (char *)0x1;
LAB_0150829c:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(pcVar9,unaff_r10);
          }
        }
        FUN_016dd1aa(pcVar15,local_ec,unaff_r10);
        pcVar5 = (char *)((uint)pcVar6 & 0xff);
        puVar7 = (undefined1 *)0x80000017;
        uVar12 = 0;
        local_3c = extraout_r2_03;
        local_88 = pcVar13;
        unaff_r11 = (char *)((uint)pcVar6 >> 8);
        local_d0 = unaff_r10;
        goto LAB_01507ff0;
      }
      switch(uVar1) {
      case 0:
        FUN_01516140(&local_50,&local_74);
        local_68 = local_4c;
        pcStack_64 = local_48;
        pcStack_60 = local_44;
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) == 0) {
          FUN_015171c0(&local_5c,&local_68);
          puVar7 = &DAT_80000004;
          local_d0 = local_54;
          uVar12 = (uint)local_5c & 0xffff0000;
          unaff_r11 = (char *)(((uint)local_5c & 0xffff) >> 8);
          pcVar5 = (char *)((uint)local_5c & 0xff);
          local_3c = extraout_r2;
          pcVar15 = local_58;
          local_88 = extraout_r12_00;
          break;
        }
        pcVar13 = (char *)(((uint)local_4c & 0xffffff) >> 0x10);
        local_104 = (uint)local_4c >> 0x18;
        pcVar15 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        unaff_r10 = local_48;
        pcVar4 = local_44;
        goto LAB_01508174;
      default:
        goto switchD_015079f8_caseD_1;
      case 5:
        FUN_01516658(&local_50,&local_74);
        uVar3 = CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50)));
        if (uVar3 == 0x80000001) goto LAB_015081dc;
        puVar7 = &DAT_8000000d;
LAB_01507d3c:
        uVar12 = uVar3 & 0xffff0000;
        unaff_r11 = (char *)((uVar3 & 0xffff) >> 8);
        pcVar5 = (char *)(uVar3 & 0xff);
        pcStack_84 = local_40;
        pcVar15 = local_4c;
        local_88 = local_44;
        local_d0 = local_48;
        break;
      case 10:
        FUN_01509628(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) == 0) {
          uVar12 = (uint)local_4c & 0xffff0000;
          puVar7 = (undefined1 *)0x80000002;
          local_3c = (char *)0x0;
          pcVar15 = local_48;
          local_88 = extraout_r12_05;
          break;
        }
LAB_0150816c:
        local_104 = (uint)local_4c >> 0x18;
        pcVar13 = (char *)(((uint)local_4c & 0xffffff) >> 0x10);
        unaff_r10 = local_48;
        pcVar4 = local_44;
        pcVar15 = unaff_r11;
        goto LAB_01508174;
      case 0xb:
        FUN_015094bc(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = (undefined1 *)0x80000001;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_11;
        break;
      case 0xd:
        FUN_0150a0ec(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = (undefined1 *)0x80000003;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_12;
        break;
      case 0x10:
        FUN_01509a28(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = (undefined1 *)0x80000006;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_06;
        break;
      case 0x12:
        FUN_015067fc(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = (undefined1 *)0x8000000f;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_07;
        break;
      case 0x13:
        FUN_015067fc(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = (undefined1 *)0x8000000e;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_08;
        break;
      case 0x15:
        if (uVar11 != 0) goto LAB_01507ee8;
        puVar7 = &DAT_8000000c;
LAB_015080b4:
        pcVar13 = (char *)0x0;
        pcVar5 = (char *)0x0;
        local_3c = (char *)(&switchD_015079f8::switchdataD_015079fc)[uVar1];
        local_88 = extraout_r12;
LAB_015080c0:
        uVar12 = 0;
        pcVar15 = unaff_r11;
        unaff_r11 = pcVar13;
        break;
      case 0x16:
        FUN_01507584(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = &DAT_80000013;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_13;
        break;
      case 0x17:
        FUN_01516a74(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = (undefined1 *)0x80000005;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_03;
        break;
      case 0x18:
        FUN_01516b20(&local_50,&local_74);
        uVar3 = CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50)));
        if (uVar3 != 0x80000000) {
          puVar7 = (undefined1 *)0x8000000a;
          goto LAB_01507d3c;
        }
LAB_015081dc:
        pcVar13 = (char *)(((uint)local_4c & 0xffffff) >> 0x10);
        pcVar15 = (char *)(((uint)local_4c & 0xffff) >> 8);
        local_104 = (uint)local_4c >> 0x18;
        pcVar5 = (char *)((uint)local_4c & 0xff);
        unaff_r10 = local_48;
        pcVar4 = local_44;
        goto LAB_01508174;
      case 0x19:
        if (uVar11 == 0) {
          puVar7 = (undefined1 *)0x80000012;
          goto LAB_015080b4;
        }
        goto LAB_01507ee8;
      case 0x1a:
        FUN_01517040(&local_50,&local_74);
        pcVar5 = (char *)(uint)local_50;
        pcVar15 = (char *)(uint)bStack_4f;
        pcVar13 = (char *)(uint)bStack_4e;
        if (pcVar5 == (char *)0x18) {
          puVar7 = (undefined1 *)0x80000007;
          pcVar5 = pcVar15;
          local_3c = extraout_r2_01;
          local_88 = extraout_r12_02;
          goto LAB_015080c0;
        }
        local_104 = (uint)bStack_4d;
        unaff_r10 = local_4c;
        pcVar4 = local_48;
        goto LAB_01508174;
      case 0x1b:
        FUN_015409a4(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = &DAT_8000000b;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_09;
        break;
      case 0x1c:
        FUN_01506970(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = (undefined1 *)0x80000009;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_10;
        break;
      case 0x1e:
        FUN_01509810(&local_50,&local_74);
        local_d0 = local_44;
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0) {
          unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
          pcVar5 = (char *)((uint)local_4c & 0xff);
          goto LAB_0150816c;
        }
        local_54 = local_44;
        local_58 = local_48;
        local_5c = local_4c;
        if (local_44 != (char *)0x0) {
          uVar12 = (uint)local_4c & 0xffff0000;
          pcVar5 = (char *)((uint)local_4c & 0xff);
          puVar7 = (undefined1 *)0x80000016;
          local_3c = (char *)0x0;
          pcVar15 = local_48;
          local_88 = extraout_r12_15;
          unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
          break;
        }
        FUN_0150d18c(&local_5c);
        pcVar5 = (char *)0x16;
        pcVar13 = local_f4;
        unaff_r10 = "DistinguishedNames";
        pcVar4 = (char *)0x12;
        pcVar15 = local_f8;
        goto LAB_01508174;
      case 0x22:
        FUN_01509e28(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = &DAT_80000008;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_14;
        break;
      case 0x23:
        local_6c = unaff_r10;
        FUN_0154e48c(&local_50,unaff_r10,0,1,1);
        pcVar15 = local_48;
        pcStack_84 = local_4c;
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0) {
LAB_01508298:
          unaff_r10 = local_48;
          pcVar9 = local_4c;
          goto LAB_0150829c;
        }
        FUN_016dd1aa(local_48,local_ec,unaff_r10);
        puVar7 = &DAT_80000010;
        local_3c = extraout_r2_00;
        local_88 = extraout_r12_01;
        goto LAB_01507c50;
      case 0x27:
        local_6c = unaff_r10;
        FUN_0154e48c(&local_50,unaff_r10,0,1,1);
        pcVar15 = local_48;
        pcStack_84 = local_4c;
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_01508298;
        FUN_016dd1aa(local_48,local_ec,unaff_r10);
        puVar7 = (undefined1 *)0x80000011;
        local_3c = extraout_r2_02;
        local_88 = extraout_r12_04;
LAB_01507c50:
        uVar12 = (uint)pcStack_84 & 0x7fff0000;
        pcVar5 = (char *)((uint)pcStack_84 & 0xff);
        unaff_r11 = (char *)(((uint)pcStack_84 & 0xffff) >> 8);
        local_d0 = unaff_r10;
        break;
      case 0x29:
        FUN_01509c40(&local_50,&local_74);
        local_d0 = local_44;
        unaff_r11 = (char *)(((uint)local_4c & 0xffff) >> 8);
        pcVar5 = (char *)((uint)local_4c & 0xff);
        if (CONCAT13(bStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,local_50))) != 0)
        goto LAB_0150816c;
        uVar12 = (uint)local_4c & 0xffff0000;
        puVar7 = (undefined1 *)0x80000015;
        local_3c = (char *)0x0;
        pcVar15 = local_48;
        local_88 = extraout_r12_16;
      }
LAB_01507ff0:
      local_4c._0_2_ = (ushort)pcVar5 | (ushort)((int)unaff_r11 << 8);
      local_44 = local_d0;
      local_4c._2_2_ = (undefined2)(uVar12 >> 0x10);
      local_50 = (byte)puVar7;
      bStack_4f = 0;
      bStack_4e = 0;
      bStack_4d = (byte)((uint)puVar7 >> 0x18);
      local_48 = pcVar15;
      local_40 = local_88;
      local_38 = local_3c;
      if (local_6c < local_70) {
        local_3c = pcStack_84;
        FUN_015109b4(&local_50);
        pcVar5 = (char *)0xf;
        pcVar13 = local_f4;
        unaff_r10 = "ClientExtension";
        pcVar4 = (char *)0xf;
        pcVar15 = local_f8;
LAB_01508174:
        pcVar9 = unaff_r10;
LAB_01508178:
        param_1[1] = local_104 << 0x18 | (int)pcVar13 << 0x10 | (int)pcVar15 << 8 | (uint)pcVar5;
        param_1[2] = ((uint)unaff_r10 & 0xffff) + ((uint)pcVar9 & 0xffff0000);
        param_1[3] = pcVar4;
        *param_1 = 1;
        iVar8 = local_dc;
        for (; iVar14 != 0; iVar14 = iVar14 + -1) {
          FUN_01505a78(iVar8);
          iVar8 = iVar8 + 0x24;
        }
        if (local_c0 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(local_dc);
        return;
      }
      uStack_7c = uStack_34;
      uStack_78 = uStack_30;
      local_8c = local_d0;
      local_f4 = (char *)((uVar12 & 0xffffff) >> 0x10);
      local_94 = uVar12 & 0xff000000 | (int)local_f4 << 0x10 | (int)unaff_r11 << 8 | (uint)pcVar5;
      local_b0 = local_88;
      pcStack_ac = pcStack_84;
      pcStack_a8 = local_3c;
      local_98 = puVar7;
      local_90 = pcVar15;
      pcStack_80 = local_3c;
      local_3c = pcStack_84;
      if (iVar14 == local_c0) {
        local_3c = pcStack_84;
        FUN_0154e368(&local_c0);
        local_dc = local_bc;
      }
      local_104 = uVar12 >> 0x18;
      local_b8 = iVar14 + 1;
      puVar2 = (undefined4 *)(local_dc + iVar8);
      iVar8 = iVar8 + 0x24;
      *puVar2 = local_98;
      puVar2[1] = local_94;
      puVar2[2] = local_90;
      puVar2[3] = local_8c;
      puVar2[4] = local_88;
      puVar2[5] = pcStack_84;
      puVar2[6] = pcStack_80;
      puVar2[7] = uStack_7c;
      puVar2[8] = uStack_78;
      uVar11 = uVar11 & 0xff;
      local_f8 = unaff_r11;
    } while (pcVar10 < pcVar4);
  }
  *param_1 = 0;
  param_1[1] = local_c0;
  param_1[2] = local_bc;
  param_1[3] = local_b8;
  return;
}

