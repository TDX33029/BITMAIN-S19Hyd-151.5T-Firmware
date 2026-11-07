// FUN_0111222c @ 0111222c size=3256 calls_out=15 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0111222c(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  bool bVar16;
  uint *puVar17;
  uint *local_b8;
  uint *local_b4;
  uint *local_a0;
  uint *local_9c;
  uint *puStack_98;
  uint *puStack_94;
  uint *local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint uStack_74;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  uint *puStack_5c;
  uint *puStack_58;
  uint uStack_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *puStack_34;
  undefined4 local_30 [3];
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_2 + 0x14);
  if (uVar6 < uVar2) {
    piVar15 = (int *)(param_2 + 0xc);
    iVar8 = *piVar15;
LAB_01112250:
    uVar9 = (uint)*(byte *)(iVar8 + uVar6);
    switch(uVar9) {
    case 9:
    case 10:
    case 0xd:
    case 0x20:
      goto switchD_01112268_caseD_9;
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
switchD_01112268_caseD_b:
      if (9 < uVar9 - 0x30) {
        local_70 = (uint *)0xa;
        puVar11 = (uint *)FUN_01143ab8(param_2,&local_70);
        goto LAB_01113014;
      }
      FUN_01113330(&local_70,param_2,1);
      if (local_70 == (uint *)0x3 && local_6c == (uint *)0x0) {
LAB_01112b78:
        *param_1 = 0x80000015;
        param_1[1] = local_68;
        return;
      }
      puVar7 = &DAT_004202a8;
      break;
    case 0x22:
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      FUN_0157e5fc(&local_70,piVar15,param_2);
      if (local_70 == (uint *)0x2) {
        *param_1 = 0x80000015;
        param_1[1] = local_6c;
        return;
      }
      puVar11 = local_68;
      if (((uint)local_70 & 1) == 0) {
        local_a0 = (uint *)&DAT_8000000d;
        uVar2 = (uint)local_6c & 0xffffff00;
        goto LAB_01112f80;
      }
      if ((int)local_68 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,local_68);
      }
      if (local_68 == (uint *)0x0) {
        puVar14 = (uint *)0x0;
        puVar4 = (uint *)0x1;
      }
      else {
        puVar4 = (uint *)thunk_FUN_016d4a50(local_68);
        if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_68);
        }
        puVar14 = local_68;
      }
      FUN_016dd1aa(puVar4,local_6c,local_68);
      local_a0 = (uint *)&DAT_8000000c;
      local_68 = puVar4;
      local_6c = puVar14;
      goto LAB_01112f7c;
    case 0x2d:
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      FUN_01113330(&local_70,param_2,0);
      if (local_70 == (uint *)0x3 && local_6c == (uint *)0x0) goto LAB_01112b78;
      puVar7 = &DAT_0042029c;
      break;
    default:
      puVar11 = &switchD_0111233c::switchdataD_01112340;
      switch(uVar9) {
      case 0x5b:
        cVar1 = *(char *)(param_2 + 0x1c);
        *(char *)(param_2 + 0x1c) = cVar1 + -1;
        if (cVar1 == '\x01') {
          local_70 = (uint *)0x18;
          uVar5 = FUN_01143ab8(param_2,&local_70);
          *param_1 = 0x80000015;
          param_1[1] = uVar5;
          return;
        }
        uVar6 = uVar6 + 1;
        puVar11 = (uint *)0x8;
        bVar16 = true;
        *(uint *)(param_2 + 0x14) = uVar6;
        local_78 = (uint *)0x0;
        local_7c = (uint *)0x8;
        local_80 = (uint *)0x0;
        if (uVar2 <= uVar6) goto LAB_01112534;
        goto LAB_01112428;
      default:
        goto switchD_01112268_caseD_b;
      case 0x66:
        uVar13 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar13;
        uVar9 = uVar2;
        if (uVar2 < uVar13) {
          uVar9 = uVar13;
        }
        if (uVar2 <= uVar13) goto LAB_01112bbc;
        cVar1 = *(char *)(iVar8 + uVar13);
        uVar2 = uVar6 + 2;
        *(uint *)(param_2 + 0x14) = uVar2;
        if (cVar1 == 'a') {
          if (uVar2 == uVar9) goto LAB_01112bbc;
          cVar1 = *(char *)(iVar8 + uVar2);
          uVar2 = uVar6 + 3;
          *(uint *)(param_2 + 0x14) = uVar2;
          if (cVar1 == 'l') {
            if (uVar2 == uVar9) goto LAB_01112bbc;
            cVar1 = *(char *)(iVar8 + uVar2);
            uVar2 = uVar6 + 4;
            *(uint *)(param_2 + 0x14) = uVar2;
            if (cVar1 == 's') {
              if (uVar2 == uVar9) goto LAB_01112bbc;
              cVar1 = *(char *)(iVar8 + uVar2);
              *(uint *)(param_2 + 0x14) = uVar6 + 5;
              if (cVar1 == 'e') {
                local_a0 = (uint *)0x80000000;
                local_68 = (uint *)0x73;
                goto LAB_011126d0;
              }
            }
          }
        }
        break;
      case 0x6e:
        uVar13 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar13;
        uVar9 = uVar2;
        if (uVar2 < uVar13) {
          uVar9 = uVar13;
        }
        if (uVar2 <= uVar13) goto LAB_01112bbc;
        cVar1 = *(char *)(iVar8 + uVar13);
        uVar2 = uVar6 + 2;
        *(uint *)(param_2 + 0x14) = uVar2;
        if (cVar1 != 'u') break;
        if (uVar2 == uVar9) goto LAB_01112bbc;
        cVar1 = *(char *)(iVar8 + uVar2);
        uVar2 = uVar6 + 3;
        *(uint *)(param_2 + 0x14) = uVar2;
        if (cVar1 == 'l') {
          if (uVar2 == uVar9) goto LAB_01112bbc;
          cVar1 = *(char *)(iVar8 + uVar2);
          *(uint *)(param_2 + 0x14) = uVar6 + 4;
          if (cVar1 == 'l') {
            local_a0 = (uint *)0x80000012;
            local_68 = (uint *)0x6c;
LAB_011126d0:
            local_6c = (uint *)0x0;
LAB_011126d8:
            uVar2 = 0;
            goto LAB_01112f80;
          }
        }
        break;
      case 0x74:
        uVar13 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar13;
        uVar9 = uVar2;
        if (uVar13 >= uVar2 && uVar13 != uVar2) {
          uVar9 = uVar13;
        }
        if (uVar13 < uVar2) {
          cVar1 = *(char *)(iVar8 + uVar13);
          uVar2 = uVar6 + 2;
          *(uint *)(param_2 + 0x14) = uVar2;
          if (cVar1 == 'r') {
            if (uVar2 == uVar9) goto LAB_01112bbc;
            cVar1 = *(char *)(iVar8 + uVar2);
            uVar2 = uVar6 + 3;
            *(uint *)(param_2 + 0x14) = uVar2;
            if (cVar1 == 'u') {
              if (uVar2 == uVar9) goto LAB_01112bbc;
              cVar1 = *(char *)(iVar8 + uVar2);
              *(uint *)(param_2 + 0x14) = uVar6 + 4;
              if (cVar1 == 'e') {
                local_a0 = (uint *)0x80000000;
                local_6c = (uint *)0x1;
                local_68 = (uint *)0x75;
                goto LAB_011126d8;
              }
            }
          }
          break;
        }
LAB_01112bbc:
        local_70 = (uint *)0x5;
LAB_01112bc0:
        uVar5 = FUN_00f4c908(param_2,&local_70);
        goto LAB_01112bd0;
      case 0x7b:
        cVar1 = *(char *)(param_2 + 0x1c);
        *(char *)(param_2 + 0x1c) = cVar1 + -1;
        if (cVar1 == '\x01') {
          local_70 = (uint *)0x18;
          goto LAB_01112314;
        }
        local_88 = (uint *)0x0;
        uVar6 = uVar6 + 1;
        local_90 = (uint *)0x0;
        puVar11 = (uint *)0x8;
        bVar16 = true;
        *(uint *)(param_2 + 0x14) = uVar6;
        local_8c = (uint *)0x8;
        if (uVar2 <= uVar6) goto LAB_01112a70;
        goto LAB_0111274c;
      }
      local_70 = (uint *)0x9;
      goto LAB_01112bc0;
    }
    uVar2 = 0;
    local_a0 = *(uint **)(puVar7 + (int)local_70 * 4);
    local_6c = (uint *)0x0;
    puVar11 = local_64;
    goto LAB_01112f80;
  }
