// FUN_01514610 @ 01514610 size=860 calls_out=5 calls_in=1
// strings: SessionID | ServerHelloPayload | ServerHelloPayload

void FUN_01514610(int *param_1,int *param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  int unaff_r4;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  char *pcVar25;
  int iVar26;
  uint *puVar27;
  char local_48;
  undefined1 uStack_47;
  undefined2 uStack_46;
  undefined2 local_44;
  undefined2 uStack_42;
  undefined2 local_40;
  undefined2 uStack_3e;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  uVar23 = param_2[1];
  uVar16 = 0xc;
  uVar20 = param_2[2];
  if (uVar23 == uVar20) {
    iVar26 = 2;
    pcVar25 = 
    "u8-.0f32u16u32u64min_versionmax_versionflagsendpoint_hostendpoint_portdevicechannel_idseq_numerror_codelast_seq_numnew_submits_accepted_countnew_shares_sumjob_idmin_ntimeversionversion_rolling_allowedmerkle_pathcoinbase_tx_prefixcoinbase_tx_suffixnoncentimeextranoncefuture_jobmerkle_rootrequest_idused_versionmax_targetmin_extranonce_sizeextranonce_sizeextranonce_prefixreason_codenominal_hash_ratemaximum_targetprev_hashnbitsBUG: Invalid message structure that couldn\'t be serialized with stratum serializerHeaderis_channel_messageextension_typemsg_lengthMalformedFrameheaderpayloadSerializationErrorTextDeserializationErrorDifferentExtensionStratumSerdeErrorVarSeq_16mGeneric-Sequence: Use stratum sized types instead"
    ;
  }
  else {
    uVar15 = uVar20 + 1;
    param_2[2] = uVar15;
    if (uVar23 <= uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar20,uVar15,uVar23,&DAT_018a78f8);
    }
    iVar26 = 9;
    uVar20 = (uint)*(byte *)(*param_2 + uVar20);
    pcVar25 = "SessionID";
    if (uVar20 < 0x21) {
      if (uVar20 <= uVar23 - uVar15) {
        uVar21 = uVar15 + uVar20;
        param_2[2] = uVar21;
        if ((CARRY4(uVar15,uVar20)) || (uVar23 < uVar21)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar15,uVar21,uVar23,&DAT_018a78f8);
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
        FUN_016dd1aa(&local_48,*param_2 + uVar15,uVar20);
        iVar11 = local_2c;
        iVar10 = local_30;
        iVar9 = local_34;
        iVar24 = local_38;
        iVar22 = local_3c;
        uVar6 = uStack_46;
        uVar16 = uStack_47;
        cVar5 = local_48;
        iVar26 = CONCAT22(uStack_42,local_44);
        iVar18 = CONCAT22(uStack_3e,local_40);
        FUN_01528fac(&local_48,param_2);
        uVar8 = local_44;
        uVar7 = uStack_46;
        if (local_48 != '\x18') {
          *(char *)(param_1 + 1) = local_48;
          *(uint *)((int)param_1 + 10) = CONCAT22(local_40,uStack_42);
          *(undefined2 *)((int)param_1 + 0xe) = uStack_3e;
          *(uint *)((int)param_1 + 6) = CONCAT22(local_44,uStack_46);
          *(undefined1 *)((int)param_1 + 5) = uStack_47;
          *param_1 = -0x80000000;
          return;
        }
        uVar15 = param_2[1];
        uVar23 = param_2[2];
        if (uVar15 == uVar23) {
          *(undefined1 *)(param_1 + 1) = 0xc;
          *param_1 = -0x80000000;
          param_1[2] = (int)&DAT_0040bcf8;
          param_1[3] = 0xb;
          return;
        }
        uVar21 = uVar23 + 1;
        param_2[2] = uVar21;
        if (uVar15 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar23,uVar21,uVar15,&DAT_018a78f8);
        }
        bVar1 = *(byte *)(*param_2 + uVar23);
        bVar4 = bVar1;
        if ((1 < bVar1) && (bVar4 = 3, bVar1 == 0x40)) {
          bVar4 = 2;
        }
        if (uVar21 < uVar15) {
          FUN_01506ae4(&local_48,param_2);
          iVar17 = CONCAT22(uStack_42,local_44);
          iVar12 = CONCAT22(uStack_3e,local_40);
          if (CONCAT22(uStack_46,CONCAT11(uStack_47,local_48)) != 0) {
            param_1[2] = iVar12;
            *param_1 = -0x80000000;
            param_1[1] = iVar17;
            param_1[3] = local_3c;
            return;
          }
          uVar15 = param_2[1];
          uVar21 = param_2[2];
          iVar14 = local_3c;
        }
        else {
          iVar12 = 4;
          iVar17 = 0;
          iVar14 = 0;
        }
        if (uVar21 < uVar15) {
          *(undefined1 *)(param_1 + 1) = 0xf;
          *param_1 = -0x80000000;
          param_1[2] = (int)"ServerHelloPayload";
          param_1[3] = 0x12;
          FUN_01498ed4();
          if (iVar17 != 0) {
            if (iVar12 == 0) {
              return;
            }
            iVar26 = FUN_016d3bc8();
            uVar20 = *(byte *)(iVar12 + -3) & 0x1f;
            if (((*(byte *)(iVar26 + 0x14) & 0x1f) != 0) ||
               (uVar23 = *(uint *)(iVar26 + 0x14) & 0xfffff000, iVar18 = uVar23 - 0x10, uVar23 == 0)
               ) {
              iVar18 = (uint)*(ushort *)
                              (&DAT_0042567c + ((*(ushort *)(iVar26 + 0x14) & 0xfff) >> 6) * 2) << 4
              ;
            }
            uVar23 = (uint)(*(byte *)(iVar12 + -3) >> 5);
            iVar24 = *(int *)(iVar26 + 8) + 0x10;
            iVar22 = iVar18 * uVar20 + iVar18 + -4;
            iVar18 = iVar24 + iVar22;
            if (4 < uVar23) {
              if (uVar23 != 5) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)software_udf(0xff,0x16d4018);
                (*pcVar2)();
              }
              uVar23 = *(uint *)(iVar18 + -4);
              if (uVar23 < 5) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)software_udf(0xff,0x16d4022);
                (*pcVar2)();
              }
              if (*(char *)(iVar18 + -5) != '\0') {
                    /* WARNING: Does not return */
                pcVar2 = (code *)software_udf(0xff,0x16d402a);
                (*pcVar2)();
              }
            }
            if ((uint)(iVar18 - iVar12) < uVar23) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4032);
              (*pcVar2)();
            }
            if (*(char *)(iVar18 - uVar23) != '\0') {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d403a);
              (*pcVar2)();
            }
            if (*(char *)(iVar24 + iVar22) != '\0') {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4040);
              (*pcVar2)();
            }
            bVar1 = *(byte *)(iVar26 + 0x14);
            uVar23 = 1 << uVar20;
            *(undefined1 *)(iVar12 + -3) = 0xff;
            *(undefined2 *)(iVar12 + -2) = 0;
            do {
              uVar21 = *(uint *)(iVar26 + 0x10);
              uVar15 = *(uint *)(iVar26 + 0xc) | uVar21;
              if ((uVar23 & uVar15) != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)software_udf(0xff,0x16d4074);
                (*pcVar2)();
              }
              if ((uVar21 == 0) || (uVar15 + uVar23 == (2 << (bVar1 & 0x1f)) + -1)) {
                if (DAT_018ddb0b != '\0') {
                  FUN_016ddcc0(&DAT_018ddd48);
                }
                FUN_016d3ca8(&uStack_28,iVar26,uVar20);
                FUN_016dddc0(&DAT_018ddd48);
                if (unaff_r4 == 0) {
                  return;
                }
                puVar13 = (undefined4 *)FUN_016d2bc8();
                uVar19 = *puVar13;
                FUN_016d6ac4(uStack_28,unaff_r4);
                *puVar13 = uVar19;
                return;
              }
              if (DAT_018ddb0b == '\0') {
                *(uint *)(iVar26 + 0x10) = uVar23 + uVar21;
                return;
              }
              puVar27 = (uint *)(iVar26 + 0x10);
              DataMemoryBarrier(0x1b);
              do {
                ExclusiveAccess(puVar27);
                uVar15 = *puVar27;
                if (uVar21 != uVar15) goto LAB_016d409c;
                bVar3 = (bool)hasExclusiveAccess(puVar27);
              } while (!bVar3);
              *puVar27 = uVar23 + uVar21;
