// FUN_00ce90bc @ 00ce90bc size=1976 calls_out=28 calls_in=2
// strings: 

void FUN_00ce90bc(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [2];
  int local_1c;
  
  switch(*(undefined1 *)(param_1 + 0x90)) {
  case 0:
    if ((-0x7ffffffe < *(int *)(param_1 + 0x20)) && (*(int *)(param_1 + 0x20) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    }
    puVar8 = (undefined4 *)(param_1 + 0x30);
    FUN_016af0b0(puVar8);
    piVar4 = (int *)*puVar8;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar8);
      return;
    }
    return;
  default:
    goto switchD_00ce90dc_caseD_1;
  case 3:
    FUN_00ad3ec0(param_1 + 0x98);
    break;
  case 4:
    if (*(char *)(param_1 + 0xcc) == '\x03') {
      FUN_00b216bc(param_1 + 0x9c);
    }
    break;
  case 5:
    switch(*(undefined1 *)(param_1 + 0x138)) {
    case 0:
      if ((-0x7ffffffe < *(int *)(param_1 + 0xc0)) && (*(int *)(param_1 + 0xc0) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc4));
      }
      puVar8 = (undefined4 *)(param_1 + 0xd0);
      FUN_016af0b0(puVar8);
      piVar4 = (int *)*puVar8;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*puVar8);
      }
    default:
      goto switchD_00ce91a0_caseD_1;
    case 3:
      goto switchD_00ce91a0_caseD_3;
    case 4:
      FUN_00ad4614(param_1 + 0x140);
      goto LAB_00ce97f0;
    case 5:
      switch(*(undefined1 *)(param_1 + 0x1e0)) {
      case 0:
        puVar8 = (undefined4 *)(param_1 + 0x168);
        FUN_016af0b0(puVar8);
        piVar4 = (int *)*puVar8;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar6 + -1;
        goto LAB_00ce9798;
      default:
        goto switchD_00ce92e8_caseD_1;
      case 3:
        if (*(char *)(param_1 + 0x21c) == '\x03') {
          FUN_00b216bc(param_1 + 0x1ec);
        }
        goto LAB_00ce9768;
      case 4:
        if (*(char *)(param_1 + 0x248) == '\x03') {
          FUN_00ad4780(param_1 + 0x1f0);
        }
        goto LAB_00ce9768;
      case 5:
        if (*(char *)(param_1 + 0x204) == '\x04') {
          FUN_00ad3a7c(param_1 + 0x208);
        }
        FUN_00ce1dd8(*(undefined4 *)(param_1 + 0x1ec),*(undefined4 *)(param_1 + 0x1f0));
        if (*(int *)(param_1 + 0x1e8) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1ec));
        }
        break;
      case 6:
        FUN_00a07b4c(param_1 + 0x1f0);
        puVar8 = (undefined4 *)(param_1 + 0x240);
        FUN_016af0b0(puVar8);
        piVar4 = (int *)*puVar8;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4138(*puVar8);
        }
        break;
      case 7:
        if (*(char *)(param_1 + 0x278) == '\x03') {
          if (*(char *)(param_1 + 0x211) == '\x04') {
            if (*(char *)(param_1 + 0x261) == '\x03') {
              puVar8 = *(undefined4 **)(param_1 + 0x254);
              uVar7 = *(undefined4 *)(param_1 + 0x250);
              pcVar5 = (code *)*puVar8;
              if (pcVar5 != (code *)0x0) {
                (*pcVar5)(uVar7);
              }
              if (puVar8[1] != 0) {
                thunk_FUN_016d3fb4(uVar7);
              }
              if (*(int *)(param_1 + 0x228) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x22c));
              }
            }
            FUN_00c822ec(*(undefined4 *)(param_1 + 0x208));
          }
          else if ((*(char *)(param_1 + 0x211) == '\x03') && (*(int *)(param_1 + 0x214) != 0)) {
            FUN_00c8204c(*(int *)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x218),1);
          }
          piVar4 = *(int **)(param_1 + 0x270);
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar4;
            bVar9 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar9);
          *piVar4 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f31e8(*(undefined4 *)(param_1 + 0x270));
          }
        }
      }
      FUN_00c49364(param_1 + 0x1d4);
      FUN_00c49070(param_1 + 0x1c8);
      *(undefined1 *)(param_1 + 0x1e2) = 0;
