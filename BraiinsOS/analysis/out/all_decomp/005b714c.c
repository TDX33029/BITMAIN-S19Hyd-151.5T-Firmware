// FUN_005b714c @ 005b714c size=2360 calls_out=2 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x005b724c) */
/* WARNING: Removing unreachable block (ram,0x005b7e88) */
/* WARNING: Removing unreachable block (ram,0x005b721c) */

undefined4 FUN_005b714c(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 local_2c [2];
  undefined4 local_24;
  
  uVar6 = (uint)*(byte *)(param_1 + 0x2d);
  cVar4 = *(char *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (cVar4 == '\x01') {
    if (*(int *)(param_1 + 0xc) != -0x80000000) {
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == *(int *)(param_1 + 0xc)) {
LAB_005b74d8:
        FUN_006029c0(param_1 + 0xc);
      }
LAB_005b7184:
      *(char *)(*(int *)(param_1 + 0x10) + iVar7) = (char)uVar6;
      *(int *)(param_1 + 0x14) = iVar7 + 1;
    }
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(byte **)(param_1 + 0x18) = pbVar9;
      goto LAB_005b731c;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    uVar6 = (uint)*pbVar9;
    iVar7 = *(int *)(param_1 + 0x24) + 1;
    *(byte **)(param_1 + 0x18) = pbVar9 + 1;
    if (uVar6 == 10) {
      *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x24) = iVar7;
    if (*(int *)(param_1 + 0xc) != -0x80000000) {
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == *(int *)(param_1 + 0xc)) goto LAB_005b74d8;
      goto LAB_005b7184;
    }
  }
  if (uVar6 == 0x30) {
    if (*(char *)(param_1 + 0x2c) == '\x01') {
      uVar6 = (uint)*(byte *)(param_1 + 0x2d);
LAB_005b73b4:
      if (uVar6 - 0x30 < 10) goto LAB_005b731c;
      goto LAB_005b73c0;
    }
    pbVar9 = *(byte **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      bVar2 = *pbVar9;
      uVar6 = (uint)bVar2;
      *(byte **)(param_1 + 0x18) = pbVar9 + 1;
      iVar7 = *(int *)(param_1 + 0x24) + 1;
      if (uVar6 == 10) {
        *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        iVar7 = 0;
      }
      *(byte *)(param_1 + 0x2d) = bVar2;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(int *)(param_1 + 0x24) = iVar7;
      goto LAB_005b73b4;
    }
LAB_005b73d4:
    *(byte **)(param_1 + 0x18) = pbVar9;
    pcVar5 = *(char **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(char **)(param_1 + 0x18) = pcVar5;
      return 0;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    cVar4 = *pcVar5;
    iVar7 = *(int *)(param_1 + 0x24) + 1;
    *(char **)(param_1 + 0x18) = pcVar5 + 1;
    if (cVar4 == '\n') {
      *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      iVar7 = 0;
    }
    *(char *)(param_1 + 0x2d) = cVar4;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    *(int *)(param_1 + 0x24) = iVar7;
    if (cVar4 != 'e' && cVar4 != 'E') goto LAB_005b746c;
  }
  else {
    if (8 < uVar6 - 0x31) goto LAB_005b731c;
    while( true ) {
      if (*(char *)(param_1 + 0x2c) == '\x01') {
        uVar6 = (uint)*(byte *)(param_1 + 0x2d);
      }
      else {
        pbVar9 = *(byte **)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x1c) == 0) goto LAB_005b73d4;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        bVar2 = *pbVar9;
        uVar6 = (uint)bVar2;
        *(byte **)(param_1 + 0x18) = pbVar9 + 1;
        iVar7 = *(int *)(param_1 + 0x24) + 1;
        if (uVar6 == 10) {
          *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          iVar7 = 0;
        }
        *(byte *)(param_1 + 0x2d) = bVar2;
        *(undefined1 *)(param_1 + 0x2c) = 1;
        *(int *)(param_1 + 0x24) = iVar7;
      }
      if (9 < uVar6 - 0x30) break;
      uVar1 = *(undefined1 *)(param_1 + 0x2d);
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar7 = *(int *)(param_1 + 0x14);
        if (iVar7 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(param_1 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar1;
        *(int *)(param_1 + 0x14) = iVar7 + 1;
      }
    }
LAB_005b73c0:
    cVar4 = *(char *)(param_1 + 0x2d);
    if (cVar4 != 'e' && cVar4 != 'E') {
LAB_005b746c:
      if (cVar4 != '.') {
        return 0;
      }
      uVar1 = *(undefined1 *)(param_1 + 0x2d);
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(int *)(param_1 + 0xc) == -0x80000000) {
LAB_005b74f4:
        pbVar9 = *(byte **)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x1c) == 0) {
          *(byte **)(param_1 + 0x18) = pbVar9;
          goto LAB_005b731c;
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        bVar2 = *pbVar9;
        uVar6 = (uint)bVar2;
        *(byte **)(param_1 + 0x18) = pbVar9 + 1;
        iVar7 = *(int *)(param_1 + 0x24) + 1;
        if (uVar6 == 10) {
          *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          iVar7 = 0;
        }
        *(byte *)(param_1 + 0x2d) = bVar2;
        *(undefined1 *)(param_1 + 0x2c) = 1;
        *(int *)(param_1 + 0x24) = iVar7;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x14);
        if (iVar7 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(param_1 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar1;
        *(int *)(param_1 + 0x14) = iVar7 + 1;
        if (*(char *)(param_1 + 0x2c) == '\0') goto LAB_005b74f4;
        uVar6 = (uint)*(byte *)(param_1 + 0x2d);
      }
      if (9 < uVar6 - 0x30) {
LAB_005b731c:
        local_2c[0] = 0xd;
        uVar3 = FUN_0157c50c(local_2c,*(undefined4 *)(param_1 + 0x20),
                             *(undefined4 *)(param_1 + 0x24));
        return uVar3;
      }
      do {
        uVar1 = *(undefined1 *)(param_1 + 0x2d);
        *(undefined1 *)(param_1 + 0x2c) = 0;
        if (*(int *)(param_1 + 0xc) == -0x80000000) {
LAB_005b75c0:
          pbVar9 = *(byte **)(param_1 + 0x18);
          if (*(int *)(param_1 + 0x1c) == 0) {
            *(byte **)(param_1 + 0x18) = pbVar9;
            if (*(int *)(param_1 + 0x1c) == 0) {
              *(byte **)(param_1 + 0x18) = pbVar9;
              return 0;
            }
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
            bVar2 = *pbVar9;
            *(byte **)(param_1 + 0x18) = pbVar9 + 1;
            iVar7 = *(int *)(param_1 + 0x24) + 1;
            if (bVar2 == 10) {
              *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              iVar7 = 0;
            }
            *(byte *)(param_1 + 0x2d) = bVar2;
            *(undefined1 *)(param_1 + 0x2c) = 1;
            *(int *)(param_1 + 0x24) = iVar7;
            if ((bVar2 | 0x20) != 0x65) {
              return 0;
            }
            goto LAB_005b7c9c;
          }
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
          bVar2 = *pbVar9;
          uVar6 = (uint)bVar2;
          *(byte **)(param_1 + 0x18) = pbVar9 + 1;
          iVar7 = *(int *)(param_1 + 0x24) + 1;
          if (uVar6 == 10) {
            *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            iVar7 = 0;
          }
          *(byte *)(param_1 + 0x2d) = bVar2;
          *(undefined1 *)(param_1 + 0x2c) = 1;
          *(int *)(param_1 + 0x24) = iVar7;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x14);
          if (iVar7 == *(int *)(param_1 + 0xc)) {
            FUN_006029c0(param_1 + 0xc);
          }
          *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar1;
          *(int *)(param_1 + 0x14) = iVar7 + 1;
          if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_005b75c0;
          uVar6 = (uint)*(byte *)(param_1 + 0x2d);
        }
      } while (uVar6 - 0x30 < 10);
      if ((*(byte *)(param_1 + 0x2d) | 0x20) != 0x65) {
        return 0;
      }
    }
  }
