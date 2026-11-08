// FUN_0140e018 @ 0140e018 size=10948 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_0140e018(byte *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  
  switch(param_2) {
  case 2:
    if (*param_1 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[1];
    uVar1 = 0x43;
    break;
  case 3:
    bVar2 = *param_1;
    if (bVar2 == 0x76) {
      if (param_1[1] != 0x69) {
        return 0x51;
      }
      bVar2 = param_1[2];
      uVar1 = 0x4a;
LAB_0140fc60:
      if (bVar2 == 0x61) {
        return uVar1;
      }
      return 0x51;
    }
    if (bVar2 == 100) {
      if (param_1[1] != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[2];
      uVar1 = 0x1f;
      goto LAB_0140fc40;
    }
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[1];
    }
    if (bVar3 || bVar2 != 0x67) {
      return 0x51;
    }
    bVar2 = param_1[2];
    uVar1 = 0xd;
    break;
  case 4:
    switch(*param_1) {
    case 100:
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[3];
      uVar1 = 0x20;
      break;
    case 0x65:
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x61) {
        return 0x51;
      }
      bVar2 = param_1[3];
      uVar1 = 0x21;
LAB_0141064c:
      if (bVar2 == 0x67) {
        return uVar1;
      }
      return 0x51;
    case 0x66:
      bVar2 = param_1[1];
      bVar3 = bVar2 == 0x72;
      if (bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 && bVar2 == 0x6f) {
        if (param_1[3] == 0x6d) {
          return 0x25;
        }
        return 0x51;
      }
      return 0x51;
    case 0x67:
    case 0x69:
    case 0x6a:
    case 0x6b:
      return 0x51;
    case 0x68:
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x73) {
        return 0x51;
      }
      bVar2 = param_1[3];
      uVar1 = 0x26;
      goto LAB_0140fc40;
    case 0x6c:
      bVar2 = param_1[1];
      bVar3 = bVar2 == 0x69;
      if (bVar3) {
        bVar2 = param_1[2];
      }
      if (!bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      if (param_1[3] == 0x6b) {
        return 0x2d;
      }
      return 0x51;
    default:
      if (*param_1 != 0x76) {
        return 0x51;
      }
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[3];
      uVar1 = 0x49;
      goto LAB_0141019c;
    }
    break;
  case 5:
    bVar2 = *param_1;
    if (bVar2 != 0x72) {
      bVar3 = bVar2 == 0x61;
      if (bVar3) {
        bVar2 = param_1[1];
      }
      if (!bVar3 || bVar2 != 0x6c) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 == 0x6c;
      if (bVar3) {
        bVar2 = param_1[3];
      }
      if (!bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      if (param_1[4] == 0x77) {
        return 0xe;
      }
      return 0x51;
    }
    if (param_1[1] != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[3];
    }
    if (bVar3 || bVar2 != 0x67) {
      return 0x51;
    }
    bVar2 = param_1[4];
    uVar1 = 0x36;
    break;
  case 6:
    bVar2 = *param_1;
    if (0x6e < bVar2) {
      if (bVar2 == 0x6f) {
        bVar2 = param_1[1];
        bVar3 = bVar2 != 0x72;
        if (!bVar3) {
          bVar2 = param_1[2];
        }
        if (bVar3 || bVar2 != 0x69) {
          return 0x51;
        }
        bVar2 = param_1[3];
        bVar3 = bVar2 != 0x67;
        if (!bVar3) {
          bVar2 = param_1[4];
        }
        if (bVar3 || bVar2 != 0x69) {
          return 0x51;
        }
        bVar2 = param_1[5];
        uVar1 = 0x30;
        goto LAB_014106dc;
      }
      if (bVar2 == 0x70) {
        bVar2 = param_1[1];
        bVar3 = bVar2 != 0x72;
        if (!bVar3) {
          bVar2 = param_1[2];
        }
        if (bVar3 || bVar2 != 0x61) {
          return 0x51;
        }
        bVar2 = param_1[3];
        bVar3 = bVar2 != 0x67;
        if (!bVar3) {
          bVar2 = param_1[4];
        }
        if (bVar3 || bVar2 != 0x6d) {
          return 0x51;
        }
        bVar2 = param_1[5];
        uVar1 = 0x31;
        goto LAB_0140fc60;
      }
      bVar3 = bVar2 != 0x73;
      if (!bVar3) {
        bVar2 = param_1[1];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      if (param_1[2] != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x76;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[5];
      uVar1 = 0x40;
      goto LAB_01410594;
    }
    if (bVar2 == 0x61) {
      bVar2 = param_1[1];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[5];
      uVar1 = 0;
      goto LAB_0140fc40;
    }
    if (bVar2 != 99) {
      if (bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x78;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[5];
      uVar1 = 0x22;
      goto LAB_0140fc40;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 0x6f;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x6b;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x69) {
      return 0x51;
    }
    bVar2 = param_1[5];
    uVar1 = 0x1e;
    break;
  case 7:
    bVar2 = *param_1;
    switch(bVar2) {
    case 0x72:
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x66) {
        return 0x51;
      }
      if (param_1[3] == 0x72) {
        bVar2 = param_1[4];
        bVar3 = bVar2 == 0x65;
        if (bVar3) {
          bVar2 = param_1[5];
        }
        if (!bVar3 || bVar2 != 0x73) {
          return 0x51;
        }
        bVar2 = param_1[6];
        uVar1 = 0x39;
        goto LAB_014109f8;
      }
      if (param_1[3] != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[6];
      uVar1 = 0x37;
      break;
    case 0x73:
    case 0x76:
      goto switchD_0140e02c_caseD_1a;
    case 0x74:
      if (param_1[1] != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x69) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x6c;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[6];
      uVar1 = 0x44;
      break;
    case 0x75:
      if (param_1[1] != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x67;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 100) {
        return 0x51;
      }
      bVar2 = param_1[6];
      uVar1 = 0x47;
      goto LAB_0140e0cc;
    case 0x77:
      if (param_1[1] != 0x61) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[6];
      uVar1 = 0x4b;
      goto LAB_0141064c;
    default:
      if (bVar2 != 0x65) {
        bVar3 = bVar2 == 0x61;
        if (bVar3) {
          bVar2 = param_1[1];
        }
        if (!bVar3 || bVar2 != 0x6c) {
          return 0x51;
        }
        bVar2 = param_1[2];
        bVar3 = bVar2 == 0x74;
        if (bVar3) {
          bVar2 = param_1[3];
        }
        if (!bVar3 || bVar2 != 0x2d) {
          return 0x51;
        }
        bVar2 = param_1[4];
        bVar3 = bVar2 == 0x73;
        if (bVar3) {
          bVar2 = param_1[5];
        }
        if (!bVar3 || bVar2 != 0x76) {
          return 0x51;
        }
        if (param_1[6] == 99) {
          return 0xf;
        }
        return 0x51;
      }
      if (param_1[1] != 0x78) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x70;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x69) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[6];
      uVar1 = 0x23;
      goto LAB_0141078c;
    }
LAB_01410594:
    if (bVar2 == 0x72) {
      return uVar1;
    }
    return 0x51;
  case 8:
    if (*param_1 == 0x6c) {
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[7];
      uVar1 = 0x2e;
      goto LAB_014106dc;
    }
    if (*param_1 != 0x69) {
      return 0x51;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 0x66;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[3];
    if (bVar2 != 0x72) {
      bVar3 = bVar2 != 0x6d;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x61) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[7];
      uVar1 = 0x27;
      goto LAB_014109f8;
    }
    if (param_1[4] != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x67) {
      return 0x51;
    }
    bVar2 = param_1[7];
    uVar1 = 0x2a;
    break;
  case 9:
    bVar2 = *param_1;
    bVar3 = bVar2 != 0x66;
    if (!bVar3) {
      bVar2 = param_1[1];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[3];
    }
    if (bVar3 || bVar2 != 0x77) {
      return 0x51;
    }
    bVar2 = param_1[4];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[5];
    }
    if (bVar3 || bVar2 != 0x72) {
      return 0x51;
    }
    bVar2 = param_1[6];
    bVar3 = bVar2 != 100;
    if (!bVar3) {
      bVar2 = param_1[7];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[8];
    uVar1 = 0x24;
LAB_0140ee74:
    if (bVar2 == 100) {
      return uVar1;
    }
    return 0x51;
  case 10:
    bVar2 = *param_1;
    if (bVar2 == 0x75) {
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x73;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 0x67) {
        return 0x51;
      }
      bVar2 = param_1[7];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[8];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[9];
      uVar1 = 0x46;
      goto LAB_0140fc40;
    }
    if (bVar2 != 0x73) {
      if (bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x6e;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[7];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[8];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[9];
      uVar1 = 0x14;
      goto LAB_014106dc;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x6f;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 0x6b;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x69) {
      return 0x51;
    }
    bVar2 = param_1[9];
    uVar1 = 0x41;
    break;
  case 0xb:
    bVar2 = *param_1;
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[1];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[3];
    }
    if (bVar3 || bVar2 != 0x72) {
      return 0x51;
    }
    bVar2 = param_1[4];
    bVar3 = bVar2 != 0x79;
    if (!bVar3) {
      bVar2 = param_1[5];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[6];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[7];
    }
    if (bVar3 || bVar2 != 0x66) {
      return 0x51;
    }
    bVar2 = param_1[8];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[9];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[10];
    uVar1 = 0x3a;
    goto LAB_01410594;
  case 0xc:
    if (*param_1 == 0x6d) {
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x78) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x66) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[7];
      bVar3 = bVar2 != 0x77;
      if (!bVar3) {
        bVar2 = param_1[8];
      }
      if (bVar3 || bVar2 != 0x61) {
        return 0x51;
      }
      bVar2 = param_1[9];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[10];
      }
      if (bVar3 || bVar2 != 100) {
        return 0x51;
      }
      bVar2 = param_1[0xb];
      uVar1 = 0x2f;
      goto LAB_0141078c;
    }
    if (*param_1 != 99) {
      return 0x51;
    }
    bVar2 = param_1[1];
    if (bVar2 == 0x61) {
      if (param_1[2] != 99) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x68;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 0x73) {
        return 0x51;
      }
      bVar2 = param_1[7];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[8];
      }
      if (bVar3 || bVar2 != 0x61) {
        return 0x51;
      }
      bVar2 = param_1[9];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[10];
      }
      if (bVar3 || bVar2 != 0x75) {
        return 0x51;
      }
      bVar2 = param_1[0xb];
      uVar1 = 0x12;
      goto LAB_0141078c;
    }
    bVar3 = bVar2 != 0x6f;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 0x6e) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[9];
    bVar3 = bVar2 != 0x79;
    if (!bVar3) {
      bVar2 = param_1[10];
    }
    if (bVar3 || bVar2 != 0x70) {
      return 0x51;
    }
    bVar2 = param_1[0xb];
    uVar1 = 0x1d;
    break;
  case 0xd:
    bVar2 = *param_1;
    if (0x68 < bVar2) {
      if (bVar2 == 0x69) {
        if (param_1[1] != 0x66) {
          return 0x51;
        }
        bVar2 = param_1[2];
        bVar3 = bVar2 != 0x2d;
        if (!bVar3) {
          bVar2 = param_1[3];
        }
        if (bVar3 || bVar2 != 0x6e) {
          return 0x51;
        }
        bVar2 = param_1[4];
        bVar3 = bVar2 != 0x6f;
        if (!bVar3) {
          bVar2 = param_1[5];
        }
        if (bVar3 || bVar2 != 0x6e) {
          return 0x51;
        }
        bVar2 = param_1[6];
        bVar3 = bVar2 != 0x65;
        if (!bVar3) {
          bVar2 = param_1[7];
        }
        if (bVar3 || bVar2 != 0x2d) {
          return 0x51;
        }
        bVar2 = param_1[8];
        bVar3 = bVar2 != 0x6d;
        if (!bVar3) {
          bVar2 = param_1[9];
        }
        if (bVar3 || bVar2 != 0x61) {
          return 0x51;
        }
        bVar2 = param_1[10];
        bVar3 = bVar2 != 0x74;
        if (!bVar3) {
          bVar2 = param_1[0xb];
        }
        if (bVar3 || bVar2 != 99) {
          return 0x51;
        }
        bVar2 = param_1[0xc];
        uVar1 = 0x29;
        goto LAB_014109f8;
      }
      bVar3 = bVar2 != 0x6c;
      if (!bVar3) {
        bVar2 = param_1[1];
      }
      if (bVar3 || bVar2 != 0x61) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x73;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x6d) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 100) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 0x66) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      uVar1 = 0x2c;
      goto LAB_0140ee74;
    }
    if (bVar2 == 0x61) {
      if (param_1[1] != 99) {
        if (param_1[1] != 0x75) {
          return 0x51;
        }
        bVar2 = param_1[2];
        bVar3 = bVar2 != 0x74;
        if (!bVar3) {
          bVar2 = param_1[3];
        }
        if (bVar3 || bVar2 != 0x68) {
          return 0x51;
        }
        bVar2 = param_1[4];
        bVar3 = bVar2 != 0x6f;
        if (!bVar3) {
          bVar2 = param_1[5];
        }
        if (bVar3 || bVar2 != 0x72) {
          return 0x51;
        }
        bVar2 = param_1[6];
        bVar3 = bVar2 != 0x69;
        if (!bVar3) {
          bVar2 = param_1[7];
        }
        if (bVar3 || bVar2 != 0x7a) {
          return 0x51;
        }
        bVar2 = param_1[8];
        bVar3 = bVar2 != 0x61;
        if (!bVar3) {
          bVar2 = param_1[9];
        }
        if (bVar3 || bVar2 != 0x74) {
          return 0x51;
        }
        bVar2 = param_1[10];
        bVar3 = bVar2 != 0x69;
        if (!bVar3) {
          bVar2 = param_1[0xb];
        }
        if (bVar3 || bVar2 != 0x6f) {
          return 0x51;
        }
        bVar2 = param_1[0xc];
        uVar1 = 0x10;
        goto LAB_014106dc;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x70;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x67;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      uVar1 = 4;
      goto LAB_0141078c;
    }
    if (bVar2 != 99) {
      return 0x51;
    }
    if (param_1[1] == 0x61) {
      bVar2 = param_1[2];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x68) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x6e;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      uVar1 = 0x11;
      goto LAB_0141086c;
    }
    if (param_1[1] != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[3];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[4];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[5];
    }
    if (bVar3 || bVar2 != 0x6e) {
      return 0x51;
    }
    bVar2 = param_1[6];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[7];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[8];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[9];
    }
    if (bVar3 || bVar2 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[10];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[0xb];
    }
    if (bVar3 || bVar2 != 0x67) {
      return 0x51;
    }
    bVar2 = param_1[0xc];
    uVar1 = 0x1a;
    break;
  case 0xe:
    if (*param_1 == 99) {
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 0x6e;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[7];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[8];
      }
      if (bVar3 || bVar2 != 0x6c) {
        return 0x51;
      }
      bVar2 = param_1[9];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[10];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[0xb];
      bVar3 = bVar2 != 0x67;
      if (!bVar3) {
        bVar2 = param_1[0xc];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0xd];
      uVar1 = 0x18;
