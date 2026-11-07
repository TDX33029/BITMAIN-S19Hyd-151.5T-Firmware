// FUN_005b5438 @ 005b5438 size=2296 calls_out=11 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x005b5aa8) */
/* WARNING: Removing unreachable block (ram,0x005b5c50) */

int FUN_005b5438(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  bool bVar15;
  int local_48;
  int local_44;
  uint local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = FUN_005b8a40();
  if (iVar2 != 0) {
    return iVar2;
  }
  puVar3 = (undefined4 *)(param_1 + 0x18);
  iVar2 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar12 = 0;
LAB_005b5494:
  local_38 = 0x7b;
LAB_005b549c:
  while (*(char *)(param_1 + 0x2c) != '\0') {
    uVar14 = (uint)*(byte *)(param_1 + 0x2d);
    uVar4 = uVar14 - 9;
    if (0x24 < uVar4) goto LAB_005b55f4;
LAB_005b54b8:
    switch((int)&switchD_005b54c0::switchdataD_005b54c4 +
           (&switchD_005b54c0::switchdataD_005b54c4)[uVar4] & 0xfffffffe) {
    case 0x5b5558:
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar5 = *(int *)(param_1 + 0x14);
        if (iVar5 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(iVar2);
        }
        *(char *)(*(int *)(param_1 + 0x10) + iVar5) = (char)uVar14;
        *(int *)(param_1 + 0x14) = iVar5 + 1;
      }
      break;
    case 0x5b5770:
      FUN_00ef8de4(iVar2);
      iVar5 = FUN_00ef897c(iVar2);
      goto LAB_005b57c4;
    case 0x5b5790:
      FUN_00ef8de4(iVar2);
      goto LAB_005b57bc;
    default:
      goto switchD_005b54c0_caseD_5b57a4;
    }
  }
  pbVar6 = *(byte **)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(byte **)(param_1 + 0x18) = pbVar6;
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    uVar10 = *(undefined4 *)(param_1 + 0x24);
    local_30 = 5;
    goto LAB_005b5f74;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  bVar11 = *pbVar6;
  uVar14 = (uint)bVar11;
  *(byte **)(param_1 + 0x18) = pbVar6 + 1;
  iVar5 = *(int *)(param_1 + 0x24) + 1;
  if (uVar14 == 10) {
    *(int *)(param_1 + 0x28) = iVar5 + *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    iVar5 = 0;
  }
  *(byte *)(param_1 + 0x2d) = bVar11;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(int *)(param_1 + 0x24) = iVar5;
  uVar4 = uVar14 - 9;
  if (uVar4 < 0x25) goto LAB_005b54b8;
LAB_005b55f4:
  switch(uVar14) {
  case 0x5b:
  case 0x7b:
    FUN_00f1f45c(param_1,iVar12,local_38);
    FUN_00ef8de4(iVar2);
    bVar15 = false;
    local_38 = uVar14;
    goto LAB_005b5828;
  default:
switchD_005b54c0_caseD_5b57a4:
    if (9 < (uVar14 - 0x30 & 0xff)) {
      uVar9 = *(undefined4 *)(param_1 + 0x20);
      uVar10 = *(undefined4 *)(param_1 + 0x24);
      local_30 = 10;
      goto LAB_005b5f74;
    }
LAB_005b57bc:
    iVar5 = FUN_005b714c(param_1);
    break;
  case 0x66:
    FUN_00ef8de4(iVar2);
    iVar5 = FUN_005b6090(param_1,&DAT_00568edc,4);
    break;
  case 0x6e:
    FUN_00ef8de4(iVar2);
    puVar8 = &DAT_003b6412;
    goto LAB_005b5764;
  case 0x74:
    FUN_00ef8de4(iVar2);
    puVar8 = &DAT_0038bd26;
LAB_005b5764:
    iVar5 = FUN_005b6090(param_1,puVar8,3);
  }
LAB_005b57c4:
  if (iVar5 != 0) {
    return iVar5;
  }
  bVar15 = true;
  if (iVar12 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      return 0;
    }
    iVar12 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar12;
    local_38 = (uint)*(byte *)(*(int *)(param_1 + 4) + iVar12);
  }
  else {
  }
