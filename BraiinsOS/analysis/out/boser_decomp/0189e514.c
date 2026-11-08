// FUN_0189e514 @ 0189e514 size=1708 calls_out=12 calls_in=8
// strings: {recursion limit reached} | {recursion limit reached}

undefined4 FUN_0189e514(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_38 [2];
  uint local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
LAB_0189e9fc:
    if (param_1[4] == 0) {
      return 0;
    }
    uVar6 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
    return uVar6;
  }
  uVar8 = param_1[1];
  uVar3 = param_1[2];
  if (uVar8 <= uVar3) goto switchD_0189e5ac_caseD_53;
  iVar7 = param_1[3];
  uVar5 = uVar3 + 1;
  cVar1 = *(char *)(iVar2 + uVar3);
  param_1[2] = uVar5;
  param_1[3] = iVar7 + 1U;
  if (500 < iVar7 + 1U) {
    if ((param_1[4] != 0) &&
       (iVar2 = FUN_012fb940(param_1[4],"{recursion limit reached}",0x19), iVar2 != 0)) {
      return 1;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_0189e89c;
  }
  switch(cVar1) {
  case 'Q':
switchD_0189e5ac_caseD_51:
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_012fb940(param_1[4],"{",1), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"&",1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = 0;
    if (cVar1 != 'R') {
      iVar2 = param_1[4];
    }
    if ((cVar1 != 'R' && iVar2 != 0) && (iVar2 = FUN_012fb940(iVar2,&DAT_0056e658,4), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_0189e514(param_1,1);
    goto LAB_0189eb20;
  case 'R':
    if ((uVar8 <= uVar5) || (*(char *)(iVar2 + uVar5) != 'e')) goto switchD_0189e5ac_caseD_51;
    param_1[2] = uVar3 + 2;
    iVar2 = FUN_0189f4e0(param_1);
    goto LAB_0189e6a8;
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
       (iVar2 = FUN_012fb940(param_1[4],"{",1), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"(",1), iVar2 != 0)) {
      return 1;
    }
    uVar9 = FUN_0189f980(param_1);
    if ((uVar9 & 1) != 0) {
      return 1;
    }
    if ((int)(uVar9 >> 0x20) == 1) {
      if (param_1[4] == 0) goto LAB_0189e6b0;
      iVar2 = FUN_012fb940(param_1[4],",",1);
LAB_0189e934:
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = param_1[4];
    if (iVar2 == 0) goto LAB_0189e6b0;
    pcVar4 = &DAT_0053341b;
LAB_0189eb18:
    uVar6 = 1;
LAB_0189eb1c:
    iVar2 = FUN_012fb940(iVar2,pcVar4,uVar6);
    goto LAB_0189eb20;
  case 'V':
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_012fb940(param_1[4],"{",1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_0189cbfc(param_1,1);
    if (iVar2 != 0) {
      return 1;
    }
    if (*param_1 == 0) goto LAB_0189e9fc;
    uVar3 = param_1[2];
    if ((uint)param_1[1] <= uVar3) {
LAB_0189e9dc:
      if (param_1[4] != 0) {
        iVar2 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10);
        goto LAB_0189e88c;
      }
      goto LAB_0189e894;
    }
    cVar1 = *(char *)(*param_1 + uVar3);
    param_1[2] = uVar3 + 1;
    if (cVar1 == 'S') {
      if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],&DAT_005312da,3), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_0189fa34(param_1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = param_1[4];
      if (iVar2 == 0) goto LAB_0189e6b0;
      uVar6 = 2;
      pcVar4 = " }AlertMessagePayloadChangeCipherSpecPayload\x0e";
      goto LAB_0189eb1c;
    }
    if (cVar1 == 'T') {
      if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"(",1), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_0189f8d0(param_1);
      goto LAB_0189e934;
    }
    if (cVar1 != 'U') goto LAB_0189e9dc;
    goto LAB_0189eb28;
  case 'a':
  case 'i':
  case 'l':
  case 'n':
  case 's':
  case 'x':
    if ((uVar5 < uVar8) && (*(char *)(iVar2 + uVar5) == 'n')) {
      param_1[2] = uVar3 + 2;
      if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"-",1), iVar2 != 0)) {
        return 1;
      }
    }
  case 'h':
  case 'j':
  case 'm':
  case 'o':
  case 't':
  case 'y':
    iVar2 = FUN_0189edf4(param_1,cVar1);
    goto LAB_0189e6a8;
  case 'b':
    FUN_0189f0a0(&local_28,param_1);
    if (local_28 == 0) {
LAB_0189eb50:
      if (param_1[4] != 0) {
        pcVar4 = "{recursion limit reached}";
        if ((char)local_24 == '\0') {
          pcVar4 = 
          "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
        }
        uVar6 = 0x10;
        if ((char)local_24 != '\0') {
          uVar6 = 0x19;
        }
        iVar2 = FUN_012fb940(param_1[4],pcVar4,uVar6);
        if (iVar2 != 0) {
          return 1;
        }
      }
      *(char *)(param_1 + 1) = (char)local_24;
      goto LAB_0189e89c;
    }
    FUN_0189f168(local_38,local_28,local_24);
    if ((local_38[0] & 1) != 0) {
      if (local_30 == 0 && local_2c == 0) {
        iVar2 = param_1[4];
        if (iVar2 == 0) goto LAB_0189e6b0;
        uVar6 = 5;
        pcVar4 = "f";
      }
      else {
        if (local_30 != 1 || local_2c != 0) break;
        iVar2 = param_1[4];
        if (iVar2 == 0) goto LAB_0189e6b0;
        uVar6 = 4;
        pcVar4 = "true\x1e\x05";
      }
      iVar2 = FUN_012fb940(iVar2,pcVar4,uVar6);
      goto LAB_0189e6a8;
    }
    break;
  case 'c':
    FUN_0189f0a0(&local_28,param_1);
    if (local_28 == 0) goto LAB_0189eb50;
    FUN_0189f168(local_38,local_28,local_24);
    if ((((local_38[0] & 1) != 0) && (local_2c == 0)) &&
       (0xffef07ff < (local_30 ^ 0xd800) - 0x110000)) {
      iVar2 = FUN_0189f288(param_1[4]);
      goto LAB_0189e6a8;
    }
    break;
  case 'e':
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar2 = FUN_012fb940(param_1[4],"{",1), iVar2 != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"*",1), iVar2 != 0)) {
      return 1;
    }
    iVar2 = FUN_0189f4e0(param_1);