LAB_014109f8:
      if (bVar2 == 0x68) {
        return uVar1;
      }
      return 0x51;
    }
    if (*param_1 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x70) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x68) {
      return 0x51;
    }
    bVar2 = param_1[9];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[10];
    }
    if (bVar3 || bVar2 != 0x72) {
      return 0x51;
    }
    bVar2 = param_1[0xb];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[0xc];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0xd];
    uVar1 = 1;
    goto LAB_0140fc40;
  case 0xf:
    bVar2 = *param_1;
    if (0x71 < bVar2) {
      if (bVar2 != 0x72) {
        bVar3 = bVar2 != 0x78;
        if (!bVar3) {
          bVar2 = param_1[1];
        }
        if (bVar3 || bVar2 != 0x2d) {
          return 0x51;
        }
        bVar2 = param_1[2];
        bVar3 = bVar2 != 0x66;
        if (!bVar3) {
          bVar2 = param_1[3];
        }
        if (bVar3 || bVar2 != 0x72) {
          return 0x51;
        }
        bVar2 = param_1[4];
        bVar3 = bVar2 != 0x61;
        if (!bVar3) {
          bVar2 = param_1[5];
        }
        if (bVar3 || bVar2 != 0x6d) {
          return 0x51;
        }
        bVar2 = param_1[6];
        bVar3 = bVar2 != 0x65;
        if (!bVar3) {
          bVar2 = param_1[7];
        }
        if (bVar3 || bVar2 != 0x2d) {
          return 0x51;
        }
        bVar2 = param_1[8];
        bVar3 = bVar2 != 0x6f;
        if (!bVar3) {
          bVar2 = param_1[9];
        }
        if (bVar3 || bVar2 != 0x70) {
          return 0x51;
        }
        bVar2 = param_1[10];
        bVar3 = bVar2 != 0x74;
        if (!bVar3) {
          bVar2 = param_1[0xb];
        }
        if (bVar3 || bVar2 != 0x69) {
          return 0x51;
        }
        bVar2 = param_1[0xc];
        bVar3 = bVar2 != 0x6f;
        if (!bVar3) {
          bVar2 = param_1[0xd];
        }
        if (bVar3 || bVar2 != 0x6e) {
          return 0x51;
        }
        bVar2 = param_1[0xe];
        uVar1 = 0x4f;
        goto LAB_0141078c;
      }
      if (param_1[1] != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x66;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x6c) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[0xd];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[0xe];
      uVar1 = 0x38;
      goto LAB_0141019c;
    }
    if (bVar2 != 0x61) {
      bVar3 = bVar2 != 0x70;
      if (!bVar3) {
        bVar2 = param_1[1];
      }
      if (bVar3 || bVar2 != 0x75) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x62;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x6c) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 0x6b) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 0x79) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[0xd];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[0xe];
      uVar1 = 0x34;
      goto LAB_0141078c;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x70) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    if (param_1[7] != 0x6c) {
      if (param_1[7] != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x6e;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 100) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[0xd];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[0xe];
      uVar1 = 2;
      goto LAB_0141064c;
    }
    bVar2 = param_1[8];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[9];
    }
    if (bVar3 || bVar2 != 0x6e) {
      return 0x51;
    }
    bVar2 = param_1[10];
    bVar3 = bVar2 != 0x67;
    if (!bVar3) {
      bVar2 = param_1[0xb];
    }
    if (bVar3 || bVar2 != 0x75) {
      return 0x51;
    }
    bVar2 = param_1[0xc];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[0xd];
    }
    if (bVar3 || bVar2 != 0x67) {
      return 0x51;
    }
    bVar2 = param_1[0xe];
    uVar1 = 3;
    break;
  case 0x10:
    bVar2 = *param_1;
    if (bVar2 == 0x78) {
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x78) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x73;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x73) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[7];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[8];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[9];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[10];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0xb];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[0xc];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0xd];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[0xe];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0xf];
      uVar1 = 0x50;
      goto LAB_014106dc;
    }
    if (bVar2 == 0x77) {
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x77;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 0x77) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x61) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 0x75;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[7];
      bVar3 = bVar2 != 0x68;
      if (!bVar3) {
        bVar2 = param_1[8];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[9];
      bVar3 = bVar2 != 0x6e;
      if (!bVar3) {
        bVar2 = param_1[10];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0xb];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[0xc];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[0xd];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[0xe];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0xf];
      uVar1 = 0x4c;
    }
    else {
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[1];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x6e;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      if (param_1[8] != 0x6c) {
        if (param_1[8] != 0x65) {
          return 0x51;
        }
        bVar2 = param_1[9];
        bVar3 = bVar2 != 0x6e;
        if (!bVar3) {
          bVar2 = param_1[10];
        }
        if (bVar3 || bVar2 != 99) {
          return 0x51;
        }
        bVar2 = param_1[0xb];
        bVar3 = bVar2 != 0x6f;
        if (!bVar3) {
          bVar2 = param_1[0xc];
        }
        if (bVar3 || bVar2 != 100) {
          return 0x51;
        }
        bVar2 = param_1[0xd];
        bVar3 = bVar2 != 0x69;
        if (!bVar3) {
          bVar2 = param_1[0xe];
        }
        if (bVar3 || bVar2 != 0x6e) {
          return 0x51;
        }
        bVar2 = param_1[0xf];
        uVar1 = 0x16;
        goto LAB_0141064c;
      }
      bVar2 = param_1[9];
      if (bVar2 != 0x61) {
        bVar3 = bVar2 != 0x6f;
        if (!bVar3) {
          bVar2 = param_1[10];
        }
        if (bVar3 || bVar2 != 99) {
          return 0x51;
        }
        bVar2 = param_1[0xb];
        bVar3 = bVar2 != 0x61;
        if (!bVar3) {
          bVar2 = param_1[0xc];
        }
        if (bVar3 || bVar2 != 0x74) {
          return 0x51;
        }
        bVar2 = param_1[0xd];
        bVar3 = bVar2 != 0x69;
        if (!bVar3) {
          bVar2 = param_1[0xe];
        }
        if (bVar3 || bVar2 != 0x6f) {
          return 0x51;
        }
        bVar2 = param_1[0xf];
        uVar1 = 0x19;
        goto LAB_014106dc;
      }
      if (param_1[10] != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[0xb];
      bVar3 = bVar2 != 0x67;
      if (!bVar3) {
        bVar2 = param_1[0xc];
      }
      if (bVar3 || bVar2 != 0x75) {
        return 0x51;
      }
      bVar2 = param_1[0xd];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[0xe];
      }
      if (bVar3 || bVar2 != 0x67) {
        return 0x51;
      }
      bVar2 = param_1[0xf];
      uVar1 = 0x17;
    }
    break;
  case 0x11:
    bVar2 = *param_1;
    if (0x72 < bVar2) {
      if (bVar2 != 0x73) {
        bVar3 = bVar2 != 0x74;
        if (!bVar3) {
          bVar2 = param_1[1];
        }
        if (bVar3 || bVar2 != 0x72) {
          return 0x51;
        }
        bVar2 = param_1[2];
        bVar3 = bVar2 != 0x61;
        if (!bVar3) {
          bVar2 = param_1[3];
        }
        if (bVar3 || bVar2 != 0x6e) {
          return 0x51;
        }
        bVar2 = param_1[4];
        bVar3 = bVar2 != 0x73;
        if (!bVar3) {
          bVar2 = param_1[5];
        }
        if (bVar3 || bVar2 != 0x66) {
          return 0x51;
        }
        bVar2 = param_1[6];
        bVar3 = bVar2 != 0x65;
        if (!bVar3) {
          bVar2 = param_1[7];
        }
        if (bVar3 || bVar2 != 0x72) {
          return 0x51;
        }
        bVar2 = param_1[8];
        bVar3 = bVar2 != 0x2d;
        if (!bVar3) {
          bVar2 = param_1[9];
        }
        if (bVar3 || bVar2 != 0x65) {
          return 0x51;
        }
        bVar2 = param_1[10];
        bVar3 = bVar2 != 0x6e;
        if (!bVar3) {
          bVar2 = param_1[0xb];
        }
        if (bVar3 || bVar2 != 99) {
          return 0x51;
        }
        bVar2 = param_1[0xc];
        bVar3 = bVar2 != 0x6f;
        if (!bVar3) {
          bVar2 = param_1[0xd];
        }
        if (bVar3 || bVar2 != 100) {
          return 0x51;
        }
        bVar2 = param_1[0xe];
        bVar3 = bVar2 != 0x69;
        if (!bVar3) {
          bVar2 = param_1[0xf];
        }
        if (bVar3 || bVar2 != 0x6e) {
          return 0x51;
        }
        bVar2 = param_1[0x10];
        uVar1 = 0x45;
        goto LAB_0141064c;
      }
      if (param_1[1] != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x77;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 0x62;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 0x73) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x6b;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[0xd];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      bVar2 = param_1[0xe];
      bVar3 = bVar2 != 0x6b;
      if (!bVar3) {
        bVar2 = param_1[0xf];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0x10];
      uVar1 = 0x3d;
      goto LAB_0141019c;
    }
    if (bVar2 == 99) {
      if (param_1[1] != 100) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x6e;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x61) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 0x68) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      bVar3 = bVar2 != 0x6e;
      if (!bVar3) {
        bVar2 = param_1[0xd];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0xe];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[0xf];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0x10];
      uVar1 = 0x13;
      goto LAB_0141086c;
    }
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[1];
    }
    if (bVar3 || bVar2 != 0x66) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[3];
    }
    if (bVar3 || bVar2 != 0x6d) {
      return 0x51;
    }
    bVar2 = param_1[4];
    bVar3 = bVar2 != 0x6f;
    if (!bVar3) {
      bVar2 = param_1[5];
    }
    if (bVar3 || bVar2 != 100) {
      return 0x51;
    }
    bVar2 = param_1[6];
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[7];
    }
    if (bVar3 || bVar2 != 0x66) {
      return 0x51;
    }
    bVar2 = param_1[8];
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[9];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[10];
    bVar3 = bVar2 != 100;
    if (!bVar3) {
      bVar2 = param_1[0xb];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0xc];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[0xd];
    }
    if (bVar3 || bVar2 != 0x69) {
      return 0x51;
    }
    bVar2 = param_1[0xe];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[0xf];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[0x10];
    uVar1 = 0x28;
    break;
  case 0x12:
    if (*param_1 != 0x70) {
      return 0x51;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x78;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x79) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 0x75;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[9];
    bVar3 = bVar2 != 0x68;
    if (!bVar3) {
      bVar2 = param_1[10];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0xb];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[0xc];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0xd];
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[0xe];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[0xf];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[0x10];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0x11];
    uVar1 = 0x32;
    break;
  case 0x13:
    bVar2 = *param_1;
    if (bVar2 == 0x70) {
      if (param_1[1] != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x78) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x79;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 0x75) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 0x68) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[0xd];
      }
      if (bVar3 || bVar2 != 0x7a) {
        return 0x51;
      }
      bVar2 = param_1[0xe];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[0xf];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0x10];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[0x11];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0x12];
      uVar1 = 0x33;
