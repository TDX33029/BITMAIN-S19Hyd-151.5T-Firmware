// FUN_01514d7c @ 01514d7c size=2456 calls_out=11 calls_in=2
// strings: CertificateExtension

void FUN_01514d7c(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  byte *pbVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  byte bVar16;
  uint extraout_r3;
  int unaff_r4;
  int *piVar17;
  int *piVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  int *piVar21;
  uint uVar22;
  undefined1 *puVar23;
  int iVar24;
  char cVar25;
  uint uVar26;
  char *unaff_r10;
  int *piVar27;
  char *pcVar28;
  int iVar29;
  char *pcVar30;
  uint *puVar31;
  char *pcVar32;
  uint local_100;
  undefined1 *local_fc;
  char *local_f4;
  char *local_f0;
  char *local_ec;
  uint local_e0;
  int *local_d0;
  char *local_c8;
  uint local_c4;
  char *local_c0;
  char *local_bc;
  char *local_b8;
  char *local_b4;
  char *local_b0;
  uint local_ac;
  int local_9c;
  undefined1 *local_98;
  undefined1 *local_94;
  undefined1 *local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  int *local_80;
  int local_7c;
  int *local_78;
  int local_74;
  undefined1 *local_70;
  int *local_6c;
  undefined1 *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  char *local_50;
  uint local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char local_34;
  byte bStack_33;
  ushort uStack_32;
  char local_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  char *local_2c;
  char *local_28;
  
  FUN_015407ec(&local_80);
  iVar29 = local_74;
  piVar3 = local_78;
  iVar8 = local_7c;
  if (local_80 == (int *)&DAT_00000001) {
    param_1[3] = local_74;
    *param_1 = -0x80000000;
    param_1[1] = local_7c;
    param_1[2] = (int)local_78;
    return;
  }
  FUN_0152d84c(&local_34,"",param_2);
  if (local_34 == '\x18') {
    local_94 = (undefined1 *)CONCAT13(bStack_2d,CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)));
    puVar23 = (undefined1 *)param_2[1];
    local_d0 = (int *)param_2[2];
    if (local_94 <= puVar23 + -(int)local_d0) {
      puVar9 = (undefined1 *)((int)local_d0 + (int)local_94);
      param_2[2] = (int)puVar9;
      if ((CARRY4((uint)local_d0,(uint)local_94)) || (puVar23 < puVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_d0,puVar9,puVar23,&DAT_018a78f8);
      }
      uVar26 = 0;
      local_9c = 4;
      local_98 = (undefined1 *)(*param_2 + (int)local_d0);
      local_90 = (undefined1 *)0x0;
      local_84 = 0;
      local_88 = 4;
      local_8c = 0;
      if (local_94 == (undefined1 *)0x0) {
        uVar14 = 0;
        local_8c._0_1_ = 0;
      }
      else {
        puVar10 = (undefined2 *)((uint)&local_80 | 5);
        local_100 = 0x41;
        local_9c = 4;
        local_d0 = (int *)&DAT_0040bf71;
        local_b8 = (char *)0x0;
        do {
          uVar14 = local_84;
          puVar23 = local_98;
          if ((uint)((int)local_94 - (int)local_90) < 3) {
            local_c8 = (char *)0x3;
            puVar23 = &DAT_8000000c;
LAB_0151562c:
            local_ac = (uint)puVar23 >> 8;
            cVar25 = (char)puVar23;
            goto LAB_01515510;
          }
          puVar20 = local_90 + 3;
          puVar9 = local_90;
          if (((undefined1 *)0xfffffffc < local_90) || (local_94 < puVar20)) {
LAB_015156f0:
            local_90 = puVar20;
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(puVar9,local_90,local_94,&DAT_018a78f8);
          }
          pbVar11 = local_98 + (int)local_90;
          piVar12 = (int *)((uint)*pbVar11 << 0x10 | (uint)pbVar11[1] << 8 | (uint)pbVar11[2]);
          if (local_94 + -(int)puVar20 < piVar12) {
            local_c8 = (char *)0x0;
            puVar23 = (undefined1 *)0xb;
            local_d0 = piVar12;
            local_90 = puVar20;
            goto LAB_0151562c;
          }
          local_90 = (undefined1 *)((int)piVar12 + (int)puVar20);
          if ((CARRY4((uint)piVar12,(uint)puVar20)) || (local_94 < local_90)) {
            puVar9 = puVar20;
            puVar20 = local_90;
            goto LAB_015156f0;
          }
          FUN_0152d84c(&local_34,&DAT_005654a0,&local_98);
          if (local_34 != '\x18') {
            local_d0 = (int *)CONCAT13(bStack_2d,CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)));
            local_c8 = local_2c;
            local_ac = (uint)*(uint3 *)((uint)&local_34 | 1);
            cVar25 = local_34;
            goto LAB_01515510;
          }
          piVar18 = (int *)CONCAT13(bStack_2d,CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)));
          if (local_94 + -(int)local_90 < piVar18) {
            cVar25 = '\v';
            local_ac = (uint)local_fc >> 8;
            local_c8 = (char *)0x0;
            goto LAB_0151550c;
          }
          puVar9 = local_90 + (int)piVar18;
          if ((CARRY4((uint)local_90,(uint)piVar18)) || (local_94 < puVar9)) {
            local_90 = puVar9;
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c();
          }
          piVar21 = (int *)&DAT_00000004;
          local_fc = local_98 + (int)local_90;
          local_60 = (int *)0x0;
          local_54 = (int *)0x0;
          local_58 = (int *)&DAT_00000004;
          local_5c = (int *)0x0;
          local_90 = puVar9;
          local_68 = local_fc;
          local_64 = piVar18;
          if (piVar18 != (int *)0x0) {
            do {
              piVar17 = local_54;
              FUN_0152a85c(&local_34,&local_68);
              piVar15 = local_64;
              if (local_34 != '\x18') {
                unaff_r10 = (char *)(uint)uStack_32;
                local_100 = (uint)CONCAT11(bStack_2d,bStack_2e);
                pcVar28 = (char *)(uint)CONCAT11(bStack_2f,local_30);
                uVar26 = (uint)bStack_33;
                local_b8 = (char *)(uint)(uStack_32 >> 8);
                local_c8 = local_2c;
                cVar25 = local_34;
LAB_01515470:
                if (piVar17 == (int *)0x0) goto LAB_015154ec;
                iVar29 = 0;
                piVar12 = piVar21;
                goto LAB_015154a8;
              }
              if ((uint)((int)local_64 - (int)local_60) < 2) {
                local_c8 = (char *)0x3;
                pcVar28 = 
                "u16u32u64min_versionmax_versionflagsendpoint_hostendpoint_portdevicechannel_idseq_numerror_codelast_seq_numnew_submits_accepted_countnew_shares_sumjob_idmin_ntimeversionversion_rolling_allowedmerkle_pathcoinbase_tx_prefixcoinbase_tx_suffixnoncentimeextranoncefuture_jobmerkle_rootrequest_idused_versionmax_targetmin_extranonce_sizeextranonce_sizeextranonce_prefixreason_codenominal_hash_ratemaximum_targetprev_hashnbitsBUG: Invalid message structure that couldn\'t be serialized with stratum serializerHeaderis_channel_messageextension_typemsg_lengthMalformedFrameheaderpayloadSerializationErrorTextDeserializationErrorDifferentExtensionStratumSerdeErrorVarSeq_16mGeneric-Sequence: Use stratum sized types instead"
                ;
                uVar26 = extraout_r3;
                cVar25 = '\f';
                goto LAB_01515470;
              }
              piVar13 = (int *)((int)local_60 + 2);
              pcVar28 = (char *)CONCAT13(bStack_2f,CONCAT12(local_30,uStack_32));
              piVar7 = local_60;
              if (((int *)0xfffffffd < local_60) || (local_64 < piVar13)) {
LAB_015156b8:
                local_60 = piVar13;
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(piVar7,local_60,local_64,&DAT_018a78f8);
              }
              uVar4 = (uint)*(ushort *)(local_68 + (int)local_60);
              uVar26 = uVar4 << 0x18 | (uint)(*(ushort *)(local_68 + (int)local_60) >> 8) << 0x10;
              if ((uint)((int)local_64 - (int)piVar13) < uVar26 >> 0x10) {
                cVar25 = '\v';
                local_b8 = (char *)((uint)local_b0 >> 0x18);
                local_ec = (char *)((uint)local_b0 >> 0x10);
                uVar26 = (uint)local_b0 >> 8;
                local_c8 = (char *)0x0;
                pcVar28 = unaff_r10;
                local_60 = piVar13;
                goto LAB_01515468;
              }
              unaff_r10 = (char *)(uVar26 >> 0x10);
              piVar27 = (int *)((int)piVar13 + (int)unaff_r10);
              if ((CARRY4((uint)piVar13,(uint)unaff_r10)) || (local_64 < piVar27)) {
                piVar7 = piVar13;
                piVar13 = piVar27;
                goto LAB_015156b8;
              }
              local_b0 = local_68 + (int)piVar13;
              local_60 = piVar27;
              local_40 = local_b0;
              local_3c = unaff_r10;
              if (uStack_32 == 5) {
                if (uVar4 == 0) {
                  local_c8 = (char *)0x15;
                  cVar25 = '\f';
                  local_b8 = local_b0;
                  uVar26 = local_e0;
                  pcVar28 = 
                  "CertificateStatusTypeCertificateCompressionAlgorithmdest is out of boundsInappropriateMessageexpect_typesInappropriateHandshakeMessageInvalidEncryptedClientHelloInvalidMessageNoCertificatesPresentedDecryptErrorEncryptErrorPeerMisbehavedAlertReceivedInvalidCertificateInvalidCertRevocationListGeneralFailedToGetCurrentTimeFailedToGetRandomBytesHandshakeNotCompletePeerSentOversizedRecordNoApplicationProtocolBadMaxFragmentSizeCertificateDerassertion failed: self.next_pre_encrypt_action() != PreEncryptAction::Refusebad EarlyData stateu24no root trust anchors were providedDefaultTimeProviderReady\x10"
                  ;
                }
                else {
                  local_38 = (char *)0x1;
                  if (*local_b0 == '\x01') {
                    FUN_015405b4(&local_34,&local_40);
                    local_f0 = (char *)(uint)bStack_2d;
                    local_ec = (char *)(uint)bStack_2e;
                    uVar26 = (uint)bStack_2f;
                    if (CONCAT22(uStack_32,CONCAT11(bStack_33,local_34)) == 0) {
                      local_b8 = (char *)0x80000001;
                      local_ec = (char *)0x1;
                      local_f4 = local_2c;
                      local_c8 = local_28;
                      local_e0 = 0;
                      pcVar28 = local_28;
                      pcVar30 = local_3c;
                      pcVar32 = local_38;
                      bVar16 = bStack_2d;
                      goto LAB_01515208;
                    }
                    local_c8 = local_28;
                    local_b8 = local_f0;
                    pcVar28 = local_2c;
                    cVar25 = local_30;
                  }
                  else {
                    cVar25 = '\x04';
                    local_ec = (char *)0x5;
                    local_b8 = local_f0;
                    pcVar28 = local_f4;
                  }
                }
LAB_01515468:
                local_100 = (uint)pcVar28 >> 0x10;
                unaff_r10 = local_ec;
                goto LAB_01515470;
              }
              local_38 = unaff_r10;
              if (uVar4 == 0) {
                iVar24 = 1;
                local_b8 = (char *)0x0;
              }
              else {
                iVar24 = thunk_FUN_016d4a50(unaff_r10);
                if (iVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,unaff_r10);
                }
                local_b8 = unaff_r10;
              }
              FUN_016dd1aa(iVar24,local_b0,unaff_r10);
              bVar16 = (byte)((uint)iVar24 >> 0x18);
              bStack_2e = (byte)((uint)iVar24 >> 0x10);
              bStack_2f = (byte)((uint)iVar24 >> 8);
              local_30 = (char)iVar24;
              local_2c = unaff_r10;
              pcVar30 = unaff_r10;
              pcVar32 = unaff_r10;
LAB_01515208:
              local_34 = (char)local_b8;
              bStack_33 = (byte)((uint)local_b8 >> 8);
              uStack_32 = (ushort)((uint)local_b8 >> 0x10);
              bStack_2d = bVar16;
              local_28 = pcVar28;
              if (pcVar32 < pcVar30) {
                if (local_b8 != (char *)0x80000000) {
                  local_b4 = &local_34;
                  if (local_b8 == (char *)0x80000001) {
                    local_b8 = (char *)CONCAT13(bVar16,CONCAT12(bStack_2e,
                                                                CONCAT11(bStack_2f,local_30)));
                    local_b4 = &local_30;
                    if (local_b8 == (char *)0x80000000) goto LAB_01515414;
                  }
                  if (local_b8 != (char *)0x0) {
                    thunk_FUN_016d3fb4(*(undefined4 *)(local_b4 + 4));
                  }
                }
LAB_01515414:
                local_c8 = (char *)0x14;
                local_b8 = local_bc;
                uVar26 = local_c4;
                local_ec = local_c0;
                pcVar28 = "CertificateExtension";
                cVar25 = '\x0f';
                goto LAB_01515468;
              }
              uVar26 = CONCAT13(bVar16,CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)));
              local_50 = local_b8;
              local_4c = uVar26;
              local_48 = local_2c;
              local_44 = pcVar28;
              if (piVar17 == local_5c) {
                FUN_0154e184(&local_5c);
                piVar21 = local_58;
              }
              local_bc = (char *)(uint)bVar16;
              local_c0 = (char *)(uVar26 >> 0x10);
              local_c4 = uVar26 >> 8;
              piVar7 = piVar21 + (int)piVar17 * 4;
              *piVar7 = (int)local_50;
              local_54 = (int *)((int)piVar17 + 1);
              local_b8 = (char *)(uVar4 & 0xff);
              piVar7[1] = local_4c;
              piVar7[2] = (int)local_48;
              piVar7[3] = (int)local_44;
            } while (piVar27 < piVar15);
            local_b8 = (char *)(uVar4 & 0xff);
          }
          local_ac = (uint)piVar21 >> 8;
          cVar25 = (char)piVar21;
          if (local_5c == (int *)&DAT_80000000) {
            local_c8 = (char *)0x80000000;
            param_2 = local_54;
            goto LAB_0151550c;
          }
          local_70 = puVar23 + (int)puVar20;
          local_7c = CONCAT31(local_7c._1_3_,cVar25);
          *puVar10 = (short)((uint)piVar21 >> 8);
          *(char *)(puVar10 + 1) = (char)((uint)piVar21 >> 0x18);
          local_74 = -0x80000000;
          local_80 = local_5c;
          local_78 = local_54;
          local_6c = piVar12;
          if (uVar14 == local_8c) {
            FUN_0154e2a8(&local_8c);
            local_9c = local_88;
          }
          uVar26 = uVar14 + 1;
          puVar5 = (undefined4 *)(local_9c + uVar14 * 0x18);
          *puVar5 = local_80;
          puVar5[1] = local_7c;
          puVar5[2] = local_78;
          puVar5[3] = local_74;
          puVar5[4] = local_70;
          puVar5[5] = local_6c;
          param_2 = piVar18;
          local_84 = uVar26;
        } while (local_90 < local_94);
        uVar14 = local_8c >> 8;
      }
      param_1[4] = local_9c;
      *(undefined1 *)(param_1 + 3) = (undefined1)local_8c;
      *(char *)((int)param_1 + 0xf) = (char)(uVar14 >> 0x10);
      *(short *)((int)param_1 + 0xd) = (short)uVar14;
      *param_1 = iVar8;
      param_1[1] = (int)piVar3;
      param_1[2] = iVar29;
      param_1[5] = uVar26;
      return;
    }
    local_ac = 0;
    local_c8 = (char *)0x0;
    cVar25 = '\v';
  }
  else {
    local_d0 = (int *)CONCAT13(bStack_2d,CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)));
    local_ac = (uint)CONCAT21(uStack_32,bStack_33);
    local_c8 = local_2c;
    cVar25 = local_34;
  }
  goto LAB_01514e30;
