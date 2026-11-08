// FUN_010a0130 @ 010a0130 size=10960 calls_out=0 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_010a0130(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  
  switch(param_2) {
  case 2:
    if (*param_1 != 't') {
      return 0x51;
    }
    cVar2 = param_1[1];
    uVar1 = 0x43;
    break;
  case 3:
    cVar2 = *param_1;
    if (cVar2 == 'v') {
      if (param_1[1] != 'i') {
        return 0x51;
      }
      cVar2 = param_1[2];
      uVar1 = 0x4a;
joined_r0x010a2a3c:
      if (cVar2 == 'a') {
        return uVar1;
      }
      return 0x51;
    }
    if (cVar2 == 'd') {
      if (param_1[1] != 'n') {
        return 0x51;
      }
      cVar2 = param_1[2];
      uVar1 = 0x1f;
      goto LAB_010a1cac;
    }
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[1];
    }
    if (bVar3 || cVar2 != 'g') {
      return 0x51;
    }
    cVar2 = param_1[2];
    uVar1 = 0xd;
    break;
  case 4:
    switch(*param_1) {
    case 'd':
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[3];
      uVar1 = 0x20;
      break;
    case 'e':
      cVar2 = param_1[1];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'a') {
        return 0x51;
      }
      cVar2 = param_1[3];
      uVar1 = 0x21;
