// FUN_014f7968 @ 014f7968 size=1864 calls_out=12 calls_in=7
// strings: {recursion limit reached} | _... | {recursion limit reached}

undefined4 FUN_014f7968(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_30 [2];
  uint local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar2 = param_1[4];
joined_r0x014f79fc:
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_00faace8(iVar2,"?",1);
    return uVar3;
  }
  uVar8 = param_1[1];
  uVar5 = param_1[2];
  if (uVar8 <= uVar5) {
switchD_014f7a2c_caseD_43:
    if ((param_1[4] == 0) || (iVar2 = FUN_00faace8(param_1[4],&DAT_00564580,0x10), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return 0;
    }
    return 1;
  }
  iVar6 = param_1[3];
  cVar1 = *(char *)(iVar2 + uVar5);
  uVar7 = uVar5 + 1;
  param_1[2] = uVar7;
  param_1[3] = iVar6 + 1U;
  if (500 < iVar6 + 1U) {
    if ((param_1[4] == 0) ||
       (iVar2 = FUN_00faace8(param_1[4],"{recursion limit reached}",0x19), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0;
      return 0;
    }
    return 1;
  }
  switch(cVar1) {
  case 'A':
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_00faace8(param_1[4],&DAT_004144eb,1), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],&DAT_00418df9,1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_014f8e8c(param_1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = param_1[4];
    if (iVar2 != 0) {
      pcVar4 = 
      "]called `Result::unwrap()` on an `Err` valueBadDerBadDerTimeCaUsedAsEndEntityCertExpirednot_afterCertNotValidForNameCertNotValidYetnot_beforeCertRevokedCrlExpirednext_updateEndEntityUsedAsCaExtensionValueInvalidInvalidCertValidityInvalidNetworkMaskConstraintInvalidSerialNumberInvalidCrlSignatureForPublicKeyInvalidSignatureForPublicKeyIssuerNotCrlSignerMalformedDnsIdentifierMalformedExtensionsMalformedNameConstraintMaximumNameConstraintComparisonsExceededMaximumPathBuildCallsExceededMaximumPathDepthExceededMaximumSignatureChecksExceededNameConstraintViolationPathLenConstraintViolatedRequiredEkuNotFoundRequiredEkuNotFoundContextSignatureAlgorithmMismatchTrailingDataUnknownIssuerUnknownRevocationStatusUnsupportedCertVersionUnsupportedCriticalExtensionUnsupportedCrlIssuingDistributionPointUnsupportedCrlVersionUnsupportedDeltaCrlUnsupportedIndirectCrlUnsupportedNameTypeUnsupportedRevocationReasonUnsupportedRevocationReasonsPartitioningUnsupportedSignatureAlgorithmUnsupportedCrlSignatureAlgorithmForPublicKeyUnsupportedSignatureAlgorithmForPublicKeyBitStringCertificateCertificateExtensionsCertificateTbsCertificateCertRevocationListCertRevocationListExtensionCrlDistributionPointCommonNameInnerCommonNameOuterDistributionPointNameExtensionGeneralNameSignatureSignatureAlgorithmSignedDataSubjectPublicKeyInfoTrustAnchorV1TrustAnchorV1TbsCertificateU8RevokedCertificateRevokedCertificateExtensionIssuingDistributionPointEndOfInputinternal error: entered unreachable codeInvalidNameContextpresentedassertion failed: len > 0assertion failed: src.len() == dst.len()assertion failed: old_left_len >= count\n, newline\'`\'\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02"
      ;
LAB_014f8104:
      uVar3 = 1;
LAB_014f8108:
      iVar2 = FUN_00faace8(iVar2,pcVar4,uVar3);
      goto LAB_014f810c;
    }
    goto LAB_014f7b80;
  case 'B':
    iVar2 = FUN_014f85ec(param_1,param_2);
    break;
  default:
    goto switchD_014f7a2c_caseD_43;
  case 'Q':
switchD_014f7a2c_caseD_51:
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_00faace8(param_1[4],&DAT_004144eb,1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = 0;
    if (param_1[4] != 0) {
      iVar6 = FUN_00faace8(param_1[4],"&",1);
      iVar2 = 1;
      if (iVar6 != 0) {
        return 1;
      }
    }
    if (cVar1 != 'R') {
      iVar2 = param_1[4];
    }
    if ((cVar1 != 'R' && iVar2 != 0) && (iVar2 = FUN_00faace8(iVar2,&DAT_005686cc,4), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_014f7968(param_1,1);
    goto LAB_014f810c;
  case 'R':
    if ((uVar8 <= uVar7) || (*(char *)(iVar2 + uVar7) != 'e')) goto switchD_014f7a2c_caseD_51;
    param_1[2] = uVar5 + 2;
    iVar2 = FUN_014f8b20(param_1);
    break;
  case 'T':
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_00faace8(param_1[4],&DAT_004144eb,1), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],"(",1), iVar2 != 0)) {
      return 1;
    }
    uVar9 = FUN_014f8dd4(param_1);
    if ((uVar9 & 1) != 0) {
      return 1;
    }
    iVar2 = param_1[4];
    if ((int)(uVar9 >> 0x20) == 1) {
      if (iVar2 == 0) goto LAB_014f7b80;
      iVar2 = FUN_00faace8(iVar2,&DAT_004144ea,1);
joined_r0x014f80ec:
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = param_1[4];
    }
    if (iVar2 != 0) {
      pcVar4 = &DAT_00418e07;
      goto LAB_014f8104;
    }
    goto LAB_014f7b80;
  case 'V':
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_00faace8(param_1[4],&DAT_004144eb,1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_014f5b4c(param_1,1);
    if (iVar2 != 0) {
      return 1;
    }
    if (*param_1 == 0) {
      iVar2 = param_1[4];
      goto joined_r0x014f79fc;
    }
    uVar5 = param_1[2];
    if ((uint)param_1[1] <= uVar5) goto switchD_014f7a2c_caseD_43;
    cVar1 = *(char *)(*param_1 + uVar5);
    param_1[2] = uVar5 + 1;
    if (cVar1 == 'S') {
      if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],&DAT_00414a79,3), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_014f8f38(param_1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = param_1[4];
      if (iVar2 == 0) goto LAB_014f7b80;
      uVar3 = 2;
      pcVar4 = " }";
      goto LAB_014f8108;
    }
    if (cVar1 == 'T') {
      if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],"(",1), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_014f8e8c(param_1);
      goto joined_r0x014f80ec;
    }
    if (cVar1 != 'U') goto switchD_014f7a2c_caseD_43;
    goto LAB_014f811c;
  case 'a':
  case 'i':
  case 'l':
  case 'n':
  case 's':
  case 'x':
    if ((uVar7 < uVar8) && (*(char *)(iVar2 + uVar7) == 'n')) {
      param_1[2] = uVar5 + 2;
      if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],&DAT_00410f51,1), iVar2 != 0)) {
        return 1;
      }
    }
  case 'h':
  case 'j':
  case 'm':
  case 'o':
  case 't':
  case 'y':
    iVar2 = FUN_014f838c(param_1,cVar1);
    break;
  case 'b':
    FUN_014f880c(&local_20,param_1);
    if (local_20 == 0) {
LAB_014f7f6c:
      iVar2 = param_1[4];
      if ((char)local_1c == '\0') {
        if (iVar2 == 0) goto LAB_014f8044;
        uVar3 = 0x10;
        pcVar4 = &DAT_00564580;
      }
      else {
        if (iVar2 == 0) goto LAB_014f8044;
        uVar3 = 0x19;
        pcVar4 = "{recursion limit reached}";
      }
      iVar2 = FUN_00faace8(iVar2,pcVar4,uVar3);
      if (iVar2 != 0) {
        return 1;
      }
LAB_014f8044:
      *(char *)(param_1 + 1) = (char)local_1c;
      *param_1 = 0;
      return 0;
    }
    FUN_014f88d0(local_30,local_20,local_1c);
    if ((local_30[0] & 1) == 0) goto switchD_014f7a2c_caseD_43;
    if (local_28 != 0 || local_24 != 0) {
      if (local_28 != 1 || local_24 != 0) goto switchD_014f7a2c_caseD_43;
      iVar2 = param_1[4];
      if (iVar2 != 0) {
        uVar3 = 4;
        pcVar4 = "true\x1e\x05";
        goto LAB_014f813c;
      }
      goto LAB_014f7b80;
    }
    iVar2 = param_1[4];
    if (iVar2 == 0) goto LAB_014f7b80;
    uVar3 = 5;
    pcVar4 = &DAT_00414fdc;
    goto LAB_014f813c;
  case 'c':
    FUN_014f880c(&local_20,param_1);
    if (local_20 == 0) goto LAB_014f7f6c;
    FUN_014f88d0(local_30,local_20,local_1c);
    if ((((local_30[0] & 1) == 0) || (local_24 != 0)) ||
       ((local_28 ^ 0xd800) - 0x110000 < 0xffef0800)) goto switchD_014f7a2c_caseD_43;
    iVar2 = FUN_014f8a28(param_1[4]);
    break;
  case 'e':
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_00faace8(param_1[4],&DAT_004144eb,1), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],"*",1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_014f8b20(param_1);
LAB_014f810c:
    if (iVar2 != 0) {
      return 1;
    }
LAB_014f811c:
    if ((param_2 == 0) && (iVar2 = param_1[4], iVar2 != 0)) {
      pcVar4 = "}";
LAB_014f8138:
      uVar3 = 1;
LAB_014f813c:
      iVar2 = FUN_00faace8(iVar2,pcVar4,uVar3);
      break;
    }
    goto LAB_014f7b80;
  case 'p':
    iVar2 = param_1[4];
    if (iVar2 == 0) goto LAB_014f7b80;
    pcVar4 = "_...";
    goto LAB_014f8138;
  }
  uVar3 = 1;
  if (iVar2 == 0) {
LAB_014f7b80:
    uVar3 = 0;
    if (*param_1 != 0) {
      param_1[3] = param_1[3] + -1;
      return 0;
    }
  }
  return uVar3;
}