LAB_015154a8:
  do {
    iVar24 = *piVar12;
    if (iVar24 != -0x80000000) {
      piVar18 = piVar12;
      if (iVar24 == -0x7fffffff) {
        iVar24 = piVar12[1];
        if (iVar24 == -0x80000000) goto LAB_01515498;
        piVar18 = piVar21 + iVar29 * 4 + 1;
      }
      if (iVar24 != 0) {
        thunk_FUN_016d3fb4(piVar18[1]);
      }
    }
LAB_01515498:
    iVar29 = iVar29 + 1;
    piVar12 = piVar12 + 4;
    piVar17 = (int *)((int)piVar17 + -1);
  } while (piVar17 != (int *)0x0);
LAB_015154ec:
  param_2 = (int *)(((uint)pcVar28 & 0xffff) + local_100 * 0x10000);
  local_ac = ((uint)local_b8 & 0xff) << 0x10 | ((uint)unaff_r10 & 0xff) << 8 | uVar26 & 0xff;
  if (local_5c != (int *)0x0) {
    thunk_FUN_016d3fb4(piVar21);
  }
LAB_0151550c:
  local_d0 = param_2;
LAB_01515510:
  uVar26 = 0;
  while (uVar26 != uVar14) {
    piVar12 = (int *)(local_9c + uVar26 * 0x18);
    if ((piVar12[3] & 0x7fffffffU) == 0) {
      iVar29 = piVar12[2];
      piVar18 = (int *)piVar12[1];
    }
    else {
      thunk_FUN_016d3fb4(piVar12[4]);
      iVar29 = piVar12[2];
      piVar18 = (int *)piVar12[1];
    }
    if (iVar29 != 0) {
      iVar24 = 0;
      piVar21 = piVar18;
      do {
        iVar6 = *piVar21;
        if (iVar6 != -0x80000000) {
          piVar15 = piVar21;
          if (iVar6 == -0x7fffffff) {
            iVar6 = piVar21[1];
            if (iVar6 == -0x80000000) goto LAB_01515574;
            piVar15 = piVar18 + iVar24 * 4 + 1;
          }
          if (iVar6 != 0) {
            thunk_FUN_016d3fb4(piVar15[1]);
          }
        }
LAB_01515574:
        iVar24 = iVar24 + 1;
        piVar21 = piVar21 + 4;
        iVar29 = iVar29 + -1;
      } while (iVar29 != 0);
    }
    uVar26 = uVar26 + 1;
    if (*piVar12 != 0) {
      thunk_FUN_016d3fb4(piVar18);
    }
  }
  if (local_8c != 0) {
    thunk_FUN_016d3fb4(local_9c);
  }