LAB_010a2808:
      if (cVar2 == 'g') {
        return uVar1;
      }
      return 0x51;
    case 'f':
      cVar2 = param_1[1];
      bVar3 = cVar2 == 'r';
      if (bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 && cVar2 == 'o') {
        if (param_1[3] == 'm') {
          return 0x25;
        }
        return 0x51;
      }
      return 0x51;
    default:
      return 0x51;
    case 'h':
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 's') {
        return 0x51;
      }
      cVar2 = param_1[3];
      uVar1 = 0x26;
      goto LAB_010a1cac;
    case 'l':
      cVar2 = param_1[1];
      bVar3 = cVar2 == 'i';
      if (bVar3) {
        cVar2 = param_1[2];
      }
      if (!bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      if (param_1[3] == 'k') {
        return 0x2d;
      }
      return 0x51;
    case 'v':
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[3];
      uVar1 = 0x49;
      goto LAB_010a2758;
    }
    break;
  case 5:
    cVar2 = *param_1;
    if (cVar2 != 'r') {
      bVar3 = cVar2 == 'a';
      if (bVar3) {
        cVar2 = param_1[1];
      }
      if (!bVar3 || cVar2 != 'l') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 == 'l';
      if (bVar3) {
        cVar2 = param_1[3];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      if (param_1[4] == 'w') {
        return 0xe;
      }
      return 0x51;
    }
    if (param_1[1] != 'a') {
      return 0x51;
    }
    cVar2 = param_1[2];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[3];
    }
    if (bVar3 || cVar2 != 'g') {
      return 0x51;
    }
    cVar2 = param_1[4];
    uVar1 = 0x36;
    break;
  case 6:
    switch(*param_1) {
    case 'a':
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'c';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[5];
      uVar1 = 0;
      break;
    default:
      goto switchD_010a0144_caseD_1a;
    case 'c':
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != 'k';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[5];
      uVar1 = 0x1e;
      goto LAB_010a01e4;
    case 'e':
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'x';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[5];
      uVar1 = 0x22;
      break;
    case 'o':
      cVar2 = param_1[1];
      bVar3 = cVar2 == 'r';
      if (bVar3) {
        cVar2 = param_1[2];
      }
      if (!bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 == 'g';
      if (bVar3) {
        cVar2 = param_1[4];
      }
      if (!bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[5];
      uVar1 = 0x30;
      goto joined_r0x010a0fb0;
    case 'p':
      cVar2 = param_1[1];
      bVar3 = cVar2 == 'r';
      if (bVar3) {
        cVar2 = param_1[2];
      }
      if (!bVar3 || cVar2 != 'a') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 == 'g';
      if (bVar3) {
        cVar2 = param_1[4];
      }
      if (!bVar3 || cVar2 != 'm') {
        return 0x51;
      }
      cVar2 = param_1[5];
      uVar1 = 0x31;
      goto joined_r0x010a2a3c;
    case 's':
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != 'v';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[5];
      uVar1 = 0x40;
      goto LAB_010a298c;
    }
    goto LAB_010a1cac;
  case 7:
    switch(*param_1) {
    case 'a':
      if (param_1[1] != 'l') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 == 't';
      if (bVar3) {
        cVar2 = param_1[3];
      }
      if (!bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 == 's';
      if (bVar3) {
        cVar2 = param_1[5];
      }
      if (!bVar3 || cVar2 != 'v') {
        return 0x51;
      }
      if (param_1[6] == 'c') {
        return 0xf;
      }
      return 0x51;
    default:
      return 0x51;
    case 'e':
      if (param_1[1] != 'x') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'p';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'r';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[6];
      uVar1 = 0x23;
      goto LAB_010a2850;
    case 'r':
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'f') {
        return 0x51;
      }
      if (param_1[3] == 'r') {
        cVar2 = param_1[4];
        bVar3 = cVar2 != 'e';
        if (!bVar3) {
          cVar2 = param_1[5];
        }
        if (bVar3 || cVar2 != 's') {
          return 0x51;
        }
        cVar2 = param_1[6];
        uVar1 = 0x39;
        goto LAB_010a2ca4;
      }
      if (param_1[3] != 'e') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'r';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[6];
      uVar1 = 0x37;
      break;
    case 't':
      if (param_1[1] != 'r') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'l';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[6];
      uVar1 = 0x44;
      break;
    case 'u':
      if (param_1[1] != 'p') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'g';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'd') {
        return 0x51;
      }
      cVar2 = param_1[6];
      uVar1 = 0x47;
      goto LAB_010a01e4;
    case 'w':
      if (param_1[1] != 'a') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'r';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[6];
      uVar1 = 0x4b;
      goto LAB_010a2808;
    }
LAB_010a298c:
    if (cVar2 == 'r') {
      return uVar1;
    }
    return 0x51;
  case 8:
    if (*param_1 == 'l') {
      cVar2 = param_1[1];
      bVar3 = cVar2 == 'o';
      if (bVar3) {
        cVar2 = param_1[2];
      }
      if (!bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 == 'a';
      if (bVar3) {
        cVar2 = param_1[4];
      }
      if (!bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 == 'i';
      if (bVar3) {
        cVar2 = param_1[6];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[7];
      uVar1 = 0x2e;
      goto joined_r0x010a0fb0;
    }
    if (*param_1 != 'i') {
      return 0x51;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'f';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[3];
    if (cVar2 != 'r') {
      bVar3 = cVar2 != 'm';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'a') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[6];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[7];
      uVar1 = 0x27;
      goto LAB_010a2ca4;
    }
    if (param_1[4] != 'a') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != 'g') {
      return 0x51;
    }
    cVar2 = param_1[7];
    uVar1 = 0x2a;
    break;
  case 9:
    cVar2 = *param_1;
    bVar3 = cVar2 != 'f';
    if (!bVar3) {
      cVar2 = param_1[1];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[2];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[3];
    }
    if (bVar3 || cVar2 != 'w') {
      return 0x51;
    }
    cVar2 = param_1[4];
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[5];
    }
    if (bVar3 || cVar2 != 'r') {
      return 0x51;
    }
    cVar2 = param_1[6];
    bVar3 = cVar2 != 'd';
    if (!bVar3) {
      cVar2 = param_1[7];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[8];
    uVar1 = 0x24;
LAB_010a10a4:
    if (cVar2 == 'd') {
      return uVar1;
    }
    return 0x51;
  case 10:
    cVar2 = *param_1;
    if (cVar2 == 'u') {
      cVar2 = param_1[1];
      bVar3 = cVar2 != 's';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != 'r';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[6];
      }
      if (bVar3 || cVar2 != 'g') {
        return 0x51;
      }
      cVar2 = param_1[7];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[8];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[9];
      uVar1 = 0x46;
      goto LAB_010a1cac;
    }
    if (cVar2 != 's') {
      if (cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[1];
      bVar3 = cVar2 == 'o';
      if (bVar3) {
        cVar2 = param_1[2];
      }
      if (!bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 == 'n';
      if (bVar3) {
        cVar2 = param_1[4];
      }
      if (!bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 == 'c';
      if (bVar3) {
        cVar2 = param_1[6];
      }
      if (!bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[7];
      bVar3 = cVar2 == 'i';
      if (bVar3) {
        cVar2 = param_1[8];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[9];
      uVar1 = 0x14;
      goto joined_r0x010a0fb0;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 'o';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != 'k';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 'i') {
      return 0x51;
    }
    cVar2 = param_1[9];
    uVar1 = 0x41;
    break;
  case 0xb:
    cVar2 = *param_1;
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[1];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[2];
    bVar3 = cVar2 != 't';
    if (!bVar3) {
      cVar2 = param_1[3];
    }
    if (bVar3 || cVar2 != 'r') {
      return 0x51;
    }
    cVar2 = param_1[4];
    bVar3 = cVar2 != 'y';
    if (!bVar3) {
      cVar2 = param_1[5];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[6];
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[7];
    }
    if (bVar3 || cVar2 != 'f') {
      return 0x51;
    }
    cVar2 = param_1[8];
    bVar3 = cVar2 != 't';
    if (!bVar3) {
      cVar2 = param_1[9];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[10];
    uVar1 = 0x3a;
    goto LAB_010a298c;
  case 0xc:
    if (*param_1 == 'm') {
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'x') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'f') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[6];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[7];
      bVar3 = cVar2 != 'w';
      if (!bVar3) {
        cVar2 = param_1[8];
      }
      if (bVar3 || cVar2 != 'a') {
        return 0x51;
      }
      cVar2 = param_1[9];
      bVar3 = cVar2 != 'r';
      if (!bVar3) {
        cVar2 = param_1[10];
      }
      if (bVar3 || cVar2 != 'd') {
        return 0x51;
      }
      cVar2 = param_1[0xb];
      uVar1 = 0x2f;
      goto LAB_010a2850;
    }
    if (*param_1 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[1];
    if (cVar2 == 'a') {
      if (param_1[2] != 'c') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != 'h';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[6];
      }
      if (bVar3 || cVar2 != 's') {
        return 0x51;
      }
      cVar2 = param_1[7];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[8];
      }
      if (bVar3 || cVar2 != 'a') {
        return 0x51;
      }
      cVar2 = param_1[9];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[10];
      }
      if (bVar3 || cVar2 != 'u') {
        return 0x51;
      }
      cVar2 = param_1[0xb];
      uVar1 = 0x12;
      goto LAB_010a2850;
    }
    bVar3 = cVar2 != 'o';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 'n') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != 't';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[9];
    bVar3 = cVar2 != 'y';
    if (!bVar3) {
      cVar2 = param_1[10];
    }
    if (bVar3 || cVar2 != 'p') {
      return 0x51;
    }
    cVar2 = param_1[0xb];
    uVar1 = 0x1d;
    break;
  case 0xd:
    switch(*param_1) {
    case 'a':
      if (param_1[1] == 'c') {
        cVar2 = param_1[2];
        bVar3 = cVar2 != 'c';
        if (!bVar3) {
          cVar2 = param_1[3];
        }
        if (bVar3 || cVar2 != 'e') {
          return 0x51;
        }
        cVar2 = param_1[4];
        bVar3 = cVar2 != 'p';
        if (!bVar3) {
          cVar2 = param_1[5];
        }
        if (bVar3 || cVar2 != 't') {
          return 0x51;
        }
        cVar2 = param_1[6];
        bVar3 = cVar2 != '-';
        if (!bVar3) {
          cVar2 = param_1[7];
        }
        if (bVar3 || cVar2 != 'r') {
          return 0x51;
        }
        cVar2 = param_1[8];
        bVar3 = cVar2 != 'a';
        if (!bVar3) {
          cVar2 = param_1[9];
        }
        if (bVar3 || cVar2 != 'n') {
          return 0x51;
        }
        cVar2 = param_1[10];
        bVar3 = cVar2 != 'g';
        if (!bVar3) {
          cVar2 = param_1[0xb];
        }
        if (bVar3 || cVar2 != 'e') {
          return 0x51;
        }
        cVar2 = param_1[0xc];
        uVar1 = 4;
        goto LAB_010a2850;
      }
      if (param_1[1] != 'u') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 == 't';
      if (bVar3) {
        cVar2 = param_1[3];
      }
      if (!bVar3 || cVar2 != 'h') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 == 'o';
      if (bVar3) {
        cVar2 = param_1[5];
      }
      if (!bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 == 'i';
      if (bVar3) {
        cVar2 = param_1[7];
      }
      if (!bVar3 || cVar2 != 'z') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 == 'a';
      if (bVar3) {
        cVar2 = param_1[9];
      }
      if (!bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 == 'i';
      if (bVar3) {
        cVar2 = param_1[0xb];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      uVar1 = 0x10;
      goto joined_r0x010a0fb0;
    default:
      goto switchD_010a0144_caseD_1a;
    case 'c':
      if (param_1[1] == 'a') {
        cVar2 = param_1[2];
        bVar3 = cVar2 == 'c';
        if (bVar3) {
          cVar2 = param_1[3];
        }
        if (!bVar3 || cVar2 != 'h') {
          return 0x51;
        }
        cVar2 = param_1[4];
        bVar3 = cVar2 == 'e';
        if (bVar3) {
          cVar2 = param_1[5];
        }
        if (!bVar3 || cVar2 != '-') {
          return 0x51;
        }
        cVar2 = param_1[6];
        bVar3 = cVar2 == 'c';
        if (bVar3) {
          cVar2 = param_1[7];
        }
        if (!bVar3 || cVar2 != 'o') {
          return 0x51;
        }
        cVar2 = param_1[8];
        bVar3 = cVar2 == 'n';
        if (bVar3) {
          cVar2 = param_1[9];
        }
        if (!bVar3 || cVar2 != 't') {
          return 0x51;
        }
        cVar2 = param_1[10];
        bVar3 = cVar2 == 'r';
        if (bVar3) {
          cVar2 = param_1[0xb];
        }
        if (!bVar3 || cVar2 != 'o') {
          return 0x51;
        }
        cVar2 = param_1[0xc];
        uVar1 = 0x11;
        goto joined_r0x010a2c54;
      }
      if (param_1[1] != 'o') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'n';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != 'r';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'a') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != 'n';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != 'g') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      uVar1 = 0x1a;
      break;
    case 'i':
      if (param_1[1] != 'f') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != 'm';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'a') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      uVar1 = 0x29;
LAB_010a2ca4:
      if (cVar2 == 'h') {
        return uVar1;
      }
      return 0x51;
    case 'l':
      if (param_1[1] != 'a') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 's';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'm') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != 'd') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'f') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      uVar1 = 0x2c;
      goto LAB_010a10a4;
    }
    break;
  case 0xe:
    if (*param_1 == 'c') {
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 != 'n';
      if (!bVar3) {
        cVar2 = param_1[6];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[7];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[8];
      }
      if (bVar3 || cVar2 != 'l') {
        return 0x51;
      }
      cVar2 = param_1[9];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[10];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[0xb];
      bVar3 = cVar2 != 'g';
      if (!bVar3) {
        cVar2 = param_1[0xc];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0xd];
      uVar1 = 0x18;
      goto LAB_010a2ca4;
    }
    if (*param_1 != 'a') {
      return 0x51;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 'p') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 't';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 'h') {
      return 0x51;
    }
    cVar2 = param_1[9];
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[10];
    }
    if (bVar3 || cVar2 != 'r') {
      return 0x51;
    }
    cVar2 = param_1[0xb];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[0xc];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0xd];
    uVar1 = 1;
    goto LAB_010a1cac;
  case 0xf:
    switch(*param_1) {
    case 'a':
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'c';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[6];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      if (param_1[7] != 'l') {
        if (param_1[7] != 'e') {
          return 0x51;
        }
        cVar2 = param_1[8];
        bVar3 = cVar2 != 'n';
        if (!bVar3) {
          cVar2 = param_1[9];
        }
        if (bVar3 || cVar2 != 'c') {
          return 0x51;
        }
        cVar2 = param_1[10];
        bVar3 = cVar2 != 'o';
        if (!bVar3) {
          cVar2 = param_1[0xb];
        }
        if (bVar3 || cVar2 != 'd') {
          return 0x51;
        }
        cVar2 = param_1[0xc];
        bVar3 = cVar2 != 'i';
        if (!bVar3) {
          cVar2 = param_1[0xd];
        }
        if (bVar3 || cVar2 != 'n') {
          return 0x51;
        }
        cVar2 = param_1[0xe];
        uVar1 = 2;
        goto LAB_010a2808;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != 'g';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != 'u') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[0xd];
      }
      if (bVar3 || cVar2 != 'g') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      uVar1 = 3;
      goto LAB_010a01e4;
    default:
      goto switchD_010a0144_caseD_1a;
    case 'p':
      if (param_1[1] != 'u') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'b';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'l') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != 'k') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'y') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[0xd];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      uVar1 = 0x34;
      break;
    case 'r':
      if (param_1[1] != 'e') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'f';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'r';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != 'l') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[0xd];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      uVar1 = 0x38;
      goto LAB_010a2758;
    case 'x':
      if (param_1[1] != '-') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'f';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'm') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[0xd];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      uVar1 = 0x4f;
    }
    goto LAB_010a2850;
  case 0x10:
    cVar2 = *param_1;
    if (cVar2 == 'x') {
      cVar2 = param_1[1];
      bVar3 = cVar2 == '-';
      if (bVar3) {
        cVar2 = param_1[2];
      }
      if (!bVar3 || cVar2 != 'x') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 == 's';
      if (bVar3) {
        cVar2 = param_1[4];
      }
      if (!bVar3 || cVar2 != 's') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 == '-';
      if (bVar3) {
        cVar2 = param_1[6];
      }
      if (!bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[7];
      bVar3 = cVar2 == 'r';
      if (bVar3) {
        cVar2 = param_1[8];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[9];
      bVar3 = cVar2 == 't';
      if (bVar3) {
        cVar2 = param_1[10];
      }
      if (!bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[0xb];
      bVar3 = cVar2 == 'c';
      if (bVar3) {
        cVar2 = param_1[0xc];
      }
      if (!bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0xd];
      bVar3 = cVar2 == 'i';
      if (bVar3) {
        cVar2 = param_1[0xe];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0xf];
      uVar1 = 0x50;
      goto joined_r0x010a0fb0;
    }
    if (cVar2 == 'w') {
      cVar2 = param_1[1];
      bVar3 = cVar2 != 'w';
      if (!bVar3) {
        cVar2 = param_1[2];
      }
      if (bVar3 || cVar2 != 'w') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'a') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 != 'u';
      if (!bVar3) {
        cVar2 = param_1[6];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[7];
      bVar3 = cVar2 != 'h';
      if (!bVar3) {
        cVar2 = param_1[8];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[9];
      bVar3 = cVar2 != 'n';
      if (!bVar3) {
        cVar2 = param_1[10];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0xb];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[0xc];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[0xd];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[0xe];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0xf];
      uVar1 = 0x4c;
    }
    else {
      bVar3 = cVar2 != 'c';
      if (!bVar3) {
        cVar2 = param_1[1];
      }
      if (bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'n';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      if (param_1[8] != 'l') {
        if (param_1[8] != 'e') {
          return 0x51;
        }
        cVar2 = param_1[9];
        bVar3 = cVar2 != 'n';
        if (!bVar3) {
          cVar2 = param_1[10];
        }
        if (bVar3 || cVar2 != 'c') {
          return 0x51;
        }
        cVar2 = param_1[0xb];
        bVar3 = cVar2 != 'o';
        if (!bVar3) {
          cVar2 = param_1[0xc];
        }
        if (bVar3 || cVar2 != 'd') {
          return 0x51;
        }
        cVar2 = param_1[0xd];
        bVar3 = cVar2 != 'i';
        if (!bVar3) {
          cVar2 = param_1[0xe];
        }
        if (bVar3 || cVar2 != 'n') {
          return 0x51;
        }
        cVar2 = param_1[0xf];
        uVar1 = 0x16;
        goto LAB_010a2808;
      }
      cVar2 = param_1[9];
      if (cVar2 != 'a') {
        bVar3 = cVar2 == 'o';
        if (bVar3) {
          cVar2 = param_1[10];
        }
        if (!bVar3 || cVar2 != 'c') {
          return 0x51;
        }
        cVar2 = param_1[0xb];
        bVar3 = cVar2 == 'a';
        if (bVar3) {
          cVar2 = param_1[0xc];
        }
        if (!bVar3 || cVar2 != 't') {
          return 0x51;
        }
        cVar2 = param_1[0xd];
        bVar3 = cVar2 == 'i';
        if (bVar3) {
          cVar2 = param_1[0xe];
        }
        if (!bVar3 || cVar2 != 'o') {
          return 0x51;
        }
        cVar2 = param_1[0xf];
        uVar1 = 0x19;
        goto joined_r0x010a0fb0;
      }
      if (param_1[10] != 'n') {
        return 0x51;
      }
      cVar2 = param_1[0xb];
      bVar3 = cVar2 != 'g';
      if (!bVar3) {
        cVar2 = param_1[0xc];
      }
      if (bVar3 || cVar2 != 'u') {
        return 0x51;
      }
      cVar2 = param_1[0xd];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[0xe];
      }
      if (bVar3 || cVar2 != 'g') {
        return 0x51;
      }
      cVar2 = param_1[0xf];
      uVar1 = 0x17;
    }
    break;
  case 0x11:
    switch(*param_1) {
    case 'c':
      if (param_1[1] != 'd') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 == 'n';
      if (bVar3) {
        cVar2 = param_1[3];
      }
      if (!bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 == 'c';
      if (bVar3) {
        cVar2 = param_1[5];
      }
      if (!bVar3 || cVar2 != 'a') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 == 'c';
      if (bVar3) {
        cVar2 = param_1[7];
      }
      if (!bVar3 || cVar2 != 'h') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 == 'e';
      if (bVar3) {
        cVar2 = param_1[9];
      }
      if (!bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 == 'c';
      if (bVar3) {
        cVar2 = param_1[0xb];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 == 'n';
      if (bVar3) {
        cVar2 = param_1[0xd];
      }
      if (!bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      bVar3 = cVar2 == 'r';
      if (bVar3) {
        cVar2 = param_1[0xf];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0x10];
      uVar1 = 0x13;
      goto joined_r0x010a2c54;
    default:
      goto switchD_010a0144_caseD_1a;
    case 'i':
      if (param_1[1] != 'f') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'm') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'd') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != 'f') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != 'd';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 != 's';
      if (!bVar3) {
        cVar2 = param_1[0xd];
      }
      if (bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      bVar3 = cVar2 != 'n';
      if (!bVar3) {
        cVar2 = param_1[0xf];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[0x10];
      uVar1 = 0x28;
      break;
    case 's':
      if (param_1[1] != 'e') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'c';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'w';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != 'b';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != 's') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != 'k';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[0xd];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      bVar3 = cVar2 != 'k';
      if (!bVar3) {
        cVar2 = param_1[0xf];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[0x10];
      uVar1 = 0x3d;
      goto LAB_010a2758;
    case 't':
      if (param_1[1] != 'r') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 's';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'f') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != 'n';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[0xd];
      }
      if (bVar3 || cVar2 != 'd') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[0xf];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[0x10];
      uVar1 = 0x45;
      goto LAB_010a2808;
    }
    break;
  case 0x12:
    if (*param_1 != 'p') {
      return 0x51;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != 'x';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 'y') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != 'a') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != 'u';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[9];
    bVar3 = cVar2 != 'h';
    if (!bVar3) {
      cVar2 = param_1[10];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0xb];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[0xc];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0xd];
    bVar3 = cVar2 != 'i';
    if (!bVar3) {
      cVar2 = param_1[0xe];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[0xf];
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[0x10];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0x11];
    uVar1 = 0x32;
    break;
  case 0x13:
    cVar2 = *param_1;
    if (cVar2 == 'p') {
      if (param_1[1] != 'r') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 == 'o';
      if (bVar3) {
        cVar2 = param_1[3];
      }
      if (!bVar3 || cVar2 != 'x') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 == 'y';
      if (bVar3) {
        cVar2 = param_1[5];
      }
      if (!bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 == 'a';
      if (bVar3) {
        cVar2 = param_1[7];
      }
      if (!bVar3 || cVar2 != 'u') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 == 't';
      if (bVar3) {
        cVar2 = param_1[9];
      }
      if (!bVar3 || cVar2 != 'h') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 == 'o';
      if (bVar3) {
        cVar2 = param_1[0xb];
      }
      if (!bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 == 'i';
      if (bVar3) {
        cVar2 = param_1[0xd];
      }
      if (!bVar3 || cVar2 != 'z') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      bVar3 = cVar2 == 'a';
      if (bVar3) {
        cVar2 = param_1[0xf];
      }
      if (!bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0x10];
      bVar3 = cVar2 == 'i';
      if (bVar3) {
        cVar2 = param_1[0x11];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0x12];
      uVar1 = 0x33;
      goto joined_r0x010a0fb0;
    }
    if (cVar2 != 'i') {
      bVar3 = cVar2 == 'c';
      if (bVar3) {
        cVar2 = param_1[1];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 == 'n';
      if (bVar3) {
        cVar2 = param_1[3];
      }
      if (!bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 == 'e';
      if (bVar3) {
        cVar2 = param_1[5];
      }
      if (!bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 == 't';
      if (bVar3) {
        cVar2 = param_1[7];
      }
      if (!bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 == 'd';
      if (bVar3) {
        cVar2 = param_1[9];
      }
      if (!bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 == 's';
      if (bVar3) {
        cVar2 = param_1[0xb];
      }
      if (!bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 == 'o';
      if (bVar3) {
        cVar2 = param_1[0xd];
      }
      if (!bVar3 || cVar2 != 's') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      bVar3 = cVar2 == 'i';
      if (bVar3) {
        cVar2 = param_1[0xf];
      }
      if (!bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0x10];
      bVar3 = cVar2 == 'i';
      if (bVar3) {
        cVar2 = param_1[0x11];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0x12];
      uVar1 = 0x15;
      goto joined_r0x010a0fb0;
    }
    if (param_1[1] != 'f') {
      return 0x51;
    }
    cVar2 = param_1[2];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[3];
    }
    if (bVar3 || cVar2 != 'u') {
      return 0x51;
    }
    cVar2 = param_1[4];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[5];
    }
    if (bVar3 || cVar2 != 'm') {
      return 0x51;
    }
    cVar2 = param_1[6];
    bVar3 = cVar2 != 'o';
    if (!bVar3) {
      cVar2 = param_1[7];
    }
    if (bVar3 || cVar2 != 'd') {
      return 0x51;
    }
    cVar2 = param_1[8];
    bVar3 = cVar2 != 'i';
    if (!bVar3) {
      cVar2 = param_1[9];
    }
    if (bVar3 || cVar2 != 'f') {
      return 0x51;
    }
    cVar2 = param_1[10];
    bVar3 = cVar2 != 'i';
    if (!bVar3) {
      cVar2 = param_1[0xb];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0xc];
    bVar3 = cVar2 != 'd';
    if (!bVar3) {
      cVar2 = param_1[0xd];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0xe];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[0xf];
    }
    if (bVar3 || cVar2 != 'i') {
      return 0x51;
    }
    cVar2 = param_1[0x10];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[0x11];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[0x12];
    uVar1 = 0x2b;
    break;
  case 0x14:
    if (*param_1 != 's') {
      return 0x51;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 'w') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != 'b') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[9];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[10];
    }
    if (bVar3 || cVar2 != 'k') {
      return 0x51;
    }
    cVar2 = param_1[0xb];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0xc];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0xd];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[0xe];
    }
    if (bVar3 || cVar2 != 'a') {
      return 0x51;
    }
    cVar2 = param_1[0xf];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[0x10];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[0x11];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0x12];
    }
    if (bVar3 || cVar2 != 'p') {
      return 0x51;
    }
    cVar2 = param_1[0x13];
    uVar1 = 0x3b;
