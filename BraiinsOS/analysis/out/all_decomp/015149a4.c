// FUN_015149a4 @ 015149a4 size=700 calls_out=4 calls_in=1
// strings: SessionID

void FUN_015149a4(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 uVar16;
  uint uVar17;
  char local_48;
  undefined1 uStack_47;
  undefined2 uStack_46;
  undefined2 local_44;
  undefined2 uStack_42;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar13 = param_2[1];
  uVar14 = param_2[2];
  uVar12 = 0xc;
  if (uVar13 == uVar14) {
    uVar16 = 2;
    pcVar15 = 
    "u8-.0f32u16u32u64min_versionmax_versionflagsendpoint_hostendpoint_portdevicechannel_idseq_numerror_codelast_seq_numnew_submits_accepted_countnew_shares_sumjob_idmin_ntimeversionversion_rolling_allowedmerkle_pathcoinbase_tx_prefixcoinbase_tx_suffixnoncentimeextranoncefuture_jobmerkle_rootrequest_idused_versionmax_targetmin_extranonce_sizeextranonce_sizeextranonce_prefixreason_codenominal_hash_ratemaximum_targetprev_hashnbitsBUG: Invalid message structure that couldn\'t be serialized with stratum serializerHeaderis_channel_messageextension_typemsg_lengthMalformedFrameheaderpayloadSerializationErrorTextDeserializationErrorDifferentExtensionStratumSerdeErrorVarSeq_16mGeneric-Sequence: Use stratum sized types instead"
    ;
  }
  else {
    uVar11 = uVar14 + 1;
    param_2[2] = uVar11;
    if (uVar13 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar14,uVar11,uVar13,&DAT_018a78f8);
    }
    uVar16 = 9;
    uVar14 = (uint)*(byte *)(*param_2 + uVar14);
    pcVar15 = "SessionID";
    if (uVar14 < 0x21) {
      if (uVar14 <= uVar13 - uVar11) {
        uVar17 = uVar11 + uVar14;
        param_2[2] = uVar17;
        if ((CARRY4(uVar11,uVar14)) || (uVar13 < uVar17)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar11,uVar17,uVar13,&DAT_018a78f8);
        }
        local_2c = 0;
        local_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        uStack_3e = 0;
        local_44 = 0;
        uStack_42 = 0;
        local_48 = '\0';
        uStack_47 = 0;
        uStack_46 = 0;
        FUN_016dd1aa(&local_48,*param_2 + uVar11,uVar14);
        uVar10 = local_2c;
        uVar9 = local_30;
        uVar8 = local_34;
        uVar7 = local_38;
        uVar6 = local_3c;
        uVar3 = uStack_46;
        uVar12 = uStack_47;
        cVar2 = local_48;
        uVar16 = CONCAT22(uStack_42,local_44);
        uVar1 = CONCAT22(uStack_3e,local_40);
        FUN_01528fac(&local_48,param_2);
        uVar5 = local_44;
        uVar4 = uStack_46;
        if (local_48 != '\x18') {
          *(char *)(param_1 + 1) = local_48;
          *(uint *)((int)param_1 + 10) = CONCAT22(local_40,uStack_42);
          *(undefined2 *)((int)param_1 + 0xe) = uStack_3e;
          *(uint *)((int)param_1 + 6) = CONCAT22(local_44,uStack_46);
          *(undefined1 *)((int)param_1 + 5) = uStack_47;
          *param_1 = 0x80000000;
          return;
        }
        uVar13 = param_2[1];
        uVar11 = param_2[2];
        if (uVar13 == uVar11) {
          *(undefined1 *)(param_1 + 1) = 0xc;
          *param_1 = 0x80000000;
          param_1[2] = &DAT_0040bcf8;
          param_1[3] = 0xb;
          return;
        }
        param_2[2] = uVar11 + 1;
        if (uVar13 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar11,uVar11 + 1,uVar13,&DAT_018a78f8);
        }
        if (*(char *)(*param_2 + uVar11) != '\0') {
          *param_1 = 0x80000000;
          *(undefined1 *)(param_1 + 1) = 0x12;
          return;
        }
        FUN_01505f7c(&local_48);
        if (CONCAT22(uStack_46,CONCAT11(uStack_47,local_48)) == 0) {
          *param_1 = CONCAT22(uStack_42,local_44);
          param_1[1] = CONCAT22(uStack_3e,local_40);
          param_1[2] = local_3c;
          param_1[8] = uVar6;
          param_1[9] = uVar7;
          param_1[10] = uVar8;
          param_1[0xb] = uVar9;
          param_1[0xc] = uVar10;
          param_1[6] = uVar16;
          *(undefined2 *)((int)param_1 + 0x16) = uVar3;
          *(undefined1 *)((int)param_1 + 0x15) = uVar12;
          *(char *)(param_1 + 5) = cVar2;
          param_1[0xd] = uVar14;
          param_1[7] = uVar1;
          *(undefined2 *)((int)param_1 + 0x12) = uVar5;
          *(undefined2 *)(param_1 + 4) = uVar4;
          param_1[3] = 9;
          return;
        }
        *param_1 = 0x80000000;
        param_1[1] = CONCAT22(uStack_42,local_44);
        param_1[2] = CONCAT22(uStack_3e,local_40);
        param_1[3] = local_3c;
        return;
      }
    }
    else {
      uVar12 = 0xf;
    }
  }
  param_1[2] = pcVar15;
  param_1[3] = uVar16;
  *(undefined1 *)(param_1 + 1) = uVar12;
  *param_1 = 0x80000000;
  return;
}