LAB_014106dc:
      if (bVar2 == 0x6e) {
        return uVar1;
      }
      return 0x51;
    }
    if (bVar2 != 0x69) {
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[1];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x6e;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 100;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 0x69) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x73;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[0xd];
      }
      if (bVar3 || bVar2 != 0x73) {
        return 0x51;
      }
      bVar2 = param_1[0xe];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[0xf];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0x10];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[0x11];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0x12];
      uVar1 = 0x15;
      goto LAB_014106dc;
    }
    if (param_1[1] != 0x66) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[3];
    }
    if (bVar3 || bVar2 != 0x75) {
      return 0x51;
    }
    bVar2 = param_1[4];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[5];
    }
    if (bVar3 || bVar2 != 0x6d) {
      return 0x51;
    }
    bVar2 = param_1[6];
    bVar3 = bVar2 != 0x6f;
    if (!bVar3) {
      bVar2 = param_1[7];
    }
    if (bVar3 || bVar2 != 100) {
      return 0x51;
    }
    bVar2 = param_1[8];
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[9];
    }
    if (bVar3 || bVar2 != 0x66) {
      return 0x51;
    }
    bVar2 = param_1[10];
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[0xb];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0xc];
    bVar3 = bVar2 != 100;
    if (!bVar3) {
      bVar2 = param_1[0xd];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0xe];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[0xf];
    }
    if (bVar3 || bVar2 != 0x69) {
      return 0x51;
    }
    bVar2 = param_1[0x10];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[0x11];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[0x12];
    uVar1 = 0x2b;
    break;
  case 0x14:
    if (*param_1 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x77) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x62) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[9];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[10];
    }
    if (bVar3 || bVar2 != 0x6b) {
      return 0x51;
    }
    bVar2 = param_1[0xb];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0xc];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0xd];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[0xe];
    }
    if (bVar3 || bVar2 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[0xf];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[0x10];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[0x11];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0x12];
    }
    if (bVar3 || bVar2 != 0x70) {
      return 0x51;
    }
    bVar2 = param_1[0x13];
    uVar1 = 0x3b;