LAB_010a1cac:
    if (cVar2 == 't') {
      return uVar1;
    }
    return 0x51;
  case 0x15:
    cVar2 = *param_1;
    bVar3 = cVar2 == 's';
    if (bVar3) {
      cVar2 = param_1[1];
    }
    if (!bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[2];
    bVar3 = cVar2 == 'c';
    if (bVar3) {
      cVar2 = param_1[3];
    }
    if (!bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[4];
    bVar3 = cVar2 == 'w';
    if (bVar3) {
      cVar2 = param_1[5];
    }
    if (!bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[6];
    bVar3 = cVar2 == 'b';
    if (bVar3) {
      cVar2 = param_1[7];
    }
    if (!bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[8];
    bVar3 = cVar2 == 'o';
    if (bVar3) {
      cVar2 = param_1[9];
    }
    if (!bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[10];
    bVar3 = cVar2 == 'k';
    if (bVar3) {
      cVar2 = param_1[0xb];
    }
    if (!bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0xc];
    bVar3 = cVar2 == 't';
    if (bVar3) {
      cVar2 = param_1[0xd];
    }
    if (!bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0xe];
    bVar3 = cVar2 == 'v';
    if (bVar3) {
      cVar2 = param_1[0xf];
    }
    if (!bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0x10];
    bVar3 = cVar2 == 'r';
    if (bVar3) {
      cVar2 = param_1[0x11];
    }
    if (!bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[0x12];
    bVar3 = cVar2 == 'i';
    if (bVar3) {
      cVar2 = param_1[0x13];
    }
    if (!bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0x14];
    uVar1 = 0x3f;
joined_r0x010a0fb0:
    if (cVar2 == 'n') {
      return uVar1;
    }
    return 0x51;
  case 0x16:
    cVar2 = *param_1;
    if (cVar2 == 'x') {
      if (param_1[1] != '-') {
        return 0x51;
      }
      if (param_1[2] == 'd') {
        cVar2 = param_1[3];
        bVar3 = cVar2 == 'n';
        if (bVar3) {
          cVar2 = param_1[4];
        }
        if (!bVar3 || cVar2 != 's') {
          return 0x51;
        }
        cVar2 = param_1[5];
        bVar3 = cVar2 == '-';
        if (bVar3) {
          cVar2 = param_1[6];
        }
        if (!bVar3 || cVar2 != 'p') {
          return 0x51;
        }
        cVar2 = param_1[7];
        bVar3 = cVar2 == 'r';
        if (bVar3) {
          cVar2 = param_1[8];
        }
        if (!bVar3 || cVar2 != 'e') {
          return 0x51;
        }
        cVar2 = param_1[9];
        bVar3 = cVar2 == 'f';
        if (bVar3) {
          cVar2 = param_1[10];
        }
        if (!bVar3 || cVar2 != 'e') {
          return 0x51;
        }
        cVar2 = param_1[0xb];
        bVar3 = cVar2 == 't';
        if (bVar3) {
          cVar2 = param_1[0xc];
        }
        if (!bVar3 || cVar2 != 'c') {
          return 0x51;
        }
        cVar2 = param_1[0xd];
        bVar3 = cVar2 == 'h';
        if (bVar3) {
          cVar2 = param_1[0xe];
        }
        if (!bVar3 || cVar2 != '-') {
          return 0x51;
        }
        cVar2 = param_1[0xf];
        bVar3 = cVar2 == 'c';
        if (bVar3) {
          cVar2 = param_1[0x10];
        }
        if (!bVar3 || cVar2 != 'o') {
          return 0x51;
        }
        cVar2 = param_1[0x11];
        bVar3 = cVar2 == 'n';
        if (bVar3) {
          cVar2 = param_1[0x12];
        }
        if (!bVar3 || cVar2 != 't') {
          return 0x51;
        }
        cVar2 = param_1[0x13];
        bVar3 = cVar2 == 'r';
        if (bVar3) {
          cVar2 = param_1[0x14];
        }
        if (!bVar3 || cVar2 != 'o') {
          return 0x51;
        }
        cVar2 = param_1[0x15];
        uVar1 = 0x4e;
        goto joined_r0x010a2c54;
      }
      if (param_1[2] != 'c') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[4];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[6];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[7];
      bVar3 = cVar2 != 'n';
      if (!bVar3) {
        cVar2 = param_1[8];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[9];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[10];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0xb];
      bVar3 = cVar2 != 'y';
      if (!bVar3) {
        cVar2 = param_1[0xc];
      }
      if (bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[0xd];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[0xe];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[0xf];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[0x10];
      }
      if (bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[0x11];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[0x12];
      }
      if (bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[0x13];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[0x14];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[0x15];
      uVar1 = 0x4d;
      goto LAB_010a2850;
    }
    if (cVar2 == 's') {
      cVar2 = param_1[1];
      bVar3 = cVar2 == 'e';
      if (bVar3) {
        cVar2 = param_1[2];
      }
      if (!bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[3];
      bVar3 = cVar2 == '-';
      if (bVar3) {
        cVar2 = param_1[4];
      }
      if (!bVar3 || cVar2 != 'w') {
        return 0x51;
      }
      cVar2 = param_1[5];
      bVar3 = cVar2 == 'e';
      if (bVar3) {
        cVar2 = param_1[6];
      }
      if (!bVar3 || cVar2 != 'b') {
        return 0x51;
      }
      cVar2 = param_1[7];
      bVar3 = cVar2 == 's';
      if (bVar3) {
        cVar2 = param_1[8];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[9];
      bVar3 = cVar2 == 'c';
      if (bVar3) {
        cVar2 = param_1[10];
      }
      if (!bVar3 || cVar2 != 'k') {
        return 0x51;
      }
      cVar2 = param_1[0xb];
      bVar3 = cVar2 == 'e';
      if (bVar3) {
        cVar2 = param_1[0xc];
      }
      if (!bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0xd];
      bVar3 = cVar2 == '-';
      if (bVar3) {
        cVar2 = param_1[0xe];
      }
      if (!bVar3 || cVar2 != 'p') {
        return 0x51;
      }
      cVar2 = param_1[0xf];
      bVar3 = cVar2 == 'r';
      if (bVar3) {
        cVar2 = param_1[0x10];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0x11];
      bVar3 = cVar2 == 't';
      if (bVar3) {
        cVar2 = param_1[0x12];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0x13];
      bVar3 = cVar2 == 'c';
      if (bVar3) {
        cVar2 = param_1[0x14];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0x15];
      uVar1 = 0x3e;
joined_r0x010a2c54:
      if (cVar2 == 'l') {
        return uVar1;
      }
      return 0x51;
    }
    if (cVar2 != 'a') {
      return 0x51;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[9];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[10];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0xb];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0xc];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0xd];
    bVar3 = cVar2 != 'l';
    if (!bVar3) {
      cVar2 = param_1[0xe];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0xf];
    bVar3 = cVar2 != 'm';
    if (!bVar3) {
      cVar2 = param_1[0x10];
    }
    if (bVar3 || cVar2 != 'a') {
      return 0x51;
    }
    cVar2 = param_1[0x11];
    bVar3 = cVar2 != 'x';
    if (!bVar3) {
      cVar2 = param_1[0x12];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0x13];
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[0x14];
    }
    if (bVar3 || cVar2 != 'g') {
      return 0x51;
    }
    cVar2 = param_1[0x15];
    uVar1 = 10;
    break;
  case 0x17:
    cVar2 = *param_1;
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[1];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[2];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[3];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[4];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[5];
    }
    if (bVar3 || cVar2 != 'n') {
      return 0x51;
    }
    cVar2 = param_1[6];
    bVar3 = cVar2 != 't';
    if (!bVar3) {
      cVar2 = param_1[7];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[8];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[9];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[10];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[0xb];
    }
    if (bVar3 || cVar2 != 'u') {
      return 0x51;
    }
    cVar2 = param_1[0xc];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0xd];
    }
    if (bVar3 || cVar2 != 'i') {
      return 0x51;
    }
    cVar2 = param_1[0xe];
    bVar3 = cVar2 != 't';
    if (!bVar3) {
      cVar2 = param_1[0xf];
    }
    if (bVar3 || cVar2 != 'y') {
      return 0x51;
    }
    cVar2 = param_1[0x10];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[0x11];
    }
    if (bVar3 || cVar2 != 'p') {
      return 0x51;
    }
    cVar2 = param_1[0x12];
    bVar3 = cVar2 != 'o';
    if (!bVar3) {
      cVar2 = param_1[0x13];
    }
    if (bVar3 || cVar2 != 'l') {
      return 0x51;
    }
    cVar2 = param_1[0x14];
    bVar3 = cVar2 != 'i';
    if (!bVar3) {
      cVar2 = param_1[0x15];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[0x16];
    uVar1 = 0x1b;
    goto LAB_010a2758;
  case 0x18:
    if (*param_1 != 's') {
      return 0x51;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 'w') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != 'b') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[9];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[10];
    }
    if (bVar3 || cVar2 != 'k') {
      return 0x51;
    }
    cVar2 = param_1[0xb];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0xc];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0xd];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[0xe];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0xf];
    bVar3 = cVar2 != 'x';
    if (!bVar3) {
      cVar2 = param_1[0x10];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0x11];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0x12];
    }
    if (bVar3 || cVar2 != 'n') {
      return 0x51;
    }
    cVar2 = param_1[0x13];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[0x14];
    }
    if (bVar3 || cVar2 != 'i') {
      return 0x51;
    }
    cVar2 = param_1[0x15];
    bVar3 = cVar2 != 'o';
    if (!bVar3) {
      cVar2 = param_1[0x16];
    }
    if (bVar3 || cVar2 != 'n') {
      return 0x51;
    }
    cVar2 = param_1[0x17];
    uVar1 = 0x3c;
    goto LAB_010a2850;
  case 0x19:
    cVar2 = *param_1;
    if (cVar2 == 'u') {
      if (param_1[1] != 'p') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 != 'g';
      if (!bVar3) {
        cVar2 = param_1[3];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[5];
      }
      if (bVar3 || cVar2 != 'd') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[7];
      }
      if (bVar3 || cVar2 != '-') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 != 'i';
      if (!bVar3) {
        cVar2 = param_1[9];
      }
      if (bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 != 's';
      if (!bVar3) {
        cVar2 = param_1[0xb];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 != 'c';
      if (!bVar3) {
        cVar2 = param_1[0xd];
      }
      if (bVar3 || cVar2 != 'u') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      bVar3 = cVar2 != 'r';
      if (!bVar3) {
        cVar2 = param_1[0xf];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[0x10];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[0x11];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[0x12];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[0x13];
      }
      if (bVar3 || cVar2 != 'q') {
        return 0x51;
      }
      cVar2 = param_1[0x14];
      bVar3 = cVar2 != 'u';
      if (!bVar3) {
        cVar2 = param_1[0x15];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[0x16];
      bVar3 = cVar2 != 's';
      if (!bVar3) {
        cVar2 = param_1[0x17];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0x18];
      uVar1 = 0x48;
      goto LAB_010a2850;
    }
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[1];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[2];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[3];
    }
    if (bVar3 || cVar2 != 'i') {
      return 0x51;
    }
    cVar2 = param_1[4];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[5];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[6];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[7];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[8];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[9];
    }
    if (bVar3 || cVar2 != 'a') {
      return 0x51;
    }
    cVar2 = param_1[10];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[0xb];
    }
    if (bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[0xc];
    bVar3 = cVar2 != 'p';
    if (!bVar3) {
      cVar2 = param_1[0xd];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0xe];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0xf];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0x10];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[0x11];
    }
    if (bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[0x12];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0x13];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[0x14];
    bVar3 = cVar2 != 'u';
    if (!bVar3) {
      cVar2 = param_1[0x15];
    }
    if (bVar3 || cVar2 != 'r') {
      return 0x51;
    }
    cVar2 = param_1[0x16];
    bVar3 = cVar2 != 'i';
    if (!bVar3) {
      cVar2 = param_1[0x17];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0x18];
    uVar1 = 0x42;
    goto LAB_010a2758;
  default:
    goto switchD_010a0144_caseD_1a;
  case 0x1b:
    cVar2 = *param_1;
    if (cVar2 != 'p') {
      bVar3 = cVar2 == 'a';
      if (bVar3) {
        cVar2 = param_1[1];
      }
      if (!bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[2];
      bVar3 = cVar2 == 'c';
      if (bVar3) {
        cVar2 = param_1[3];
      }
      if (!bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[4];
      bVar3 = cVar2 == 's';
      if (bVar3) {
        cVar2 = param_1[5];
      }
      if (!bVar3 || cVar2 != 's') {
        return 0x51;
      }
      cVar2 = param_1[6];
      bVar3 = cVar2 == '-';
      if (bVar3) {
        cVar2 = param_1[7];
      }
      if (!bVar3 || cVar2 != 'c') {
        return 0x51;
      }
      cVar2 = param_1[8];
      bVar3 = cVar2 == 'o';
      if (bVar3) {
        cVar2 = param_1[9];
      }
      if (!bVar3 || cVar2 != 'n') {
        return 0x51;
      }
      cVar2 = param_1[10];
      bVar3 = cVar2 == 't';
      if (bVar3) {
        cVar2 = param_1[0xb];
      }
      if (!bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[0xc];
      bVar3 = cVar2 == 'o';
      if (bVar3) {
        cVar2 = param_1[0xd];
      }
      if (!bVar3 || cVar2 != 'l') {
        return 0x51;
      }
      cVar2 = param_1[0xe];
      bVar3 = cVar2 == '-';
      if (bVar3) {
        cVar2 = param_1[0xf];
      }
      if (!bVar3 || cVar2 != 'a') {
        return 0x51;
      }
      cVar2 = param_1[0x10];
      bVar3 = cVar2 == 'l';
      if (bVar3) {
        cVar2 = param_1[0x11];
      }
      if (!bVar3 || cVar2 != 'l') {
        return 0x51;
      }
      cVar2 = param_1[0x12];
      bVar3 = cVar2 == 'o';
      if (bVar3) {
        cVar2 = param_1[0x13];
      }
      if (!bVar3 || cVar2 != 'w') {
        return 0x51;
      }
      cVar2 = param_1[0x14];
      bVar3 = cVar2 == '-';
      if (bVar3) {
        cVar2 = param_1[0x15];
      }
      if (!bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0x16];
      bVar3 = cVar2 == 'r';
      if (bVar3) {
        cVar2 = param_1[0x17];
      }
      if (!bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[0x18];
      bVar3 = cVar2 == 'g';
      if (bVar3) {
        cVar2 = param_1[0x19];
      }
      if (!bVar3 || cVar2 != 'i') {
        return 0x51;
      }
      cVar2 = param_1[0x1a];
      uVar1 = 8;
      goto joined_r0x010a0fb0;
    }
    if (param_1[1] != 'u') {
      return 0x51;
    }
    cVar2 = param_1[2];
    bVar3 = cVar2 != 'b';
    if (!bVar3) {
      cVar2 = param_1[3];
    }
    if (bVar3 || cVar2 != 'l') {
      return 0x51;
    }
    cVar2 = param_1[4];
    bVar3 = cVar2 != 'i';
    if (!bVar3) {
      cVar2 = param_1[5];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[6];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[7];
    }
    if (bVar3 || cVar2 != 'k') {
      return 0x51;
    }
    cVar2 = param_1[8];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[9];
    }
    if (bVar3 || cVar2 != 'y') {
      return 0x51;
    }
    cVar2 = param_1[10];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[0xb];
    }
    if (bVar3 || cVar2 != 'p') {
      return 0x51;
    }
    cVar2 = param_1[0xc];
    bVar3 = cVar2 != 'i';
    if (!bVar3) {
      cVar2 = param_1[0xd];
    }
    if (bVar3 || cVar2 != 'n') {
      return 0x51;
    }
    cVar2 = param_1[0xe];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[0xf];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0x10];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0x11];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0x12];
    bVar3 = cVar2 != 'p';
    if (!bVar3) {
      cVar2 = param_1[0x13];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0x14];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0x15];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0x16];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[0x17];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0x18];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[0x19];
    }
    if (bVar3 || cVar2 != 'l') {
      return 0x51;
    }
    cVar2 = param_1[0x1a];
    uVar1 = 0x35;
    goto LAB_010a2758;
  case 0x1c:
    if (*param_1 != 'a') {
      return 0x51;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[9];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[10];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0xb];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0xc];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0xd];
    bVar3 = cVar2 != 'l';
    if (!bVar3) {
      cVar2 = param_1[0xe];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0xf];
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[0x10];
    }
    if (bVar3 || cVar2 != 'l') {
      return 0x51;
    }
    cVar2 = param_1[0x11];
    bVar3 = cVar2 != 'l';
    if (!bVar3) {
      cVar2 = param_1[0x12];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0x13];
    bVar3 = cVar2 != 'w';
    if (!bVar3) {
      cVar2 = param_1[0x14];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0x15];
    if (cVar2 == 'm') {
      if (param_1[0x16] != 'e') {
        return 0x51;
      }
      cVar2 = param_1[0x17];
      bVar3 = cVar2 != 't';
      if (!bVar3) {
        cVar2 = param_1[0x18];
      }
      if (bVar3 || cVar2 != 'h') {
        return 0x51;
      }
      cVar2 = param_1[0x19];
      bVar3 = cVar2 != 'o';
      if (!bVar3) {
        cVar2 = param_1[0x1a];
      }
      if (bVar3 || cVar2 != 'd') {
        return 0x51;
      }
      cVar2 = param_1[0x1b];
      uVar1 = 7;
    }
    else {
      bVar3 = cVar2 != 'h';
      if (!bVar3) {
        cVar2 = param_1[0x16];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[0x17];
      bVar3 = cVar2 != 'a';
      if (!bVar3) {
        cVar2 = param_1[0x18];
      }
      if (bVar3 || cVar2 != 'd') {
        return 0x51;
      }
      cVar2 = param_1[0x19];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[0x1a];
      }
      if (bVar3 || cVar2 != 'r') {
        return 0x51;
      }
      cVar2 = param_1[0x1b];
      uVar1 = 6;
    }
    goto LAB_010a2850;
  case 0x1d:
    if (*param_1 != 'a') {
      return 0x51;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[9];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[10];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0xb];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0xc];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0xd];
    bVar3 = cVar2 != 'l';
    if (!bVar3) {
      cVar2 = param_1[0xe];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    if (param_1[0xf] == 'r') {
      cVar2 = param_1[0x10];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[0x11];
      }
      if (bVar3 || cVar2 != 'q') {
        return 0x51;
      }
      cVar2 = param_1[0x12];
      bVar3 = cVar2 != 'u';
      if (!bVar3) {
        cVar2 = param_1[0x13];
      }
      if (bVar3 || cVar2 != 'e') {
        return 0x51;
      }
      cVar2 = param_1[0x14];
      bVar3 = cVar2 != 's';
      if (!bVar3) {
        cVar2 = param_1[0x15];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0x16];
      bVar3 = cVar2 != '-';
      if (!bVar3) {
        cVar2 = param_1[0x17];
      }
      if (bVar3 || cVar2 != 'm') {
        return 0x51;
      }
      cVar2 = param_1[0x18];
      bVar3 = cVar2 != 'e';
      if (!bVar3) {
        cVar2 = param_1[0x19];
      }
      if (bVar3 || cVar2 != 't') {
        return 0x51;
      }
      cVar2 = param_1[0x1a];
      bVar3 = cVar2 != 'h';
      if (!bVar3) {
        cVar2 = param_1[0x1b];
      }
      if (bVar3 || cVar2 != 'o') {
        return 0x51;
      }
      cVar2 = param_1[0x1c];
      uVar1 = 0xc;
      goto LAB_010a10a4;
    }
    if (param_1[0xf] != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0x10];
    bVar3 = cVar2 != 'x';
    if (!bVar3) {
      cVar2 = param_1[0x11];
    }
    if (bVar3 || cVar2 != 'p') {
      return 0x51;
    }
    cVar2 = param_1[0x12];
    bVar3 = cVar2 != 'o';
    if (!bVar3) {
      cVar2 = param_1[0x13];
    }
    if (bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[0x14];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0x15];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0x16];
    bVar3 = cVar2 != 'h';
    if (!bVar3) {
      cVar2 = param_1[0x17];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0x18];
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[0x19];
    }
    if (bVar3 || cVar2 != 'd') {
      return 0x51;
    }
    cVar2 = param_1[0x1a];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0x1b];
    }
    if (bVar3 || cVar2 != 'r') {
      return 0x51;
    }
    cVar2 = param_1[0x1c];
    uVar1 = 9;
    goto LAB_010a2850;
  case 0x1e:
    if (*param_1 != 'a') {
      return 0x51;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[9];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[10];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0xb];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0xc];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0xd];
    bVar3 = cVar2 != 'l';
    if (!bVar3) {
      cVar2 = param_1[0xe];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0xf];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0x10];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0x11];
    bVar3 = cVar2 != 'q';
    if (!bVar3) {
      cVar2 = param_1[0x12];
    }
    if (bVar3 || cVar2 != 'u') {
      return 0x51;
    }
    cVar2 = param_1[0x13];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0x14];
    }
    if (bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[0x15];
    bVar3 = cVar2 != 't';
    if (!bVar3) {
      cVar2 = param_1[0x16];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0x17];
    bVar3 = cVar2 != 'h';
    if (!bVar3) {
      cVar2 = param_1[0x18];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0x19];
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[0x1a];
    }
    if (bVar3 || cVar2 != 'd') {
      return 0x51;
    }
    cVar2 = param_1[0x1b];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0x1c];
    }
    if (bVar3 || cVar2 != 'r') {
      return 0x51;
    }
    cVar2 = param_1[0x1d];
    uVar1 = 0xb;
    goto LAB_010a2850;
  case 0x20:
    if (*param_1 != 'a') {
      return 0x51;
    }
    cVar2 = param_1[1];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[2];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[3];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[4];
    }
    if (bVar3 || cVar2 != 's') {
      return 0x51;
    }
    cVar2 = param_1[5];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[6];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[7];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[8];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[9];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[10];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0xb];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0xc];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0xd];
    bVar3 = cVar2 != 'l';
    if (!bVar3) {
      cVar2 = param_1[0xe];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0xf];
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[0x10];
    }
    if (bVar3 || cVar2 != 'l') {
      return 0x51;
    }
    cVar2 = param_1[0x11];
    bVar3 = cVar2 != 'l';
    if (!bVar3) {
      cVar2 = param_1[0x12];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0x13];
    bVar3 = cVar2 != 'w';
    if (!bVar3) {
      cVar2 = param_1[0x14];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0x15];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[0x16];
    }
    if (bVar3 || cVar2 != 'r') {
      return 0x51;
    }
    cVar2 = param_1[0x17];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0x18];
    }
    if (bVar3 || cVar2 != 'd') {
      return 0x51;
    }
    cVar2 = param_1[0x19];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[0x1a];
    }
    if (bVar3 || cVar2 != 'n') {
      return 0x51;
    }
    cVar2 = param_1[0x1b];
    bVar3 = cVar2 != 't';
    if (!bVar3) {
      cVar2 = param_1[0x1c];
    }
    if (bVar3 || cVar2 != 'i') {
      return 0x51;
    }
    cVar2 = param_1[0x1d];
    bVar3 = cVar2 != 'a';
    if (!bVar3) {
      cVar2 = param_1[0x1e];
    }
    if (bVar3 || cVar2 != 'l') {
      return 0x51;
    }
    cVar2 = param_1[0x1f];
    uVar1 = 5;
