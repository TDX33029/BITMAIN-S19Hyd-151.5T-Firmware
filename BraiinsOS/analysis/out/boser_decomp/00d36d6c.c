// FUN_00d36d6c @ 00d36d6c size=2092 calls_out=18 calls_in=2
// strings: 

void FUN_00d36d6c(int *param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint extraout_r1;
  int iVar4;
  code *pcVar5;
  uint extraout_r1_00;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (*param_1 == 1) {
    iVar3 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar3 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar3 != 0) {
      FUN_01443048(iVar3,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  cVar1 = *(char *)((int)param_1 + 0xd);
  if (cVar1 == '\0') {
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar3 + -1;
    goto LAB_00d36e48;
  }
  if (cVar1 == '\x03') {
    cVar1 = (char)param_1[0x13];
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = (char)param_1[0x12];
    }
    if (bVar8 && cVar1 == '\x03') {
      cVar1 = (char)param_1[0x11];
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = (char)param_1[0x10];
      }
      if (bVar8 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 8);
      }
    }
    goto LAB_00d36e04;
  }
  if (cVar1 != '\x04') {
    return;
  }
  if ((char)param_1[0x25b] != '\x03') {
    if ((char)param_1[0x25b] == '\0') {
      iVar3 = param_1[0x22c];
LAB_00d36dc0:
      if (iVar3 != -0x80000000) {
        FUN_01a2affc();
      }
    }
    goto LAB_00d36e04;
  }
  cVar1 = (char)param_1[100];
  if (cVar1 != '\x04') {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        iVar3 = param_1[4];
        goto LAB_00d36dc0;
      }
      goto LAB_00d36e04;
    }
    cVar1 = (char)param_1[0x6e];
    if (cVar1 == '\x04') {
      cVar1 = *(char *)((int)param_1 + 0x1f7);
      if (cVar1 == '\x05') {
        cVar1 = (char)param_1[0x10c];
        if (cVar1 == '\0') {
          FUN_019bb7e0(param_1[0xfc],param_1[0xfd]);
          iVar3 = param_1[0xff];
          iVar4 = 0x3fc;
          if (iVar3 != -0x80000000) goto LAB_00d37274;
        }
        else {
          if (cVar1 == '\x03') {
            cVar1 = (char)param_1[0x118];
            bVar8 = cVar1 == '\x03';
            if (bVar8) {
              cVar1 = (char)param_1[0x117];
            }
            if (bVar8 && cVar1 == '\x03') {
              FUN_0193c3cc(param_1 + 0x10f);
              param_2 = extraout_r1_00;
            }
          }
          else {
            if (cVar1 != '\x04') goto LAB_00d37280;
            FUN_00d37aac(param_1 + 0x10e);
            FUN_019f8c54(param_1[0x109],param_1[0x10a]);
            param_2 = extraout_r1;
          }
          iVar3 = param_1[0x106];
          if (iVar3 != -0x80000000) {
            param_2 = (uint)*(byte *)((int)param_1 + 0x431);
          }
          if (iVar3 != -0x80000000 && param_2 != 0) {
            FUN_019bb7e0(iVar3,param_1[0x107]);
          }
          iVar4 = 0x40c;
          *(undefined1 *)((int)param_1 + 0x431) = 0;
          iVar3 = param_1[0x103];
LAB_00d37274:
          FUN_019bb7e0(iVar3,*(undefined4 *)((int)param_1 + iVar4 + 4));
        }
LAB_00d37280:
        piVar2 = (int *)param_1[0xf1];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0195b288(param_1[0xf1]);
        }
        if (param_1[0xc0] != -0x80000000) {
          FUN_01a2affc();
        }
        *(undefined2 *)((int)param_1 + 0x1f5) = 0;
LAB_00d372cc:
        if ((char)param_1[0x7d] != '\0') {
          FUN_019f8c54(param_1[0x78],param_1[0x79]);
        }
LAB_00d372e4:
        *(undefined1 *)(param_1 + 0x7d) = 0;
      }
      else {
        if (cVar1 == '\x04') {
          if ((char)param_1[0x82] == '\x05') {
            if (*(char *)((int)param_1 + 0x259) == '\x03') {
              FUN_019faf5c(param_1 + 0x84);
              FUN_0193d87c(param_1 + 0x8c);
              *(undefined1 *)(param_1 + 0x96) = 0;
            }
            piVar2 = (int *)param_1[0x83];
            DataMemoryBarrier(0xb);
            do {
              iVar3 = *piVar2;
              bVar8 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar8);
            *piVar2 = iVar3 + -1;
            if (iVar3 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01a38f34(param_1[0x83]);
            }
          }
          else if ((char)param_1[0x82] == '\x04') {
            FUN_0193cfd0(param_1 + 0x83);
            FUN_005fb2fc(param_1 + 0xda);
          }
          goto LAB_00d372cc;
        }
        if (cVar1 == '\x03') {
          cVar1 = (char)param_1[0x89];
          bVar8 = cVar1 == '\x03';
          if (bVar8) {
            cVar1 = (char)param_1[0x88];
          }
          if (bVar8 && cVar1 == '\x03') {
            FUN_0193c3cc(param_1 + 0x80);
          }
          goto LAB_00d372e4;
        }
      }
      FUN_0134c054(param_1[0x6f],param_1[0x70],1,0x10);
