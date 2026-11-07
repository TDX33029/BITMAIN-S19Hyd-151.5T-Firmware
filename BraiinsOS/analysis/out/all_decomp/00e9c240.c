// FUN_00e9c240 @ 00e9c240 size=2548 calls_out=30 calls_in=1
// strings: too many temporary files exist

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_00e9c240(char ****param_1,char ****param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  code *pcVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  char ****ppppcVar15;
  undefined1 *puVar16;
  uint uVar17;
  char **ppcVar18;
  char *pcVar19;
  char ****ppppcVar20;
  uint uVar21;
  undefined1 *puVar22;
  char ****ppppcVar23;
  char ***pppcVar24;
  int iVar25;
  uint *puVar26;
  char ***pppcVar27;
  char ****ppppcVar28;
  bool bVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  char ****local_b0;
  undefined4 local_ac;
  char ****local_a4;
  char ****local_a0;
  undefined1 local_9c;
  undefined2 local_9b;
  undefined1 local_99;
  char ****local_98;
  char ****local_94;
  char ****local_90;
  undefined4 local_8c;
  undefined2 local_84;
  undefined1 local_82;
  char ****local_80;
  char ****local_7c;
  char ****local_78;
  char ****local_74;
  char ****local_70;
  char ****local_6c;
  char ****local_68;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined4 local_58;
  char ****local_54;
  char ****ppppcStack_50;
  uint local_4c;
  char ****local_38;
  char ****local_34;
  undefined1 auStack_30 [12];
  
  if (param_2 == (char ****)0x0) {
    local_5a = false;
  }
  else {
    local_5a = *(char *)param_1 == '/';
  }
  local_70 = (char ****)CONCAT31(local_70._1_3_,6);
  local_5c = 0x201;
  local_78 = param_1;
  local_74 = param_2;
  FUN_015c7164(&local_58,&local_78);
  if (2 < ((uint)local_58 & 0xff) - 7) {
LAB_00e9c894:
    FUN_00600d2c(auStack_30 + 0xc,&DAT_0057d834,auStack_30 + 0x20);
    uVar14 = FUN_00f2213c(auStack_30 + 0xc);
    return uVar14;
  }
  uVar30 = FUN_015c7664(&local_78);
  puVar16 = (undefined1 *)(uVar30 >> 0x20);
  pcVar19 = (char *)uVar30;
  if (pcVar19 == (char *)0x0) goto LAB_00e9c894;
  if ((puVar16 == (undefined1 *)0x0) || (*pcVar19 != '/')) {
    FUN_015bff34(&local_78);
    ppppcVar20 = local_74;
    ppppcVar23 = local_78;
    if (local_78 != (char ****)&DAT_80000000) {
      FUN_015ed628(&local_78,local_74,local_70,pcVar19,puVar16);
      ppppcVar28 = local_78;
      uVar6 = CONCAT44(local_70,local_74);
      if (ppppcVar23 != (char ****)0x0) {
        thunk_FUN_016d3fb4(ppppcVar20);
      }
      bVar5 = ppppcVar28 == (char ****)0x0;
      goto LAB_00e9c374;
    }
    local_98 = local_74;
    local_8c = CONCAT31(local_8c._1_3_,2);
    local_94 = local_70;
  }
  else {
    bVar5 = true;
    uVar6 = uVar30;
LAB_00e9c374:
    local_b0 = (char ****)(uVar6 >> 0x20);
    local_ac = (undefined4)uVar6;
    uVar31 = thunk_FUN_016de0ee(bVar5,0x260);
    puVar26 = (uint *)((int)uVar31 + (int)((ulonglong)uVar31 >> 0x20));
    if ((char)puVar26[2] == '\0') {
      FUN_01005868(&local_78);
      *(undefined1 *)(puVar26 + 2) = 1;
      bVar29 = ((uint)local_78 & 1) != 0;
      ppppcVar23 = (char ****)0xef6f79e;
      if (bVar29) {
        ppppcVar23 = local_6c;
      }
      ppppcVar20 = (char ****)0xd30ba75a;
      if (bVar29) {
        ppppcVar20 = local_70;
      }
      *puVar26 = (uint)ppppcVar20;
      puVar26[1] = (uint)ppppcVar23;
    }
    uVar9 = *puVar26 + 0xaa6c78a5;
    uVar17 = puVar26[1] + 0x2d358dcc + (uint)(0x5593875a < *puVar26);
    uVar3 = (ulonglong)uVar9 * (ulonglong)(uVar9 ^ 0x962eacc9);
    lVar1 = (ulonglong)uVar9 * (ulonglong)(uVar17 ^ 0x8bb84b93) + (uVar3 >> 0x20);
    uVar21 = (uint)((ulonglong)lVar1 >> 0x20);
    *puVar26 = uVar9;
    puVar26[1] = uVar17;
    lVar4 = (ulonglong)uVar17 * (ulonglong)(uVar9 ^ 0x962eacc9);
    uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar2 = (ulonglong)uVar17 * (ulonglong)(uVar17 ^ 0x8bb84b93) +
            (ulonglong)
            CONCAT14(CARRY4(uVar21,uVar9) ||
                     CARRY4(uVar21 + uVar9,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                     (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
    local_34 = (char ****)((uint)((ulonglong)lVar2 >> 0x20) ^ (uint)(lVar1 + lVar4));
    local_38 = (char ****)((uint)lVar2 ^ (uint)uVar3);
    iVar25 = 0;
    do {
      ppppcVar23 = (char ****)&local_78;
      if (iVar25 == 3) {
        DataMemoryBarrier(0xb);
        if (DAT_018dd98c == (code *)0x0) {
          pcVar12 = (code *)FUN_0100f390();
          if (pcVar12 != (code *)0xffffffff) goto LAB_00e9c454;
LAB_00e9c4c8:
          iVar11 = FUN_0100f050(ppppcVar23,8);
LAB_00e9c4d4:
          if (iVar11 != 0) goto LAB_00e9c4f8;
        }
        else {
          pcVar12 = DAT_018dd98c;
          if (DAT_018dd98c == (code *)0xffffffff) goto LAB_00e9c4c8;
LAB_00e9c454:
          uVar9 = 8;
          do {
            uVar17 = (*pcVar12)(ppppcVar23,uVar9,0);
            if ((int)uVar17 < 1) {
              if (uVar17 != 0xffffffff) goto LAB_00e9c4f8;
              piVar10 = (int *)FUN_016d2bc8();
              iVar11 = 0x10001;
              if (0 < *piVar10) {
                iVar11 = -*piVar10;
              }
              if (iVar11 != -4) goto LAB_00e9c4d4;
            }
            else {
              if (uVar9 < uVar17) goto LAB_00e9c4f8;
              ppppcVar23 = (char ****)((int)ppppcVar23 + uVar17);
              uVar9 = uVar9 - uVar17;
            }
          } while (uVar9 != 0);
        }
        local_34 = local_74;
        local_38 = local_78;
      }
LAB_00e9c4f8:
      FUN_0162a640(&local_78,&local_38,&DAT_005686f0,4,1,0,6);
      ppppcVar23 = local_74;
      FUN_015ed628(auStack_30,local_ac,local_b0,local_74,local_70);
      if (local_78 != (char ****)0x0) {
        thunk_FUN_016d3fb4(ppppcVar23);
      }
      local_70 = (char ****)0x0;
      local_6c = (char ****)((uint)local_6c & 0xffff0000);
      local_74 = (char ****)&DAT_000001b6;
      local_78 = (char ****)0x0;
      FUN_0162a128(&local_58,auStack_30,&local_78,0,0);
      if ((char)local_4c != '\x02') {
LAB_00e9c674:
        local_98 = (char ****)local_58;
        local_94 = local_54;
        local_90 = ppppcStack_50;
        local_8c = local_4c;
        goto joined_r0x00e9c690;
      }
      uVar9 = (uint)local_58 & 0xff;
      iVar25 = iVar25 + 1;
      ppppcVar23 = (char ****)local_58;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar9) {
      case 0:
        cVar8 = FUN_005bc530(local_54);
        ppppcVar23 = (char ****)local_58;
        local_58._1_1_ = cVar8;
        break;
      case 1:
        break;
      default:
        local_58._1_1_ = *(char *)(local_54 + 2);
      }
      bVar29 = local_58._1_1_ != '\f';
      local_58 = (char *****)ppppcVar23;
      if (bVar29) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar9) {
        case 0:
          cVar8 = FUN_005bc530(local_54);
          ppppcVar23 = (char ****)local_58;
          break;
        case 1:
          local_58._1_1_ = (char)((uint)ppppcVar23 >> 8);
          cVar8 = local_58._1_1_;
          break;
        default:
          cVar8 = *(char *)(local_54 + 2);
        }
        local_58 = (char *****)ppppcVar23;
        if (cVar8 != '\b') goto LAB_00e9c674;
      }
      ppppcVar23 = local_54;
      if (uVar9 == 3) {
        pppcVar24 = *local_54;
        pppcVar27 = local_54[1];
        ppcVar18 = *pppcVar27;
        if (ppcVar18 != (char **)0x0) {
          (*(code *)ppcVar18)(pppcVar24);
        }
        if (pppcVar27[1] != (char **)0x0) {
          thunk_FUN_016d3fb4(pppcVar24);
        }
        thunk_FUN_016d3fb4(ppppcVar23);
      }
    } while (iVar25 != 0x10000);
    FUN_015e79d4(&local_78,0xc,"too many temporary files exist",0x1e);
    ppppcVar20 = local_74;
    ppppcVar23 = local_78;
    local_54 = local_74;
    local_58 = (char *****)local_78;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_78 & 0xff) {
    case 0:
      uVar9 = FUN_005bc530(local_74);
      uVar9 = uVar9 & 0xff;
      break;
    case 1:
      uVar9 = (uint)local_78 >> 8 | (int)local_74 << 0x18;
      break;
    default:
      uVar9 = (uint)*(byte *)(local_74 + 2);
    }
    uVar14 = 0;
    if ((longlong)uVar6 < 0) {
LAB_00e9cae4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar14,local_b0);
    }
    if (local_b0 == (char ****)0x0) {
      ppppcVar15 = (char ****)&DAT_00000001;
      ppppcVar28 = (char ****)0x0;
    }
    else {
      ppppcVar15 = (char ****)thunk_FUN_016d4a50(local_b0);
      ppppcVar28 = local_b0;
      if (ppppcVar15 == (char ****)0x0) {
        uVar14 = 1;
        goto LAB_00e9cae4;
      }
    }
    FUN_016dd1aa(ppppcVar15,local_ac,local_b0);
    local_68 = ppppcVar20;
    local_6c = ppppcVar23;
    local_70 = local_b0;
    local_78 = ppppcVar28;
    local_74 = ppppcVar15;
    FUN_0162a8fc(&local_98,uVar9,&local_78);
    local_8c = CONCAT31(local_8c._1_3_,2);
