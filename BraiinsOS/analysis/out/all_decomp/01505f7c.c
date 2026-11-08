// FUN_01505f7c @ 01505f7c size=1376 calls_out=11 calls_in=1
// strings: HelloRetryExtension | HelloRetryExtension

/* WARNING: Type propagation algorithm not settling */

void FUN_01505f7c(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *extraout_r1;
  char *extraout_r1_00;
  int iVar6;
  ushort uVar7;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  uint *puVar16;
  char *pcVar17;
  ushort *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  int local_6c;
  char *local_68;
  char *local_64;
  int local_60;
  uint *local_5c;
  int local_58;
  char *local_50;
  undefined4 local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  byte local_34;
  byte bStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  ushort local_30;
  ushort uStack_2e;
  char *local_2c;
  char *local_28;
  
  FUN_0152d84c(&local_34,&DAT_005654a0,param_2);
  if (local_34 != 0x18) {
    *(byte *)(param_1 + 1) = local_34;
    *(undefined1 *)((int)param_1 + 7) = uStack_31;
    *(ushort *)((int)param_1 + 5) = CONCAT11(uStack_32,bStack_33);
    param_1[2] = CONCAT22(uStack_2e,local_30);
    param_1[3] = local_2c;
    *param_1 = 1;
    return;
  }
  pcVar11 = (char *)param_2[1];
  uVar12 = param_2[2];
  local_68 = (char *)CONCAT22(uStack_2e,local_30);
  if (pcVar11 + -uVar12 < local_68) {
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = 0xb;
    return;
  }
  pcVar4 = local_68 + uVar12;
  param_2[2] = (int)pcVar4;
  if ((CARRY4(uVar12,(uint)local_68)) || (pcVar11 < pcVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar12,pcVar4,pcVar11,&DAT_018a78f8);
  }
  puVar16 = (uint *)&DAT_00000004;
  local_6c = *param_2 + uVar12;
  local_64 = (char *)0x0;
  local_58 = 0;
  local_5c = (uint *)&DAT_00000004;
  local_60 = 0;
  if (local_68 != (char *)0x0) {
    do {
      iVar15 = local_58;
      FUN_0152a85c(&local_34,&local_6c);
      pcVar4 = local_68;
      uVar1 = (ushort)local_34;
      if (local_34 != 0x18) goto LAB_01506364;
      if ((uint)((int)local_68 - (int)local_64) < 2) {
        pcVar4 = (char *)0x3;
        uVar1 = 0xc;
        pcVar14 = 
        "u16u32u64min_versionmax_versionflagsendpoint_hostendpoint_portdevicechannel_idseq_numerror_codelast_seq_numnew_submits_accepted_countnew_shares_sumjob_idmin_ntimeversionversion_rolling_allowedmerkle_pathcoinbase_tx_prefixcoinbase_tx_suffixnoncentimeextranoncefuture_jobmerkle_rootrequest_idused_versionmax_targetmin_extranonce_sizeextranonce_sizeextranonce_prefixreason_codenominal_hash_ratemaximum_targetprev_hashnbitsBUG: Invalid message structure that couldn\'t be serialized with stratum serializerHeaderis_channel_messageextension_typemsg_lengthMalformedFrameheaderpayloadSerializationErrorTextDeserializationErrorDifferentExtensionStratumSerdeErrorVarSeq_16mGeneric-Sequence: Use stratum sized types instead"
        ;
        local_80 = local_68;
        goto LAB_01506420;
      }
      pcVar5 = local_64 + 2;
      pcVar14 = (char *)CONCAT22(local_30,CONCAT11(uStack_31,uStack_32));
      pcVar8 = local_64;
      if (((char *)0xfffffffd < local_64) || (local_68 < pcVar5)) {
LAB_01506508:
        local_64 = pcVar5;
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(pcVar8,local_64,local_68,&DAT_018a78f8);
      }
      uVar2 = (uint)*(ushort *)(local_64 + local_6c);
      uVar12 = uVar2 << 0x18 | (uint)(*(ushort *)(local_64 + local_6c) >> 8) << 0x10;
      if ((uint)((int)local_68 - (int)pcVar5) < uVar12 >> 0x10) {
        uVar12 = (uint)pcVar11 >> 0x10;
        local_80 = (char *)((uint)local_7c >> 8);
        uVar1 = 0xb;
        pcVar4 = (char *)0x0;
        pcVar14 = pcVar11;
        uVar7 = (ushort)((uint)local_7c >> 0x10);
        local_64 = pcVar5;
        goto LAB_01506424;
      }
      pcVar11 = (char *)(uVar12 >> 0x10);
      pcVar13 = pcVar5 + (int)pcVar11;
      if ((CARRY4((uint)pcVar5,(uint)pcVar11)) || (local_68 < pcVar13)) {
        pcVar8 = pcVar5;
        pcVar5 = pcVar13;
        goto LAB_01506508;
      }
      local_7c = pcVar5 + local_6c;
      local_38 = (char *)0x0;
      local_64 = pcVar13;
      local_40 = local_7c;
      local_3c = pcVar11;
      switch(CONCAT11(uStack_31,uStack_32)) {
      case 0x1a:
        FUN_0152a3fc(&local_34,&local_40);
        uVar1 = (ushort)local_34;
        if (local_34 != 0x18) {
LAB_01506364:
          uVar12 = (uint)uStack_2e;
          local_80 = (char *)(uint)bStack_33;
          pcVar4 = local_2c;
          pcVar14 = (char *)(uint)local_30;
          uVar7 = CONCAT11(uStack_31,uStack_32);
          goto LAB_01506424;
        }
        uVar1 = CONCAT11(uStack_31,uStack_32);
        pcVar17 = (char *)0x80000003;
        local_28 = extraout_r1;
        goto LAB_01506204;
      case 0x1b:
        FUN_015409a4(&local_34,&local_40);
        pcVar17 = (char *)0x80000002;
        pcVar8 = (char *)(uint)uStack_2e;
        pcVar5 = (char *)(uint)local_30;
        if (CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(bStack_33,local_34))) != 0) {
          uVar12 = (uint)local_2c >> 0x10;
          local_80 = (char *)(uint)(local_30 >> 8);
          uVar1 = local_30 & 0xff;
          pcVar4 = local_28;
          pcVar14 = local_2c;
          uVar7 = uStack_2e;
          goto LAB_01506424;
        }
        break;
      default:
        if (uVar2 == 0) {
          pcVar5 = (char *)0x1;
          pcVar17 = (char *)0x0;
          local_38 = pcVar11;
        }
        else {
          local_38 = pcVar11;
          pcVar5 = (char *)thunk_FUN_016d4a50(pcVar11);
          if (pcVar5 == (char *)0x0) {
LAB_01506530:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,pcVar11);
          }
          pcVar17 = pcVar11;
        }
        FUN_016dd1aa(pcVar5,local_7c,pcVar11);
        pcVar8 = (char *)((uint)pcVar5 >> 0x10);
        local_28 = pcVar14;
        local_2c = pcVar11;
        break;
      case 0x22:
        FUN_0152a6b0(&local_34,&local_40);
        uVar1 = (ushort)local_34;
        if (local_34 != 0x18) goto LAB_01506364;
        uVar1 = CONCAT11(uStack_31,uStack_32);
        pcVar17 = (char *)0x80000001;
        local_28 = extraout_r1_00;
LAB_01506204:
        pcVar5 = (char *)(uint)uVar1;
        pcVar8 = (char *)(uint)local_30;
        local_2c = pcVar13;
        break;
      case 0x28:
        pcVar8 = (char *)0x0;
        if (uVar2 == 0) {
          pcVar14 = (char *)0x1;
          pcVar5 = (char *)0x0;
          local_38 = pcVar11;
        }
        else {
          local_38 = pcVar11;
          pcVar14 = (char *)thunk_FUN_016d4a50(pcVar11);
          pcVar5 = pcVar11;
          if (pcVar14 == (char *)0x0) goto LAB_01506530;
        }
        FUN_016dd1aa(pcVar14,local_7c,pcVar11);
        pcVar17 = &DAT_80000004;
        local_28 = pcVar11;
        local_2c = pcVar14;
      }
      uStack_2e = (ushort)pcVar8;
      local_30 = (ushort)pcVar5;
      local_34 = (byte)pcVar17;
      bStack_33 = (byte)((uint)pcVar17 >> 8);
      uStack_32 = 0;
      uStack_31 = (undefined1)((uint)pcVar17 >> 0x18);
      if (local_38 < local_3c) {
        pcVar11 = (char *)0x4;
        if ((char *)0x80000000 < pcVar17) {
          pcVar11 = pcVar17 + 0x7fffffff;
        }
        local_88 = (ushort *)&local_34;
        switch(pcVar11) {
        case (char *)0x1:
        case (char *)0x3:
          local_88 = &local_30;
        default:
          if (*(int *)local_88 != 0) {
            thunk_FUN_016d3fb4(*(int *)(local_88 + 2));
          }
        case (char *)0x0:
        case (char *)0x2:
          pcVar4 = (char *)0x13;
          uVar1 = 0xf;
          pcVar14 = "HelloRetryExtension";
          pcVar11 = local_84;
        }
LAB_01506420:
        uVar12 = (uint)pcVar14 >> 0x10;
        uVar7 = (ushort)pcVar11;
LAB_01506424:
        *(ushort *)(param_1 + 1) = uVar1 | (ushort)((int)local_80 << 8);
        param_1[2] = ((uint)pcVar14 & 0xffff) + uVar12 * 0x10000;
        param_1[3] = pcVar4;
        *(ushort *)((int)param_1 + 6) = uVar7;
        *param_1 = 1;
        if (iVar15 == 0) goto LAB_015064cc;
        iVar9 = 0;
        puVar10 = puVar16;
        goto LAB_01506468;
      }
      local_4c = CONCAT22(uStack_2e,local_30);
      local_50 = pcVar17;
      local_48 = local_2c;
      local_44 = local_28;
      if (iVar15 == local_60) {
        FUN_0154e184(&local_60);
        puVar16 = local_5c;
      }
      local_80 = (char *)(((uint)pcVar5 & 0xffff) >> 8);
      puVar10 = puVar16 + iVar15 * 4;
      *puVar10 = (uint)local_50;
      local_58 = iVar15 + 1;
      puVar10[1] = local_4c;
      puVar10[2] = (uint)local_48;
      puVar10[3] = (uint)local_44;
      local_84 = pcVar8;
    } while (pcVar13 < pcVar4);
  }
  *param_1 = 0;
  param_1[1] = local_60;
  param_1[2] = local_5c;
  param_1[3] = local_58;
  return;
LAB_01506468:
  uVar12 = *puVar10;
  iVar6 = 4;
  if (0x80000000 < uVar12) {
    iVar6 = uVar12 + 0x7fffffff;
  }
  switch(iVar6) {
  case 0:
  case 2:
    break;
  case 1:
  case 3:
    puVar3 = puVar16 + iVar9 * 4 + 1;
LAB_015064a4:
    if (*puVar3 != 0) {
      thunk_FUN_016d3fb4(puVar3[1]);
    }
    break;
  default:
    puVar3 = puVar10;
    if (uVar12 != 0x80000000) goto LAB_015064a4;
  }
  iVar9 = iVar9 + 1;
  puVar10 = puVar10 + 4;
  iVar15 = iVar15 + -1;
  if (iVar15 == 0) {
LAB_015064cc:
    if (local_60 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(puVar16);
    return;
  }
  goto LAB_01506468;
}