LAB_005b5828:
  do {
    while (*(char *)(param_1 + 0x2c) != '\0') {
      bVar11 = *(byte *)(param_1 + 0x2d);
      uVar14 = (uint)bVar11;
      uVar4 = uVar14 - 9;
      if (0x23 < uVar4) goto LAB_005b5988;
LAB_005b5844:
      switch((int)&switchD_005b584c::switchdataD_005b5850 +
             (&switchD_005b584c::switchdataD_005b5850)[uVar4] & 0xfffffffe) {
      case 0x5b58e0:
        *(undefined1 *)(param_1 + 0x2c) = 0;
        if (*(int *)(param_1 + 0xc) != -0x80000000) {
          iVar12 = *(int *)(param_1 + 0x14);
          if (iVar12 == *(int *)(param_1 + 0xc)) {
            FUN_006029c0(iVar2);
          }
          *(byte *)(*(int *)(param_1 + 0x10) + iVar12) = bVar11;
          *(int *)(param_1 + 0x14) = iVar12 + 1;
        }
        break;
      default:
        goto switchD_005b584c_caseD_5b5a30;
      case 0x5b5a40:
        if (bVar15) {
          FUN_00ef8de4(iVar2);
        }
        goto LAB_005b5a6c;
      }
    }
    pbVar6 = *(byte **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) == 0) {
      *puVar3 = pbVar6;
      local_30 = 2;
      if (local_38 != 0x5b) {
        if (local_38 != 0x7b) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9324);
        }
        local_30 = 3;
      }
      goto LAB_005b5fbc;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    bVar11 = *pbVar6;
    uVar14 = (uint)bVar11;
    *(byte **)(param_1 + 0x18) = pbVar6 + 1;
    iVar12 = *(int *)(param_1 + 0x24) + 1;
    if (uVar14 == 10) {
      *(int *)(param_1 + 0x28) = iVar12 + *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      iVar12 = 0;
    }
    *(byte *)(param_1 + 0x2d) = bVar11;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    *(int *)(param_1 + 0x24) = iVar12;
    uVar4 = uVar14 - 9;
    if (uVar4 < 0x24) goto LAB_005b5844;
LAB_005b5988:
    if (uVar14 == 0x5d) {
      if (local_38 != 0x5b) break;
    }
    else if ((uVar14 != 0x7d) || (local_38 != 0x7b)) break;
    FUN_00ef8de4();
    if (*(int *)(param_1 + 8) == 0) {
      return 0;
    }
    iVar12 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar12;
    bVar15 = true;
    local_38 = (uint)*(byte *)(*(int *)(param_1 + 4) + iVar12);
  } while( true );
switchD_005b584c_caseD_5b5a30:
  if (bVar15) {
    local_30 = 7;
    if (local_38 != 0x5b) {
      if (local_38 != 0x7b) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9334);
      }
      local_30 = 8;
    }
LAB_005b5fbc:
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    uVar10 = *(undefined4 *)(param_1 + 0x24);
    goto LAB_005b5f74;
  }
LAB_005b5a6c:
  iVar12 = 1;
  if (local_38 == 0x7b) goto code_r0x005b5a80;
  goto LAB_005b549c;
code_r0x005b5a80:
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_00ed3ed8(&local_30,puVar3);
    bVar15 = false;
    uVar4 = 0x22;
    if ((local_30 & 0xff) != 5) {
      if ((local_30 & 0xff) == 4) {
        uVar4 = (uint)local_30._1_1_;
        *(byte *)(param_1 + 0x2d) = local_30._1_1_;
        *(undefined1 *)(param_1 + 0x2c) = 1;
        bVar1 = bVar15;
      }
      else {
        local_44 = FUN_0157c4a0(local_30,local_2c);
        bVar1 = true;
      }
      goto LAB_005b5b00;
    }
    bVar7 = false;
LAB_005b5bfc:
    if (bVar15) {
      return local_44;
    }
    if (!bVar7) goto LAB_005b602c;
    bVar15 = uVar4 == 0x22;
LAB_005b5c10:
    if (!bVar15) {
LAB_005b6038:
      uVar9 = *(undefined4 *)(param_1 + 0x20);
      uVar10 = *(undefined4 *)(param_1 + 0x24);
      local_30 = 0x11;
      goto LAB_005b5f74;
    }
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + 0x2d);
    bVar1 = false;