LAB_00ce9768:
      FUN_00c47f30(param_1 + 0x1bc);
      puVar8 = (undefined4 *)(param_1 + 0x178);
      FUN_016af0b0(puVar8);
      piVar4 = (int *)*puVar8;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar6 + -1;
LAB_00ce9798:
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*puVar8);
      }
switchD_00ce92e8_caseD_1:
      puVar8 = (undefined4 *)(param_1 + 0x118);
      *(undefined1 *)(param_1 + 0x139) = 0;
      FUN_016af0b0(puVar8);
      piVar4 = (int *)*puVar8;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*puVar8);
      }
LAB_00ce97f0:
      *(undefined1 *)(param_1 + 0x13c) = 0;
      goto switchD_00ce9258_default;
    case 6:
      cVar2 = *(char *)(param_1 + 399);
      if (cVar2 == '\x04') {
        FUN_00ce1dd8(*(undefined4 *)(param_1 + 0x1bc),*(undefined4 *)(param_1 + 0x1c0));
        if (*(int *)(param_1 + 0x1b8) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1bc));
        }
        if (*(int *)(param_1 + 0x1ac) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1b0));
        }
        *(undefined1 *)(param_1 + 0x18c) = 0;
        FUN_00c48a0c(param_1 + 0x19c);
        *(undefined1 *)(param_1 + 0x18d) = 0;
        if (*(int *)(param_1 + 400) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x194));
        }
        *(undefined1 *)(param_1 + 0x18e) = 0;
LAB_00ce93e8:
        iVar6 = 0x1c;
        FUN_00c487f4(param_1 + 0x178);
      }
      else {
        if (cVar2 == '\x03') {
          if ((*(char *)(param_1 + 0x1c4) == '\x03') && (*(int *)(param_1 + 0x1bc) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x1bc),*(undefined4 *)(param_1 + 0x1c0),1);
          }
          goto LAB_00ce93e8;
        }
        iVar6 = 4;
        if (cVar2 != '\0') goto switchD_00ce92e8_caseD_1;
      }
      piVar4 = (int *)(param_1 + 0x150 + iVar6);
      iVar6 = *piVar4;
      if (iVar6 == 0) {
        local_28 = 0;
      }
      else {
        local_3c = piVar4[1];
        local_28 = piVar4[2];
        local_34 = 0;
        local_44 = 0;
        local_40 = iVar6;
        local_30 = iVar6;
        local_2c = local_3c;
      }
      local_48 = (uint)(iVar6 != 0);
      local_38 = local_48;
      while (FUN_00c3b3e0(local_24,&local_48), local_24[0] != 0) {
        FUN_00bd20f4(local_24[0] + local_1c * 0x48);
      }
      goto switchD_00ce92e8_caseD_1;
    }
  case 6:
    FUN_00cea2b8(param_1 + 0x1b8);
    iVar6 = 0x93;
    FUN_00ad1570(param_1 + 0x128);
    goto LAB_00ce9870;
  }
  cVar2 = *(char *)(param_1 + 0x91);
  goto joined_r0x00ce9888;
