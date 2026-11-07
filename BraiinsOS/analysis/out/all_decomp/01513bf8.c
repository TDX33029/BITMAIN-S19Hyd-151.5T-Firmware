// FUN_01513bf8 @ 01513bf8 size=1932 calls_out=11 calls_in=1
// strings: Random | Random | SessionID | ClientHelloPayload | ClientHelloPayload

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01513bf8(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  byte bVar8;
  int iVar9;
  undefined2 *puVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  undefined *puVar17;
  byte *pbVar18;
  undefined4 uVar19;
  int iVar20;
  undefined1 uVar21;
  int unaff_r4;
  uint uVar22;
  undefined1 uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  byte bVar35;
  uint *puVar36;
  bool bVar37;
  bool bVar38;
  byte local_f8;
  byte bStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 local_ec;
  int local_e8;
  uint local_e4;
  int local_e0;
  uint local_dc;
  int local_d8;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined1 auStack_c1 [17];
  byte local_b0;
  byte local_af;
  undefined2 local_ae;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  uint local_90;
  undefined1 auStack_88 [24];
  undefined2 local_70;
  undefined1 local_6e;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int local_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  int iStack_38;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  
  FUN_0152a3fc(&local_f8);
  uVar6 = (ushort)local_f4;
  if (local_f8 != 0x18) {
    *(uint *)((int)param_1 + 10) = CONCAT22(local_f0,local_f4._2_2_);
    *(undefined2 *)((int)param_1 + 0xe) = uStack_ee;
    *(uint *)((int)param_1 + 6) = CONCAT22((ushort)local_f4,CONCAT11(uStack_f5,uStack_f6));
    *(byte *)((int)param_1 + 5) = bStack_f7;
    *(byte *)(param_1 + 1) = local_f8;
    *param_1 = 0x80000000;
    return;
  }
  uVar33 = param_2[1];
  uVar34 = param_2[2];
  if (uVar33 - uVar34 < 0x20) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = 0x80000000;
    param_1[2] = "Random";
    param_1[3] = 6;
    return;
  }
  uVar27 = uVar34 + 0x20;
  bVar38 = 0xffffffde < uVar34;
  bVar37 = uVar34 == 0xffffffdf;
  if (uVar34 < 0xffffffe0) {
    bVar38 = uVar33 <= uVar27;
    bVar37 = uVar27 == uVar33;
  }
  param_2[2] = uVar27;
  if (bVar38 && !bVar37) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar34,uVar27,uVar33,&DAT_018a78f8);
  }
  iVar9 = *param_2;
  puVar10 = (undefined2 *)(iVar9 + uVar34);
  local_6c = *puVar10;
  uVar21 = *(undefined1 *)((int)puVar10 + 3);
  uVar30 = *(undefined4 *)((int)puVar10 + 7);
  local_6a = *(undefined1 *)(puVar10 + 1);
  local_6e = *(undefined1 *)(puVar10 + 3);
  local_70 = puVar10[2];
  uVar31 = *(undefined4 *)((int)puVar10 + 0xb);
  FUN_016dd1aa(auStack_88,(int)puVar10 + 0xf,0x11);
  uVar23 = 0xc;
  if (uVar33 == uVar27) {
    uVar19 = 2;
    pcVar11 = 
    "u8-.0f32u16u32u64min_versionmax_versionflagsendpoint_hostendpoint_portdevicechannel_idseq_numerror_codelast_seq_numnew_submits_accepted_countnew_shares_sumjob_idmin_ntimeversionversion_rolling_allowedmerkle_pathcoinbase_tx_prefixcoinbase_tx_suffixnoncentimeextranoncefuture_jobmerkle_rootrequest_idused_versionmax_targetmin_extranonce_sizeextranonce_sizeextranonce_prefixreason_codenominal_hash_ratemaximum_targetprev_hashnbitsBUG: Invalid message structure that couldn\'t be serialized with stratum serializerHeaderis_channel_messageextension_typemsg_lengthMalformedFrameheaderpayloadSerializationErrorTextDeserializationErrorDifferentExtensionStratumSerdeErrorVarSeq_16mGeneric-Sequence: Use stratum sized types instead"
    ;
  }
  else {
    uVar34 = uVar34 + 0x21;
    param_2[2] = uVar34;
    if (uVar33 <= uVar27) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar27,uVar34,uVar33,&DAT_018a78f8);
    }
    uVar19 = 9;
    uVar27 = (uint)*(byte *)(iVar9 + uVar27);
    pcVar11 = "SessionID";
    if (uVar27 < 0x21) {
      if (uVar27 <= uVar33 - uVar34) {
        uVar28 = uVar34 + uVar27;
        param_2[2] = uVar28;
        if ((CARRY4(uVar34,uVar27)) || (uVar33 < uVar28)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar34,uVar28,uVar33,&DAT_018a78f8);
        }
        uVar33 = 0;
        local_dc = 0;
        local_e0 = 0;
        local_e4 = 0;
        local_e8 = 0;
        local_ec = 0;
        local_f0 = 0;
        uStack_ee = 0;
        local_f4._0_2_ = 0;
        local_f4._2_2_ = 0;
        local_f8 = 0;
        bStack_f7 = 0;
        uStack_f6 = 0;
        uStack_f5 = 0;
        FUN_016dd1aa(&local_f8,iVar9 + uVar34);
        bVar14 = bStack_f7;
        bVar8 = local_f8;
        uVar3 = CONCAT11(uStack_f5,uStack_f6);
        uVar19 = CONCAT22(local_f4._2_2_,(ushort)local_f4);
        uVar5 = CONCAT22(uStack_ee,local_f0);
        local_68 = local_ec;
        uStack_64 = local_e8;
        uStack_60 = local_e4;
        iStack_5c = local_e0;
        uStack_58 = local_dc;
        FUN_0152d84c(&local_f8,&DAT_018a7680,param_2);
        uVar34 = (uint)local_f8;
        if (uVar34 == 0x18) {
          uVar34 = CONCAT22(local_f4._2_2_,(ushort)local_f4);
          uVar28 = param_2[1];
          uVar24 = param_2[2];
          if (uVar28 - uVar24 < uVar34) {
            uVar34 = 0xb;
            uVar32 = 0;
            uVar28 = 0;
            uVar22 = 0;
LAB_01513e54:
            bVar37 = true;
          }
          else {
            uVar33 = uVar24 + uVar34;
            param_2[2] = uVar33;
            if ((CARRY4(uVar24,uVar34)) || (uVar28 < uVar33)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar24,uVar33,uVar28,&DAT_018a78f8);
            }
            local_34 = *param_2 + uVar24;
            local_2c = 0;
            local_3c = 0;
            local_40 = 2;
            local_44 = 0;
            local_30 = uVar34;
            if (uVar34 != 0) {
              uVar16 = 2;
              iVar9 = 0;
              do {
                uVar33 = local_3c;
                FUN_01528fac(&local_f8,&local_34);
                uVar7 = (ushort)local_f4;
                uVar34 = (uint)local_f8;
                if (uVar34 != 0x18) {
                  uVar22 = CONCAT22(uStack_ee,local_f0);
                  uVar28 = (uint)local_f4._2_2_;
                  uVar24 = (uint)(ushort)local_f4;
                  uVar33 = (uint)CONCAT11(uStack_f5,uStack_f6);
                  uVar32 = (uint)bStack_f7;
                  if (local_44 == 0) goto LAB_01513e54;
                  thunk_FUN_016d3fb4(uVar16);
                  bVar37 = true;
                  goto LAB_01513f80;
                }
                uVar4 = CONCAT11(uStack_f5,uStack_f6);
                if (uVar33 == local_44) {
                  FUN_0154e0bc(&local_44);
                  uVar16 = local_40;
                }
                local_3c = uVar33 + 1;
                puVar10 = (undefined2 *)(uVar16 + iVar9);
                *puVar10 = uVar4;
                iVar9 = iVar9 + 4;
                puVar10[1] = uVar7;
              } while (local_2c < local_30);
            }
            uVar28 = local_40 >> 0x10;
            bVar37 = false;
            uVar33 = local_44 >> 0x10;
            uVar32 = local_44 >> 8;
            uVar34 = local_44 & 0xff;
            uVar22 = local_3c;
            uVar24 = local_40;
          }
        }
        else {
          uVar24 = CONCAT22(local_f4._2_2_,(ushort)local_f4);
          bVar37 = true;
          uVar22 = CONCAT22(uStack_ee,local_f0);
          uVar33 = (uint)CONCAT11(uStack_f5,uStack_f6);
          uVar32 = (uint)bStack_f7;
          uVar28 = (uint)local_f4._2_2_;
        }