LAB_0189eb20:
    if (iVar2 != 0) {
      return 1;
    }
LAB_0189eb28:
    if ((param_2 == 0) && (iVar2 = param_1[4], iVar2 != 0)) {
      pcVar4 = "}";
LAB_0189eb44:
      iVar2 = FUN_012fb940(iVar2,pcVar4,1);
LAB_0189e6a8:
      if (iVar2 != 0) {
        return 1;
      }
    }
LAB_0189e6b0:
    if (*param_1 == 0) {
      return 0;
    }
    param_1[3] = param_1[3] + -1;
    return 0;
  case 'p':
    iVar2 = param_1[4];
    if (iVar2 == 0) goto LAB_0189e6b0;
    pcVar4 = "_";
    goto LAB_0189eb44;
  default:
    if (cVar1 == 'A') {
      if (((param_2 == 0) && (param_1[4] != 0)) &&
         (iVar2 = FUN_012fb940(param_1[4],"{",1), iVar2 != 0)) {
        return 1;
      }
      if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],&DAT_0053340d,1), iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_0189f8d0(param_1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = param_1[4];
      if (iVar2 == 0) goto LAB_0189e6b0;
      pcVar4 = "]";
      goto LAB_0189eb18;
    }
    if (cVar1 == 'B') {
      iVar2 = FUN_0189ef98(param_1,param_2);
      goto LAB_0189e6a8;
    }
  }
switchD_0189e5ac_caseD_53:
  if (param_1[4] != 0) {
    iVar2 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10);
LAB_0189e88c:
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_0189e894:
  *(undefined1 *)(param_1 + 1) = 0;
LAB_0189e89c:
  *param_1 = 0;
  return 0;
}

