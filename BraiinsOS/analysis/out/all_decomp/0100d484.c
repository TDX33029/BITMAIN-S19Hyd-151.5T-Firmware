// FUN_0100d484 @ 0100d484 size=1836 calls_out=0 calls_in=0
// strings: 

longlong FUN_0100d484(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  
  uVar2 = 0;
  if ((param_2 == 0) || (param_2 == 1)) goto switchD_0100d504_default;
  uVar6 = *param_1 | 0x20;
  bVar3 = param_1[1] | 0x20;
  if (param_2 == 2) {
    if (uVar6 == 0x77) {
      return CONCAT44(0x50,(uint)(bVar3 == 0x73));
    }
    if (uVar6 == 0x67) {
      return CONCAT44(0x448,(uint)(bVar3 == 0x6f));
    }
    goto switchD_0100d504_caseD_1;
  }
  bVar9 = param_1[2] | 0x20;
  if (param_2 == 3) {
    param_2 = uVar6 - 0x61;
    uVar2 = 0;
    switch(param_2) {
    case 0:
      return CONCAT44(0xf1c,(uint)(bVar3 == 0x61 && bVar9 == 0x61));
    case 1:
    case 4:
    case 6:
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
      goto switchD_0100d504_caseD_1;
    case 2:
      return CONCAT44(0x402,(uint)(bVar3 == 0x61 && bVar9 == 0x70));
    case 3:
      return CONCAT44(0x35,(uint)(bVar3 == 0x6e && bVar9 == 0x73));
    case 5:
      return CONCAT44(0x15,(uint)(bVar3 == 0x74 && bVar9 == 0x70));
    case 8:
      bVar1 = bVar9 ^ 0x70;
      bVar9 = bVar3;
LAB_0100d834:
      return CONCAT44(0x277,(uint)(bVar9 == 0x70 && bVar1 == 0));
    case 0xd:
      return CONCAT44(0x801,(uint)(bVar3 == 0x66 && bVar9 == 0x73));
    case 0xf:
      return CONCAT44(0x6e,(uint)(bVar3 == 0x6f && bVar9 == 0x70));
    case 0x13:
      return CONCAT44(0xd2c,(uint)(bVar3 == 0x69 && bVar9 == 0x70));
    case 0x15:
      return CONCAT44(0x170c,(uint)(bVar3 == 0x6e && bVar9 == 99));
    case 0x16:
      bVar3 = bVar3 ^ 0x73 | bVar9 ^ 0x73;
      break;
    default:
      goto switchD_0100d504_default;
    }
LAB_0100dad8:
    param_2 = 0x1bb;
    uVar2 = (uint)(bVar3 == 0);
    goto switchD_0100d504_caseD_1;
  }
  bVar1 = param_1[3] | 0x20;
  if (param_2 == 4) {
    param_2 = uVar6 - 0x61;
    uVar2 = 0;
    switch(param_2) {
    case 0:
      if (bVar3 == 0x61) {
        return CONCAT44(0x161a,(uint)(bVar9 == 0x61 && bVar1 == 0x73));
      }
      if (bVar3 == 99) {
        return CONCAT44(0x2a2,(uint)(bVar9 == 0x61 && bVar1 == 0x70));
      }
      break;
    case 1:
    case 4:
    case 5:
    case 6:
    case 9:
    case 10:
    case 0xe:
    case 0xf:
    case 0x10:
      break;
    case 2:
      bVar3 = bVar3 ^ 0x6f | bVar9 ^ 0x61;
LAB_0100d984:
      return CONCAT44(0x1633,(uint)(bVar3 == 0 && bVar1 == 0x70));
    case 3:
      return CONCAT44(0xa44,(uint)((bVar3 == 0x69 && bVar9 == 99) && bVar1 == 0x74));
    case 7:
      bVar3 = bVar3 ^ 0x74 | bVar9 ^ 0x74;
      bVar1 = bVar1 ^ 0x70;
LAB_0100d93c:
      return CONCAT44(0x50,(uint)(bVar3 == 0 && bVar1 == 0));
    case 8:
      if (bVar3 == 99) {
        return CONCAT44(0x540,(uint)(bVar9 == 0x61 && bVar1 == 0x70));
      }
      if (bVar3 == 0x6d) {
        return CONCAT44(0x8f,(uint)(bVar9 == 0x61 && bVar1 == 0x70));
      }
      if (bVar3 == 0x70) {
        bVar1 = bVar1 ^ 0x73;
        goto LAB_0100d834;
      }
      break;
    case 0xb:
      return CONCAT44(0x185,(uint)((bVar3 == 100 && bVar9 == 0x61) && bVar1 == 0x70));
    case 0xc:
      return CONCAT44(0x40e,(uint)((bVar3 == 0x74 && bVar9 == 0x71) && bVar1 == 0x70));
    case 0xd:
      return CONCAT44(0x77,(uint)((bVar3 == 0x6e && bVar9 == 0x74) && bVar1 == 0x70));
    case 0x11:
      return CONCAT44(0x22a,(uint)((bVar3 == 0x74 && bVar9 == 0x73) && bVar1 == 0x70));
    case 0x12:
      if (bVar3 == 0x6e) {
        return CONCAT44(0xa1,(uint)(bVar9 == 0x6d && bVar1 == 0x70));
      }
      if (bVar3 == 0x74) {
        return CONCAT44(0xd96,(uint)(bVar9 == 0x75 && bVar1 == 0x6e));
      }
      break;
    case 0x13:
      return CONCAT44(0xd96,(uint)((bVar3 == 0x75 && bVar9 == 0x72) && bVar1 == 0x6e));
    default:
      goto switchD_0100d504_default;
    }
    goto switchD_0100d504_caseD_1;
  }
  bVar4 = param_1[4] | 0x20;
  if (param_2 != 5) {
    bVar5 = param_1[5] | 0x20;
    if (param_2 == 6) {
      if (uVar6 == 0x74) {
        if (bVar3 == 0x6e) {
          bVar3 = bVar9 ^ 0x33 | bVar1 ^ 0x32 | bVar4 ^ 0x37;
          bVar5 = bVar5 ^ 0x30;
        }
        else {
          if (bVar3 != 0x65) goto switchD_0100d504_caseD_1;
          bVar3 = bVar9 ^ 0x6c | bVar1 ^ 0x6e | bVar4 ^ 0x65;
          bVar5 = bVar5 ^ 0x74;
        }
        return CONCAT44(0x17,(uint)(bVar3 == 0 && bVar5 == 0));
      }
      if (uVar6 == 0x67) {
        return CONCAT44(0x46,(uint)((((bVar3 == 0x6f && bVar9 == 0x70) && bVar1 == 0x68) &&
                                    bVar4 == 0x65) && bVar5 == 0x72));
      }
      goto switchD_0100d504_caseD_1;
    }
    bVar8 = param_1[6] | 0x20;
    if (param_2 == 7) {
      if (uVar6 == 0x7a) {
        if ((bVar3 != 0x33 || bVar9 != 0x39) || (bVar1 != 0x2e || bVar4 != 0x35))
        goto switchD_0100d504_default;
        if (bVar5 == 0x30) {
          return CONCAT44(0xd2,(uint)((param_1[6] & 0xfe | 0x20) == 0x72));
        }
      }
      else {
        if (uVar6 == 0x6d) {
          return CONCAT44(0xf41,(uint)(((((bVar3 == 0x75 && bVar9 == 0x70) && bVar1 == 100) &&
                                        bVar4 == 0x61) && bVar5 == 0x74) && bVar8 == 0x65));
        }
        if (uVar6 == 99) {
          bVar3 = bVar3 ^ 0x6f | bVar9 ^ 0x61 | bVar1 ^ 0x70 | bVar4 ^ 0x2b | bVar5 ^ 0x77;
          bVar1 = bVar8 ^ 0x73;
          goto LAB_0100d93c;
        }
      }
      goto switchD_0100d504_caseD_1;
    }
    bVar7 = param_1[7] | 0x20;
    if (param_2 != 8) {
      return CONCAT44(0x1634,(uint)((((((((uVar6 == 99 && bVar3 == 0x6f) && bVar9 == 0x61) &&
                                        bVar1 == 0x70) && bVar4 == 0x73) && bVar5 == 0x2b) &&
                                     bVar8 == 0x74) && bVar7 == 99) && (param_1[8] & 0xdf) == 0x50))
      ;
    }
    if ((uVar6 != 99 || bVar3 != 0x6f) || (bVar9 != 0x61 || bVar1 != 0x70))
    goto switchD_0100d504_default;
    if (bVar4 != 0x73) {
      if (bVar4 == 0x2b) {
        bVar3 = bVar5 ^ 0x74 | bVar8 ^ 99;
        bVar1 = bVar7;
        goto LAB_0100d984;
      }
      goto switchD_0100d504_caseD_1;
    }
    bVar3 = bVar5 ^ 0x2b | bVar8 ^ 0x77;
    bVar4 = bVar7;
LAB_0100dad4:
    bVar3 = bVar3 | bVar4 ^ 0x73;
    goto LAB_0100dad8;
  }
  param_2 = uVar6 - 99;
  uVar2 = 0;
  switch(param_2) {
  case 0:
    return CONCAT44(0x1634,(uint)(((bVar3 == 0x6f && bVar9 == 0x61) && bVar1 == 0x70) &&
                                 bVar4 == 0x73));
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x12:
    break;
  case 5:
    bVar3 = bVar3 ^ 0x74 | bVar9 ^ 0x74 | bVar1 ^ 0x70;
    goto LAB_0100dad4;
  case 0xf:
    if (((bVar3 != 0x74) || (bVar9 != 0x73)) || (bVar1 != 0x70)) goto switchD_0100d504_default;
    if (bVar4 == 0x75) {
      return 0x22a00000001;
    }
    if (bVar4 == 0x73) {
      return 0x14200000001;
    }
    break;
  case 0x10:
    bVar9 = bVar9 ^ 0x75;
    bVar3 = bVar3 ^ 0x74;
    goto LAB_0100dafc;
  case 0x11:
    bVar9 = bVar9 ^ 0x72;
    bVar3 = bVar3 ^ 0x75;
LAB_0100dafc:
    return CONCAT44(0x14e5,(uint)(((bVar3 == 0 && bVar9 == 0) && bVar1 == 0x6e) && bVar4 == 0x73));
  case 0x13:
    if (bVar3 == 0x65) {
      return CONCAT44(0x23f,(uint)((bVar9 == 0x6d && bVar1 == 0x6d) && bVar4 == 0x69));
    }
    break;
  default:
switchD_0100d504_default:
    return (ulonglong)param_2 << 0x20;
  }
switchD_0100d504_caseD_1:
  return CONCAT44(param_2,uVar2);
}