joined_r0x00e9c690:
    if (bVar5 == false) {
      thunk_FUN_016d3fb4(local_ac);
    }
  }
  ppppcVar20 = local_94;
  ppppcVar23 = local_98;
  uVar7 = (undefined1)local_8c;
  uVar9 = local_8c & 0xff;
  if (uVar9 != 2) {
    local_9b = local_8c._1_2_;
    local_99 = local_8c._3_1_;
    local_a0 = local_90;
    local_a4 = local_94;
    local_9c = (undefined1)local_8c;
    FUN_009f4628(&local_98,local_98,param_3,param_4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((uint)local_98 & 0xff) {
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_80 = local_98;
    local_7c = local_94;
    if (((uint)local_98 & 0xff) == 4) {
      do {
        iVar25 = FUN_016e0002(ppppcVar23);
        ppppcVar15 = local_a0;
        ppppcVar28 = local_a4;
        if (iVar25 != -1) {
          FUN_016dffb2(ppppcVar23);
          FUN_0162aa38(&local_58,ppppcVar28,ppppcVar15,param_1,param_2);
          if ((char)local_58 == '\x04') {
            local_70 = (char ****)0x0;
            local_74 = (char ****)0x1;
            local_78 = (char ****)0x0;
            FUN_015f3928(&local_78);
            if (ppppcVar15 != (char ****)0x0) {
              thunk_FUN_016d3fb4(ppppcVar28);
            }
          }
          else {
            local_84 = local_9b;
            local_82 = local_99;
            local_7c = local_a0;
            local_80 = local_a4;
            ppppcVar23 = local_a0;
            if (uVar9 != 2) {
              local_74 = local_54;
              local_98 = (char ****)&local_38;
              local_78 = (char ****)local_58;
              local_6c = local_a0;
              local_70 = local_a4;
              local_68 = (char ****)CONCAT13(local_99,CONCAT21(local_9b,uVar7));
              local_94 = (char ****)&LAB_016040f8;
              local_38 = param_1;
              local_34 = param_2;
              FUN_00600d2c(&local_58,&DAT_0058dc34,&local_98);
              uVar14 = FUN_00f01d80(&local_78,&local_58);
              return uVar14;
            }
          }
          local_78 = (char ****)0x0;
          local_6c = (char ****)((uint)local_6c & 0xffff0000);
          local_74 = (char ****)&DAT_000001b6;
          if (puVar16 == (undefined1 *)0x0) {
            pcVar19 = 
            ".:::[invalid: ]called `Result::unwrap()` on an `Err` valueBadDerBadDerTimeCaUsedAsEndEntityCertExpirednot_afterCertNotValidForNameCertNotValidYetnot_beforeCertRevokedCrlExpirednext_updateEndEntityUsedAsCaExtensionValueInvalidInvalidCertValidityInvalidNetworkMaskConstraintInvalidSerialNumberInvalidCrlSignatureForPublicKeyInvalidSignatureForPublicKeyIssuerNotCrlSignerMalformedDnsIdentifierMalformedExtensionsMalformedNameConstraintMaximumNameConstraintComparisonsExceededMaximumPathBuildCallsExceededMaximumPathDepthExceededMaximumSignatureChecksExceededNameConstraintViolationPathLenConstraintViolatedRequiredEkuNotFoundRequiredEkuNotFoundContextSignatureAlgorithmMismatchTrailingDataUnknownIssuerUnknownRevocationStatusUnsupportedCertVersionUnsupportedCriticalExtensionUnsupportedCrlIssuingDistributionPointUnsupportedCrlVersionUnsupportedDeltaCrlUnsupportedIndirectCrlUnsupportedNameTypeUnsupportedRevocationReasonUnsupportedRevocationReasonsPartitioningUnsupportedSignatureAlgorithmUnsupportedCrlSignatureAlgorithmForPublicKeyUnsupportedSignatureAlgorithmForPublicKeyBitStringCertificateCertificateExtensionsCertificateTbsCertificateCertRevocationListCertRevocationListExtensionCrlDistributionPointCommonNameInnerCommonNameOuterDistributionPointNameExtensionGeneralNameSignatureSignatureAlgorithmSignedDataSubjectPublicKeyInfoTrustAnchorV1TrustAnchorV1TbsCertificateU8RevokedCertificateRevokedCertificateExtensionIssuingDistributionPointEndOfInputinternal error: entered unreachable codeInvalidNameContextpresentedassertion failed: len > 0assertion failed: src.len() == dst.len()assertion failed: old_left_len >= count\n, newline\'`\'\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02"
            ;
          }
          local_70 = (char ****)&DAT_00000001;
          puVar22 = &DAT_00000001;
          if (0x1ffffffff < uVar30) {
            puVar22 = puVar16;
          }
          FUN_015ec1bc(&local_58,&local_78,pcVar19,puVar22);
          ppppcVar20 = local_54;
          if ((char)local_58 == '\x04') goto LAB_00e9c998;
          uVar17 = (uint)local_58 >> 8;
          uVar9 = (uint)local_58 & 0xff;
          local_34 = local_54;
          goto LAB_00e9cbe4;
        }
        puVar13 = (undefined4 *)FUN_016d2bc8();
      } while ((char ****)*puVar13 == (char ****)&DAT_00000004);
      local_38 = (char ****)0x0;
      local_54 = (char ****)&LAB_016040f8;
      local_98 = param_1;
      local_94 = param_2;
      local_58 = &local_98;
      local_34 = (char ****)*puVar13;
      FUN_00600d2c(&local_78,&DAT_00594680,&local_58);
      uVar14 = FUN_00e7b530(&local_38,&local_78);
    }
    else {
      local_38 = local_98;
      local_34 = local_94;
      local_54 = (char ****)&LAB_016040f8;
      local_98 = param_1;
      local_94 = param_2;
      local_58 = &local_98;
      FUN_00600d2c(&local_78,&DAT_00574b46,&local_58);
      uVar14 = FUN_00e7b530(&local_38,&local_78);
    }
    FUN_01629d00(&local_a4);
    if (local_90 != (char ****)0x0) {
      thunk_FUN_016d3fb4(ppppcVar20);
    }
    FUN_016dffb2(ppppcVar23);
    return uVar14;
  }
  local_54 = (char ****)&LAB_016040f8;
  local_58 = &local_38;
  local_80 = local_98;
  local_7c = local_94;
  local_38 = param_1;
  local_34 = param_2;
  FUN_00600d2c(&local_78,&DAT_00572a7e,&local_58);
  ppppcVar23 = (char ****)&local_80;
LAB_00e9cb60:
  uVar14 = FUN_00e7b530(ppppcVar23,&local_78);
  return uVar14;
  while( true ) {
    puVar13 = (undefined4 *)FUN_016d2bc8();
    ppppcVar23 = (char ****)*puVar13;
    if (ppppcVar23 != (char ****)&DAT_00000004) break;
LAB_00e9c998:
    iVar25 = FUN_016e0022(ppppcVar20);
    if (iVar25 != -1) {
      uVar9 = 4;
      goto LAB_00e9cbd8;
    }
  }
  uVar9 = 0;
LAB_00e9cbd8:
  FUN_016dffb2(ppppcVar20);
  uVar17 = 0;
  local_34 = ppppcVar23;
LAB_00e9cbe4:
  if (uVar9 == 4) {
    return 0;
  }
  local_38 = (char ****)(uVar9 | uVar17 << 8);
  local_54 = (char ****)&LAB_016040f8;
  local_98 = param_1;
  local_94 = param_2;
  local_58 = &local_98;
  FUN_00600d2c(&local_78,&DAT_00597953,&local_58);
  ppppcVar23 = (char ****)&local_38;
  goto LAB_00e9cb60;
}

