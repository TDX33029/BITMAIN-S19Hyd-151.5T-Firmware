// FUN_0150caa0 @ 0150caa0 size=1544 calls_out=12 calls_in=1
// strings: NewSessionTicketExtension | NewSessionTicketExtension

/* WARNING: Type propagation algorithm not settling */

void FUN_0150caa0(int *param_1,int *param_2)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  undefined3 uVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int unaff_r4;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  char *pcVar18;
  char *pcVar19;
  int iVar20;
  uint *puVar21;
  bool bVar22;
  bool bVar23;
  char *local_84;
  uint *local_80;
  uint local_7c;
  char *local_78;
  int local_70;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined3 uStack_50;
  byte local_4c;
  byte bStack_4b;
  ushort uStack_4a;
  char local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  int iStack_44;
  char *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar13 = param_2[1];
  uVar14 = param_2[2];
  if (3 < uVar13 - uVar14) {
    uVar12 = uVar14 + 4;
    param_2[2] = uVar12;
    if ((0xfffffffb < uVar14) || (uVar13 < uVar12)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar14,uVar12,uVar13,&DAT_018a78f8);
    }
    if (3 < uVar13 - uVar12) {
      uVar16 = uVar14 + 8;
      bVar23 = 0xfffffffa < uVar12;
      bVar22 = uVar14 == 0xfffffff7;
      param_2[2] = uVar16;
      if (!bVar23 || bVar22) {
        bVar23 = uVar13 <= uVar16;
        bVar22 = uVar16 == uVar13;
      }
      uVar14 = *(uint *)(*param_2 + uVar14);
      if (bVar23 && !bVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar12,uVar16,uVar13,&DAT_018a78f8);
      }
      uVar13 = *(uint *)(*param_2 + uVar12);
      FUN_015407ec(&local_4c);
      pcVar19 = local_40;
      iVar5 = iStack_44;
      iVar10 = CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,local_48)));
      if (CONCAT22(uStack_4a,CONCAT11(bStack_4b,local_4c)) == 1) {
        param_1[3] = (int)local_40;
        *param_1 = -0x80000000;
        param_1[1] = iVar10;
        param_1[2] = iStack_44;
        return;
      }
      FUN_015409a4(&local_4c,param_2);
      iVar9 = iStack_44;
      cVar6 = local_48;
      if (CONCAT22(uStack_4a,CONCAT11(bStack_4b,local_4c)) == 1) {
        cVar6 = '\x15';
        if (local_48 != '\x17') {
          local_58 = CONCAT13((undefined1)iStack_44,
                              CONCAT12(uStack_45,CONCAT11(uStack_46,uStack_47)));
          uStack_54 = CONCAT13(local_40._0_1_,iStack_44._1_3_);
          uStack_50 = (undefined3)((uint)local_40 >> 8);
          cVar6 = local_48;
        }
        *(char *)(param_1 + 1) = cVar6;
        param_1[3] = CONCAT31(uStack_50,uStack_54._3_1_);
        *(undefined4 *)((int)param_1 + 9) = uStack_54;
        *(undefined4 *)((int)param_1 + 5) = local_58;
        *param_1 = -0x80000000;
      }
      else {
        uVar4 = CONCAT12(uStack_45,CONCAT11(uStack_46,uStack_47));
        piVar7 = (int *)thunk_FUN_016d4a50(0x14);
        if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x14);
        }
        *piVar7 = 1;
        piVar7[1] = 1;
        piVar7[2] = CONCAT31(uVar4,cVar6);
        piVar7[3] = iVar9;
        piVar7[4] = (int)local_40;
        FUN_0152d84c(&local_4c,&DAT_005654a0,param_2);
        if (local_4c == 0x18) {
          local_38 = CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,local_48)));
          uVar16 = param_2[1];
          uVar12 = param_2[2];
          if (local_38 <= uVar16 - uVar12) {
            uVar11 = local_38 + uVar12;
            param_2[2] = uVar11;
            if ((CARRY4(uVar12,local_38)) || (uVar16 < uVar11)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar12,uVar11,uVar16,&DAT_018a78f8);
            }
            local_3c = *param_2 + uVar12;
            local_34 = 0;
            local_28 = 0;
            local_70 = 4;
            local_2c = 4;
            local_30 = 0;
            iVar9 = 0;
            if (local_38 != 0) {
              iVar9 = 8;
              local_84 = 
              "u32u64min_versionmax_versionflagsendpoint_hostendpoint_portdevicechannel_idseq_numerror_codelast_seq_numnew_submits_accepted_countnew_shares_sumjob_idmin_ntimeversionversion_rolling_allowedmerkle_pathcoinbase_tx_prefixcoinbase_tx_suffixnoncentimeextranoncefuture_jobmerkle_rootrequest_idused_versionmax_targetmin_extranonce_sizeextranonce_sizeextranonce_prefixreason_codenominal_hash_ratemaximum_targetprev_hashnbitsBUG: Invalid message structure that couldn\'t be serialized with stratum serializerHeaderis_channel_messageextension_typemsg_lengthMalformedFrameheaderpayloadSerializationErrorTextDeserializationErrorDifferentExtensionStratumSerdeErrorVarSeq_16mGeneric-Sequence: Use stratum sized types instead"
              ;
              pcVar18 = local_40;
              do {
                iVar20 = local_28;
                FUN_0152a85c(&local_4c,&local_3c);
                iVar15 = local_2c;
                uVar12 = (uint)local_4c;
                if (uVar12 != 0x18) {
                  local_84 = (char *)(uint)CONCAT11(uStack_47,local_48);
                  uVar13 = (uint)CONCAT11(uStack_45,uStack_46);
                  pcVar18 = (char *)(uint)uStack_4a;
                  local_7c = (uint)bStack_4b;
                  iVar9 = iStack_44;
LAB_0150cf58:
                  if (iVar20 != 0) {
                    puVar8 = (undefined4 *)(local_2c + 4);
                    do {
                      if ((-0x7fffffff < (int)puVar8[-1]) && (puVar8[-1] != 0)) {
                        thunk_FUN_016d3fb4(*puVar8);
                      }
                      puVar8 = puVar8 + 4;
                      iVar20 = iVar20 + -1;
                    } while (iVar20 != 0);
                  }
                  pcVar19 = (char *)(((uint)local_84 & 0xffff) + uVar13 * 0x10000);
                  uVar12 = (int)pcVar18 << 0x10 | (local_7c & 0xff) << 8 | uVar12;
                  if (local_30 != 0) {
                    thunk_FUN_016d3fb4(iVar15);
                  }
                  iStack_44 = iVar9;
                  goto LAB_0150cfd0;
                }
                if (local_38 - local_34 < 2) {
                  uVar12 = 0xc;
                  local_84 = 
                  "u16u32u64min_versionmax_versionflagsendpoint_hostendpoint_portdevicechannel_idseq_numerror_codelast_seq_numnew_submits_accepted_countnew_shares_sumjob_idmin_ntimeversionversion_rolling_allowedmerkle_pathcoinbase_tx_prefixcoinbase_tx_suffixnoncentimeextranoncefuture_jobmerkle_rootrequest_idused_versionmax_targetmin_extranonce_sizeextranonce_sizeextranonce_prefixreason_codenominal_hash_ratemaximum_targetprev_hashnbitsBUG: Invalid message structure that couldn\'t be serialized with stratum serializerHeaderis_channel_messageextension_typemsg_lengthMalformedFrameheaderpayloadSerializationErrorTextDeserializationErrorDifferentExtensionStratumSerdeErrorVarSeq_16mGeneric-Sequence: Use stratum sized types instead"
                  ;
                  uVar13 = 0x41;
                  local_7c = local_34;
                  iVar9 = 3;
                  goto LAB_0150cf58;
                }
                uVar16 = local_34 + 2;
                uVar17 = CONCAT13(uStack_47,CONCAT12(local_48,uStack_4a));
                uVar12 = local_34;
                if ((0xfffffffd < local_34) || (local_38 < uVar16)) {
LAB_0150d06c:
                  local_34 = uVar16;
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c(uVar12,local_34,local_38,&DAT_018a78f8);
                }
                uVar1 = *(ushort *)(local_34 + local_3c);
                uVar12 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
                if (local_38 - uVar16 < uVar12 >> 0x10) {
                  iVar9 = 0;
                  uVar12 = 0xb;
                  local_78 = (char *)((uint)local_80 >> 0x10);
                  local_7c = (uint)local_80 >> 8;
                  local_84 = pcVar18;
                  local_34 = uVar16;
                  goto LAB_0150cf4c;
                }
                pcVar18 = (char *)(uVar12 >> 0x10);
                local_34 = uVar16 + (int)pcVar18;
                if ((CARRY4(uVar16,(uint)pcVar18)) || (local_38 < local_34)) {
                  uVar12 = uVar16;
                  uVar16 = local_34;
                  goto LAB_0150d06c;
                }
                local_80 = (uint *)(uVar16 + local_3c);
                if (uStack_4a == 0x19) {
                  if (pcVar18 < (char *)0x4) {
                    iVar9 = 3;
                    uVar12 = 0xc;
                  }
                  else {
                    if (pcVar18 < (char *)0x5) {
                      uVar12 = *local_80;
                      uVar17 = 0;
                      local_78 = (char *)0x80000001;
                      uVar12 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                               (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18;
                      goto LAB_0150ce48;
                    }
                    iVar9 = 0x19;
                    uVar12 = 0xf;
                    local_84 = "NewSessionTicketExtension";
                  }
LAB_0150cf4c:
                  uVar13 = (uint)local_84 >> 0x10;
                  pcVar18 = local_78;
                  goto LAB_0150cf58;
                }
                if (uVar1 == 0) {
                  uVar12 = 1;
                  local_78 = (char *)0x0;
                }
                else {
                  uVar12 = thunk_FUN_016d4a50(pcVar18);
                  if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,pcVar18);
                  }
                  local_78 = pcVar18;
                }
                FUN_016dd1aa(uVar12,local_80,pcVar18);
LAB_0150ce48:
                if (iVar20 == local_30) {
                  FUN_0154e184(&local_30);
                  local_70 = local_2c;
                }
                local_7c = uVar12 >> 8;
                puVar8 = (undefined4 *)(local_70 + iVar20 * 0x10);
                *puVar8 = local_78;
                local_28 = iVar20 + 1;
                puVar8[1] = uVar12;
                puVar8 = (undefined4 *)(local_70 + iVar9);
                *puVar8 = pcVar18;
                iVar9 = iVar9 + 0x10;
                puVar8[1] = uVar17;
                local_78 = (char *)(uVar12 >> 0x10);
              } while (local_34 < local_38);
              iVar9 = local_30;
            }
            param_1[4] = local_2c;
            param_1[5] = local_28;
            param_1[3] = iVar9;
            *param_1 = iVar10;
            param_1[1] = iVar5;
            param_1[2] = (int)pcVar19;
            param_1[6] = (int)piVar7;
            param_1[7] = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                         (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18;
            param_1[8] = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                         (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18;
            return;
          }
          uVar12 = 0xb;
          iStack_44 = 0;
          pcVar19 = local_40;
        }
        else {
          pcVar19 = (char *)CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,local_48)));
          uVar12 = CONCAT31(CONCAT21(uStack_4a,bStack_4b),local_4c);
        }
