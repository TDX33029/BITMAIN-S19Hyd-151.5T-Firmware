// FUN_01506ae4 @ 01506ae4 size=2020 calls_out=19 calls_in=2
// strings: ServerExtensionServerNames | ServerExtensionServerNames

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0xe4a9716c) */

void FUN_01506ae4(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  ushort uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  byte extraout_r12;
  byte extraout_r12_00;
  byte extraout_r12_01;
  byte extraout_r12_02;
  byte extraout_r12_03;
  byte extraout_r12_04;
  byte extraout_r12_05;
  byte extraout_r12_06;
  byte extraout_r12_07;
  byte bVar16;
  char *extraout_r12_08;
  undefined1 uVar17;
  uint local_a0;
  char *local_9c;
  char *local_98;
  char *local_94;
  uint local_90;
  char *local_88;
  char *local_84;
  int local_80;
  char *local_78;
  int local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  int local_64;
  char *local_60;
  undefined4 local_58;
  uint local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_40;
  char *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  
  FUN_0152d84c(&local_34,&DAT_005654a0,param_2);
  if ((char)local_34 != '\x18') {
    *(char *)(param_1 + 1) = (char)local_34;
    *(undefined1 *)((int)param_1 + 7) = local_34._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_34._1_2_;
    param_1[2] = local_30;
    param_1[3] = local_2c;
    *param_1 = 1;
    return;
  }
  pcVar13 = (char *)param_2[1];
  uVar14 = param_2[2];
  if (pcVar13 + -uVar14 < local_30) {
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = 0xb;
    return;
  }
  pcVar6 = local_30 + uVar14;
  param_2[2] = (int)pcVar6;
  if ((CARRY4(uVar14,(uint)local_30)) || (pcVar13 < pcVar6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar14,pcVar6,pcVar13,&DAT_018a78f8);
  }
  iVar12 = 0;
  local_74 = *param_2 + uVar14;
  local_6c = (char *)0x0;
  local_70 = local_30;
  local_60 = (char *)0x0;
  local_80 = 4;
  local_64 = 4;
  local_68 = (char *)0x0;
  if (local_30 != (char *)0x0) {
    uVar10 = 0;
    uVar14 = 0;
    local_90 = 0;
    do {
      pcVar11 = local_60;
      FUN_0152a85c(&local_34,&local_74);
      pcVar6 = local_70;
      uVar3 = (uint)local_34 & 0xff;
      if (uVar3 != 0x18) {
LAB_015071f0:
        local_78 = (char *)((uint)local_30 & 0xffff);
LAB_01507204:
        uVar8 = (uint)local_30 >> 0x10;
        pcVar13 = (char *)(uint)local_34._1_1_;
        uVar14 = (uint)(local_34._2_2_ >> 8);
        uVar10 = local_34._2_2_ & 0xff;
        goto LAB_0150724c;
      }
      if ((uint)((int)local_70 - (int)local_6c) < 2) {
        uVar3 = 0xc;
        local_2c = (char *)0x3;
        local_78 = 
        "u16u32u64min_versionmax_versionflagsendpoint_hostendpoint_portdevicechannel_idseq_numerror_codelast_seq_numnew_submits_accepted_countnew_shares_sumjob_idmin_ntimeversionversion_rolling_allowedmerkle_pathcoinbase_tx_prefixcoinbase_tx_suffixnoncentimeextranoncefuture_jobmerkle_rootrequest_idused_versionmax_targetmin_extranonce_sizeextranonce_sizeextranonce_prefixreason_codenominal_hash_ratemaximum_targetprev_hashnbitsBUG: Invalid message structure that couldn\'t be serialized with stratum serializerHeaderis_channel_messageextension_typemsg_lengthMalformedFrameheaderpayloadSerializationErrorTextDeserializationErrorDifferentExtensionStratumSerdeErrorVarSeq_16mGeneric-Sequence: Use stratum sized types instead"
        ;
        uVar8 = 0x41;
        goto LAB_0150724c;
      }
      pcVar7 = local_6c + 2;
      pcVar13 = (char *)((uint)local_34 >> 0x10);
      pcVar4 = local_6c;
      if (((char *)0xfffffffd < local_6c) || (local_70 < pcVar7)) {
LAB_0150737c:
        local_6c = pcVar7;
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(pcVar4,local_6c,local_70,&DAT_018a78f8);
      }
      uVar1 = *(ushort *)(local_6c + local_74);
      uVar10 = (uint)(uVar1 >> 8);
      uVar14 = (uint)uVar1 << 0x18 | uVar10 << 0x10;
      if ((uint)((int)local_70 - (int)pcVar7) < uVar14 >> 0x10) {
        local_2c = (char *)0x0;
        uVar14 = (uint)local_94 >> 0x18;
        uVar10 = ((uint)local_94 & 0xffffff) >> 0x10;
        pcVar13 = (char *)((uint)local_94 >> 8);
        uVar8 = (uint)local_78 >> 0x10;
        uVar3 = 0xb;
        local_6c = pcVar7;
        goto LAB_0150724c;
      }
      pcVar4 = (char *)(uVar14 >> 0x10);
      pcVar15 = pcVar7 + (int)pcVar4;
      if ((CARRY4((uint)pcVar7,(uint)pcVar4)) || (local_70 < pcVar15)) {
        pcVar4 = pcVar7;
        pcVar7 = pcVar15;
        goto LAB_0150737c;
      }
      uVar9 = 0;
      local_94 = pcVar7 + local_74;
      local_38 = (char *)0x0;
      uVar17 = 1;
      uVar5 = 0;
      pcVar7 = pcVar11;
      bVar16 = extraout_r12;
      local_6c = pcVar15;
      local_40 = local_94;
      local_3c = pcVar4;
      switch(pcVar13) {
      case (char *)0x0:
        goto switchD_01506ce4_caseD_0;
      default:
        FUN_015160c8(&local_34,pcVar13,(uint)local_30 & 0xffff,&local_40);
        uVar17 = 0x10;
        pcVar13 = extraout_r12_08;
        goto LAB_01507128;
      case (char *)0x5:
        uVar17 = 8;
        break;
      case (char *)0xb:
        FUN_015094bc(&local_34,&local_40);
        local_78 = local_2c;
        pcVar13 = local_28;
        if (local_34 != (char *)0x0) goto LAB_015072ac;
        pcVar13 = (char *)((uint)local_30 & 0xffff0000);
        uVar5 = 0;
        uVar17 = 0;
        local_84 = local_2c;
        local_88 = local_28;
        pcVar7 = local_30;
        bVar16 = extraout_r12_03;
LAB_01507028:
        uVar9 = 0;
        if (local_38 < local_3c) goto LAB_0150713c;
        goto LAB_01507084;
      case (char *)0x10:
        FUN_01517288(&local_34,&local_40);
        local_78 = local_2c;
        pcVar13 = local_28;
        if (local_34 != (char *)0x0) goto LAB_015072ac;
        uVar17 = 4;
        pcVar13 = (char *)((uint)local_30 & 0xffff0000);
        bVar16 = extraout_r12_06;
LAB_01506ff0:
        pcVar7 = local_30;
        uVar5 = 0;
        local_88 = local_28;
        local_84 = local_2c;
        goto switchD_01506ce4_caseD_0;
      case (char *)0x12:
        FUN_0152a370(&local_34,&local_40);
        uVar3 = (uint)local_34 & 0xff;
        if (uVar3 == 0x18) {
          uVar17 = 10;
          bVar16 = local_34._1_1_;
LAB_01507020:
          uVar5 = (ushort)local_34._2_1_;
          pcVar13 = (char *)0x0;
          goto LAB_01507028;
        }
        goto LAB_015072c8;
      case (char *)0x13:
        FUN_0152a370(&local_34,&local_40);
        uVar3 = (uint)local_34 & 0xff;
        if (uVar3 == 0x18) {
          uVar17 = 9;
          bVar16 = local_34._1_1_;
          goto LAB_01507020;
        }
LAB_015072c8:
        pcVar13 = (char *)(uint)local_34._1_1_;
        uVar10 = (uint)local_34._2_1_;
        uVar14 = (uint)local_34 >> 0x18;
        uVar8 = (uint)local_30 >> 0x10;
        local_78 = local_30;
        goto LAB_0150724c;
      case (char *)0x15:
        uVar17 = 7;
        break;
      case (char *)0x17:
        uVar17 = 2;
        break;
      case (char *)0x18:
        FUN_0152c840(&local_34,&local_40);
        uVar3 = (uint)local_34 & 0xff;
        if (uVar3 != 0x18) {
          local_78 = local_30;
          goto LAB_01507204;
        }
        uVar17 = 6;
        uVar9 = local_34._2_2_ >> 8;
        uVar5 = local_34._2_2_ & 0xff;
        bVar16 = extraout_r12_07;
        break;
      case (char *)0x19:
        uVar17 = 0xe;
        break;
      case (char *)0x1a:
        FUN_0152a3fc(&local_34,&local_40);
        uVar3 = (uint)local_34 & 0xff;
        if (uVar3 != 0x18) goto LAB_015071f0;
        uVar17 = 0xb;
        uVar9 = 0;
        pcVar13 = (char *)0x0;
        pcVar7 = (char *)((uint)local_30 & 0xffff);
        uVar5 = local_34._2_2_;
        bVar16 = extraout_r12_01;
        goto switchD_01506ce4_caseD_0;
      case (char *)0x22:
        FUN_01516018(&local_34,&local_40);
        if (local_34 != (char *)0x80000000) {
          uVar17 = 5;
          pcVar13 = local_2c;
LAB_01507128:
          bVar16 = (byte)pcVar13;
          pcVar13 = (char *)((uint)local_34 & 0xffff0000);
          pcVar7 = local_34;
          local_98 = local_28;
          local_88 = local_2c;
          local_84 = local_30;
LAB_0150712c:
          uVar5 = 0;
          if (local_38 < local_3c) goto LAB_0150713c;
          goto LAB_01507084;
        }
        uVar10 = ((uint)local_30 & 0xffffff) >> 0x10;
        uVar8 = (uint)local_2c >> 0x10;
        uVar14 = (uint)local_30 >> 0x18;
        pcVar13 = (char *)((uint)local_30 >> 8);
        uVar3 = (uint)local_30 & 0xff;
        local_78 = local_2c;
        local_2c = local_28;
        goto LAB_0150724c;
      case (char *)0x23:
        local_38 = pcVar4;
        FUN_0154e48c(&local_34,pcVar4,0,1,1);
        pcVar7 = local_30;
        if (local_34 != (char *)0x0) {
LAB_015073a4:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_30,local_2c);
        }
        local_84 = local_2c;
        FUN_016dd1aa(local_2c,local_94,pcVar4);
        uVar17 = 0xc;
        bVar16 = extraout_r12_02;
        goto LAB_01506f68;
      case (char *)0x26:
        FUN_015407ec(&local_34,&local_40);
        local_78 = local_2c;
        pcVar13 = local_28;
        if (local_34 == (char *)0x0) {
          pcVar13 = (char *)((uint)local_30 & 0xffff0000);
          uVar17 = 3;
          bVar16 = extraout_r12_00;
          goto LAB_01506ff0;
        }
        goto LAB_015072ac;
      case (char *)0x27:
        local_38 = pcVar4;
        FUN_0154e48c(&local_34,pcVar4,0,1,1);
        pcVar7 = local_30;
        if (local_34 != (char *)0x0) goto LAB_015073a4;
        local_84 = local_2c;
        FUN_016dd1aa(local_2c,local_94,pcVar4);
        uVar17 = 0xd;
        bVar16 = extraout_r12_04;
LAB_01506f68:
        pcVar13 = (char *)((uint)pcVar7 & 0x7fff0000);
        local_88 = pcVar4;
        goto LAB_0150712c;
      case (char *)0x28:
        FUN_01508344(&local_34,&local_40,(uint)local_30 & 0xffff);
        local_78 = local_2c;
        pcVar13 = local_28;
        if (local_34 == (char *)0x0) {
          pcVar13 = (char *)((uint)local_30 & 0xffff0000);
          uVar17 = 0xf;
          bVar16 = extraout_r12_05;
          goto LAB_01506ff0;
        }
LAB_015072ac:
        local_2c = pcVar13;
        uVar8 = (uint)local_78 >> 0x10;
        uVar14 = (uint)local_30 >> 0x18;
        uVar10 = ((uint)local_30 & 0xffffff) >> 0x10;
        pcVar13 = (char *)((uint)local_30 >> 8);
        uVar3 = (uint)local_30 & 0xff;
        goto LAB_0150724c;
      }
      pcVar13 = (char *)0x0;
switchD_01506ce4_caseD_0:
      if (local_38 < local_3c) {
LAB_0150713c:
        uVar14 = (uint)pcVar7 & 0xffff;
        switch(uVar17) {
        case 0:
        case 3:
        case 4:
        case 5:
        case 0xc:
        case 0xd:
          if (pcVar13 != (char *)0x0 || uVar14 != 0) goto LAB_015071b4;
        case 1:
        case 2:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xe:
          break;
        case 0xf:
          pcVar6 = local_84;
          for (; local_88 != (char *)0x0; local_88 = local_88 + -1) {
            FUN_01496be4(pcVar6);
            pcVar6 = pcVar6 + 0x3c;
          }
          if (pcVar13 != (char *)0x0 || uVar14 != 0) {
LAB_015071b4:
            thunk_FUN_016d3fb4(local_84);
          }
          break;
        default:
          if (((uint)pcVar13 & 0x7fffffff) != 0 || uVar14 != 0) goto LAB_015071b4;
        }
        uVar3 = 0xf;
        local_2c = (char *)0xf;
        local_78 = "ServerExtensionServerNames";
        uVar8 = 0x40;
        uVar10 = local_90;
        uVar14 = local_a0;
        pcVar13 = local_9c;
LAB_0150724c:
        pcVar11 = pcVar11 + 1;
        param_1[1] = uVar14 << 0x18 | uVar10 << 0x10 | ((uint)pcVar13 & 0xff) << 8 | uVar3;
        param_1[2] = ((uint)local_78 & 0xffff) + uVar8 * 0x10000;
        param_1[3] = local_2c;
        *param_1 = 1;
        iVar12 = local_80;
        while (pcVar11 = pcVar11 + -1, pcVar11 != (char *)0x0) {
          FUN_01505444(iVar12);
          iVar12 = iVar12 + 0x14;
        }
        if (local_68 == (char *)0x0) {
          return;
        }
        thunk_FUN_016d3fb4(local_80);
        return;
      }
LAB_01507084:
      local_48 = local_98;
      local_4c = local_88;
      local_50 = local_84;
      local_58 = CONCAT31(CONCAT21(uVar5 | uVar9 << 8,bVar16),uVar17);
      local_90 = ((uint)pcVar13 & 0xffffff) >> 0x10;
      local_54 = (uint)pcVar13 & 0xff000000 | local_90 << 0x10 | (uint)pcVar7 & 0xff00 |
                 (uint)pcVar7 & 0xff;
      local_9c = (char *)(((uint)pcVar7 & 0xffff) >> 8);
      if (pcVar11 == local_68) {
        FUN_0154e308(&local_68);
        local_80 = local_64;
      }
      local_a0 = (uint)pcVar13 >> 0x18;
      local_60 = pcVar11 + 1;
      puVar2 = (undefined4 *)(local_80 + iVar12);
      iVar12 = iVar12 + 0x14;
      *puVar2 = local_58;
      puVar2[1] = local_54;
      puVar2[2] = local_50;
      puVar2[3] = local_4c;
      puVar2[4] = local_48;
      uVar14 = uVar1 & 0xff;
      local_78 = pcVar4;
    } while (pcVar15 < pcVar6);
  }
  *param_1 = 0;
  param_1[1] = local_68;
  param_1[2] = local_64;
  param_1[3] = local_60;
  return;
}

