// FUN_014fd6a8 @ 014fd6a8 size=1708 calls_out=12 calls_in=8
// strings: {recursion limit reached} | _... | {recursion limit reached}

undefined4 FUN_014fd6a8(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_38 [2];
  uint local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
LAB_014fdb90:
    if (param_1[4] == 0) {
      return 0;
    }
    uVar7 = FUN_00faace8(param_1[4],"?",1);
    return uVar7;
  }
  uVar9 = param_1[1];
  uVar3 = param_1[2];
  if (uVar9 <= uVar3) goto switchD_014fd740_caseD_53;
  iVar8 = param_1[3];
  uVar6 = uVar3 + 1;
  cVar1 = *(char *)(iVar2 + uVar3);
  param_1[2] = uVar6;
  param_1[3] = iVar8 + 1U;
  if (500 < iVar8 + 1U) {
    if ((param_1[4] != 0) &&
       (iVar2 = FUN_00faace8(param_1[4],"{recursion limit reached}",0x19), iVar2 != 0)) {
      return 1;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_014fda30;
  }
  switch(cVar1) {
  case 'Q':
switchD_014fd740_caseD_51:
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_00faace8(param_1[4],&DAT_004144eb,1), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],"&",1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = 0;
    if (cVar1 != 'R') {
      iVar2 = param_1[4];
    }
    if ((cVar1 != 'R' && iVar2 != 0) && (iVar2 = FUN_00faace8(iVar2,&DAT_005686cc,4), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_014fd6a8(param_1,1);
    goto LAB_014fdcb4;
  case 'R':
    if ((uVar9 <= uVar6) || (*(char *)(iVar2 + uVar6) != 'e')) goto switchD_014fd740_caseD_51;
    param_1[2] = uVar3 + 2;
    iVar2 = FUN_014fe6b0(param_1);
    goto LAB_014fd83c;
  case 'S':
  case 'U':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'd':
  case 'f':
  case 'g':
  case 'k':
  case 'q':
  case 'r':
  case 'u':
  case 'v':
  case 'w':
    break;
  case 'T':
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_00faace8(param_1[4],&DAT_004144eb,1), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],"(",1), iVar2 != 0)) {
      return 1;
    }
    uVar10 = FUN_014feb50(param_1);
    if ((uVar10 & 1) != 0) {
      return 1;
    }
    if ((int)(uVar10 >> 0x20) == 1) {
      if (param_1[4] == 0) goto LAB_014fd844;
      iVar2 = FUN_00faace8(param_1[4],&DAT_004144ea,1);
LAB_014fdac8:
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = param_1[4];
    if (iVar2 == 0) goto LAB_014fd844;
    pcVar5 = &DAT_00418e07;
LAB_014fdcac:
    uVar7 = 1;
LAB_014fdcb0:
    iVar2 = FUN_00faace8(iVar2,pcVar5,uVar7);
    goto LAB_014fdcb4;
  case 'V':
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_00faace8(param_1[4],&DAT_004144eb,1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_014fbd90(param_1,1);
    if (iVar2 != 0) {
      return 1;
    }
    if (*param_1 == 0) goto LAB_014fdb90;
    uVar3 = param_1[2];
    if ((uint)param_1[1] <= uVar3) {
LAB_014fdb70:
      if (param_1[4] != 0) {
        iVar2 = FUN_00faace8(param_1[4],&DAT_00564580,0x10);
        goto LAB_014fda20;
      }
      goto LAB_014fda28;
    }
    cVar1 = *(char *)(*param_1 + uVar3);
    param_1[2] = uVar3 + 1;
    if (cVar1 == 'S') {
      if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],&DAT_00414a79,3), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_014fec04(param_1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = param_1[4];
      if (iVar2 == 0) goto LAB_014fd844;
      uVar7 = 2;
      pcVar5 = " }";
      goto LAB_014fdcb0;
    }
    if (cVar1 == 'T') {
      if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],"(",1), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_014feaa0(param_1);
      goto LAB_014fdac8;
    }
    if (cVar1 != 'U') goto LAB_014fdb70;
    goto LAB_014fdcbc;
  case 'a':
  case 'i':
  case 'l':
  case 'n':
  case 's':
  case 'x':
    if ((uVar6 < uVar9) && (*(char *)(iVar2 + uVar6) == 'n')) {
      param_1[2] = uVar3 + 2;
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
    iVar2 = FUN_014fdf88(param_1,cVar1);
    goto LAB_014fd83c;
  case 'b':
    FUN_014fe234(&local_28,param_1);
    if (local_28 == 0) {
LAB_014fdce4:
      if (param_1[4] != 0) {
        pcVar5 = "{recursion limit reached}";
        if ((char)local_24 == '\0') {
          pcVar5 = &DAT_00564580;
        }
        uVar7 = 0x10;
        if ((char)local_24 != '\0') {
          uVar7 = 0x19;
        }
        iVar2 = FUN_00faace8(param_1[4],pcVar5,uVar7);
        if (iVar2 != 0) {
          return 1;
        }
      }
      *(char *)(param_1 + 1) = (char)local_24;
      goto LAB_014fda30;
    }
    FUN_014fe2fc(local_38,local_28,local_24);
    if ((local_38[0] & 1) != 0) {
      if (local_30 == 0 && local_2c == 0) {
        iVar2 = param_1[4];
        if (iVar2 == 0) goto LAB_014fd844;
        uVar7 = 5;
        puVar4 = &DAT_00414fdc;
      }
      else {
        if (local_30 != 1 || local_2c != 0) break;
        iVar2 = param_1[4];
        if (iVar2 == 0) goto LAB_014fd844;
        uVar7 = 4;
        puVar4 = &DAT_00568b2c;
      }
      iVar2 = FUN_00faace8(iVar2,puVar4,uVar7);
      goto LAB_014fd83c;
    }
    break;
  case 'c':
    FUN_014fe234(&local_28,param_1);
    if (local_28 == 0) goto LAB_014fdce4;
    FUN_014fe2fc(local_38,local_28,local_24);
    if ((((local_38[0] & 1) != 0) && (local_2c == 0)) &&
       (0xffef07ff < (local_30 ^ 0xd800) - 0x110000)) {
      iVar2 = FUN_014fe458(param_1[4]);
      goto LAB_014fd83c;
    }
    break;
  case 'e':
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_00faace8(param_1[4],&DAT_004144eb,1), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],"*",1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_014fe6b0(param_1);
LAB_014fdcb4:
    if (iVar2 != 0) {
      return 1;
    }