LAB_01112310:
  local_70 = (uint *)0x5;
LAB_01112314:
  uVar5 = FUN_01143ab8(param_2,&local_70);
  goto LAB_01112bd0;
LAB_0111274c:
  puVar14 = local_88;
  while( true ) {
    uVar9 = (uint)*(byte *)(*piVar15 + uVar6);
    if ((0x17 < uVar9 - 9) || ((1 << (uVar9 - 9 & 0xff) & 0x800013U) == 0)) break;
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    if (uVar2 == uVar6) goto LAB_01112a70;
  }
  if (uVar9 == 0x7d) {
    local_a0 = local_90;
    local_9c = local_8c;
    puStack_98 = local_88;
    goto LAB_01112db4;
  }
  if (bVar16) {
    if (uVar9 != 0x22) {
      local_40 = (uint *)0x11;
      local_9c = (uint *)FUN_01143ab8(param_2,&local_40);
      goto LAB_01112a84;
    }
  }
  else {
    if (uVar9 != 0x2c) {
      local_40 = (uint *)0x8;
      local_9c = (uint *)FUN_01143ab8(param_2,&local_40);
      goto LAB_01112a84;
    }
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    if (uVar2 <= uVar6) {
LAB_01112fd4:
      local_40 = (uint *)0x5;
      local_9c = (uint *)FUN_01143ab8(param_2,&local_40);
      goto LAB_01112a84;
    }
    while( true ) {
      uVar9 = (uint)*(byte *)(*piVar15 + uVar6);
      uVar13 = uVar9 - 9;
      if (0x19 < uVar13) goto LAB_011130e0;
      if ((1 << (uVar13 & 0xff) & 0x800013U) == 0) break;
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
      if (uVar2 == uVar6) goto LAB_01112fd4;
    }
    if (uVar13 != 0x19) {
LAB_011130e0:
      if (uVar9 == 0x7d) {
        local_40 = (uint *)0x15;
        local_9c = (uint *)FUN_01143ab8(param_2,&local_40);
      }
      else {
        local_40 = (uint *)0x11;
        local_9c = (uint *)FUN_01143ab8(param_2,&local_40);
      }
      goto LAB_01112a84;
    }
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(uint *)(param_2 + 0x14) = uVar6 + 1;
  FUN_0157e5fc(&local_40,piVar15,param_2);
  puVar10 = local_38;
  puVar4 = local_3c;
  local_9c = local_3c;
  if (local_40 != (uint *)0x2) {
    puVar17 = (uint *)&DAT_8000000d;
    if (((uint)local_40 & 1) == 0) {
      local_48 = local_38;
      puVar3 = local_b4;
      local_b4 = local_3c;
    }
    else {
      uVar5 = 0;
      if ((int)local_38 < 0) {
LAB_011131e0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar5,local_b4);
      }
      if (local_38 == (uint *)0x0) {
        puVar3 = (uint *)0x1;
        local_b4 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)thunk_FUN_016d4a50(local_38);
        if (puVar3 == (uint *)0x0) {
          uVar5 = 1;
          local_b4 = puVar10;
          goto LAB_011131e0;
        }
        local_b4 = puVar10;
      }
      FUN_016dd1aa(puVar3,puVar4,puVar10);
      puVar17 = (uint *)&DAT_8000000c;
      local_48 = puVar3;
      local_b8 = puVar10;
    }
    uVar2 = *(uint *)(param_2 + 0x14);
    local_50 = puVar17;
    local_4c = local_b4;
    local_44 = local_b8;
    if (uVar2 < *(uint *)(param_2 + 0x10)) {
      do {
        switch(*(undefined1 *)(*piVar15 + uVar2)) {
        case 9:
        case 10:
        case 0xd:
        case 0x20:
          uVar2 = uVar2 + 1;
          *(uint *)(param_2 + 0x14) = uVar2;
          if (*(uint *)(param_2 + 0x10) == uVar2) goto LAB_01112f98;
          break;
        default:
          local_30[0] = 6;
          local_9c = (uint *)FUN_01143ab8(param_2,local_30);
          goto LAB_01112fac;
        case 0x3a:
          goto switchD_011128d0_caseD_3a;
        }
      } while( true );
    }