LAB_0140fc40:
    if (bVar2 == 0x74) {
      return uVar1;
    }
    return 0x51;
  case 0x15:
    bVar2 = *param_1;
    bVar3 = bVar2 == 0x73;
    if (bVar3) {
      bVar2 = param_1[1];
    }
    if (!bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 == 99;
    if (bVar3) {
      bVar2 = param_1[3];
    }
    if (!bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[4];
    bVar3 = bVar2 == 0x77;
    if (bVar3) {
      bVar2 = param_1[5];
    }
    if (!bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[6];
    bVar3 = bVar2 == 0x62;
    if (bVar3) {
      bVar2 = param_1[7];
    }
    if (!bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[8];
    bVar3 = bVar2 == 0x6f;
    if (bVar3) {
      bVar2 = param_1[9];
    }
    if (!bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[10];
    bVar3 = bVar2 == 0x6b;
    if (bVar3) {
      bVar2 = param_1[0xb];
    }
    if (!bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0xc];
    bVar3 = bVar2 == 0x74;
    if (bVar3) {
      bVar2 = param_1[0xd];
    }
    if (!bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0xe];
    bVar3 = bVar2 == 0x76;
    if (bVar3) {
      bVar2 = param_1[0xf];
    }
    if (!bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0x10];
    bVar3 = bVar2 == 0x72;
    if (bVar3) {
      bVar2 = param_1[0x11];
    }
    if (!bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[0x12];
    bVar3 = bVar2 == 0x69;
    if (bVar3) {
      bVar2 = param_1[0x13];
    }
    if (!bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    if (param_1[0x14] == 0x6e) {
      return 0x3f;
    }
    return 0x51;
  case 0x16:
    bVar2 = *param_1;
    if (bVar2 == 0x78) {
      if (param_1[1] != 0x2d) {
        return 0x51;
      }
      if (param_1[2] == 100) {
        bVar2 = param_1[3];
        bVar3 = bVar2 != 0x6e;
        if (!bVar3) {
          bVar2 = param_1[4];
        }
        if (bVar3 || bVar2 != 0x73) {
          return 0x51;
        }
        bVar2 = param_1[5];
        bVar3 = bVar2 != 0x2d;
        if (!bVar3) {
          bVar2 = param_1[6];
        }
        if (bVar3 || bVar2 != 0x70) {
          return 0x51;
        }
        bVar2 = param_1[7];
        bVar3 = bVar2 != 0x72;
        if (!bVar3) {
          bVar2 = param_1[8];
        }
        if (bVar3 || bVar2 != 0x65) {
          return 0x51;
        }
        bVar2 = param_1[9];
        bVar3 = bVar2 != 0x66;
        if (!bVar3) {
          bVar2 = param_1[10];
        }
        if (bVar3 || bVar2 != 0x65) {
          return 0x51;
        }
        bVar2 = param_1[0xb];
        bVar3 = bVar2 != 0x74;
        if (!bVar3) {
          bVar2 = param_1[0xc];
        }
        if (bVar3 || bVar2 != 99) {
          return 0x51;
        }
        bVar2 = param_1[0xd];
        bVar3 = bVar2 != 0x68;
        if (!bVar3) {
          bVar2 = param_1[0xe];
        }
        if (bVar3 || bVar2 != 0x2d) {
          return 0x51;
        }
        bVar2 = param_1[0xf];
        bVar3 = bVar2 != 99;
        if (!bVar3) {
          bVar2 = param_1[0x10];
        }
        if (bVar3 || bVar2 != 0x6f) {
          return 0x51;
        }
        bVar2 = param_1[0x11];
        bVar3 = bVar2 != 0x6e;
        if (!bVar3) {
          bVar2 = param_1[0x12];
        }
        if (bVar3 || bVar2 != 0x74) {
          return 0x51;
        }
        bVar2 = param_1[0x13];
        bVar3 = bVar2 != 0x72;
        if (!bVar3) {
          bVar2 = param_1[0x14];
        }
        if (bVar3 || bVar2 != 0x6f) {
          return 0x51;
        }
        bVar2 = param_1[0x15];
        uVar1 = 0x4e;
        goto LAB_0141086c;
      }
      if (param_1[2] != 99) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[7];
      bVar3 = bVar2 != 0x6e;
      if (!bVar3) {
        bVar2 = param_1[8];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[9];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[10];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0xb];
      bVar3 = bVar2 != 0x79;
      if (!bVar3) {
        bVar2 = param_1[0xc];
      }
      if (bVar3 || bVar2 != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[0xd];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[0xe];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      bVar2 = param_1[0xf];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[0x10];
      }
      if (bVar3 || bVar2 != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[0x11];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[0x12];
      }
      if (bVar3 || bVar2 != 0x69) {
        return 0x51;
      }
      bVar2 = param_1[0x13];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[0x14];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[0x15];
      uVar1 = 0x4d;
      goto LAB_0141078c;
    }
    if (bVar2 == 0x73) {
      bVar2 = param_1[1];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[2];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[3];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[4];
      }
      if (bVar3 || bVar2 != 0x77) {
        return 0x51;
      }
      bVar2 = param_1[5];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[6];
      }
      if (bVar3 || bVar2 != 0x62) {
        return 0x51;
      }
      bVar2 = param_1[7];
      bVar3 = bVar2 != 0x73;
      if (!bVar3) {
        bVar2 = param_1[8];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[9];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[10];
      }
      if (bVar3 || bVar2 != 0x6b) {
        return 0x51;
      }
      bVar2 = param_1[0xb];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[0xc];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0xd];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[0xe];
      }
      if (bVar3 || bVar2 != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[0xf];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[0x10];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0x11];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[0x12];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0x13];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[0x14];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0x15];
      uVar1 = 0x3e;
LAB_0141086c:
      if (bVar2 == 0x6c) {
        return uVar1;
      }
      return 0x51;
    }
    if (bVar2 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[9];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[10];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0xb];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0xc];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0xd];
    bVar3 = bVar2 != 0x6c;
    if (!bVar3) {
      bVar2 = param_1[0xe];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0xf];
    bVar3 = bVar2 != 0x6d;
    if (!bVar3) {
      bVar2 = param_1[0x10];
    }
    if (bVar3 || bVar2 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[0x11];
    bVar3 = bVar2 != 0x78;
    if (!bVar3) {
      bVar2 = param_1[0x12];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0x13];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[0x14];
    }
    if (bVar3 || bVar2 != 0x67) {
      return 0x51;
    }
    bVar2 = param_1[0x15];
    uVar1 = 10;
    break;
  case 0x17:
    bVar2 = *param_1;
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[1];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[3];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[4];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[5];
    }
    if (bVar3 || bVar2 != 0x6e) {
      return 0x51;
    }
    bVar2 = param_1[6];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[7];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[8];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[9];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[10];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[0xb];
    }
    if (bVar3 || bVar2 != 0x75) {
      return 0x51;
    }
    bVar2 = param_1[0xc];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0xd];
    }
    if (bVar3 || bVar2 != 0x69) {
      return 0x51;
    }
    bVar2 = param_1[0xe];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[0xf];
    }
    if (bVar3 || bVar2 != 0x79) {
      return 0x51;
    }
    bVar2 = param_1[0x10];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[0x11];
    }
    if (bVar3 || bVar2 != 0x70) {
      return 0x51;
    }
    bVar2 = param_1[0x12];
    bVar3 = bVar2 != 0x6f;
    if (!bVar3) {
      bVar2 = param_1[0x13];
    }
    if (bVar3 || bVar2 != 0x6c) {
      return 0x51;
    }
    bVar2 = param_1[0x14];
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[0x15];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[0x16];
    uVar1 = 0x1b;
    goto LAB_0141019c;
  case 0x18:
    if (*param_1 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x77) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x62) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[9];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[10];
    }
    if (bVar3 || bVar2 != 0x6b) {
      return 0x51;
    }
    bVar2 = param_1[0xb];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0xc];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0xd];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[0xe];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0xf];
    bVar3 = bVar2 != 0x78;
    if (!bVar3) {
      bVar2 = param_1[0x10];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0x11];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0x12];
    }
    if (bVar3 || bVar2 != 0x6e) {
      return 0x51;
    }
    bVar2 = param_1[0x13];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[0x14];
    }
    if (bVar3 || bVar2 != 0x69) {
      return 0x51;
    }
    bVar2 = param_1[0x15];
    bVar3 = bVar2 != 0x6f;
    if (!bVar3) {
      bVar2 = param_1[0x16];
    }
    if (bVar3 || bVar2 != 0x6e) {
      return 0x51;
    }
    bVar2 = param_1[0x17];
    uVar1 = 0x3c;
    goto LAB_0141078c;
  case 0x19:
    bVar2 = *param_1;
    if (bVar2 == 0x75) {
      if (param_1[1] != 0x70) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 0x67;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 100) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 0x2d) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x69;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x73;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[0xd];
      }
      if (bVar3 || bVar2 != 0x75) {
        return 0x51;
      }
      bVar2 = param_1[0xe];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[0xf];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0x10];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[0x11];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[0x12];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[0x13];
      }
      if (bVar3 || bVar2 != 0x71) {
        return 0x51;
      }
      bVar2 = param_1[0x14];
      bVar3 = bVar2 != 0x75;
      if (!bVar3) {
        bVar2 = param_1[0x15];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0x16];
      bVar3 = bVar2 != 0x73;
      if (!bVar3) {
        bVar2 = param_1[0x17];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0x18];
      uVar1 = 0x48;
      goto LAB_0141078c;
    }
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[1];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[3];
    }
    if (bVar3 || bVar2 != 0x69) {
      return 0x51;
    }
    bVar2 = param_1[4];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[5];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[6];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[7];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[8];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[9];
    }
    if (bVar3 || bVar2 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[10];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[0xb];
    }
    if (bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[0xc];
    bVar3 = bVar2 != 0x70;
    if (!bVar3) {
      bVar2 = param_1[0xd];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0xe];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0xf];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0x10];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[0x11];
    }
    if (bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[0x12];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0x13];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[0x14];
    bVar3 = bVar2 != 0x75;
    if (!bVar3) {
      bVar2 = param_1[0x15];
    }
    if (bVar3 || bVar2 != 0x72) {
      return 0x51;
    }
    bVar2 = param_1[0x16];
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[0x17];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0x18];
    uVar1 = 0x42;
    goto LAB_0141019c;
  default:
    goto switchD_0140e02c_caseD_1a;
  case 0x1b:
    bVar2 = *param_1;
    if (bVar2 != 0x70) {
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[1];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[2];
      bVar3 = bVar2 != 99;
      if (!bVar3) {
        bVar2 = param_1[3];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[4];
      bVar3 = bVar2 != 0x73;
      if (!bVar3) {
        bVar2 = param_1[5];
      }
      if (bVar3 || bVar2 != 0x73) {
        return 0x51;
      }
      bVar2 = param_1[6];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[7];
      }
      if (bVar3 || bVar2 != 99) {
        return 0x51;
      }
      bVar2 = param_1[8];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[9];
      }
      if (bVar3 || bVar2 != 0x6e) {
        return 0x51;
      }
      bVar2 = param_1[10];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[0xb];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[0xc];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[0xd];
      }
      if (bVar3 || bVar2 != 0x6c) {
        return 0x51;
      }
      bVar2 = param_1[0xe];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[0xf];
      }
      if (bVar3 || bVar2 != 0x61) {
        return 0x51;
      }
      bVar2 = param_1[0x10];
      bVar3 = bVar2 != 0x6c;
      if (!bVar3) {
        bVar2 = param_1[0x11];
      }
      if (bVar3 || bVar2 != 0x6c) {
        return 0x51;
      }
      bVar2 = param_1[0x12];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[0x13];
      }
      if (bVar3 || bVar2 != 0x77) {
        return 0x51;
      }
      bVar2 = param_1[0x14];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[0x15];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0x16];
      bVar3 = bVar2 != 0x72;
      if (!bVar3) {
        bVar2 = param_1[0x17];
      }
      if (bVar3 || bVar2 != 0x69) {
        return 0x51;
      }
      bVar2 = param_1[0x18];
      bVar3 = bVar2 != 0x67;
      if (!bVar3) {
        bVar2 = param_1[0x19];
      }
      if (bVar3 || bVar2 != 0x69) {
        return 0x51;
      }
      bVar2 = param_1[0x1a];
      uVar1 = 8;
      goto LAB_014106dc;
    }
    if (param_1[1] != 0x75) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 != 0x62;
    if (!bVar3) {
      bVar2 = param_1[3];
    }
    if (bVar3 || bVar2 != 0x6c) {
      return 0x51;
    }
    bVar2 = param_1[4];
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[5];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[6];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[7];
    }
    if (bVar3 || bVar2 != 0x6b) {
      return 0x51;
    }
    bVar2 = param_1[8];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[9];
    }
    if (bVar3 || bVar2 != 0x79) {
      return 0x51;
    }
    bVar2 = param_1[10];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[0xb];
    }
    if (bVar3 || bVar2 != 0x70) {
      return 0x51;
    }
    bVar2 = param_1[0xc];
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[0xd];
    }
    if (bVar3 || bVar2 != 0x6e) {
      return 0x51;
    }
    bVar2 = param_1[0xe];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[0xf];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0x10];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0x11];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0x12];
    bVar3 = bVar2 != 0x70;
    if (!bVar3) {
      bVar2 = param_1[0x13];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0x14];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0x15];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0x16];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[0x17];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0x18];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[0x19];
    }
    if (bVar3 || bVar2 != 0x6c) {
      return 0x51;
    }
    bVar2 = param_1[0x1a];
    uVar1 = 0x35;
    goto LAB_0141019c;
  case 0x1c:
    if (*param_1 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[9];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[10];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0xb];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0xc];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0xd];
    bVar3 = bVar2 != 0x6c;
    if (!bVar3) {
      bVar2 = param_1[0xe];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0xf];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[0x10];
    }
    if (bVar3 || bVar2 != 0x6c) {
      return 0x51;
    }
    bVar2 = param_1[0x11];
    bVar3 = bVar2 != 0x6c;
    if (!bVar3) {
      bVar2 = param_1[0x12];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0x13];
    bVar3 = bVar2 != 0x77;
    if (!bVar3) {
      bVar2 = param_1[0x14];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0x15];
    if (bVar2 == 0x6d) {
      if (param_1[0x16] != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0x17];
      bVar3 = bVar2 != 0x74;
      if (!bVar3) {
        bVar2 = param_1[0x18];
      }
      if (bVar3 || bVar2 != 0x68) {
        return 0x51;
      }
      bVar2 = param_1[0x19];
      bVar3 = bVar2 != 0x6f;
      if (!bVar3) {
        bVar2 = param_1[0x1a];
      }
      if (bVar3 || bVar2 != 100) {
        return 0x51;
      }
      bVar2 = param_1[0x1b];
      uVar1 = 7;
    }
    else {
      bVar3 = bVar2 != 0x68;
      if (!bVar3) {
        bVar2 = param_1[0x16];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0x17];
      bVar3 = bVar2 != 0x61;
      if (!bVar3) {
        bVar2 = param_1[0x18];
      }
      if (bVar3 || bVar2 != 100) {
        return 0x51;
      }
      bVar2 = param_1[0x19];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[0x1a];
      }
      if (bVar3 || bVar2 != 0x72) {
        return 0x51;
      }
      bVar2 = param_1[0x1b];
      uVar1 = 6;
    }
    goto LAB_0141078c;
  case 0x1d:
    if (*param_1 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[9];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[10];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0xb];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0xc];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0xd];
    bVar3 = bVar2 != 0x6c;
    if (!bVar3) {
      bVar2 = param_1[0xe];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    if (param_1[0xf] == 0x72) {
      bVar2 = param_1[0x10];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[0x11];
      }
      if (bVar3 || bVar2 != 0x71) {
        return 0x51;
      }
      bVar2 = param_1[0x12];
      bVar3 = bVar2 != 0x75;
      if (!bVar3) {
        bVar2 = param_1[0x13];
      }
      if (bVar3 || bVar2 != 0x65) {
        return 0x51;
      }
      bVar2 = param_1[0x14];
      bVar3 = bVar2 != 0x73;
      if (!bVar3) {
        bVar2 = param_1[0x15];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0x16];
      bVar3 = bVar2 != 0x2d;
      if (!bVar3) {
        bVar2 = param_1[0x17];
      }
      if (bVar3 || bVar2 != 0x6d) {
        return 0x51;
      }
      bVar2 = param_1[0x18];
      bVar3 = bVar2 != 0x65;
      if (!bVar3) {
        bVar2 = param_1[0x19];
      }
      if (bVar3 || bVar2 != 0x74) {
        return 0x51;
      }
      bVar2 = param_1[0x1a];
      bVar3 = bVar2 != 0x68;
      if (!bVar3) {
        bVar2 = param_1[0x1b];
      }
      if (bVar3 || bVar2 != 0x6f) {
        return 0x51;
      }
      bVar2 = param_1[0x1c];
      uVar1 = 0xc;
      goto LAB_0140ee74;
    }
    if (param_1[0xf] != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0x10];
    bVar3 = bVar2 != 0x78;
    if (!bVar3) {
      bVar2 = param_1[0x11];
    }
    if (bVar3 || bVar2 != 0x70) {
      return 0x51;
    }
    bVar2 = param_1[0x12];
    bVar3 = bVar2 != 0x6f;
    if (!bVar3) {
      bVar2 = param_1[0x13];
    }
    if (bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[0x14];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0x15];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0x16];
    bVar3 = bVar2 != 0x68;
    if (!bVar3) {
      bVar2 = param_1[0x17];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0x18];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[0x19];
    }
    if (bVar3 || bVar2 != 100) {
      return 0x51;
    }
    bVar2 = param_1[0x1a];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0x1b];
    }
    if (bVar3 || bVar2 != 0x72) {
      return 0x51;
    }
    bVar2 = param_1[0x1c];
    uVar1 = 9;
    goto LAB_0141078c;
  case 0x1e:
    if (*param_1 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[9];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[10];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0xb];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0xc];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0xd];
    bVar3 = bVar2 != 0x6c;
    if (!bVar3) {
      bVar2 = param_1[0xe];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0xf];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0x10];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0x11];
    bVar3 = bVar2 != 0x71;
    if (!bVar3) {
      bVar2 = param_1[0x12];
    }
    if (bVar3 || bVar2 != 0x75) {
      return 0x51;
    }
    bVar2 = param_1[0x13];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0x14];
    }
    if (bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[0x15];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[0x16];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0x17];
    bVar3 = bVar2 != 0x68;
    if (!bVar3) {
      bVar2 = param_1[0x18];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0x19];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[0x1a];
    }
    if (bVar3 || bVar2 != 100) {
      return 0x51;
    }
    bVar2 = param_1[0x1b];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0x1c];
    }
    if (bVar3 || bVar2 != 0x72) {
      return 0x51;
    }
    bVar2 = param_1[0x1d];
    uVar1 = 0xb;
    goto LAB_0141078c;
  case 0x20:
    if (*param_1 != 0x61) {
      return 0x51;
    }
    bVar2 = param_1[1];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[2];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[3];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[4];
    }
    if (bVar3 || bVar2 != 0x73) {
      return 0x51;
    }
    bVar2 = param_1[5];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[6];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[7];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[8];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[9];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[10];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0xb];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0xc];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0xd];
    bVar3 = bVar2 != 0x6c;
    if (!bVar3) {
      bVar2 = param_1[0xe];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0xf];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[0x10];
    }
    if (bVar3 || bVar2 != 0x6c) {
      return 0x51;
    }
    bVar2 = param_1[0x11];
    bVar3 = bVar2 != 0x6c;
    if (!bVar3) {
      bVar2 = param_1[0x12];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0x13];
    bVar3 = bVar2 != 0x77;
    if (!bVar3) {
      bVar2 = param_1[0x14];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0x15];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[0x16];
    }
    if (bVar3 || bVar2 != 0x72) {
      return 0x51;
    }
    bVar2 = param_1[0x17];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0x18];
    }
    if (bVar3 || bVar2 != 100) {
      return 0x51;
    }
    bVar2 = param_1[0x19];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[0x1a];
    }
    if (bVar3 || bVar2 != 0x6e) {
      return 0x51;
    }
    bVar2 = param_1[0x1b];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[0x1c];
    }
    if (bVar3 || bVar2 != 0x69) {
      return 0x51;
    }
    bVar2 = param_1[0x1d];
    bVar3 = bVar2 != 0x61;
    if (!bVar3) {
      bVar2 = param_1[0x1e];
    }
    if (bVar3 || bVar2 != 0x6c) {
      return 0x51;
    }
    bVar2 = param_1[0x1f];
    uVar1 = 5;
