// FUN_00f4e360 @ 00f4e360 size=1248 calls_out=7 calls_in=7
// strings: 

int FUN_00f4e360(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 local_30 [3];
  
  iVar2 = FUN_00f4d8b4();
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  param_1[2] = 0;
  if (uVar3 <= uVar4) {
LAB_00f4e9e0:
    local_30[0] = 5;
LAB_00f4ea2c:
    iVar2 = FUN_01143ab8(param_1,local_30);
    return iVar2;
  }
  piVar11 = param_1 + 3;
  iVar2 = *piVar11;
  uVar10 = 0;
  uVar7 = 0;
LAB_00f4e3c4:
  uVar9 = (uint)*(byte *)(iVar2 + uVar4);
  switch(uVar9) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    uVar4 = uVar4 + 1;
    param_1[5] = uVar4;
    if (uVar3 == uVar4) goto LAB_00f4e9e0;
    goto LAB_00f4e3c4;
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
switchD_00f4e3dc_caseD_b:
    if (9 < uVar9 - 0x30) {
      local_30[0] = 10;
      goto LAB_00f4ea2c;
    }
    break;
  case 0x22:
    param_1[5] = uVar4 + 1;
    iVar2 = FUN_0157d450(piVar11);
    goto LAB_00f4e6e0;
  case 0x2d:
    param_1[5] = uVar4 + 1;
    break;
  default:
    switch(uVar9) {
    case 0x5b:
    case 0x7b:
      iVar2 = param_1[2];
      if ((uint)(*param_1 - iVar2) < uVar10) {
        FUN_00f58340(param_1);
        iVar2 = param_1[2];
      }
      bVar5 = false;
      if (uVar10 != 0) {
        *(char *)(param_1[1] + iVar2) = (char)uVar7;
        iVar2 = iVar2 + 1;
      }
      param_1[2] = iVar2;
      param_1[5] = param_1[5] + 1;
      uVar3 = param_1[4];
      uVar4 = param_1[5];
      uVar7 = uVar9;
      if (uVar4 < uVar3) goto LAB_00f4e730;
      goto LAB_00f4ea10;
    default:
      goto switchD_00f4e3dc_caseD_b;
    case 0x66:
      uVar6 = uVar4 + 1;
      param_1[5] = uVar6;
      uVar9 = uVar3;
      if (uVar6 >= uVar3 && uVar6 != uVar3) {
        uVar9 = uVar6;
      }
      if (uVar6 < uVar3) {
        cVar1 = *(char *)(iVar2 + uVar6);
        uVar3 = uVar4 + 2;
        param_1[5] = uVar3;
        if (cVar1 != 'a') goto LAB_00f4ea44;
        if (uVar3 != uVar9) {
          cVar1 = *(char *)(iVar2 + uVar3);
          uVar3 = uVar4 + 3;
          param_1[5] = uVar3;
          if (cVar1 != 'l') goto LAB_00f4ea44;
          if (uVar3 != uVar9) {
            cVar1 = *(char *)(iVar2 + uVar3);
            uVar3 = uVar4 + 4;
            param_1[5] = uVar3;
            if (cVar1 != 's') goto LAB_00f4ea44;
            if (uVar3 != uVar9) {
              cVar1 = *(char *)(iVar2 + uVar3);
              iVar2 = uVar4 + 5;
              goto LAB_00f4e638;
            }
          }
        }
      }
      break;
    case 0x6e:
      uVar6 = uVar4 + 1;
      param_1[5] = uVar6;
      uVar9 = uVar3;
      if (uVar6 >= uVar3 && uVar6 != uVar3) {
        uVar9 = uVar6;
      }
      if (uVar6 < uVar3) {
        cVar1 = *(char *)(iVar2 + uVar6);
        uVar3 = uVar4 + 2;
        param_1[5] = uVar3;
        if (cVar1 == 'u') {
          if (uVar3 == uVar9) break;
          cVar1 = *(char *)(iVar2 + uVar3);
          uVar3 = uVar4 + 3;
          param_1[5] = uVar3;
          if (cVar1 == 'l') {
            if (uVar3 == uVar9) break;
            cVar1 = *(char *)(iVar2 + uVar3);
            param_1[5] = uVar4 + 4;
            if (cVar1 == 'l') goto LAB_00f4e6e8;
          }
        }
LAB_00f4ea44:
        local_30[0] = 9;
        goto LAB_00f4e9f8;
      }
      break;
    case 0x74:
      uVar6 = uVar4 + 1;
      param_1[5] = uVar6;
      uVar9 = uVar3;
      if (uVar3 < uVar6) {
        uVar9 = uVar6;
      }
      if (uVar3 <= uVar6) break;
      cVar1 = *(char *)(iVar2 + uVar6);
      uVar3 = uVar4 + 2;
      param_1[5] = uVar3;
      if (cVar1 != 'r') goto LAB_00f4ea44;
      if (uVar3 == uVar9) break;
      cVar1 = *(char *)(iVar2 + uVar3);
      uVar3 = uVar4 + 3;
      param_1[5] = uVar3;
      if (cVar1 != 'u') goto LAB_00f4ea44;
      if (uVar3 == uVar9) break;
      cVar1 = *(char *)(iVar2 + uVar3);
      iVar2 = uVar4 + 4;
LAB_00f4e638:
      param_1[5] = iVar2;
      if (cVar1 != 'e') goto LAB_00f4ea44;
      goto LAB_00f4e6e8;
    }
    local_30[0] = 5;
LAB_00f4e9f8:
    iVar2 = FUN_00f4c908(param_1,local_30);
    return iVar2;
  }
  iVar2 = FUN_00f4eac0(param_1);
