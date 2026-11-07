// FUN_018a38dc @ 018a38dc size=1752 calls_out=13 calls_in=7
// strings: {recursion limit reached} | {recursion limit reached}

undefined4 FUN_018a38dc(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  
  if (*param_1 == 0) {
LAB_018a3dc8:
    if (param_1[4] == 0) {
      return 0;
    }
    uVar6 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
    return uVar6;
  }
  uVar3 = param_1[2];
  if ((uint)param_1[1] <= uVar3) goto switchD_018a3938_caseD_53;
  cVar1 = *(char *)(*param_1 + uVar3);
  iVar5 = param_1[3];
  param_1[2] = uVar3 + 1;
  param_1[3] = iVar5 + 1U;
  if (500 < iVar5 + 1U) {
    if ((param_1[4] != 0) &&
       (iVar5 = FUN_012fb940(param_1[4],"{recursion limit reached}",0x19), iVar5 != 0)) {
      return 1;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_018a3c64;
  }
  switch(cVar1) {
  case 'Q':
switchD_018a3938_caseD_51:
    iVar5 = param_1[4];
    if (param_2 == 0) {
      if (iVar5 != 0) {
        iVar5 = FUN_012fb940(iVar5,"{",1);
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = param_1[4];
        goto LAB_018a3b7c;
      }
    }
    else {
LAB_018a3b7c:
      if ((iVar5 != 0) && (iVar5 = FUN_012fb940(iVar5,"&",1), iVar5 != 0)) {
        return 1;
      }
    }
    iVar5 = 0;
    if (cVar1 != 'R') {
      iVar5 = param_1[4];
    }
    if ((cVar1 != 'R' && iVar5 != 0) && (iVar5 = FUN_012fb940(iVar5,&DAT_0056e658,4), iVar5 != 0)) {
      return 1;
    }
    iVar5 = FUN_018a38dc(param_1,1);
    break;
  case 'R':
    iVar5 = FUN_018a388c(param_1,0x65);
    if (iVar5 == 0) goto switchD_018a3938_caseD_51;
    iVar5 = FUN_018a4d18(param_1);
    goto LAB_018a3a0c;
  case 'T':
    iVar5 = param_1[4];
    if (param_2 == 0) {
      if (iVar5 != 0) {
        iVar5 = FUN_012fb940(iVar5,"{",1);
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = param_1[4];
        goto LAB_018a3ca0;
      }
    }
    else {
LAB_018a3ca0:
      if ((iVar5 != 0) && (iVar5 = FUN_012fb940(iVar5,"(",1), iVar5 != 0)) {
        return 1;
      }
    }
    uVar7 = FUN_018a50e4(param_1);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    if ((int)(uVar7 >> 0x20) == 1) {
      if (param_1[4] != 0) {
        iVar5 = FUN_012fb940(param_1[4],",",1);
        if (iVar5 != 0) {
          return 1;
        }
        goto LAB_018a3d04;
      }
    }
    else {
LAB_018a3d04:
      iVar5 = param_1[4];
      if (iVar5 != 0) {
        pcVar4 = &DAT_0053341b;
        goto LAB_018a3ee4;
      }
    }
    goto LAB_018a3ef4;
  case 'V':
    if (((param_2 == 0) && (param_1[4] != 0)) &&
       (iVar5 = FUN_012fb940(param_1[4],"{",1), iVar5 != 0)) {
      return 1;
    }
    iVar5 = FUN_018a21dc(param_1,1);
    if (iVar5 != 0) {
      return 1;
    }
    if (*param_1 == 0) goto LAB_018a3dc8;
    uVar3 = param_1[2];
    if (uVar3 < (uint)param_1[1]) {
      cVar1 = *(char *)(*param_1 + uVar3);
      param_1[2] = uVar3 + 1;
      if (cVar1 != 'S') {
        if (cVar1 == 'T') {
          if ((param_1[4] != 0) && (iVar5 = FUN_012fb940(param_1[4],"(",1), iVar5 != 0)) {
            return 1;
          }
          iVar5 = FUN_018a5188(param_1);
          if (iVar5 != 0) {
            return 1;
          }
          iVar5 = param_1[4];
          if (iVar5 == 0) goto LAB_018a3ef4;
          pcVar4 = &DAT_0053341b;
          goto LAB_018a3ee4;
        }
        if (cVar1 != 'U') goto LAB_018a3da8;
        goto LAB_018a3ef4;
      }
      if ((param_1[4] != 0) && (iVar5 = FUN_012fb940(param_1[4],&DAT_005312da,3), iVar5 != 0)) {
        return 1;
      }
      iVar5 = FUN_018a5220(param_1);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = param_1[4];
      if (iVar5 == 0) goto LAB_018a3ef4;
      uVar6 = 2;
      pcVar4 = " }AlertMessagePayloadChangeCipherSpecPayload\x0e";
      goto LAB_018a3ee8;
    }
LAB_018a3da8:
    if (param_1[4] != 0) {
      iVar5 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10);
      goto LAB_018a3c54;
    }
    goto LAB_018a3c5c;
  case 'a':
  case 'i':
  case 'l':
  case 'n':
  case 's':
  case 'x':
    iVar2 = FUN_018a388c(param_1,0x6e);
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = param_1[4];
    }
    if ((iVar2 != 0 && iVar5 != 0) && (iVar5 = FUN_012fb940(iVar5,"-",1), iVar5 != 0)) {
      return 1;
    }
  case 'h':
  case 'j':
  case 'm':
  case 'o':
  case 't':
  case 'y':
    iVar5 = FUN_018a4314(param_1,cVar1);
    goto LAB_018a3a0c;
  case 'b':
    FUN_018a45bc(&local_30,param_1);
    if (local_30 == 0) {
      iVar5 = param_1[4];
      cVar1 = (char)local_2c;
LAB_018a3f34:
      if (iVar5 != 0) {
        pcVar4 = "{recursion limit reached}";
        if (cVar1 == '\0') {
          pcVar4 = 
          "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
        }
        uVar6 = 0x10;
        if (cVar1 != '\0') {
          uVar6 = 0x19;
        }
        iVar5 = FUN_012fb940(iVar5,pcVar4,uVar6);
        if (iVar5 != 0) {
          return 1;
        }
      }
      *(char *)(param_1 + 1) = cVar1;
      goto LAB_018a3c64;
    }
    FUN_018a4684(&local_28,local_30,local_2c);
    if ((local_28 & 1) == 0) goto switchD_018a3938_caseD_53;
    if (local_20 == (undefined1 *)0x0 && local_1c == 0) {
      iVar5 = param_1[4];
      if (iVar5 != 0) {
        uVar6 = 5;
        pcVar4 = "f";
LAB_018a3fac:
        iVar5 = FUN_012fb940(iVar5,pcVar4,uVar6);
        goto LAB_018a3a0c;
      }
    }
    else {
      if (local_20 != (undefined1 *)0x1 || local_1c != 0) goto switchD_018a3938_caseD_53;
      iVar5 = param_1[4];
      if (iVar5 != 0) {
        uVar6 = 4;
        pcVar4 = "true\x1e\x05";
        goto LAB_018a3fac;
      }
    }
    goto LAB_018a3a14;
  case 'c':
    FUN_018a45bc(&local_28,param_1);
    if (local_28 == 0) {
      iVar5 = param_1[4];
      cVar1 = (char)local_24;
      goto LAB_018a3f34;
    }
    FUN_018a4684(&local_28,local_28,local_24);
    if (((uint)local_20 ^ 0xd800) - 0x110000 < 0xffef0800) {
      local_20 = &DAT_00110000;
    }
    if (((local_28 & local_1c == 0) == 1) && (local_20 != &DAT_00110000)) {
      iVar5 = FUN_018a4adc(param_1[4]);
      goto LAB_018a3a0c;
    }
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
switchD_018a3938_caseD_53:
    if (param_1[4] != 0) {
      iVar5 = FUN_012fb940(param_1[4],&DAT_005687f8,0x10);
LAB_018a3c54:
      if (iVar5 != 0) {
        return 1;
      }
    }
LAB_018a3c5c:
    *(undefined1 *)(param_1 + 1) = 0;
LAB_018a3c64:
    *param_1 = 0;
    return 0;
  case 'e':
    iVar5 = param_1[4];
    if (param_2 == 0) {
      if (iVar5 != 0) {
        iVar5 = FUN_012fb940(iVar5,"{",1);
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = param_1[4];
        goto LAB_018a3e30;
      }
    }
    else {
LAB_018a3e30:
      if ((iVar5 != 0) && (iVar5 = FUN_012fb940(iVar5,"*",1), iVar5 != 0)) {
        return 1;
      }
    }
    iVar5 = FUN_018a4d18(param_1);
    break;
  case 'p':
    iVar5 = param_1[4];
    if (iVar5 == 0) goto LAB_018a3a14;
    pcVar4 = "_";
    goto LAB_018a3f10;
  default:
    if (cVar1 != 'A') {
      if (cVar1 == 'B') {
        iVar5 = FUN_018a44b8(param_1,param_2);
        goto LAB_018a3a0c;
      }
      goto switchD_018a3938_caseD_53;
    }
    iVar5 = param_1[4];
    if (param_2 == 0) {
      if (iVar5 != 0) {
        iVar5 = FUN_012fb940(iVar5,"{",1);
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = param_1[4];
        goto LAB_018a3e98;
      }
    }
    else {
LAB_018a3e98:
      if ((iVar5 != 0) && (iVar5 = FUN_012fb940(iVar5,&DAT_0053340d,1), iVar5 != 0)) {
        return 1;
      }
    }
    iVar5 = FUN_018a5188(param_1);
    if (iVar5 != 0) {
      return 1;
    }
    iVar5 = param_1[4];
    if (iVar5 == 0) goto LAB_018a3ef4;
    pcVar4 = "]";
LAB_018a3ee4:
    uVar6 = 1;
LAB_018a3ee8:
    iVar5 = FUN_012fb940(iVar5,pcVar4,uVar6);
  }
  uVar6 = 1;
  if (iVar5 == 0) {
LAB_018a3ef4:
    if ((param_2 == 0) && (iVar5 = param_1[4], iVar5 != 0)) {
      pcVar4 = "}";
LAB_018a3f10:
      iVar5 = FUN_012fb940(iVar5,pcVar4,1);
LAB_018a3a0c:
      if (iVar5 != 0) {
        return 1;
      }
    }
LAB_018a3a14:
    uVar6 = 0;
    if (*param_1 != 0) {
      param_1[3] = param_1[3] + -1;
    }
  }
  return uVar6;
}

