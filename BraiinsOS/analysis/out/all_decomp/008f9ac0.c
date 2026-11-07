// FUN_008f9ac0 @ 008f9ac0 size=1236 calls_out=6 calls_in=8
// strings: 

int FUN_008f9ac0(int *param_1)

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
LAB_008fa134:
    local_30[0] = 5;
LAB_008fa180:
    iVar4 = FUN_008f9984(param_1,local_30);
    return iVar4;
  }
  piVar11 = param_1 + 3;
  iVar4 = *piVar11;
  uVar10 = 0;
  uVar7 = 0;
LAB_008f9b10:
  uVar9 = (uint)*(byte *)(iVar4 + uVar3);
  switch(uVar9) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    uVar3 = uVar3 + 1;
    param_1[5] = uVar3;
    if (uVar2 == uVar3) goto LAB_008fa134;
    goto LAB_008f9b10;
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
switchD_008f9b28_caseD_b:
    if (9 < uVar9 - 0x30) {
      local_30[0] = 10;
      goto LAB_008fa180;
    }
    break;
  case 0x22:
    param_1[5] = uVar3 + 1;
    iVar4 = FUN_0157d450(piVar11);
    goto LAB_008f9e2c;
  case 0x2d:
    param_1[5] = uVar3 + 1;
    break;
  default:
    switch(uVar9) {
    case 0x5b:
    case 0x7b:
      iVar4 = param_1[2];
      if ((uint)(*param_1 - iVar4) < uVar10) {
        FUN_00933680(param_1,iVar4,uVar10,1,1);
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
      if (uVar3 < uVar2) goto LAB_008f9e7c;
      goto LAB_008fa164;
    default:
      goto switchD_008f9b28_caseD_b;
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
        if (cVar1 != 'a') goto LAB_008fa198;
        if (uVar2 != uVar9) {
          cVar1 = *(char *)(iVar4 + uVar2);
          uVar2 = uVar3 + 3;
          param_1[5] = uVar2;
          if (cVar1 != 'l') goto LAB_008fa198;
          if (uVar2 != uVar9) {
            cVar1 = *(char *)(iVar4 + uVar2);
            uVar2 = uVar3 + 4;
            param_1[5] = uVar2;
            if (cVar1 != 's') goto LAB_008fa198;
            if (uVar2 != uVar9) {
              cVar1 = *(char *)(iVar4 + uVar2);
              iVar4 = uVar3 + 5;
              goto LAB_008f9d84;
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
            if (cVar1 == 'l') goto LAB_008f9e34;
          }
        }
LAB_008fa198:
        local_30[0] = 9;
        goto LAB_008fa14c;
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
      if (cVar1 != 'r') goto LAB_008fa198;
      if (uVar2 == uVar9) break;
      cVar1 = *(char *)(iVar4 + uVar2);
      uVar2 = uVar3 + 3;
      param_1[5] = uVar2;
      if (cVar1 != 'u') goto LAB_008fa198;
      if (uVar2 == uVar9) break;
      cVar1 = *(char *)(iVar4 + uVar2);
      iVar4 = uVar3 + 4;
LAB_008f9d84:
      param_1[5] = iVar4;
      if (cVar1 != 'e') goto LAB_008fa198;
      goto LAB_008f9e34;
    }
    local_30[0] = 5;
LAB_008fa14c:
    iVar4 = FUN_005b8c9c(param_1,local_30);
    return iVar4;
  }
  iVar4 = FUN_008fa214(param_1);
LAB_008f9e2c:
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_008f9e34:
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
    if (uVar3 < uVar2) goto LAB_008f9e7c;
  }
  else {
    uVar2 = param_1[4];
    uVar3 = param_1[5];
    uVar9 = uVar7;
    if (uVar3 < uVar2) {
LAB_008f9e7c:
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
          if (uVar2 == uVar3) goto LAB_008fa168;
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
          goto switchD_008f9ea4_caseD_b;
        case ',':
          if (bVar5) {
            uVar3 = uVar3 + 1;
            param_1[5] = uVar3;
          }
          goto joined_r0x008f9fbc;
        default:
          if (cVar1 == ']') {
            if (uVar9 != 0x5b) goto switchD_008f9ea4_caseD_b;
          }
          else if (cVar1 != '}' || uVar9 != 0x7b) goto switchD_008f9ea4_caseD_b;
          uVar3 = uVar3 + 1;
          param_1[5] = uVar3;
          if (iVar8 == 0) {
            return 0;
          }
          iVar8 = iVar8 + -1;
          param_1[2] = iVar8;
          bVar5 = true;
          uVar9 = (uint)*(byte *)(param_1[1] + iVar8);
          if (uVar2 <= uVar3) goto LAB_008fa168;
        }
      } while( true );
    }
  }
LAB_008fa164:
  uVar9 = uVar7;
LAB_008fa168:
  local_30[0] = 2;
  if (uVar9 != 0x5b) {
    if (uVar9 != 0x7b) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9324);
    }
    goto LAB_008fa17c;
  }
  goto LAB_008fa180;
switchD_008f9ea4_caseD_b:
  if (bVar5) {
    local_30[0] = 7;
    if (uVar9 != 0x5b) {
      if (uVar9 != 0x7b) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9334);
      }
      local_30[0] = 8;
    }
    goto LAB_008fa180;
  }
joined_r0x008f9fbc:
  if (uVar9 == 0x7b) {
    if (uVar3 < uVar2) {
      while( true ) {
        uVar7 = *(byte *)(iVar4 + uVar3) - 9;
        if (0x19 < uVar7) goto LAB_008fa1bc;
        if ((1 << (uVar7 & 0xff) & 0x800013U) == 0) break;
        uVar3 = uVar3 + 1;
        param_1[5] = uVar3;
        if (uVar2 == uVar3) goto LAB_008fa17c;
      }
      if (uVar7 != 0x19) {
LAB_008fa1bc:
        local_30[0] = 0x11;
        goto LAB_008fa180;
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
            if (uVar2 == uVar3) goto LAB_008fa17c;
            break;
          default:
            local_30[0] = 6;
            goto LAB_008fa180;
          case 0x3a:
            goto switchD_008fa03c_caseD_3a;
          }
        } while( true );
      }
    }
LAB_008fa17c:
    local_30[0] = 3;
    goto LAB_008fa180;
  }
LAB_008f9b04:
  uVar10 = 1;
  uVar7 = uVar9;
  if (uVar2 <= uVar3) goto LAB_008fa134;
  goto LAB_008f9b10;
switchD_008fa03c_caseD_3a:
  uVar3 = uVar3 + 1;
  param_1[5] = uVar3;
  goto LAB_008f9b04;
}