LAB_005b5b00:
    bVar7 = true;
    bVar15 = true;
    if (bVar1) goto LAB_005b5bfc;
    uVar14 = uVar4 - 9;
    if (0x19 < uVar14) goto LAB_005b6038;
    if ((1 << (uVar14 & 0xff) & 0x800013U) == 0) {
      bVar15 = uVar14 == 0x19;
      goto LAB_005b5c10;
    }
    do {
      FUN_00ef8de4(iVar2);
      if (*(char *)(param_1 + 0x2c) == '\x01') {
        bVar15 = false;
        uVar4 = (uint)*(byte *)(param_1 + 0x2d);
        bVar7 = true;
      }
      else {
        FUN_00ed3ed8(&local_30,puVar3);
        bVar15 = false;
        if ((local_30 & 0xff) == 5) {
          bVar7 = false;
        }
        else if ((local_30 & 0xff) == 4) {
          uVar4 = (uint)local_30._1_1_;
          bVar7 = true;
          *(byte *)(param_1 + 0x2d) = local_30._1_1_;
          *(undefined1 *)(param_1 + 0x2c) = 1;
        }
        else {
          local_44 = FUN_0157c4a0(local_30,local_2c);
          bVar7 = true;
          bVar15 = true;
        }
      }
      if ((!bVar7) || (bVar15)) goto LAB_005b5bfc;
      uVar14 = uVar4 - 9;
      if (0x19 < uVar14) goto LAB_005b6038;
    } while ((1 << (uVar14 & 0xff) & 0x800013U) != 0);
    if (uVar14 != 0x19) goto LAB_005b6038;
  }
  FUN_00ef8de4(iVar2);
  iVar12 = FUN_00ef897c(iVar2);
  if (iVar12 != 0) {
    return iVar12;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_00ed3ed8(&local_30,puVar3);
    bVar1 = false;
    cVar13 = ':';
    if ((local_30 & 0xff) != 5) {
      if ((local_30 & 0xff) == 4) {
        *(byte *)(param_1 + 0x2d) = local_30._1_1_;
        *(undefined1 *)(param_1 + 0x2c) = 1;
        bVar15 = bVar1;
        cVar13 = local_30._1_1_;
      }
      else {
        local_48 = FUN_0157c4a0(local_30,local_2c);
        bVar15 = true;
      }
      goto LAB_005b5ca4;
    }
    bVar7 = false;
  }
  else {
    bVar15 = false;
    cVar13 = *(char *)(param_1 + 0x2d);
LAB_005b5ca4:
    bVar7 = true;
    bVar1 = true;
    if (!bVar15) {
      switch(cVar13) {
      case '\t':
      case '\n':
      case '\r':
      case ' ':
switchD_005b5cc4_caseD_9:
        FUN_00ef8de4(iVar2);
        if (*(char *)(param_1 + 0x2c) == '\x01') {
          bVar1 = false;
          bVar7 = true;
          cVar13 = *(char *)(param_1 + 0x2d);
        }
        else {
          FUN_00ed3ed8(&local_30,puVar3);
          bVar1 = false;
          if ((local_30 & 0xff) == 5) {
            bVar7 = false;
          }
          else if ((local_30 & 0xff) == 4) {
            bVar7 = true;
            *(byte *)(param_1 + 0x2d) = local_30._1_1_;
            *(undefined1 *)(param_1 + 0x2c) = 1;
            cVar13 = local_30._1_1_;
          }
          else {
            local_48 = FUN_0157c4a0(local_30,local_2c);
            bVar7 = true;
            bVar1 = true;
          }
        }
        if ((!bVar7) || (bVar1)) break;
        switch(cVar13) {
        case '\t':
        case '\n':
        case '\r':
        case ' ':
          goto switchD_005b5cc4_caseD_9;
        default:
          goto switchD_005b5cc4_caseD_b;
        case ':':
          goto switchD_005b5cc4_caseD_3a;
        }
      default:
switchD_005b5cc4_caseD_b:
        uVar9 = *(undefined4 *)(param_1 + 0x20);
        uVar10 = *(undefined4 *)(param_1 + 0x24);
        local_30 = 6;
LAB_005b5f74:
        iVar2 = FUN_0157c50c(&local_30,uVar9,uVar10);
        return iVar2;
      case ':':
        goto switchD_005b5cc4_caseD_3a;
      }
    }
  }
  if (bVar1) {
    return local_48;
  }
  if (bVar7) {
    if (cVar13 != ':') goto switchD_005b5cc4_caseD_b;
switchD_005b5cc4_caseD_3a:
    FUN_00ef8de4(iVar2);
    iVar12 = 1;
    goto LAB_005b5494;
  }
LAB_005b602c:
  uVar9 = *(undefined4 *)(param_1 + 0x20);
  uVar10 = *(undefined4 *)(param_1 + 0x24);
  local_30 = 3;
  goto LAB_005b5f74;
}