LAB_014fdcbc:
    if ((param_2 == 0) && (iVar2 = param_1[4], iVar2 != 0)) {
      pcVar5 = "}";
LAB_014fdcd8:
      iVar2 = FUN_00faace8(iVar2,pcVar5,1);
LAB_014fd83c:
      if (iVar2 != 0) {
        return 1;
      }
    }
LAB_014fd844:
    if (*param_1 == 0) {
      return 0;
    }
    param_1[3] = param_1[3] + -1;
    return 0;
  case 'p':
    iVar2 = param_1[4];
    if (iVar2 == 0) goto LAB_014fd844;
    pcVar5 = "_...";
    goto LAB_014fdcd8;
  default:
    if (cVar1 == 'A') {
      if (((param_2 == 0) && (param_1[4] != 0)) &&
         (iVar2 = FUN_00faace8(param_1[4],&DAT_004144eb,1), iVar2 != 0)) {
        return 1;
      }
      if ((param_1[4] != 0) && (iVar2 = FUN_00faace8(param_1[4],&DAT_00418df9,1), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_014feaa0(param_1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = param_1[4];
      if (iVar2 == 0) goto LAB_014fd844;
      pcVar5 = 
      "]called `Result::unwrap()` on an `Err` valueBadDerBadDerTimeCaUsedAsEndEntityCertExpirednot_afterCertNotValidForNameCertNotValidYetnot_beforeCertRevokedCrlExpirednext_updateEndEntityUsedAsCaExtensionValueInvalidInvalidCertValidityInvalidNetworkMaskConstraintInvalidSerialNumberInvalidCrlSignatureForPublicKeyInvalidSignatureForPublicKeyIssuerNotCrlSignerMalformedDnsIdentifierMalformedExtensionsMalformedNameConstraintMaximumNameConstraintComparisonsExceededMaximumPathBuildCallsExceededMaximumPathDepthExceededMaximumSignatureChecksExceededNameConstraintViolationPathLenConstraintViolatedRequiredEkuNotFoundRequiredEkuNotFoundContextSignatureAlgorithmMismatchTrailingDataUnknownIssuerUnknownRevocationStatusUnsupportedCertVersionUnsupportedCriticalExtensionUnsupportedCrlIssuingDistributionPointUnsupportedCrlVersionUnsupportedDeltaCrlUnsupportedIndirectCrlUnsupportedNameTypeUnsupportedRevocationReasonUnsupportedRevocationReasonsPartitioningUnsupportedSignatureAlgorithmUnsupportedCrlSignatureAlgorithmForPublicKeyUnsupportedSignatureAlgorithmForPublicKeyBitStringCertificateCertificateExtensionsCertificateTbsCertificateCertRevocationListCertRevocationListExtensionCrlDistributionPointCommonNameInnerCommonNameOuterDistributionPointNameExtensionGeneralNameSignatureSignatureAlgorithmSignedDataSubjectPublicKeyInfoTrustAnchorV1TrustAnchorV1TbsCertificateU8RevokedCertificateRevokedCertificateExtensionIssuingDistributionPointEndOfInputinternal error: entered unreachable codeInvalidNameContextpresentedassertion failed: len > 0assertion failed: src.len() == dst.len()assertion failed: old_left_len >= count\n, newline\'`\'\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02"
      ;
      goto LAB_014fdcac;
    }
    if (cVar1 == 'B') {
      iVar2 = FUN_014fe12c(param_1,param_2);
      goto LAB_014fd83c;
    }
  }
switchD_014fd740_caseD_53:
  if (param_1[4] != 0) {
    iVar2 = FUN_00faace8(param_1[4],&DAT_00564580,0x10);
LAB_014fda20:
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_014fda28:
  *(undefined1 *)(param_1 + 1) = 0;
LAB_014fda30:
  *param_1 = 0;
  return 0;
}

