// FUN_00f55df8 @ 00f55df8 size=1924 calls_out=19 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f55df8(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *unaff_r5;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 *unaff_r9;
  undefined1 *puVar14;
  undefined1 *local_ac;
  undefined1 *local_98;
  int local_90;
  undefined1 local_8c;
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *puStack_2c;
  
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar11 = *(uint *)(param_2 + 0x14);
  if (uVar10 <= uVar11) {
LAB_00f55edc:
    local_68 = (undefined1 *)0x5;
LAB_00f55ee0:
    uVar7 = FUN_01143ab8(param_2,&local_68);
    goto LAB_00f56458;
  }
  iVar2 = *(int *)(param_2 + 0xc);
LAB_00f55e1c:
  uVar13 = (uint)*(byte *)(iVar2 + uVar11);
  switch(uVar13) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_00f55e34_caseD_9;
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
switchD_00f55e34_caseD_b:
    if (9 < uVar13 - 0x30) {
      local_68 = (undefined1 *)0xa;
      puVar6 = (undefined1 *)FUN_01143ab8(param_2,&local_68);
      puVar4 = local_60;
      goto LAB_00f56668;
    }
    FUN_00f4c958(&local_68,param_2,1);
    if (local_68 == (undefined1 *)0x3 && local_64 == (undefined1 *)0x0) {
LAB_00f56290:
      *param_1 = 0x80000015;
      param_1[1] = local_60;
      return;
    }
    puVar9 = &DAT_0041f1c0;
    break;
  case 0x22:
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar11 + 1;
    FUN_0157e5fc(&local_68,(int *)(param_2 + 0xc),param_2);
    if (local_68 == (undefined1 *)0x2) {
      *param_1 = 0x80000015;
      param_1[1] = local_64;
      return;
    }
    if (((uint)local_68 & 1) == 0) {
      local_38 = &DAT_8000000d;
      uVar10 = (uint)local_64 & 0xffffff00;
      local_5c = local_60;
      local_34 = local_64;
      goto LAB_00f565ec;
    }
    if ((int)local_60 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,local_60);
    }
    if (local_60 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x1;
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar5 = (undefined1 *)thunk_FUN_016d4a50(local_60);
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_60);
      }
      puVar6 = local_60;
    }
    FUN_016dd1aa(puVar5,local_64,local_60);
    local_38 = &DAT_8000000c;
    local_34 = puVar6;
    local_30 = puVar5;
    goto LAB_00f565e8;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar11 + 1;
    FUN_00f4c958(&local_68,param_2,0);
    if (local_68 == (undefined1 *)0x3 && local_64 == (undefined1 *)0x0) goto LAB_00f56290;
    puVar9 = &DAT_0041f1b4;
    break;
  default:
    switch(uVar13) {
    case 0x5b:
      cVar1 = *(char *)(param_2 + 0x1c) + -1;
      *(char *)(param_2 + 0x1c) = cVar1;
      if (cVar1 != '\0') {
        *(uint *)(param_2 + 0x14) = uVar11 + 1;
        FUN_00f553d4(&local_38,param_2,1);
        *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
        puVar5 = (undefined1 *)FUN_00f4cc54(param_2);
        puVar6 = local_34;
        local_68 = local_38;
        local_64 = local_34;
        local_60 = local_30;
        local_5c = puStack_2c;
        local_58 = puVar5;
        if (local_38 != (undefined1 *)0x80000015) goto LAB_00f565c8;
        puVar4 = local_60;
        if (puVar5 == (undefined1 *)0x0) goto LAB_00f56668;
        FUN_005c3974(puVar5);
        goto LAB_00f565b4;
      }
      break;
    default:
      goto switchD_00f55e34_caseD_b;
    case 0x66:
      uVar8 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar8;
      uVar13 = uVar10;
      if (uVar10 < uVar8) {
        uVar13 = uVar8;
      }
      if (uVar10 <= uVar8) goto LAB_00f56444;
      cVar1 = *(char *)(iVar2 + uVar8);
      uVar10 = uVar11 + 2;
      *(uint *)(param_2 + 0x14) = uVar10;
      if (cVar1 == 'a') {
        if (uVar10 == uVar13) goto LAB_00f56444;
        cVar1 = *(char *)(iVar2 + uVar10);
        uVar10 = uVar11 + 3;
        *(uint *)(param_2 + 0x14) = uVar10;
        if (cVar1 == 'l') {
          if (uVar10 == uVar13) goto LAB_00f56444;
          cVar1 = *(char *)(iVar2 + uVar10);
          uVar10 = uVar11 + 4;
          *(uint *)(param_2 + 0x14) = uVar10;
          if (cVar1 == 's') {
            if (uVar10 == uVar13) goto LAB_00f56444;
            cVar1 = *(char *)(iVar2 + uVar10);
            *(uint *)(param_2 + 0x14) = uVar11 + 5;
            if (cVar1 == 'e') {
              local_38 = (undefined1 *)0x80000000;
              goto LAB_00f56168;
            }
          }
        }
      }
      goto LAB_00f56640;
    case 0x6e:
      uVar8 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar8;
      uVar13 = uVar10;
      if (uVar10 < uVar8) {
        uVar13 = uVar8;
      }
      if (uVar10 <= uVar8) goto LAB_00f56444;
      cVar1 = *(char *)(iVar2 + uVar8);
      uVar10 = uVar11 + 2;
      *(uint *)(param_2 + 0x14) = uVar10;
      if (cVar1 == 'u') {
        if (uVar10 == uVar13) goto LAB_00f56444;
        cVar1 = *(char *)(iVar2 + uVar10);
        uVar10 = uVar11 + 3;
        *(uint *)(param_2 + 0x14) = uVar10;
        if (cVar1 != 'l') goto LAB_00f56640;
        if (uVar10 == uVar13) goto LAB_00f56444;
        cVar1 = *(char *)(iVar2 + uVar10);
        *(uint *)(param_2 + 0x14) = uVar11 + 4;
        if (cVar1 == 'l') {
          local_38 = (undefined1 *)0x80000012;
LAB_00f56168:
          local_34 = (undefined1 *)0x0;
LAB_00f56170:
          uVar10 = 0;
          local_5c = unaff_r5;
          local_60 = unaff_r9;
          goto LAB_00f565ec;
        }
      }
LAB_00f56640:
      local_68 = (undefined1 *)0x9;
      goto LAB_00f56448;
    case 0x74:
      uVar8 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar8;
      uVar13 = uVar10;
      if (uVar8 >= uVar10 && uVar8 != uVar10) {
        uVar13 = uVar8;
      }
      if (uVar8 < uVar10) {
        cVar1 = *(char *)(iVar2 + uVar8);
        uVar10 = uVar11 + 2;
        *(uint *)(param_2 + 0x14) = uVar10;
        if (cVar1 == 'r') {
          if (uVar10 == uVar13) goto LAB_00f56444;
          cVar1 = *(char *)(iVar2 + uVar10);
          uVar10 = uVar11 + 3;
          *(uint *)(param_2 + 0x14) = uVar10;
          if (cVar1 == 'u') {
            if (uVar10 == uVar13) goto LAB_00f56444;
            cVar1 = *(char *)(iVar2 + uVar10);
            *(uint *)(param_2 + 0x14) = uVar11 + 4;
            if (cVar1 == 'e') {
              local_38 = (undefined1 *)0x80000000;
              local_34 = (undefined1 *)0x1;
              goto LAB_00f56170;
            }
          }
        }
        goto LAB_00f56640;
      }
LAB_00f56444:
      local_68 = (undefined1 *)0x5;
LAB_00f56448:
      uVar7 = FUN_00f4c908(param_2,&local_68);
      goto LAB_00f56458;
    case 0x7b:
      cVar1 = *(char *)(param_2 + 0x1c) + -1;
      *(char *)(param_2 + 0x1c) = cVar1;
      if (cVar1 != '\0') {
        *(uint *)(param_2 + 0x14) = uVar11 + 1;
        local_8c = 1;
        local_80 = (undefined1 *)0x0;
        puVar6 = (undefined1 *)0x8;
        local_88 = (undefined1 *)0x0;
        local_84 = (undefined1 *)0x8;
        local_90 = param_2;
        goto LAB_00f562d8;
      }
    }
    local_68 = (undefined1 *)0x18;
    goto LAB_00f55ee0;
  }
  uVar10 = 0;
  local_38 = *(undefined1 **)(puVar9 + (int)local_68 * 4);
  local_34 = (undefined1 *)0x0;
  goto LAB_00f565ec;
