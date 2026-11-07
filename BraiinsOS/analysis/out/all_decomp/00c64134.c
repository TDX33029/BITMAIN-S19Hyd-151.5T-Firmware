// FUN_00c64134 @ 00c64134 size=1236 calls_out=6 calls_in=3
// strings: 

int FUN_00c64134(int *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 local_30 [3];
  
  uVar2 = param_1[4];
  uVar3 = param_1[5];
  param_1[2] = 0;
  if (uVar2 <= uVar3) {
LAB_00c647a8:
    local_30[0] = 5;
LAB_00c647f4:
    iVar4 = FUN_00c629ac(param_1,local_30);
    return iVar4;
  }
  piVar11 = param_1 + 3;
  iVar4 = *piVar11;
  uVar10 = 0;
  uVar7 = 0;
LAB_00c64184:
  uVar9 = (uint)*(byte *)(iVar4 + uVar3);
  switch(uVar9) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    uVar3 = uVar3 + 1;
    param_1[5] = uVar3;
    if (uVar2 == uVar3) goto LAB_00c647a8;
    goto LAB_00c64184;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
switchD_00c6419c_caseD_b:
    if (9 < uVar9 - 0x30) {
      local_30[0] = 10;
      goto LAB_00c647f4;
    }
    break;
  case 0x22:
    param_1[5] = uVar3 + 1;
    iVar4 = FUN_0157d450(piVar11);
    goto LAB_00c644a0;
  case 0x2d:
    param_1[5] = uVar3 + 1;
    break;
  default:
    switch(uVar9) {
    case 0x5b:
    case 0x7b:
      iVar4 = param_1[2];
      if ((uint)(*param_1 - iVar4) < uVar10) {
        FUN_00d653ec(param_1,iVar4,uVar10,1,1);
        iVar4 = param_1[2];
      }
      bVar5 = false;
      if (uVar10 != 0) {
        *(char *)(param_1[1] + iVar4) = (char)uVar7;
        iVar4 = iVar4 + 1;
      }
      param_1[2] = iVar4;
      param_1[5] = param_1[5] + 1;
      uVar2 = param_1[4];
      uVar3 = param_1[5];
      uVar7 = uVar9;
      if (uVar3 < uVar2) goto LAB_00c644f0;
      goto LAB_00c647d8;
    default:
      goto switchD_00c6419c_caseD_b;
    case 0x66:
      uVar6 = uVar3 + 1;
      param_1[5] = uVar6;
      uVar9 = uVar2;
      if (uVar6 >= uVar2 && uVar6 != uVar2) {
        uVar9 = uVar6;
      }
      if (uVar6 < uVar2) {
        cVar1 = *(char *)(iVar4 + uVar6);
        uVar2 = uVar3 + 2;
        param_1[5] = uVar2;
        if (cVar1 != 'a') goto LAB_00c6480c;
        if (uVar2 != uVar9) {
          cVar1 = *(char *)(iVar4 + uVar2);
          uVar2 = uVar3 + 3;
          param_1[5] = uVar2;
          if (cVar1 != 'l') goto LAB_00c6480c;
          if (uVar2 != uVar9) {
            cVar1 = *(char *)(iVar4 + uVar2);
            uVar2 = uVar3 + 4;
            param_1[5] = uVar2;
            if (cVar1 != 's') goto LAB_00c6480c;
            if (uVar2 != uVar9) {
              cVar1 = *(char *)(iVar4 + uVar2);
              iVar4 = uVar3 + 5;
              goto LAB_00c643f8;
            }
          }
        }
      }
      break;
    case 0x6e:
      uVar6 = uVar3 + 1;
      param_1[5] = uVar6;
      uVar9 = uVar2;
      if (uVar6 >= uVar2 && uVar6 != uVar2) {
        uVar9 = uVar6;
      }
      if (uVar6 < uVar2) {
        cVar1 = *(char *)(iVar4 + uVar6);
        uVar2 = uVar3 + 2;
        param_1[5] = uVar2;
        if (cVar1 == 'u') {
          if (uVar2 == uVar9) break;
          cVar1 = *(char *)(iVar4 + uVar2);
          uVar2 = uVar3 + 3;
          param_1[5] = uVar2;
          if (cVar1 == 'l') {
            if (uVar2 == uVar9) break;
            cVar1 = *(char *)(iVar4 + uVar2);
            param_1[5] = uVar3 + 4;
            if (cVar1 == 'l') goto LAB_00c644a8;
          }
        }
LAB_00c6480c:
        local_30[0] = 9;
        goto LAB_00c647c0;
      }
      break;
    case 0x74:
      uVar6 = uVar3 + 1;
      param_1[5] = uVar6;
      uVar9 = uVar2;
      if (uVar2 < uVar6) {
        uVar9 = uVar6;
      }
      if (uVar2 <= uVar6) break;
      cVar1 = *(char *)(iVar4 + uVar6);
      uVar2 = uVar3 + 2;
      param_1[5] = uVar2;
      if (cVar1 != 'r') goto LAB_00c6480c;
      if (uVar2 == uVar9) break;
      cVar1 = *(char *)(iVar4 + uVar2);
      uVar2 = uVar3 + 3;
      param_1[5] = uVar2;
      if (cVar1 != 'u') goto LAB_00c6480c;
      if (uVar2 == uVar9) break;
      cVar1 = *(char *)(iVar4 + uVar2);
      iVar4 = uVar3 + 4;
LAB_00c643f8:
      param_1[5] = iVar4;
      if (cVar1 != 'e') goto LAB_00c6480c;
      goto LAB_00c644a8;
    }
    local_30[0] = 5;
LAB_00c647c0:
    iVar4 = FUN_011b4d78(param_1,local_30);
    return iVar4;
  }
  iVar4 = FUN_00c64888(param_1);