LAB_01514e30:
  *(short *)((int)param_1 + 5) = (short)local_ac;
  *param_1 = -0x80000000;
  param_1[2] = (int)local_d0;
  *(char *)(param_1 + 1) = cVar25;
  param_1[3] = (int)local_c8;
  *(char *)((int)param_1 + 7) = (char)(local_ac >> 0x10);
  if (iVar8 == 0) {
    return;
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar26 = *(byte *)((int)piVar3 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar29 = uVar14 - 0x10, uVar14 == 0)) {
    iVar29 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar14 = (uint)(*(byte *)((int)piVar3 + -3) >> 5);
  iVar6 = *(int *)(iVar8 + 8) + 0x10;
  iVar24 = iVar29 * uVar26 + iVar29 + -4;
  iVar29 = iVar6 + iVar24;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar14 = *(uint *)(iVar29 + -4);
    if (uVar14 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar29 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar29 - (int)piVar3) < uVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar29 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 + iVar24) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar16 = *(byte *)(iVar8 + 0x14);
  uVar14 = 1 << uVar26;
  *(undefined1 *)((int)piVar3 + -3) = 0xff;
  *(undefined2 *)((int)piVar3 + -2) = 0;
  do {
    uVar22 = *(uint *)(iVar8 + 0x10);
    uVar4 = *(uint *)(iVar8 + 0xc) | uVar22;
    if ((uVar14 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar22 == 0) || (uVar4 + uVar14 == (2 << (bVar16 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar8,uVar26);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar19 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar19;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar14 + uVar22;
      return;
    }
    puVar31 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar31);
      uVar4 = *puVar31;
      if (uVar22 != uVar4) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar31);
    } while (!bVar2);
    *puVar31 = uVar14 + uVar22;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar22 == uVar4) {
      return;
    }
  } while( true );
}