LAB_010a2850:
    if (cVar2 == 's') {
      return uVar1;
    }
    return 0x51;
  case 0x23:
    cVar2 = *param_1;
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[1];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[2];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[3];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[4];
    bVar3 = cVar2 != 'e';
    if (!bVar3) {
      cVar2 = param_1[5];
    }
    if (bVar3 || cVar2 != 'n') {
      return 0x51;
    }
    cVar2 = param_1[6];
    bVar3 = cVar2 != 't';
    if (!bVar3) {
      cVar2 = param_1[7];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[8];
    bVar3 = cVar2 != 's';
    if (!bVar3) {
      cVar2 = param_1[9];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[10];
    bVar3 = cVar2 != 'c';
    if (!bVar3) {
      cVar2 = param_1[0xb];
    }
    if (bVar3 || cVar2 != 'u') {
      return 0x51;
    }
    cVar2 = param_1[0xc];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0xd];
    }
    if (bVar3 || cVar2 != 'i') {
      return 0x51;
    }
    cVar2 = param_1[0xe];
    bVar3 = cVar2 != 't';
    if (!bVar3) {
      cVar2 = param_1[0xf];
    }
    if (bVar3 || cVar2 != 'y') {
      return 0x51;
    }
    cVar2 = param_1[0x10];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[0x11];
    }
    if (bVar3 || cVar2 != 'p') {
      return 0x51;
    }
    cVar2 = param_1[0x12];
    bVar3 = cVar2 != 'o';
    if (!bVar3) {
      cVar2 = param_1[0x13];
    }
    if (bVar3 || cVar2 != 'l') {
      return 0x51;
    }
    cVar2 = param_1[0x14];
    bVar3 = cVar2 != 'i';
    if (!bVar3) {
      cVar2 = param_1[0x15];
    }
    if (bVar3 || cVar2 != 'c') {
      return 0x51;
    }
    cVar2 = param_1[0x16];
    bVar3 = cVar2 != 'y';
    if (!bVar3) {
      cVar2 = param_1[0x17];
    }
    if (bVar3 || cVar2 != '-') {
      return 0x51;
    }
    cVar2 = param_1[0x18];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0x19];
    }
    if (bVar3 || cVar2 != 'e') {
      return 0x51;
    }
    cVar2 = param_1[0x1a];
    bVar3 = cVar2 != 'p';
    if (!bVar3) {
      cVar2 = param_1[0x1b];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0x1c];
    bVar3 = cVar2 != 'r';
    if (!bVar3) {
      cVar2 = param_1[0x1d];
    }
    if (bVar3 || cVar2 != 't') {
      return 0x51;
    }
    cVar2 = param_1[0x1e];
    bVar3 = cVar2 != '-';
    if (!bVar3) {
      cVar2 = param_1[0x1f];
    }
    if (bVar3 || cVar2 != 'o') {
      return 0x51;
    }
    cVar2 = param_1[0x20];
    bVar3 = cVar2 != 'n';
    if (!bVar3) {
      cVar2 = param_1[0x21];
    }
    if (bVar3 || cVar2 != 'l') {
      return 0x51;
    }
    cVar2 = param_1[0x22];
    uVar1 = 0x1c;
LAB_010a2758:
    if (cVar2 == 'y') {
      return uVar1;
    }
    return 0x51;
  }
LAB_010a01e4:
  if (cVar2 == 'e') {
    return uVar1;
  }
switchD_010a0144_caseD_1a:
  return 0x51;
}