LAB_01112f98:
    local_30[0] = 3;
    local_9c = (uint *)FUN_01143ab8(param_2,local_30);
LAB_01112fac:
    goto LAB_01112fb0;
  }
  goto LAB_01112a88;
switchD_011128d0_caseD_3a:
  *(uint *)(param_2 + 0x14) = uVar2 + 1;
  FUN_0111222c(&local_40,param_2);
  if (local_40 == (uint *)0x80000015) {
    local_9c = local_3c;
LAB_01112fb0:
    FUN_01113670(&local_50);
    goto LAB_01112a88;
  }
  local_80 = local_40;
  local_7c = local_3c;
  local_78 = local_38;
  uStack_74 = (uint)puStack_34;
  local_68 = local_48;
  local_64 = local_44;
  local_60 = local_40;
  puStack_5c = local_3c;
  puStack_58 = local_38;
  uStack_54 = (uint)puStack_34;
  local_70 = puVar17;
  local_6c = local_b4;
  if (puVar14 == local_90) {
    FUN_0111ff78(&local_90);
    puVar11 = local_8c;
  }
  puVar4 = puVar11 + (int)puVar14 * 8;
  local_88 = (uint *)((int)puVar14 + 1);
  *puVar4 = (uint)local_70;
  puVar4[1] = (uint)local_6c;
  puVar4[2] = (uint)local_68;
  puVar4[3] = (uint)local_64;
  puVar4[4] = (uint)local_60;
  puVar4[5] = (uint)puStack_5c;
  puVar4[6] = (uint)puStack_58;
  puVar4[7] = uStack_54;
  bVar16 = false;
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_2 + 0x14);
  local_b4 = puVar3;
  if (uVar2 <= uVar6) goto LAB_01112a70;
  goto LAB_0111274c;