LAB_0150cfd0:
        param_1[2] = (int)pcVar19;
        param_1[3] = iStack_44;
        *param_1 = -0x80000000;
        param_1[1] = uVar12;
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar7;
          bVar22 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar22);
        *piVar7 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0155edc8(piVar7);
        }
      }
      if (iVar10 == 0) {
        return;
      }
      if (iVar5 == 0) {
        return;
      }
      iVar10 = FUN_016d3bc8();
      uVar13 = *(byte *)(iVar5 + -3) & 0x1f;
      if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar9 = uVar14 - 0x10, uVar14 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar14 = (uint)(*(byte *)(iVar5 + -3) >> 5);
      iVar20 = *(int *)(iVar10 + 8) + 0x10;
      iVar15 = iVar9 * uVar13 + iVar9 + -4;
      iVar9 = iVar20 + iVar15;
      if (4 < uVar14) {
        if (uVar14 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar14 = *(uint *)(iVar9 + -4);
        if (uVar14 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar9 - iVar5) < uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar9 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar20 + iVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar10 + 0x14);
      uVar14 = 1 << uVar13;
      *(undefined1 *)(iVar5 + -3) = 0xff;
      *(undefined2 *)(iVar5 + -2) = 0;
      do {
        uVar16 = *(uint *)(iVar10 + 0x10);
        uVar12 = *(uint *)(iVar10 + 0xc) | uVar16;
        if ((uVar14 & uVar12) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar16 == 0) || (uVar12 + uVar14 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar10,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar17 = *puVar8;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar8 = uVar17;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar10 + 0x10) = uVar14 + uVar16;
          return;
        }
        puVar21 = (uint *)(iVar10 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar21);
          uVar12 = *puVar21;
          if (uVar16 != uVar12) goto LAB_016d409c;
          bVar22 = (bool)hasExclusiveAccess(puVar21);
        } while (!bVar22);
        *puVar21 = uVar14 + uVar16;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar16 == uVar12) {
          return;
        }
      } while( true );
    }
  }
  *(undefined1 *)(param_1 + 1) = 0xc;
  *param_1 = -0x80000000;
  param_1[2] = (int)&DAT_00410f5a;
  param_1[3] = 3;
  return;
}