LAB_00f562d8:
  puVar5 = local_80;
  FUN_00f4d74c(&local_38,&local_90);
  iVar2 = local_90;
  if ((char)local_38 == '\x01') goto LAB_00f56514;
  if (local_38._1_1_ != '\x01') {
    local_38 = local_88;
    local_34 = local_84;
    local_30 = local_80;
    goto LAB_00f56564;
  }
  *(undefined4 *)(local_90 + 8) = 0;
  *(int *)(local_90 + 0x14) = *(int *)(local_90 + 0x14) + 1;
  FUN_0157e5fc(&local_38,local_90 + 0xc,local_90);
  puVar12 = local_30;
  puVar4 = local_34;
  if (local_38 == (undefined1 *)0x2) goto LAB_00f56514;
  puVar14 = &DAT_8000000d;
  if (((uint)local_38 & 1) == 0) {
    puVar12 = local_98;
    local_98 = local_34;
    local_40 = local_30;
  }
  else {
    uVar7 = 0;
    if ((int)local_30 < 0) {
LAB_00f56680:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar7,local_ac);
    }
    if (local_30 == (undefined1 *)0x0) {
      local_ac = (undefined1 *)0x1;
      local_98 = (undefined1 *)0x0;
    }
    else {
      local_ac = (undefined1 *)thunk_FUN_016d4a50(local_30);
      if (local_ac == (undefined1 *)0x0) {
        uVar7 = 1;
        local_ac = puVar12;
        goto LAB_00f56680;
      }
      local_98 = puVar12;
    }
    FUN_016dd1aa(local_ac,puVar4,puVar12);
    puVar14 = &DAT_8000000c;
    local_40 = local_ac;
  }
  local_48 = puVar14;
  local_44 = local_98;
  local_3c = puVar12;
  puVar4 = (undefined1 *)FUN_00f4d8b4(iVar2);
  if (puVar4 != (undefined1 *)0x0) {
    local_34 = puVar4;
LAB_00f56508:
    puVar4 = local_34;
    FUN_00f4ce00(&local_48);
    local_34 = puVar4;
    goto LAB_00f56514;
  }
  FUN_00f55df8(&local_38,iVar2);
  if (local_38 == (undefined1 *)0x80000015) {
    goto LAB_00f56508;
  }
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_38;
  puStack_74 = local_34;
  puStack_70 = local_30;
  puStack_6c = puStack_2c;
  local_58 = local_38;
  puStack_54 = local_34;
  puStack_50 = local_30;
  puStack_4c = puStack_2c;
  local_68 = puVar14;
  local_64 = local_98;
  if (puVar5 == local_88) {
    FUN_0111ff78(&local_88);
    puVar6 = local_84;
  }
  puVar3 = (undefined4 *)(puVar6 + (int)puVar5 * 0x20);
  local_80 = puVar5 + 1;
  *puVar3 = local_68;
  puVar3[1] = local_64;
  puVar3[2] = local_60;
  puVar3[3] = local_5c;
  puVar3[4] = local_58;
  puVar3[5] = puStack_54;
  puVar3[6] = puStack_50;
  puVar3[7] = puStack_4c;
  local_98 = puVar12;
  goto LAB_00f562d8;
