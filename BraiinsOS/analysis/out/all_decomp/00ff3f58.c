// FUN_00ff3f58 @ 00ff3f58 size=2488 calls_out=6 calls_in=3
// strings: (?s:.)StartTextEndTextStartLineEndLineLeftWordHalfBoundaryRightWordBoundaryRightWordHalfBoundaryWordBoundaryNotWordBoundary

void FUN_00ff3f58(uint *param_1,int *param_2,byte param_3)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *local_30;
  uint **local_2c;
  code *local_28;
  
  uVar3 = 9;
  if ((int)*param_1 < 0) {
    uVar3 = *param_1 ^ 0x80000000;
  }
  local_30 = param_1;
  switch(uVar3) {
  case 0:
    goto switchD_00ff3f88_caseD_0;
  case 1:
    uVar3 = 1;
    pcVar9 = 
    ".:::[invalid: ]called `Result::unwrap()` on an `Err` valueBadDerBadDerTimeCaUsedAsEndEntityCertExpirednot_afterCertNotValidForNameCertNotValidYetnot_beforeCertRevokedCrlExpirednext_updateEndEntityUsedAsCaExtensionValueInvalidInvalidCertValidityInvalidNetworkMaskConstraintInvalidSerialNumberInvalidCrlSignatureForPublicKeyInvalidSignatureForPublicKeyIssuerNotCrlSignerMalformedDnsIdentifierMalformedExtensionsMalformedNameConstraintMaximumNameConstraintComparisonsExceededMaximumPathBuildCallsExceededMaximumPathDepthExceededMaximumSignatureChecksExceededNameConstraintViolationPathLenConstraintViolatedRequiredEkuNotFoundRequiredEkuNotFoundContextSignatureAlgorithmMismatchTrailingDataUnknownIssuerUnknownRevocationStatusUnsupportedCertVersionUnsupportedCriticalExtensionUnsupportedCrlIssuingDistributionPointUnsupportedCrlVersionUnsupportedDeltaCrlUnsupportedIndirectCrlUnsupportedNameTypeUnsupportedRevocationReasonUnsupportedRevocationReasonsPartitioningUnsupportedSignatureAlgorithmUnsupportedCrlSignatureAlgorithmForPublicKeyUnsupportedSignatureAlgorithmForPublicKeyBitStringCertificateCertificateExtensionsCertificateTbsCertificateCertRevocationListCertRevocationListExtensionCrlDistributionPointCommonNameInnerCommonNameOuterDistributionPointNameExtensionGeneralNameSignatureSignatureAlgorithmSignedDataSubjectPublicKeyInfoTrustAnchorV1TrustAnchorV1TbsCertificateU8RevokedCertificateRevokedCertificateExtensionIssuingDistributionPointEndOfInputinternal error: entered unreachable codeInvalidNameContextpresentedassertion failed: len > 0assertion failed: src.len() == dst.len()assertion failed: old_left_len >= count\n, newline\'`\'\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02"
    ;
    iVar5 = param_2[2];
    if ((char)param_1[1] != '\0') {
      uVar3 = 6;
      pcVar9 = 
      "(?s:.)StartTextEndTextStartLineEndLineLeftWordHalfBoundaryRightWordBoundaryRightWordHalfBoundaryWordBoundaryNotWordBoundary"
      ;
    }
    if ((uint)(*param_2 - iVar5) < uVar3) {
      FUN_010007c0(param_2,iVar5,uVar3,1,1);
      iVar5 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar5,pcVar9,uVar3);
    param_2[2] = param_2[2] + uVar3;
    return;
  case 2:
    switch((char)param_1[1]) {
    case '\0':
      iVar8 = param_2[2];
      iVar5 = iVar8;
      if (*param_2 == iVar8) {
        FUN_010007c0(param_2,iVar8,1,1,1);
        iVar5 = param_2[2];
      }
      iVar4 = param_2[1];
      uVar7 = 0x5e;
      break;
    case '\x01':
      iVar8 = param_2[2];
      iVar5 = iVar8;
      if (*param_2 == iVar8) {
        FUN_010007c0(param_2,iVar8,1,1,1);
        iVar5 = param_2[2];
      }
      iVar4 = param_2[1];
      uVar7 = 0x24;
      break;
    case '\x02':
      iVar5 = param_2[2];
      if (*(char *)((int)param_1 + 5) == '\0') {
        if ((uint)(*param_2 - iVar5) < 6) {
          FUN_010007c0(param_2,iVar5,6,1,1);
          iVar5 = param_2[2];
        }
        puVar1 = (undefined4 *)(param_2[1] + iVar5);
        *puVar1 = 0x3a6d3f28;
        uVar2 = 0x295e;
LAB_00ff45e0:
        *(undefined2 *)(puVar1 + 1) = uVar2;
        param_2[2] = param_2[2] + 6;
        return;
      }
      if ((uint)(*param_2 - iVar5) < 7) {
        FUN_010007c0(param_2,iVar5,7,1,1);
        iVar5 = param_2[2];
      }
      puVar1 = (undefined4 *)(param_2[1] + iVar5);
      *puVar1 = 0x6d523f28;
      uVar6 = 0x295e3a6d;
      goto LAB_00ff454c;
    case '\x03':
      iVar5 = param_2[2];
      if (*(char *)((int)param_1 + 5) == '\0') {
        if ((uint)(*param_2 - iVar5) < 6) {
          FUN_010007c0(param_2,iVar5,6,1,1);
          iVar5 = param_2[2];
        }
        puVar1 = (undefined4 *)(param_2[1] + iVar5);
        *puVar1 = 0x3a6d3f28;
        uVar2 = 0x2924;
        goto LAB_00ff45e0;
      }
      if ((uint)(*param_2 - iVar5) < 7) {
        FUN_010007c0(param_2,iVar5,7,1,1);
        iVar5 = param_2[2];
      }
      puVar1 = (undefined4 *)(param_2[1] + iVar5);
      *puVar1 = 0x6d523f28;
      uVar6 = 0x29243a6d;
LAB_00ff454c:
      *(undefined4 *)((int)puVar1 + 3) = uVar6;
      param_2[2] = param_2[2] + 7;
      return;
    default:
      goto switchD_00ff3f88_caseD_7;
    }
    goto LAB_00ff4340;
  case 3:
    if ((char)param_1[4] == '\0') {
      FUN_00ff5dc4(param_2,param_1[2],param_1[3]);
      return;
    }
    iVar5 = param_2[2];
    if ((uint)(*param_2 - iVar5) < 4) {
      FUN_010007c0(param_2,iVar5,4,1,1);
      iVar5 = param_2[2];
    }
    *(undefined4 *)(param_2[1] + iVar5) = 0x3a693f28;
    uVar3 = param_1[2];
    uVar11 = param_1[3];
    param_2[2] = param_2[2] + 4;
    FUN_00ff5dc4(param_2,uVar3,uVar11);
    break;
  case 4:
    if (1 < param_3) {
      iVar5 = param_2[2];
      if ((uint)(*param_2 - iVar5) < 3) {
        FUN_010007c0(param_2,iVar5,3,1,1);
        iVar5 = param_2[2];
      }
      iVar8 = param_2[1];
      *(undefined2 *)(iVar8 + iVar5) = 0x3f28;
      *(undefined1 *)((undefined2 *)(iVar8 + iVar5) + 1) = 0x3a;
      param_2[2] = param_2[2] + 3;
    }
    if (param_1[3] != 0) {
      uVar3 = param_1[2];
      iVar5 = param_1[3] * 0x14;
      do {
        FUN_00ff3f58(uVar3,param_2,2);
        uVar3 = uVar3 + 0x14;
        iVar5 = iVar5 + -0x14;
      } while (iVar5 != 0);
    }
    if (param_3 < 2) {
      return;
    }
    break;
  case 5:
    if (param_3 != 0) {
      iVar5 = param_2[2];
      if ((uint)(*param_2 - iVar5) < 3) {
        FUN_010007c0(param_2,iVar5,3,1,1);
        iVar5 = param_2[2];
      }
      iVar8 = param_2[1];
      *(undefined2 *)(iVar8 + iVar5) = 0x3f28;
      *(undefined1 *)((undefined2 *)(iVar8 + iVar5) + 1) = 0x3a;
      param_2[2] = param_2[2] + 3;
    }
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      uVar11 = param_1[2];
      FUN_00ff3f58(uVar11,param_2,1);
      if (uVar3 != 1) {
        iVar5 = uVar3 * 0x14 + -0x14;
        do {
          uVar11 = uVar11 + 0x14;
          iVar4 = param_2[2];
          iVar8 = iVar4;
          if (*param_2 == iVar4) {
            FUN_010007c0(param_2,iVar4,1,1,1);
            iVar8 = param_2[2];
          }
          *(undefined1 *)(param_2[1] + iVar8) = 0x7c;
          param_2[2] = iVar4 + 1;
          FUN_00ff3f58(uVar11,param_2,1);
          iVar5 = iVar5 + -0x14;
        } while (iVar5 != 0);
      }
    }
    if (param_3 == 0) {
      return;
    }
    break;
  case 6:
    iVar8 = param_2[2];
    iVar5 = iVar8;
    if (*param_2 == iVar8) {
      FUN_010007c0(param_2,iVar8,1,1,1);
      iVar5 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar5) = 0x28;
    uVar3 = param_1[1];
    param_2[2] = iVar8 + 1;
    FUN_00ff3f58(uVar3,param_2,0);
    break;
  default:
switchD_00ff3f88_caseD_7:
    local_2c = &local_30;
    local_28 = FUN_00ff4dac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005902a5,&local_2c,&DAT_01881c68);
  case 8:
    uVar11 = param_1[2];
    uVar12 = param_1[3];
    uVar3 = param_1[4];
    if (param_3 == 3) {
      iVar5 = param_2[2];
      if ((uint)(*param_2 - iVar5) < 3) {
        FUN_010007c0(param_2,iVar5,3,1,1);
        iVar5 = param_2[2];
      }
      iVar8 = param_2[1];
      *(undefined2 *)(iVar8 + iVar5) = 0x3f28;
      *(undefined1 *)((undefined2 *)(iVar8 + iVar5) + 1) = 0x3a;
      param_2[2] = param_2[2] + 3;
    }
    FUN_00ff3f58(param_1[1],param_2,3);
    if (uVar11 == 0) {
      if (uVar12 == 0xffffffff) {
        iVar8 = param_2[2];
        iVar5 = iVar8;
        if (*param_2 == iVar8) {
          FUN_010007c0(param_2,iVar8,1,1,1);
          iVar5 = param_2[2];
        }
        iVar4 = param_2[1];
        uVar7 = 0x2a;
      }
      else {
        if (uVar12 != 1) goto LAB_00ff4080;
        iVar8 = param_2[2];
        iVar5 = iVar8;
        if (*param_2 == iVar8) {
          FUN_010007c0(param_2,iVar8,1,1,1);
          iVar5 = param_2[2];
        }
        iVar4 = param_2[1];
        uVar7 = 0x3f;
      }
    }
    else if (uVar11 == 1 && uVar12 == 0xffffffff) {
      iVar8 = param_2[2];
      iVar5 = iVar8;
      if (*param_2 == iVar8) {
        FUN_010007c0(param_2,iVar8,1,1,1);
        iVar5 = param_2[2];
      }
      iVar4 = param_2[1];
      uVar7 = 0x2b;
    }
    else {
LAB_00ff4080:
      iVar8 = param_2[2];
      iVar5 = iVar8;
      if (*param_2 == iVar8) {
        FUN_010007c0(param_2,iVar8,1,1,1);
        iVar5 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar5) = 0x7b;
      param_2[2] = iVar8 + 1;
      FUN_00ff6170(param_2,uVar11);
      iVar8 = param_2[2];
      if (uVar11 != uVar12) {
        iVar5 = iVar8;
        if (*param_2 == iVar8) {
          FUN_010007c0(param_2,iVar8,1,1,1);
          iVar5 = param_2[2];
        }
        iVar8 = iVar8 + 1;
        *(undefined1 *)(param_2[1] + iVar5) = 0x2c;
        param_2[2] = iVar8;
        if (uVar12 != 0xffffffff) {
          FUN_00ff6170(param_2,uVar12);
          iVar8 = param_2[2];
        }
      }
      iVar5 = iVar8;
      if (*param_2 == iVar8) {
        FUN_010007c0(param_2,iVar8,1,1,1);
        iVar5 = param_2[2];
      }
      iVar4 = param_2[1];
      uVar7 = 0x7d;
    }
    iVar10 = iVar8 + 1;
    *(undefined1 *)(iVar4 + iVar5) = uVar7;
    param_2[2] = iVar10;
    iVar5 = iVar10;
    if ((char)uVar3 == '\0') {
      if (*param_2 == iVar10) {
        FUN_010007c0(param_2,iVar10,1,1,1);
        iVar10 = param_2[2];
      }
      iVar5 = iVar8 + 2;
      *(undefined1 *)(param_2[1] + iVar10) = 0x3f;
      param_2[2] = iVar5;
    }
    if (param_3 != 3) {
switchD_00ff3f88_caseD_0:
      return;
    }
    goto LAB_00ff43d0;
  case 9:
    uVar3 = param_1[4];
    iVar5 = param_2[2];
    if ((char)uVar3 != '\0') {
      if ((uint)(*param_2 - iVar5) < 4) {
        FUN_010007c0(param_2,iVar5,4,1,1);
        iVar5 = param_2[2];
      }
      *(undefined4 *)(param_2[1] + iVar5) = 0x3a693f28;
      iVar5 = param_2[2] + 4;
      param_2[2] = iVar5;
    }
    uVar12 = param_1[1];
    uVar11 = param_1[2];
    if ((uint)(*param_2 - iVar5) < uVar11) {
      FUN_010007c0(param_2,iVar5,uVar11,1,1);
      iVar5 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar5,uVar12,uVar11);
    iVar5 = param_2[2] + uVar11;
    param_2[2] = iVar5;
    if ((char)uVar3 == '\0') {
      return;
    }
LAB_00ff43d0:
    iVar8 = iVar5;
    if (*param_2 == iVar5) goto LAB_00ff43e0;
    goto LAB_00ff4338;
  }
  iVar5 = param_2[2];
  iVar8 = iVar5;
  if (*param_2 == iVar5) {
LAB_00ff43e0:
    FUN_010007c0(param_2,iVar8,1,1,1);
    iVar5 = param_2[2];
  }
LAB_00ff4338:
  iVar4 = param_2[1];
  uVar7 = 0x29;
LAB_00ff4340:
  *(undefined1 *)(iVar4 + iVar5) = uVar7;
  param_2[2] = iVar8 + 1;
  return;
}