switchD_00ce91a0_caseD_3:
  switch(*(undefined1 *)(param_1 + 0x1f6)) {
  case 3:
    if (*(char *)(param_1 + 0x21c) == '\x04') {
      FUN_00ad3a7c(param_1 + 0x220);
    }
    FUN_00ce1dd8(*(undefined4 *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x200));
    if (*(int *)(param_1 + 0x1f8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1fc));
    }
    FUN_00c47f30(param_1 + 0x204);
    goto switchD_00ce9258_default;
  case 4:
    goto switchD_00ce9258_caseD_4;
  case 5:
    FUN_00ad235c(param_1 + 0x218);
    FUN_00c47f30(param_1 + 0x1f8);
    goto switchD_00ce9258_caseD_4;
  case 6:
    goto switchD_00ce9258_caseD_6;
  case 7:
    FUN_00ce9ea4(param_1 + 0x1f8);
    break;
  case 8:
    if (*(char *)(param_1 + 0x2fc) == '\x03') {
      FUN_00cea1dc(param_1 + 0x200);
    }
    break;
  case 9:
    if (*(char *)(param_1 + 0x2fc) == '\x03') {
      FUN_00cea1dc(param_1 + 0x200);
    }
    break;
  case 10:
    FUN_00ce9ea4(param_1 + 0x1f8);
    break;
  case 0xb:
    FUN_00a07b4c(param_1 + 0x1f8);
    break;
  case 0xc:
    FUN_00a07b4c(param_1 + 0x1f8);
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x2fc) == '\x03') {
      FUN_00cea1dc(param_1 + 0x200);
    }
    goto switchD_00ce9258_caseD_6;
  case 0xe:
    FUN_00ce9ea4(param_1 + 0x210);
    FUN_00ce1dd8(*(undefined4 *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x200));
    if (*(int *)(param_1 + 0x1f8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1fc));
    }
    FUN_00c47f30(param_1 + 0x204);
    goto switchD_00ce9258_caseD_6;
  case 0xf:
    if (*(char *)(param_1 + 0x2fc) == '\x03') {
      FUN_00cea1dc(param_1 + 0x200);
    }
    goto switchD_00ce9258_caseD_6;
  case 0x10:
    cVar2 = *(char *)(param_1 + 0x216);
    bVar9 = cVar2 == '\x03';
    if (bVar9) {
      cVar2 = *(char *)(param_1 + 0x206);
    }
    if ((bVar9 && cVar2 == '\x03') && (*(int *)(param_1 + 0x1f8) != 0)) {
      FUN_00c8204c(*(int *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x1fc),1);
    }
    goto switchD_00ce9258_caseD_6;
  default:
    goto switchD_00ce9258_default;
  }
  FUN_00ce1dd8(*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8));
  if (*(int *)(param_1 + 0x1e0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1e4));
  }
  FUN_00c4849c(param_1 + 0x1d4);
  FUN_00c48f0c(param_1 + 0x1c8);
switchD_00ce9258_caseD_6:
  FUN_00c487f4(param_1 + 0x1bc);
  FUN_00c47f30(param_1 + 0x1b0);
  FUN_00c47f30(param_1 + 0x1a4);
switchD_00ce9258_caseD_4:
  if (*(int *)(param_1 + 0x198) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x19c));
  }
switchD_00ce9258_default:
  if (*(char *)(param_1 + 0x13a) != '\0') {
    puVar8 = (undefined4 *)(param_1 + 0x110);
    FUN_016af0b0(puVar8);
    piVar4 = (int *)*puVar8;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar8);
    }
  }
  iVar3 = *(int *)(param_1 + 0x100);
  iVar6 = 0x13b;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  if (-1 < iVar3) {
    bVar1 = 0;
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_1 + 0x13b);
    }
    if (iVar3 != 0 && (bVar1 & 1) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x104));
    }
  }
LAB_00ce9870:
  *(undefined1 *)(param_1 + iVar6) = 0;
switchD_00ce91a0_caseD_1:
  *(undefined1 *)(param_1 + 0x94) = 0;
  cVar2 = *(char *)(param_1 + 0x91);
joined_r0x00ce9888:
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)(param_1 + 0x68);
    FUN_016af0b0(puVar8);
    piVar4 = (int *)*puVar8;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar8);
    }
  }
  *(undefined1 *)(param_1 + 0x91) = 0;
  if (((*(char *)(param_1 + 0x92) != '\0') && (-0x7ffffffe < *(int *)(param_1 + 0x58))) &&
     (*(int *)(param_1 + 0x58) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
  }
  *(undefined1 *)(param_1 + 0x92) = 0;
switchD_00ce90dc_caseD_1:
  return;
}