LAB_00d37300:
      piVar2 = param_1 + 0x6b;
LAB_00d37304:
      FUN_019bb7e0(*piVar2,piVar2[1]);
    }
    else {
      if (cVar1 == '\x03') {
        cVar1 = (char)param_1[0x7a];
        bVar8 = cVar1 == '\x03';
        if (bVar8) {
          cVar1 = (char)param_1[0x79];
        }
        if (bVar8 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x71);
        }
        goto LAB_00d37300;
      }
      if (cVar1 == '\0') {
        piVar2 = param_1 + 0x66;
        goto LAB_00d37304;
      }
    }
    goto LAB_00d37588;
  }
  cVar1 = *(char *)((int)param_1 + 0x356);
  if (cVar1 != '\x04') {
    if (cVar1 == '\x03') {
      cVar1 = (char)param_1[0x13c];
      if (cVar1 == '\x04') {
        FUN_00d37aac(param_1 + 0x13e);
        *(undefined1 *)((int)param_1 + 0x4f2) = 0;
        FUN_019f8c54(param_1[0x139],param_1[0x13a]);
LAB_00d370d8:
        if (*(char *)((int)param_1 + 0x4f1) != '\0') {
          FUN_01a2affc(param_1 + 0x13d);
        }
        *(undefined1 *)((int)param_1 + 0x4f1) = 0;
      }
      else {
        if (cVar1 == '\x03') {
          cVar1 = (char)param_1[0x176];
          bVar8 = cVar1 == '\x03';
          if (bVar8) {
            cVar1 = (char)param_1[0x175];
          }
          if (bVar8 && cVar1 == '\x03') {
            FUN_0193c3cc(param_1 + 0x16d);
          }
          goto LAB_00d370d8;
        }
        if (cVar1 == '\0') {
          FUN_01a2affc(param_1 + 0x104);
        }
      }
      *(undefined1 *)((int)param_1 + 0x352) = 0;
      goto LAB_00d37528;
    }
    if (cVar1 == '\0') {
      FUN_005f6b38(param_1 + 0x9c);
    }
    goto LAB_00d3757c;
  }
  if (*(char *)((int)param_1 + 0x8a1) != '\x03') {
    if (*(char *)((int)param_1 + 0x8a1) == '\0') {
      FUN_005f6b38(param_1 + 0x1f0);
    }
    goto LAB_00d37528;
  }
  switch((char)param_1[0x144]) {
  case '\0':
    piVar2 = (int *)param_1[0x10b];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0195b288(param_1[0x10b]);
    }
    if (param_1[0xd9] != -0x80000000) {
      FUN_01a2affc();
    }
    FUN_019bb7e0(param_1[0xd6],param_1[0xd7]);
    if (param_1[0x107] != -0x80000000) {
      FUN_019bb7e0(param_1[0x107],param_1[0x108]);
    }
    break;
  case '\x03':
    cVar1 = (char)param_1[0x151];
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = (char)param_1[0x150];
    }
    if (bVar8 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x148);
    }
    goto LAB_00d37498;
  case '\x04':
    switch(*(undefined1 *)((int)param_1 + 0x539)) {
    case 0:
      piVar2 = (int *)param_1[0x14d];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0195b288(param_1[0x14d]);
      }
    default:
      goto switchD_00d37170_caseD_1;
    case 3:
      break;
    case 4:
      FUN_0193cfd0(param_1 + 0x14f);
      FUN_005fb2fc(param_1 + 0x1a6);
      break;
    case 5:
      if (*(char *)((int)param_1 + 0x593) == '\x03') {
        FUN_019faf5c(param_1 + 0x150);
        *(undefined1 *)(param_1 + 0x164) = 0;
        *(undefined1 *)((int)param_1 + 0x592) = 0;
        FUN_0193d87c(param_1 + 0x158);
        FUN_005f797c(param_1 + 0x161);
        *(undefined1 *)((int)param_1 + 0x591) = 0;
      }
      else if (*(char *)((int)param_1 + 0x593) == '\0') {
        piVar2 = (int *)param_1[0x163];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0195b288(param_1[0x163]);
        }
      }
      piVar2 = (int *)param_1[0x14f];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38f34(param_1[0x14f]);
      }
    }
    if ((char)param_1[0x14e] != '\0') {
      piVar2 = (int *)param_1[0x14b];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0195b288(param_1[0x14b]);
      }
    }
    *(undefined1 *)(param_1 + 0x14e) = 0;