LAB_016d409c:
              DataMemoryBarrier(0x1b);
              if (uVar21 == uVar15) {
                return;
              }
            } while( true );
          }
        }
        else {
          param_1[1] = iVar12;
          param_1[2] = iVar14;
          param_1[3] = 9;
          param_1[0xe] = iVar26;
          *(undefined2 *)((int)param_1 + 0x36) = uVar6;
          *(undefined1 *)((int)param_1 + 0x35) = uVar16;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          *(char *)(param_1 + 0xd) = cVar5;
          *(undefined2 *)((int)param_1 + 0x12) = uVar8;
          *(undefined2 *)(param_1 + 4) = uVar7;
          *param_1 = iVar17;
          param_1[0xf] = iVar18;
          param_1[0x10] = iVar22;
          param_1[0x11] = iVar24;
          param_1[0x12] = iVar9;
          param_1[0x13] = iVar10;
          param_1[0x14] = iVar11;
          *(byte *)((int)param_1 + 0x59) = bVar1;
          *(byte *)(param_1 + 0x16) = bVar4;
          param_1[0x15] = uVar20;
        }
        return;
      }
    }
    else {
      uVar16 = 0xf;
    }
  }
  param_1[2] = (int)pcVar25;
  param_1[3] = iVar26;
  *(undefined1 *)(param_1 + 1) = uVar16;
  *param_1 = -0x80000000;
  return;
}