LAB_01112a70:
  puVar14 = local_88;
  local_40 = (uint *)0x3;
  local_9c = (uint *)FUN_01143ab8(param_2,&local_40);
LAB_01112a84:
LAB_01112a88:
  local_a0 = (uint *)0x80000015;
  puVar4 = puVar11;
  for (puVar10 = (uint *)0x0; puVar14 != puVar10; puVar10 = (uint *)((int)puVar10 + 1)) {
    FUN_01127318(puVar4);
    FUN_01127318(puVar4 + 4);
    puVar4 = puVar4 + 8;
  }
  if (local_90 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar11);
  }
LAB_01112db4:
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  uVar2 = *(uint *)(param_2 + 0x14);
  if (uVar2 < *(uint *)(param_2 + 0x10)) {
LAB_01112dd0:
    switch(*(char *)(*piVar15 + uVar2)) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_01112de8_caseD_9;
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
      goto switchD_01112de8_caseD_b;
    case ',':
      local_40 = (uint *)0x15;
      puVar11 = (uint *)FUN_01143ab8(param_2,&local_40);
      goto LAB_01112ea0;
    default:
      if (*(char *)(*piVar15 + uVar2) == '}') {
        *(uint *)(param_2 + 0x14) = uVar2 + 1;
        local_70 = local_a0;
        local_6c = local_9c;
        local_68 = puStack_98;
        local_64 = puStack_94;
        if (local_a0 == (uint *)0x80000015) goto LAB_01112d9c;
        goto LAB_01112f28;
      }
switchD_01112de8_caseD_b:
      local_40 = (uint *)0x16;
      puVar11 = (uint *)FUN_01143ab8(param_2,&local_40);
      goto LAB_01112ea0;
    }
  }