LAB_00c644a0:
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_00c644a8:
  bVar5 = true;
  if (uVar10 == 0) {
    if (param_1[2] == 0) {
      return 0;
    }
    iVar4 = param_1[2] + -1;
    param_1[2] = iVar4;
    uVar9 = (uint)*(byte *)(param_1[1] + iVar4);
    uVar2 = param_1[4];
    uVar3 = param_1[5];
    uVar7 = uVar9;
    if (uVar3 < uVar2) goto LAB_00c644f0;
  }
  else {
    uVar2 = param_1[4];
    uVar3 = param_1[5];
    uVar9 = uVar7;
    if (uVar3 < uVar2) {
LAB_00c644f0:
      iVar8 = param_1[2];
      iVar4 = param_1[3];
      do {
        cVar1 = *(char *)(iVar4 + uVar3);
        switch(cVar1) {
        case '\t':
        case '\n':
        case '\r':
        case ' ':
          uVar3 = uVar3 + 1;
          param_1[5] = uVar3;
          if (uVar2 == uVar3) goto LAB_00c647dc;
          break;
        case '\v':
        case '\f':
        case '\x0e':
        case '\x0f':
        case '\x10':
        case '\x11':
        case '\x12':
        case '\x13':
        case '\x14':
        case '\x15':
        case '\x16':
        case '\x17':
        case '\x18':
        case '\x19':
        case '\x1a':
        case '\x1b':
        case '\x1c':
        case '\x1d':
        case '\x1e':
        case '\x1f':
        case '!':
        case '\"':
        case '#':
        case '$':
        case '%':
        case '&':
        case '\'':
        case '(':
        case ')':
        case '*':
        case '+':
          goto switchD_00c64518_caseD_b;
        case ',':
          if (bVar5) {
            uVar3 = uVar3 + 1;
            param_1[5] = uVar3;
          }
          goto joined_r0x00c64630;
        default:
          if (cVar1 == ']') {
            if (uVar9 != 0x5b) goto switchD_00c64518_caseD_b;
          }
          else if (cVar1 != '}' || uVar9 != 0x7b) goto switchD_00c64518_caseD_b;
          uVar3 = uVar3 + 1;
          param_1[5] = uVar3;
          if (iVar8 == 0) {
            return 0;
          }
          iVar8 = iVar8 + -1;
          param_1[2] = iVar8;
          bVar5 = true;
          uVar9 = (uint)*(byte *)(param_1[1] + iVar8);
          if (uVar2 <= uVar3) goto LAB_00c647dc;
        }
      } while( true );
    }
  }
LAB_00c647d8:
  uVar9 = uVar7;
LAB_00c647dc:
  local_30[0] = 2;
  if (uVar9 != 0x5b) {
    if (uVar9 != 0x7b) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9324);
    }
    goto LAB_00c647f0;
  }
  goto LAB_00c647f4;
switchD_00c64518_caseD_b:
  if (bVar5) {
    local_30[0] = 7;
    if (uVar9 != 0x5b) {
      if (uVar9 != 0x7b) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9334);
      }
      local_30[0] = 8;
    }
    goto LAB_00c647f4;
  }
joined_r0x00c64630:
  if (uVar9 == 0x7b) {
    if (uVar3 < uVar2) {
      while( true ) {
        uVar7 = *(byte *)(iVar4 + uVar3) - 9;
        if (0x19 < uVar7) goto LAB_00c64830;
        if ((1 << (uVar7 & 0xff) & 0x800013U) == 0) break;
        uVar3 = uVar3 + 1;
        param_1[5] = uVar3;
        if (uVar2 == uVar3) goto LAB_00c647f0;
      }
      if (uVar7 != 0x19) {
LAB_00c64830:
        local_30[0] = 0x11;
        goto LAB_00c647f4;
      }
      param_1[5] = uVar3 + 1;
      iVar4 = FUN_0157d450(piVar11);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar2 = param_1[4];
      uVar3 = param_1[5];
      if (uVar3 < uVar2) {
        iVar4 = *piVar11;
        do {
          switch(*(undefined1 *)(iVar4 + uVar3)) {
          case 9:
          case 10:
          case 0xd:
          case 0x20:
            uVar3 = uVar3 + 1;
            param_1[5] = uVar3;
            if (uVar2 == uVar3) goto LAB_00c647f0;
            break;
          default:
            local_30[0] = 6;
            goto LAB_00c647f4;
          case 0x3a:
            goto switchD_00c646b0_caseD_3a;
          }
        } while( true );
      }
    }
LAB_00c647f0:
    local_30[0] = 3;
    goto LAB_00c647f4;
  }
LAB_00c64178:
  uVar10 = 1;
  uVar7 = uVar9;
  if (uVar2 <= uVar3) goto LAB_00c647a8;
  goto LAB_00c64184;
switchD_00c646b0_caseD_3a:
  uVar3 = uVar3 + 1;
  param_1[5] = uVar3;
  goto LAB_00c64178;
}