LAB_01513f80:
        iVar9 = (uVar24 & 0xffff) + uVar28 * 0x10000;
        uVar28 = uVar33 << 0x10 | (uVar32 & 0xff) << 8 | uVar34;
        if (bVar37) {
          param_1[2] = iVar9;
          *param_1 = 0x80000000;
          param_1[1] = uVar28;
          param_1[3] = uVar22;
          return;
        }
        FUN_0152d84c(&local_f8,&DAT_018a76c0,param_2);
        if (local_f8 == 0x18) {
          uVar24 = CONCAT22(local_f4._2_2_,(ushort)local_f4);
          uVar16 = param_2[1];
          uVar25 = param_2[2];
          if (uVar24 <= uVar16 - uVar25) {
            uVar15 = uVar25 + uVar24;
            param_2[2] = uVar15;
            if ((CARRY4(uVar25,uVar24)) || (uVar16 < uVar15)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar25,uVar15,uVar16,&DAT_018a78f8);
            }
            iVar12 = *param_2;
            local_3c = 0;
            local_40 = 1;
            local_44 = 0;
            if (uVar24 == 0) {
              uVar24 = 0;
              local_44._3_1_ = 0;
              local_44._2_1_ = 0;
              local_44._1_1_ = 0;
              local_44._0_1_ = 0;
            }
            else {
              uVar16 = 1;
              do {
                uVar15 = local_3c;
                bVar1 = *(byte *)(iVar12 + uVar25 + local_3c);
                bVar35 = bVar1;
                if ((1 < bVar1) && (bVar35 = 3, bVar1 == 0x40)) {
                  bVar35 = 2;
                }
                if (local_3c == local_44) {
                  FUN_0154e058(&local_44);
                  uVar16 = local_40;
                }
                local_3c = uVar15 + 1;
                pbVar18 = (byte *)(uVar16 + uVar15 * 2);
                *pbVar18 = bVar35;
                pbVar18[1] = bVar1;
              } while (uVar24 != local_3c);
            }
            uVar16 = local_40;
            local_d2 = uVar6;
            local_d0 = local_6c;
            local_ec = CONCAT22(CONCAT11(local_44._3_1_,local_44._2_1_),
                                CONCAT11(local_44._1_1_,(undefined1)local_44));
            local_ce = local_6a;
            local_cc = local_70;
            local_ca = local_6e;
            local_e8 = local_40;
            local_e4 = uVar24;
            local_cd = uVar21;
            local_c9 = uVar30;
            local_c5 = uVar31;
            FUN_016dd1aa(auStack_c1,auStack_88,0x11);
            local_af = bVar14;
            local_b0 = bVar8;
            local_a4 = local_68;
            uStack_a0 = uStack_64;
            uStack_9c = uStack_60;
            iStack_98 = iStack_5c;
            uStack_94 = uStack_58;
            local_dc = 4;
            local_f0 = (undefined2)uVar22;
            uStack_ee = (undefined2)(uVar22 >> 0x10);
            local_f8 = (byte)uVar34;
            bStack_f7 = (byte)uVar32;
            uStack_f6 = (undefined1)uVar33;
            uStack_f5 = (undefined1)(uVar33 >> 8);
            uVar21 = 0xc;
            local_d8 = 0;
            local_e0 = 0;
            local_ae = uVar3;
            local_ac = uVar19;
            local_a8 = uVar5;
            local_90 = uVar27;
            local_f4 = iVar9;
            if ((uint)param_2[2] < (uint)param_2[1]) {
              FUN_015077b4(&local_44,param_2);
              local_50 = local_40;
              uStack_4c = local_3c;
              iStack_48 = iStack_38;
              if (local_44 == 1) {
                *param_1 = 0x80000000;
                param_1[1] = local_40;
                param_1[2] = local_3c;
                param_1[3] = iStack_38;
                FUN_01515cd0(&local_f8);
                return;
              }
              FUN_01515dac(&local_e0);
              local_e0 = local_50;
              local_dc = uStack_4c;
              local_d8 = iStack_48;
              uVar21 = 0xf;
              if (((uint)param_2[1] <= (uint)param_2[2]) && (uVar21 = 0xc, iStack_48 != 0)) {
                FUN_016dd1aa(param_1,&local_f8,0x6c);
                return;
              }
            }
            *(undefined1 *)(param_1 + 1) = uVar21;
            *param_1 = 0x80000000;
            param_1[2] = "ClientHelloPayload";
            param_1[3] = 0x12;
            if (uVar28 != 0) {
              thunk_FUN_016d3fb4(iVar9);
            }
            if (local_ec != 0) {
              thunk_FUN_016d3fb4(uVar16);
            }
            FUN_01515dac(&local_e0);
            return;
          }
          uVar30 = 0;
          puVar17 = &DAT_0040bcf8;
          uVar21 = 0;
          uVar23 = 0;
          bVar8 = 0xb;
          bVar14 = 0;
        }
        else {
          uVar30 = CONCAT22(uStack_ee,local_f0);
          puVar17 = (undefined *)CONCAT22(local_f4._2_2_,(ushort)local_f4);
          uVar21 = uStack_f6;
          uVar23 = uStack_f5;
          bVar8 = local_f8;
          bVar14 = bStack_f7;
        }
        *(byte *)(param_1 + 1) = bVar8;
        param_1[2] = puVar17;
        param_1[3] = uVar30;
        *(undefined1 *)((int)param_1 + 7) = uVar23;
        *(undefined1 *)((int)param_1 + 6) = uVar21;
        *(byte *)((int)param_1 + 5) = bVar14;
        *param_1 = 0x80000000;
        if (uVar28 == 0) {
          return;
        }
        if (iVar9 == 0) {
          return;
        }
        iVar12 = FUN_016d3bc8();
        uVar34 = *(byte *)(iVar9 + -3) & 0x1f;
        if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
           (uVar33 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar20 = uVar33 - 0x10, uVar33 == 0)) {
          iVar20 = (uint)*(ushort *)
                          (&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
        }
        uVar33 = (uint)(*(byte *)(iVar9 + -3) >> 5);
        iVar29 = *(int *)(iVar12 + 8) + 0x10;
        iVar26 = iVar20 * uVar34 + iVar20 + -4;
        iVar20 = iVar29 + iVar26;
        if (4 < uVar33) {
          if (uVar33 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar33 = *(uint *)(iVar20 + -4);
          if (uVar33 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar20 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if ((uint)(iVar20 - iVar9) < uVar33) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar20 - uVar33) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar29 + iVar26) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar8 = *(byte *)(iVar12 + 0x14);
        uVar33 = 1 << uVar34;
        *(undefined1 *)(iVar9 + -3) = 0xff;
        *(undefined2 *)(iVar9 + -2) = 0;
        do {
          uVar28 = *(uint *)(iVar12 + 0x10);
          uVar27 = *(uint *)(iVar12 + 0xc) | uVar28;
          if ((uVar33 & uVar27) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar28 == 0) || (uVar27 + uVar33 == (2 << (bVar8 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar12,uVar34);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar13 = (undefined4 *)FUN_016d2bc8();
            uVar30 = *puVar13;
            FUN_016d6ac4(uStack_28,unaff_r4);
            *puVar13 = uVar30;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar12 + 0x10) = uVar33 + uVar28;
            return;
          }
          puVar36 = (uint *)(iVar12 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar36);
            uVar27 = *puVar36;
            if (uVar28 != uVar27) goto LAB_016d409c;
            bVar37 = (bool)hasExclusiveAccess(puVar36);
          } while (!bVar37);
          *puVar36 = uVar33 + uVar28;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar28 == uVar27) {
            return;
          }
        } while( true );
      }
    }
    else {
      uVar23 = 0xf;
    }
  }
  param_1[2] = pcVar11;
  param_1[3] = uVar19;
  *(undefined1 *)(param_1 + 1) = uVar23;
  *param_1 = 0x80000000;
  return;
}