LAB_01112e8c:
  local_40 = (uint *)0x3;
  puVar11 = (uint *)FUN_01143ab8(param_2,&local_40);
LAB_01112ea0:
  local_70 = local_a0;
  local_6c = local_9c;
  local_68 = puStack_98;
  local_64 = puStack_94;
  local_60 = puVar11;
  if (local_a0 == (uint *)0x80000015) {
    FUN_005c3974(puVar11);
    goto LAB_01112ec8;
  }
  goto LAB_01112ee4;
switchD_01112de8_caseD_9:
  uVar2 = uVar2 + 1;
  *(uint *)(param_2 + 0x14) = uVar2;
  if (*(uint *)(param_2 + 0x10) == uVar2) goto LAB_01112e8c;
  goto LAB_01112dd0;
LAB_01112428:
  do {
    puVar14 = local_78;
    while( true ) {
      uVar9 = (uint)*(byte *)(*piVar15 + uVar6);
      if ((0x17 < uVar9 - 9) || ((1 << (uVar9 - 9 & 0xff) & 0x800013U) == 0)) break;
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
      if (uVar2 == uVar6) goto LAB_01112534;
    }
    if (uVar9 == 0x5d) {
      local_4c = local_80;
      local_48 = local_7c;
      local_44 = local_78;
      local_50 = (uint *)0x80000014;
      goto LAB_01112c54;
    }
    if (!bVar16) {
      if (uVar9 != 0x2c) {
        local_70 = (uint *)0x7;
        local_6c = (uint *)FUN_01143ab8(param_2,&local_70);
        goto LAB_01112548;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
      if (uVar2 <= uVar6) {
LAB_01112fbc:
        local_70 = (uint *)0x5;
        local_6c = (uint *)FUN_01143ab8(param_2,&local_70);
        goto LAB_01112548;
      }
      while( true ) {
        uVar9 = (uint)*(byte *)(*piVar15 + uVar6);
        uVar13 = uVar9 - 9;
        if ((0x17 < uVar13) || ((1 << (uVar13 & 0xff) & 0x800013U) == 0)) break;
        uVar6 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar6;
        if (uVar2 == uVar6) goto LAB_01112fbc;
      }
      if (uVar9 == 0x5d) {
        local_70 = (uint *)0x15;
        local_6c = (uint *)FUN_01143ab8(param_2,&local_70);
        goto LAB_01112548;
      }
    }
    FUN_0111222c(&local_70,param_2);
    if (local_70 == (uint *)0x80000015) goto LAB_01112548;
    local_38 = local_68;
    puStack_34 = local_64;
    local_3c = local_6c;
    local_40 = local_70;
    if (puVar14 == local_80) {
      FUN_0111fdb4(&local_80);
      puVar11 = local_7c;
    }
    puVar4 = puVar11 + (int)puVar14 * 4;
    *puVar4 = (uint)local_40;
    local_78 = (uint *)((int)puVar14 + 1);
    puVar4[1] = (uint)local_3c;
    puVar4[2] = (uint)local_38;
    puVar4[3] = (uint)puStack_34;
    bVar16 = false;
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar6 = *(uint *)(param_2 + 0x14);
  } while (uVar6 < uVar2);
LAB_01112534:
  puVar14 = local_78;
  local_70 = (uint *)0x2;
  local_6c = (uint *)FUN_01143ab8(param_2,&local_70);
LAB_01112548:
  puVar12 = (undefined1 *)((int)puVar14 + 1);
  local_50 = (uint *)0x80000015;
  local_4c = local_6c;
  while (puVar12 = puVar12 + -1, puVar12 != (undefined1 *)0x0) {
    FUN_01127318();
  }
  if (local_80 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar11);
  }