LAB_00f4e6e0:
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_00f4e6e8:
  bVar5 = true;
  if (uVar10 == 0) {
    if (param_1[2] == 0) {
      return 0;
    }
    iVar2 = param_1[2] + -1;
    param_1[2] = iVar2;
    uVar9 = (uint)*(byte *)(param_1[1] + iVar2);
    uVar3 = param_1[4];
    uVar4 = param_1[5];
    uVar7 = uVar9;
    if (uVar4 < uVar3) goto LAB_00f4e730;
  }
  else {
    uVar3 = param_1[4];
    uVar4 = param_1[5];
    uVar9 = uVar7;
    if (uVar4 < uVar3) {
LAB_00f4e730:
      iVar8 = param_1[2];
      iVar2 = param_1[3];
      do {
        cVar1 = *(char *)(iVar2 + uVar4);
        switch(cVar1) {
        case '\t':
        case '\n':
        case '\r':
        case ' ':
          uVar4 = uVar4 + 1;
          param_1[5] = uVar4;
          if (uVar3 == uVar4) goto LAB_00f4ea14;
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
          goto switchD_00f4e758_caseD_b;
        case ',':
          if (bVar5) {
            uVar4 = uVar4 + 1;
            param_1[5] = uVar4;
          }
          goto joined_r0x00f4e870;
        default:
          if (cVar1 == ']') {
            if (uVar9 != 0x5b) goto switchD_00f4e758_caseD_b;
          }
          else if (cVar1 != '}' || uVar9 != 0x7b) goto switchD_00f4e758_caseD_b;
          uVar4 = uVar4 + 1;
          param_1[5] = uVar4;
          if (iVar8 == 0) {
            return 0;
          }
          iVar8 = iVar8 + -1;
          param_1[2] = iVar8;
          bVar5 = true;
          uVar9 = (uint)*(byte *)(param_1[1] + iVar8);
          if (uVar3 <= uVar4) goto LAB_00f4ea14;
        }
      } while( true );
    }
  }
LAB_00f4ea10:
  uVar9 = uVar7;
LAB_00f4ea14:
  local_30[0] = 2;
  if (uVar9 != 0x5b) {
    if (uVar9 != 0x7b) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9324);
    }
    goto LAB_00f4ea28;
  }
  goto LAB_00f4ea2c;
switchD_00f4e758_caseD_b:
  if (bVar5) {
    local_30[0] = 7;
    if (uVar9 != 0x5b) {
      if (uVar9 != 0x7b) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9334);
      }
      local_30[0] = 8;
    }
    goto LAB_00f4ea2c;
  }
joined_r0x00f4e870:
  if (uVar9 == 0x7b) {
    if (uVar4 < uVar3) {
      while( true ) {
        uVar7 = *(byte *)(iVar2 + uVar4) - 9;
        if (0x19 < uVar7) goto LAB_00f4ea68;
        if ((1 << (uVar7 & 0xff) & 0x800013U) == 0) break;
        uVar4 = uVar4 + 1;
        param_1[5] = uVar4;
        if (uVar3 == uVar4) goto LAB_00f4ea28;
      }
      if (uVar7 != 0x19) {
LAB_00f4ea68:
        local_30[0] = 0x11;
        goto LAB_00f4ea2c;
      }
      param_1[5] = uVar4 + 1;
      iVar2 = FUN_0157d450(piVar11);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = param_1[4];
      uVar4 = param_1[5];
      if (uVar4 < uVar3) {
        iVar2 = *piVar11;
        do {
          switch(*(undefined1 *)(iVar2 + uVar4)) {
          case 9:
          case 10:
          case 0xd:
          case 0x20:
            uVar4 = uVar4 + 1;
            param_1[5] = uVar4;
            if (uVar3 == uVar4) goto LAB_00f4ea28;
            break;
          default:
            local_30[0] = 6;
            goto LAB_00f4ea2c;
          case 0x3a:
            goto switchD_00f4e8f0_caseD_3a;
          }
        } while( true );
      }
    }
LAB_00f4ea28:
    local_30[0] = 3;
    goto LAB_00f4ea2c;
  }
LAB_00f4e3b8:
  uVar10 = 1;
  uVar7 = uVar9;
  if (uVar3 <= uVar4) goto LAB_00f4e9e0;
  goto LAB_00f4e3c4;
switchD_00f4e8f0_caseD_3a:
  uVar4 = uVar4 + 1;
  param_1[5] = uVar4;
  goto LAB_00f4e3b8;
}