switchD_00f55e34_caseD_9:
  uVar11 = uVar11 + 1;
  *(uint *)(param_2 + 0x14) = uVar11;
  if (uVar10 == uVar11) goto LAB_00f55edc;
  goto LAB_00f55e1c;
LAB_00f56514:
  local_38 = (undefined1 *)0x80000015;
  puVar4 = puVar6;
  for (puVar12 = (undefined1 *)0x0; puVar5 != puVar12; puVar12 = puVar12 + 1) {
    FUN_00f5401c(puVar4);
    FUN_00f5401c(puVar4 + 0x10);
    puVar4 = puVar4 + 0x20;
  }
  if (local_88 != (undefined1 *)0x0) {
    thunk_FUN_016d3fb4(puVar6);
  }
LAB_00f56564:
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  puVar5 = (undefined1 *)FUN_00f4cfec(param_2);
  puVar6 = local_34;
  local_68 = local_38;
  local_64 = local_34;
  local_60 = local_30;
  local_5c = puStack_2c;
  local_58 = puVar5;
  if (local_38 == (undefined1 *)0x80000015) {
    puVar4 = local_60;
    if (puVar5 != (undefined1 *)0x0) {
      FUN_005c3974(puVar5);
LAB_00f565b4:
      thunk_FUN_016d3fb4(puVar5);
      puVar4 = local_60;
    }
  }
  else {
LAB_00f565c8:
    puVar6 = local_58;
    local_5c = puStack_2c;
    local_68 = local_38;
    local_64 = local_34;
    if (local_58 == (undefined1 *)0x0) {
      local_60 = puStack_2c;
      puVar6 = local_34;
      puVar4 = local_30;
      if (local_38 != (undefined1 *)0x80000015) {
LAB_00f565e8:
        uVar10 = (uint)local_34 & 0xffffff00;
        local_5c = local_60;
        local_60 = local_30;
LAB_00f565ec:
        *param_1 = local_38;
        param_1[3] = local_5c;
        param_1[1] = uVar10 | (uint)local_34 & 0xff;
        param_1[2] = local_60;
        return;
      }
    }
    else {
      local_60 = local_30;
      FUN_00f4ce00(&local_68);
      puVar4 = local_60;
    }
  }
LAB_00f56668:
  local_60 = puVar4;
  uVar7 = FUN_011257e4(puVar6,param_2);
LAB_00f56458:
  *param_1 = 0x80000015;
  param_1[1] = uVar7;
  return;
}