switchD_00d37170_caseD_1:
    FUN_019f8c54(param_1[0x141],param_1[0x142]);
LAB_00d37498:
    if (param_1[0x13e] != -0x80000000) {
      FUN_019bb7e0(param_1[0x13e],param_1[0x13f]);
    }
    *(undefined1 *)((int)param_1 + 0x511) = 0;
    FUN_019bb7e0(param_1[0x13b],param_1[0x13c]);
    *(undefined1 *)((int)param_1 + 0x512) = 0;
    if (param_1[0x10d] != -0x80000000) {
      FUN_01a2affc();
    }
    piVar2 = (int *)param_1[0x10c];
    *(undefined1 *)((int)param_1 + 0x513) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0195b288(param_1[0x10c]);
    }
    *(undefined1 *)(param_1 + 0x145) = 0;
    break;
  case '\x05':
    cVar1 = (char)param_1[0x153];
    if (cVar1 == '\x06') {
      puVar7 = (undefined4 *)param_1[0x155];
      iVar3 = param_1[0x154];
      pcVar5 = (code *)*puVar7;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar3);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_01be4678(iVar3);
      }
      FUN_019f8c54(param_1[0x150],param_1[0x151]);
    }
    else if (cVar1 == '\x05') {
      cVar1 = (char)param_1[0x15f];
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = (char)param_1[0x15e];
      }
      if (bVar8 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x156);
      }
    }
    else if (cVar1 == '\x04') {
      FUN_0193cfd0(param_1 + 0x154);
      FUN_005fb2fc(param_1 + 0x1ab);
    }
    goto switchD_00d37170_caseD_1;
  }
  *(undefined2 *)((int)param_1 + 0x89e) = 0;
  *(undefined1 *)(param_1 + 0x228) = 0;
  FUN_019bb7e0(param_1[0x1eb],param_1[0x1ec]);
LAB_00d37528:
  if (*(char *)((int)param_1 + 0x353) != '\0') {
    FUN_019bb7e0(param_1[0x97],param_1[0x98]);
  }
  bVar8 = (char)param_1[0xd5] != '\0';
  iVar3 = 0;
  if (bVar8) {
    iVar3 = param_1[0x66];
  }
  if ((bVar8 && iVar3 != -0x80000000) && (*(char *)((int)param_1 + 0x355) == '\x01')) {
    FUN_01a2affc(param_1 + 0x66);
  }
  *(undefined1 *)(param_1 + 0xd5) = 0;
  if (*(char *)((int)param_1 + 0x353) != '\0') {
    FUN_005f6b64(param_1 + 0x94);
  }
  *(undefined1 *)((int)param_1 + 0x355) = 0;
  *(undefined2 *)((int)param_1 + 0x353) = 0;
LAB_00d3757c:
  *(undefined2 *)((int)param_1 + 0x192) = 0;
LAB_00d37588:
  uVar6 = param_1[0x35];
  bVar8 = uVar6 != 0x80000000;
  if (bVar8) {
    uVar6 = (uint)*(byte *)((int)param_1 + 0x191);
  }
  if (bVar8 && uVar6 != 0) {
    FUN_01a2affc();
  }
  *(undefined1 *)((int)param_1 + 0x191) = 0;
LAB_00d36e04:
  piVar2 = (int *)param_1[2];
  *(undefined1 *)(param_1 + 3) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar8 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar8);
  *piVar2 = iVar3 + -1;
LAB_00d36e48:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180ffc(param_1[2]);
    return;
  }
  return;
}