LAB_0141078c:
    if (bVar2 == 0x73) {
      return uVar1;
    }
    return 0x51;
  case 0x23:
    bVar2 = *param_1;
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[1];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[2];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[3];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[4];
    bVar3 = bVar2 != 0x65;
    if (!bVar3) {
      bVar2 = param_1[5];
    }
    if (bVar3 || bVar2 != 0x6e) {
      return 0x51;
    }
    bVar2 = param_1[6];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[7];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[8];
    bVar3 = bVar2 != 0x73;
    if (!bVar3) {
      bVar2 = param_1[9];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[10];
    bVar3 = bVar2 != 99;
    if (!bVar3) {
      bVar2 = param_1[0xb];
    }
    if (bVar3 || bVar2 != 0x75) {
      return 0x51;
    }
    bVar2 = param_1[0xc];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0xd];
    }
    if (bVar3 || bVar2 != 0x69) {
      return 0x51;
    }
    bVar2 = param_1[0xe];
    bVar3 = bVar2 != 0x74;
    if (!bVar3) {
      bVar2 = param_1[0xf];
    }
    if (bVar3 || bVar2 != 0x79) {
      return 0x51;
    }
    bVar2 = param_1[0x10];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[0x11];
    }
    if (bVar3 || bVar2 != 0x70) {
      return 0x51;
    }
    bVar2 = param_1[0x12];
    bVar3 = bVar2 != 0x6f;
    if (!bVar3) {
      bVar2 = param_1[0x13];
    }
    if (bVar3 || bVar2 != 0x6c) {
      return 0x51;
    }
    bVar2 = param_1[0x14];
    bVar3 = bVar2 != 0x69;
    if (!bVar3) {
      bVar2 = param_1[0x15];
    }
    if (bVar3 || bVar2 != 99) {
      return 0x51;
    }
    bVar2 = param_1[0x16];
    bVar3 = bVar2 != 0x79;
    if (!bVar3) {
      bVar2 = param_1[0x17];
    }
    if (bVar3 || bVar2 != 0x2d) {
      return 0x51;
    }
    bVar2 = param_1[0x18];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0x19];
    }
    if (bVar3 || bVar2 != 0x65) {
      return 0x51;
    }
    bVar2 = param_1[0x1a];
    bVar3 = bVar2 != 0x70;
    if (!bVar3) {
      bVar2 = param_1[0x1b];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0x1c];
    bVar3 = bVar2 != 0x72;
    if (!bVar3) {
      bVar2 = param_1[0x1d];
    }
    if (bVar3 || bVar2 != 0x74) {
      return 0x51;
    }
    bVar2 = param_1[0x1e];
    bVar3 = bVar2 != 0x2d;
    if (!bVar3) {
      bVar2 = param_1[0x1f];
    }
    if (bVar3 || bVar2 != 0x6f) {
      return 0x51;
    }
    bVar2 = param_1[0x20];
    bVar3 = bVar2 != 0x6e;
    if (!bVar3) {
      bVar2 = param_1[0x21];
    }
    if (bVar3 || bVar2 != 0x6c) {
      return 0x51;
    }
    bVar2 = param_1[0x22];
    uVar1 = 0x1c;
LAB_0141019c:
    if (bVar2 == 0x79) {
      return uVar1;
    }
    return 0x51;
  }
LAB_0140e0cc:
  if (bVar2 == 0x65) {
    return uVar1;
  }
switchD_0140e02c_caseD_1a:
  return 0x51;
}