LAB_01112c54:
  uVar6 = *(uint *)(param_2 + 0x14);
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  uVar2 = *(uint *)(param_2 + 0x10);
  if (uVar6 < uVar2) {
LAB_01112c74:
    cVar1 = *(char *)(*piVar15 + uVar6);
    switch(cVar1) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_01112c8c_caseD_9;
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
switchD_01112c8c_caseD_b:
      local_40 = (uint *)0x16;
      puVar11 = (uint *)FUN_01143ab8(param_2,&local_40);
      break;
    case ',':
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
      if (uVar2 <= uVar6) goto LAB_011131b0;
      goto LAB_0111309c;
    default:
      if (cVar1 != ']') goto switchD_01112c8c_caseD_b;
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      local_70 = local_50;
      local_6c = local_4c;
      local_68 = local_48;
      local_64 = local_44;
      local_a0 = local_50;
      if (local_50 == (uint *)0x80000015) {
LAB_01112d9c:
        puVar11 = local_6c;
      }
      else {
LAB_01112f28:
        puVar11 = local_64;
        if (local_a0 != (uint *)0x80000015) {
LAB_01112f7c:
          uVar2 = (uint)local_6c & 0xffffff00;
LAB_01112f80:
          param_1[3] = puVar11;
          *param_1 = local_a0;
          param_1[1] = uVar2 | (uint)local_6c & 0xff;
          param_1[2] = local_68;
          return;
        }
        local_70 = (uint *)0x80000015;
        puVar11 = local_6c;
      }
      goto LAB_01113014;
    }
    goto LAB_01112d44;
  }
LAB_01112d30:
  local_40 = (uint *)0x2;
  puVar11 = (uint *)FUN_01143ab8(param_2,&local_40);
  goto LAB_01112d44;
switchD_01112c8c_caseD_9:
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar2 == uVar6) goto LAB_01112d30;
  goto LAB_01112c74;
switchD_01112268_caseD_9:
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar2 == uVar6) goto LAB_01112310;
  goto LAB_01112250;
  while( true ) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    if (uVar2 == uVar6) break;
LAB_0111309c:
    uVar13 = (uint)*(byte *)(*piVar15 + uVar6);
    uVar9 = uVar13 - 9;
    if ((0x17 < uVar9) || ((1 << (uVar9 & 0xff) & 0x800013U) == 0)) {
      if (uVar13 == 0x5d) {
        local_40 = (uint *)0x15;
        puVar11 = (uint *)FUN_01143ab8(param_2,&local_40);
        goto LAB_01112d44;
      }
      break;
    }
  }
LAB_011131b0:
  local_40 = (uint *)0x16;
  puVar11 = (uint *)FUN_01143ab8(param_2,&local_40);
LAB_01112d44:
  local_9c = local_4c;
  local_70 = local_50;
  local_6c = local_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_60 = puVar11;
  if (local_50 == (uint *)0x80000015) {
    FUN_005c3974(puVar11);
LAB_01112ec8:
    thunk_FUN_016d3fb4(puVar11);
    puVar11 = local_9c;
  }
  else {
LAB_01112ee4:
    puVar11 = local_60;
    FUN_01113670(&local_70);
  }
LAB_01113014:
  uVar5 = FUN_011257e4(puVar11,param_2);
LAB_01112bd0:
  *param_1 = 0x80000015;
  param_1[1] = uVar5;
  return;
}