LAB_005b7c9c:
  uVar1 = *(undefined1 *)(param_1 + 0x2d);
  cVar4 = *(char *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if ((cVar4 == '\x01') && (*(int *)(param_1 + 0xc) != -0x80000000)) {
    iVar7 = *(int *)(param_1 + 0x14);
    if (iVar7 == *(int *)(param_1 + 0xc)) {
      FUN_006029c0(param_1 + 0xc);
    }
    *(int *)(param_1 + 0x14) = iVar7 + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar1;
    if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_005b7cf8;
    cVar4 = *(char *)(param_1 + 0x2d);
LAB_005b7d50:
    if (cVar4 == '+' || cVar4 == '-') {
      uVar1 = *(undefined1 *)(param_1 + 0x2d);
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(int *)(param_1 + 0xc) == -0x80000000) goto LAB_005b7dc8;
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(param_1 + 0xc);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar1;
      bVar2 = *(byte *)(param_1 + 0x2d);
      cVar4 = *(char *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x14) = iVar7 + 1;
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (cVar4 == '\x01') {
        iVar7 = *(int *)(param_1 + 0xc);
        goto joined_r0x005b7db8;
      }
      goto LAB_005b7dd0;
    }
    bVar2 = *(byte *)(param_1 + 0x2d);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    iVar7 = *(int *)(param_1 + 0xc);
joined_r0x005b7db8:
    uVar6 = (uint)bVar2;
    if (iVar7 != -0x80000000) {
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar8 == iVar7) {
LAB_005b7fc4:
        FUN_006029c0(param_1 + 0xc);
      }
LAB_005b7e3c:
      *(char *)(*(int *)(param_1 + 0x10) + iVar8) = (char)uVar6;
      *(int *)(param_1 + 0x14) = iVar8 + 1;
    }
  }
  else {
LAB_005b7cf8:
    pcVar5 = *(char **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      cVar4 = *pcVar5;
      *(char **)(param_1 + 0x18) = pcVar5 + 1;
      iVar7 = *(int *)(param_1 + 0x24) + 1;
      if (cVar4 == '\n') {
        *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        iVar7 = 0;
      }
      *(char *)(param_1 + 0x2d) = cVar4;
      *(int *)(param_1 + 0x24) = iVar7;
      goto LAB_005b7d50;
    }
    *(char **)(param_1 + 0x18) = pcVar5;
LAB_005b7dc8:
    *(undefined1 *)(param_1 + 0x2c) = 0;
LAB_005b7dd0:
    pbVar9 = *(byte **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(byte **)(param_1 + 0x18) = pbVar9;
      goto LAB_005b7f74;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    uVar6 = (uint)*pbVar9;
    iVar7 = *(int *)(param_1 + 0x24) + 1;
    *(byte **)(param_1 + 0x18) = pbVar9 + 1;
    if (uVar6 == 10) {
      *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x24) = iVar7;
    if (*(int *)(param_1 + 0xc) != -0x80000000) {
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar8 == *(int *)(param_1 + 0xc)) goto LAB_005b7fc4;
      goto LAB_005b7e3c;
    }
  }
  if (uVar6 - 0x30 < 10) {
    while( true ) {
      if (*(char *)(param_1 + 0x2c) == '\x01') {
        uVar6 = (uint)*(byte *)(param_1 + 0x2d);
      }
      else {
        pbVar9 = *(byte **)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x1c) == 0) {
          *(byte **)(param_1 + 0x18) = pbVar9;
          return 0;
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        bVar2 = *pbVar9;
        uVar6 = (uint)bVar2;
        iVar7 = *(int *)(param_1 + 0x24) + 1;
        *(byte **)(param_1 + 0x18) = pbVar9 + 1;
        if (uVar6 == 10) {
          *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          iVar7 = 0;
        }
        *(byte *)(param_1 + 0x2d) = bVar2;
        *(undefined1 *)(param_1 + 0x2c) = 1;
        *(int *)(param_1 + 0x24) = iVar7;
      }
      if (9 < uVar6 - 0x30) break;
      uVar1 = *(undefined1 *)(param_1 + 0x2d);
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar7 = *(int *)(param_1 + 0x14);
        if (iVar7 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(param_1 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar1;
        *(int *)(param_1 + 0x14) = iVar7 + 1;
      }
    }
    return 0;
  }
LAB_005b7f74:
  local_24 = 0xd;
  uVar3 = FUN_0157c50c(&local_24,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return uVar3;
}

