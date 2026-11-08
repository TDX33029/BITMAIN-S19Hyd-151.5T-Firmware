// FUN_01188d1c @ 01188d1c size=5032 calls_out=53 calls_in=1
// strings: 

void FUN_01188d1c(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  code *pcVar3;
  undefined4 *puVar4;
  uint extraout_r1_02;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  
  cVar1 = *(char *)((int)param_1 + 0x233);
  if (cVar1 == '\x03') {
    switch(*(undefined1 *)(param_1 + 0x116)) {
    case 0:
      FUN_0193cf34(param_1 + 0xfb);
      if (param_1[0xf8] != -0x80000000) {
        FUN_019bb7e0(param_1[0xf8],param_1[0xf9]);
      }
    default:
      goto switchD_01188d78_caseD_1;
    case 3:
      cVar1 = *(char *)(param_1 + 0x14b);
      bVar11 = cVar1 != '\x03';
      if (!bVar11) {
        cVar1 = *(char *)((int)param_1 + 0x52b);
      }
      if (bVar11 || cVar1 != '\x03') goto LAB_01189f2c;
      if (10 < *(byte *)((int)param_1 + 0x4f7)) goto switchD_01188ec4_caseD_1;
      break;
    case 4:
      cVar1 = *(char *)(param_1 + 0x11d);
      if (cVar1 == '\x06') {
        if (*(char *)(param_1 + 299) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x12a);
          bVar11 = cVar1 == '\x03';
          if (bVar11) {
            cVar1 = *(char *)(param_1 + 0x129);
          }
          if (bVar11 && cVar1 == '\x03') {
            FUN_0193c3cc(param_1 + 0x121);
          }
        }
        FUN_019f8c54(param_1[0x11a],param_1[0x11b]);
      }
      else if (cVar1 == '\x05') {
        cVar1 = *(char *)(param_1 + 0x129);
        bVar11 = cVar1 == '\x03';
        if (bVar11) {
          cVar1 = *(char *)(param_1 + 0x128);
        }
        if (bVar11 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x120);
        }
      }
      else if (cVar1 == '\x04') {
        FUN_0193cfd0(param_1 + 0x11e);
        FUN_005fb2fc(param_1 + 0x175);
      }
      goto LAB_01189f14;
    case 5:
      if (*(char *)((int)param_1 + 0x5a9) != '\x03') {
        if ((*(char *)((int)param_1 + 0x5a9) == '\0') && (param_1[0x167] != -0x80000000)) {
          FUN_019bb7e0(param_1[0x167],param_1[0x168]);
        }
        goto LAB_01189ecc;
      }
      switch(*(undefined1 *)(param_1 + 0x127)) {
      case 0:
        if (param_1[0x118] != -0x80000000) {
          FUN_019bb7e0(param_1[0x118],param_1[0x119]);
        }
        break;
      case 3:
        if (*(char *)((int)param_1 + 0x4f5) == '\x03') {
          FUN_00d35cfc(param_1 + 0x128);
          *(undefined1 *)(param_1 + 0x13d) = 0;
        }
        goto LAB_011894c8;
      case 4:
        FUN_0118ad3c(param_1 + 0x128);
LAB_011894c8:
        *(undefined1 *)((int)param_1 + 0x49d) = 0;
LAB_01189e94:
        FUN_019bb7e0(param_1[0x121],param_1[0x122]);
        FUN_005f9d30(param_1 + 0x11e);
        *(undefined1 *)((int)param_1 + 0x49e) = 0;
        break;
      case 5:
        if (*(char *)(param_1 + 0x131) == '\x03') {
          if (*(char *)(param_1 + 0x130) == '\x03') {
            piVar2 = (int *)param_1[0x12f];
            if (*piVar2 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar11 = (bool)hasExclusiveAccess(piVar2);
              if (bVar11) {
                *piVar2 = 0x84;
                goto LAB_01189e94;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar2[2] + 0x10))();
            goto LAB_01189e94;
          }
          if (*(char *)(param_1 + 0x130) != '\0') goto LAB_01189e94;
          uVar9 = param_1[300];
          uVar7 = param_1[0x12d];
          goto LAB_01189e90;
        }
        goto LAB_01189e94;
      case 6:
        if (*(char *)((int)param_1 + 0x4f1) == '\x03') {
          if (*(char *)((int)param_1 + 0x4dd) == '\x03') {
            if (*(char *)(param_1 + 0x136) == '\x03') {
              piVar2 = (int *)param_1[0x135];
              if (*piVar2 == 0xcc) {
                DataMemoryBarrier(0xb);
                bVar11 = (bool)hasExclusiveAccess(piVar2);
                if (bVar11) {
                  *piVar2 = 0x84;
                  goto LAB_01189e78;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              (**(code **)(piVar2[2] + 0x10))();
            }
            else if (*(char *)(param_1 + 0x136) == '\0') {
              FUN_019bb7e0(param_1[0x12e],param_1[0x12f]);
              FUN_005f76e0(param_1 + 0x131);
            }
LAB_01189e78:
            *(undefined1 *)(param_1 + 0x137) = 0;
          }
          else if (*(char *)((int)param_1 + 0x4dd) == '\0') {
            FUN_005f76e0(param_1 + 0x128);
          }
          *(undefined1 *)(param_1 + 0x13c) = 0;
        }
        goto LAB_01189e88;
      case 7:
        FUN_0118adb4(param_1 + 0x128);
LAB_01189e88:
        uVar9 = param_1[0x124];
        uVar7 = param_1[0x125];
LAB_01189e90:
        FUN_019bb7e0(uVar9,uVar7);
        goto LAB_01189e94;
      }
      if (param_1[0x164] != -0x80000000) {
        FUN_019bb7e0(param_1[0x164],param_1[0x165]);
      }
      *(undefined1 *)(param_1 + 0x16a) = 0;
      goto LAB_01189ecc;
    case 6:
      switch(*(undefined1 *)((int)param_1 + 0x50d)) {
      case 3:
        if (*(char *)(param_1 + 0x14b) == '\x03') {
          if (*(char *)(param_1 + 0x14a) == '\x03') {
            piVar2 = (int *)param_1[0x149];
            if (*piVar2 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar11 = (bool)hasExclusiveAccess(piVar2);
              if (bVar11) {
                *piVar2 = 0x84;
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar2[2] + 0x10))();
          }
          else if (*(char *)(param_1 + 0x14a) == '\0') {
            FUN_019bb7e0(param_1[0x146],param_1[0x147]);
          }
        }
        break;
      case 4:
        if (*(char *)(param_1 + 0x14b) == '\x03') {
          if (*(char *)(param_1 + 0x14a) == '\x03') {
            piVar2 = (int *)param_1[0x149];
            if (*piVar2 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar11 = (bool)hasExclusiveAccess(piVar2);
              if (bVar11) {
                *piVar2 = 0x84;
                goto LAB_01189338;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar2[2] + 0x10))();
          }
          else if (*(char *)(param_1 + 0x14a) == '\0') {
            FUN_019bb7e0(param_1[0x146],param_1[0x147]);
          }
        }
        goto LAB_01189338;
      case 5:
        goto switchD_01188ffc_caseD_5;
      case 6:
        if (*(char *)((int)param_1 + 0x565) == '\x03') {
          FUN_00d35cfc(param_1 + 0x144);
          *(undefined1 *)(param_1 + 0x159) = 0;
        }
        goto LAB_011892f0;
      case 7:
        FUN_0118ad3c(param_1 + 0x144);
LAB_011892f0:
        FUN_019bb7e0(param_1[0x13f],param_1[0x140]);
        piVar2 = (int *)param_1[0x13e];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar2;
          bVar11 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar11);
        *piVar2 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019db41c(param_1[0x13e]);
        }
switchD_01188ffc_caseD_5:
        FUN_00b6fb24(param_1 + 0x12f);
LAB_01189338:
        FUN_005f9af0(param_1 + 300);
        *(undefined1 *)(param_1 + 0x143) = 0;
      }
switchD_01188ffc_default:
      if (*(char *)(param_1 + 0x117) != '\0') {
        FUN_005f78e0(param_1 + 0x10d);
      }
LAB_01189ecc:
      *(undefined1 *)(param_1 + 0x117) = 0;
      if (*(char *)((int)param_1 + 0x459) != '\0') {
        piVar2 = (int *)param_1[0x10c];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar2;
          bVar11 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar11);
        *piVar2 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0195ae2c(param_1[0x10c]);
        }
      }
      *(undefined1 *)((int)param_1 + 0x459) = 0;
LAB_01189f14:
      if (*(char *)((int)param_1 + 0x45a) != '\0') {
        FUN_005fb2fc(param_1 + 0x102);
      }
      goto LAB_01189f2c;
    case 7:
      if (*(char *)(param_1 + 0x123) == '\x04') {
        FUN_0118ae2c(param_1 + 300);
        *(undefined1 *)((int)param_1 + 0x48a) = 0;
        FUN_0132b958(param_1[0x129],param_1[0x127],4,4);
        FUN_0134c054(param_1[0x124],param_1[0x125],1,0x10);
        *(undefined1 *)((int)param_1 + 0x48b) = 0;
        FUN_019f8c54(param_1[0x11e],1);
      }
      else if (*(char *)(param_1 + 0x123) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x12f);
        bVar11 = cVar1 == '\x03';
        if (bVar11) {
          cVar1 = *(char *)(param_1 + 0x12e);
        }
        if (bVar11 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x126);
        }
      }
      FUN_005f8270(param_1 + 0x118);
      *(undefined1 *)((int)param_1 + 0x45d) = 0;
      goto switchD_01188ffc_default;
    }
    switch(*(byte *)((int)param_1 + 0x4f7)) {
    case 0:
      piVar2 = (int *)param_1[0x139];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar11 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar11);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38404(param_1[0x139]);
      }
      piVar2 = (int *)param_1[0x13a];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar11 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar11);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38404(param_1[0x13a]);
      }
      piVar2 = (int *)param_1[0x13b];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar11 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar11);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38338(param_1[0x13b]);
      }
      piVar2 = (int *)param_1[0x13c];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar11 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar11);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38404(param_1[0x13c]);
      }
    default:
      goto switchD_01188ec4_caseD_1;
    case 3:
      cVar1 = *(char *)(param_1 + 0x149);
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x148);
      }
      if (bVar11 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x140);
      }
      break;
    case 4:
      FUN_01139b38(param_1[0x13e],param_1[0x13f]);
      FUN_019f8c54(param_1[0x12d],param_1[0x12e]);
      break;
    case 5:
      cVar1 = *(char *)(param_1 + 0x149);
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x148);
      }
      if (bVar11 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x140);
      }
      break;
    case 6:
      FUN_01139b38(param_1[0x13e],param_1[0x13f]);
      FUN_019f8c54(param_1[0x130],param_1[0x131]);
      break;
    case 7:
      cVar1 = *(char *)(param_1 + 0x149);
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x148);
      }
      if (bVar11 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x140);
      }
      goto LAB_011899bc;
    case 8:
      FUN_01139b38(param_1[0x13e],param_1[0x13f]);
      FUN_019f8c54(param_1[0x133],param_1[0x134]);
      goto LAB_011899bc;
    case 9:
      cVar1 = *(char *)(param_1 + 0x149);
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x148);
      }
      if (bVar11 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x140);
      }
      goto LAB_011899bc;
    case 10:
      FUN_01139b38(param_1[0x13e],param_1[0x13f]);
      FUN_019f8c54(param_1[0x136],param_1[0x137]);
LAB_011899bc:
      FUN_005f8b4c(param_1 + 0x119);
      *(undefined1 *)((int)param_1 + 0x4f6) = 0;
    }
    piVar2 = (int *)param_1[299];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar11 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar11);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[299]);
    }
    piVar2 = (int *)param_1[0x12a];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar11 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar11);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38338(param_1[0x12a]);
    }
    if (*(char *)(param_1 + 0x13d) != '\0') {
      piVar2 = (int *)param_1[0x129];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar11 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar11);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38404(param_1[0x129]);
      }
    }
    *(undefined1 *)(param_1 + 0x13d) = 0;
    if (*(char *)((int)param_1 + 0x4f5) != '\0') {
      piVar2 = (int *)param_1[0x128];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar11 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar11);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38404(param_1[0x128]);
      }
    }
    *(undefined1 *)((int)param_1 + 0x4f5) = 0;
switchD_01188ec4_caseD_1:
    *(undefined2 *)(param_1 + 0x14a) = 0;
    *(undefined1 *)((int)param_1 + 0x52a) = 0;
LAB_01189f2c:
    *(undefined1 *)((int)param_1 + 0x45a) = 0;
    if (param_1[0xff] != -0x80000000) {
      FUN_019bb7e0(param_1[0xff],param_1[0x100]);
    }
    if (*(char *)((int)param_1 + 0x45b) != '\0') {
      FUN_0193cf34(param_1 + 0xfd);
    }
    *(undefined1 *)((int)param_1 + 0x45b) = 0;
switchD_01188d78_caseD_1:
    piVar2 = (int *)param_1[0x90];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar11 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar11);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00b8eb0c(param_1[0x90]);
    }
    goto LAB_0118972c;
  }
  if (cVar1 == '\x04') goto switchD_01188ddc_caseD_1;
  if (cVar1 != '\x05') {
    return;
  }
  if (*(char *)(param_1 + 0x2ec) != '\x03') {
    if (*(char *)(param_1 + 0x2ec) == '\0') {
      FUN_005fa5c4(param_1 + 0x8e);
    }
    goto switchD_01188ddc_caseD_1;
  }
  if (7 < *(byte *)((int)param_1 + 0x4df)) goto switchD_01188ddc_caseD_1;
  switch(*(byte *)((int)param_1 + 0x4df)) {
  case 0:
    puVar4 = param_1 + 0x132;
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar11 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar11);
    *piVar2 = iVar6 + -1;
    goto LAB_011896f4;
  default:
    goto switchD_01188ddc_caseD_1;
  case 3:
    if (*(char *)((int)param_1 + 0x4ed) != '\x04') {
      if (*(char *)((int)param_1 + 0x4ed) == '\x03') {
        if (*(char *)(param_1 + 0x151) == '\x03') {
          if (*(char *)((int)param_1 + 0x4fd) == '\x03') {
            cVar1 = *(char *)(param_1 + 0x14c);
            bVar11 = cVar1 == '\x03';
            if (bVar11) {
              cVar1 = *(char *)(param_1 + 0x14b);
            }
            if (bVar11 && cVar1 == '\x03') {
              if (*(char *)(param_1 + 0x14a) == '\x03') {
                piVar2 = (int *)param_1[0x149];
                if (*piVar2 == 0xcc) {
                  DataMemoryBarrier(0xb);
                  bVar11 = (bool)hasExclusiveAccess(piVar2);
                  if (bVar11) {
                    *piVar2 = 0x84;
                    goto LAB_01189ad8;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                (**(code **)(piVar2[2] + 0x10))();
              }
              else if (*(char *)(param_1 + 0x14a) == '\0') {
                FUN_019bb7e0(param_1[0x146],param_1[0x147]);
              }
            }
          }
          else {
            if (*(char *)((int)param_1 + 0x4fd) != '\x04') goto LAB_01189d54;
            if (*(char *)(param_1 + 0x150) == '\x03') {
              cVar1 = *(char *)(param_1 + 0x14f);
              bVar11 = cVar1 == '\x03';
              if (bVar11) {
                cVar1 = *(char *)(param_1 + 0x14e);
              }
              if (bVar11 && cVar1 == '\x03') {
                FUN_0193c3cc(param_1 + 0x146);
              }
            }
            piVar2 = (int *)param_1[0x140];
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *piVar2;
              bVar11 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar11);
            *piVar2 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_019db20c(param_1[0x140]);
            }
          }
LAB_01189ad8:
          *(undefined1 *)(param_1 + 0x13f) = 0;
        }
        goto LAB_01189d54;
      }
      goto LAB_011896d4;
    }
    if (0xd < *(byte *)((int)param_1 + 0x833) - 3) goto LAB_01189d54;
    break;
  case 4:
    puVar4 = (undefined4 *)param_1[0x13d];
    uVar9 = param_1[0x13c];
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar9);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(uVar9);
    }
    FUN_005f312c(param_1 + 0x13e);
    uVar5 = extraout_r1;
    goto LAB_01189550;
  case 5:
    piVar2 = (int *)param_1[0x138];
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      uVar5 = 0x84;
      bVar11 = (bool)hasExclusiveAccess(piVar2);
      if (bVar11) {
        *piVar2 = 0x84;
        goto LAB_01189550;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
    uVar5 = extraout_r1_00;
    goto LAB_01189550;
  case 6:
    piVar2 = (int *)param_1[0x14c];
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar11 = (bool)hasExclusiveAccess(piVar2);
      if (!bVar11) goto LAB_011892bc;
      *piVar2 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_011892bc:
      (**(code **)(piVar2[2] + 0x10))();
    }
    FUN_01431b40(param_1 + 0x138);
    uVar5 = extraout_r1_01;
    goto LAB_01189550;
  case 7:
    if (param_1[0x138] == 1) {
      if (param_1[0x13a] == 0 && param_1[0x13b] == 0) {
        if ((int *)param_1[0x13c] != (int *)0x0) {
          puVar4 = *(undefined4 **)param_1[0x13c];
          goto LAB_0118953c;
        }
      }
      else {
        iVar6 = param_1[0x13c];
        if (iVar6 != 0) {
          puVar4 = (undefined4 *)param_1[0x13d];
          pcVar3 = (code *)*puVar4;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(iVar6);
          }
          if (puVar4[1] != 0) {
            thunk_FUN_01be4678(iVar6);
          }
        }
      }
    }
    else if (param_1[0x138] == 0) {
      piVar2 = (int *)param_1[0x13a];
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(piVar2);
        if (bVar11) {
          *piVar2 = 0x84;
          goto LAB_01189544;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      puVar4 = (undefined4 *)(piVar2[2] + 0x10);
LAB_0118953c:
      (*(code *)*puVar4)();
    }
LAB_01189544:
    FUN_005f3364(param_1 + 0x13e);
    uVar5 = extraout_r1_02;
LAB_01189550:
    piVar2 = (int *)param_1[0x131];
    if (piVar2 != (int *)0x0) {
      uVar5 = (uint)*(byte *)((int)param_1 + 0x4cf);
    }
    if (piVar2 != (int *)0x0 && uVar5 != 0) {
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(piVar2);
        if (bVar11) {
          *piVar2 = 0x84;
          goto LAB_01189598;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar2[2] + 0x10))();
    }
LAB_01189598:
    *(undefined2 *)((int)param_1 + 0x4d2) = 0;
    *(undefined1 *)(param_1 + 0x135) = 0;
    *(undefined1 *)((int)param_1 + 0x4cf) = 0;
    FUN_005faf6c(param_1 + 0x130);
    *(undefined4 *)((int)param_1 + 0x4d5) = 0;
    *(undefined1 *)(param_1 + 0x133) = 0;
    *(undefined4 *)((int)param_1 + 0x4d9) = 0;
    *(undefined1 *)((int)param_1 + 0x4dd) = 0;
    if (*(char *)(param_1 + 0x134) != '\0') {
      piVar2 = (int *)param_1[0x139];
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(piVar2);
        if (bVar11) {
          *piVar2 = 0x84;
          goto LAB_01189608;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar2[2] + 0x10))();
    }
LAB_01189608:
    piVar2 = (int *)param_1[300];
    *(undefined1 *)((int)param_1 + 0x4de) = 0;
    *(undefined2 *)((int)param_1 + 0x4cd) = 0;
    *(undefined1 *)(param_1 + 0x134) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar11 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar11);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182080(param_1[300]);
    }
    if (*(char *)((int)param_1 + 0x4d1) != '\0') {
      piVar2 = (int *)param_1[299];
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(piVar2);
        if (bVar11) {
          *piVar2 = 0x84;
          goto LAB_01189690;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar2[2] + 0x10))();
    }
LAB_01189690:
    *(undefined1 *)((int)param_1 + 0x4d1) = 0;
    FUN_005faf6c(param_1 + 0x12a);
    piVar2 = (int *)param_1[0x129];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar11 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar11);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182350(param_1[0x129]);
    }
    goto LAB_011896d4;
  }
  switch(*(byte *)((int)param_1 + 0x833)) {
  case 3:
    if (*(char *)((int)param_1 + 0xaed) != '\x03') goto LAB_01189d48;
    switch(*(undefined1 *)(param_1 + 0x278)) {
    case 3:
      FUN_00d34ddc(param_1 + 0x279);
      break;
    case 4:
      FUN_0118b3cc(param_1 + 0x27a);
      break;
    case 5:
      if (*(char *)((int)param_1 + 0xa11) == '\x04') {
        FUN_00b6fb24(param_1 + 0x285);
        iVar6 = 0xa04;
        *(undefined1 *)(param_1 + 0x284) = 0;
        goto LAB_0118a170;
      }
      if (*(char *)((int)param_1 + 0xa11) == '\x03') {
        iVar6 = 0xa04;
        if (*(char *)(param_1 + 0x290) == '\x03') {
          if (*(char *)(param_1 + 0x28f) == '\x03') {
            piVar2 = (int *)param_1[0x28e];
            if (*piVar2 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar11 = (bool)hasExclusiveAccess(piVar2);
              if (bVar11) {
                *piVar2 = 0x84;
                goto LAB_0118a164;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar2[2] + 0x10))();
          }
          else if (*(char *)(param_1 + 0x28f) == '\0') {
            FUN_019bb7e0(param_1[0x28b],param_1[0x28c]);
          }
LAB_0118a164:
          puVar4 = param_1 + 0x288;
        }
        else {
          if (*(char *)(param_1 + 0x290) != '\0') goto LAB_0118a170;
          puVar4 = param_1 + 0x285;
        }
        uVar9 = *puVar4;
        uVar7 = puVar4[1];
        goto LAB_0118a16c;
      }
      goto LAB_0118a178;
    case 6:
      iVar6 = 0x9d4;
      if (*(char *)(param_1 + 0x27e) == '\x04') {
        iVar10 = 0x44;
        if (*(char *)((int)param_1 + 0xa1d) == '\x03') {
          piVar2 = (int *)param_1[0x285];
          if (*piVar2 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar11 = (bool)hasExclusiveAccess(piVar2);
            if (!bVar11) goto LAB_0118a0fc;
            *piVar2 = 0x84;
          }
          else {
            ClearExclusiveLocal();
LAB_0118a0fc:
            (**(code **)(piVar2[2] + 0x10))();
          }
          *(undefined1 *)(param_1 + 0x287) = 0;
        }
LAB_0118a110:
        puVar4 = (undefined4 *)((int)param_1 + iVar10 + 0x9b8);
        uVar9 = *puVar4;
        uVar7 = puVar4[1];
LAB_0118a16c:
        FUN_019bb7e0(uVar9,uVar7);
      }
      else if (*(char *)(param_1 + 0x27e) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x28d);
        bVar11 = cVar1 == '\x03';
        if (bVar11) {
          cVar1 = *(char *)(param_1 + 0x28c);
        }
        if (bVar11 && cVar1 == '\x03') {
          if (*(char *)(param_1 + 0x28b) == '\0') {
            iVar10 = 100;
            goto LAB_0118a110;
          }
          if (*(char *)(param_1 + 0x28b) == '\x03') {
            piVar2 = (int *)param_1[0x28a];
            if (*piVar2 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar11 = (bool)hasExclusiveAccess(piVar2);
              if (bVar11) {
                *piVar2 = 0x84;
                goto LAB_0118a170;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar2[2] + 0x10))();
          }
        }
      }
LAB_0118a170:
      FUN_019c71c4((int)param_1 + iVar6);
LAB_0118a178:
      FUN_019bb7e0(param_1[0x272],param_1[0x273]);
    }
    FUN_0118b66c(param_1 + 0x20e);
    *(undefined1 *)(param_1 + 699) = 0;
    goto LAB_01189d48;
  case 4:
    if (*(char *)(param_1 + 0x21b) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x21a);
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x219);
      }
      if (bVar11 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x211);
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x210) == '\x03') {
      piVar2 = (int *)param_1[0x20f];
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar11 = (bool)hasExclusiveAccess(piVar2);
        if (bVar11) {
          *piVar2 = 0x84;
          goto LAB_01189cd4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(*(int *)(param_1[0x20f] + 8) + 0x10))();
    }
    goto LAB_01189cd4;
  case 6:
    FUN_01139b38(param_1[0x20e],param_1[0x20f]);
    goto LAB_01189cc0;
  case 7:
    FUN_0118b688(param_1 + 0x20e);
    goto LAB_01189cc0;
  case 8:
    if (*(char *)(param_1 + 0x21c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x21b);
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x212);
      }
      if (bVar11 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x213);
      }
    }
    goto LAB_01189cc0;
  case 9:
    FUN_00d34ddc(param_1 + 0x20e);
    goto LAB_01189cc0;
  case 10:
    if (*(char *)(param_1 + 0x21c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x21b);
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x212);
      }
      if (bVar11 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x213);
      }
    }
LAB_01189cc0:
    if (*(char *)((int)param_1 + 0x832) != '\0') {
      FUN_00d3545c(param_1 + 0x19c);
    }
LAB_01189cd4:
    *(undefined1 *)((int)param_1 + 0x832) = 0;
    FUN_019f8c54(param_1[0x208],1);
    break;
  case 0xb:
    FUN_00d34ddc(param_1 + 0x20e);
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x21c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x21b);
      bVar11 = cVar1 == '\x03';
      if (bVar11) {
        cVar1 = *(char *)(param_1 + 0x212);
      }
      if (bVar11 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x213);
      }
    }
    break;
  case 0xd:
    FUN_0118b7e0(param_1 + 0x20e);
    break;
  case 0xe:
    FUN_00d34ddc(param_1 + 0x20e);
    break;
  case 0xf:
    if (*(char *)((int)param_1 + 0x945) == '\x03') {
      FUN_0118b3cc(param_1 + 0x212);
    }
    break;
  case 0x10:
    FUN_00bd234c(param_1 + 0x20e);
  }
  if (param_1[0x13c] == 3 && param_1[0x13d] == 0) {
    if (*(char *)(param_1 + 0x20c) != '\0') {
      if (param_1[0x13e] == 6) {
        if (*(char *)((int)param_1 + 0x831) != '\0') {
          FUN_0187266c(*(undefined1 *)(param_1 + 0x13f),param_1[0x140]);
        }
      }
      else {
        FUN_0118bc74();
      }
    }
    *(undefined1 *)(param_1 + 0x20c) = 0;
  }
  else {
    FUN_0118b66c(param_1 + 0x13c);
  }
LAB_01189d48:
  *(undefined2 *)(param_1 + 0x20c) = 0;
LAB_01189d54:
  piVar2 = (int *)param_1[0x139];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar11 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar11);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(param_1[0x139]);
  }
  piVar2 = (int *)param_1[0x138];
  *(undefined1 *)(param_1 + 0x13b) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar11 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar11);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180e54(param_1[0x138]);
  }
LAB_011896d4:
  puVar4 = param_1 + 0x128;
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar11 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar11);
  *piVar2 = iVar6 + -1;
LAB_011896f4:
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(*puVar4);
  }
switchD_01188ddc_caseD_1:
  pcVar8 = (char *)((int)param_1 + 0x22b);
  if (*pcVar8 != '\0') {
    FUN_005fa5c4(param_1 + 0x8e);
  }
  *(undefined2 *)((int)param_1 + 0x22f) = 0;
  pcVar8[0] = '\0';
  pcVar8[1] = '\0';
  pcVar8[2] = '\0';
  pcVar8[3] = '\0';
LAB_0118972c:
  *(undefined1 *)((int)param_1 + 0x231) = 0;
  if (*(char *)(param_1 + 0x89) != '\0') {
    FUN_00faa074(param_1 + 0x94);
  }
  *(undefined1 *)(param_1 + 0x89) = 0;
  if (*(char *)((int)param_1 + 0x225) != '\0') {
    piVar2 = (int *)param_1[0x91];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar11 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar11);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177254(param_1[0x91],param_1[0x92]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x225) = 0;
  if (*(char *)((int)param_1 + 0x226) != '\0') {
    FUN_005f7270(param_1 + 0x7f);
  }
  *(undefined1 *)((int)param_1 + 0x232) = 0;
  *(undefined1 *)((int)param_1 + 0x226) = 0;
  if (*(char *)((int)param_1 + 0x227) != '\0') {
    piVar2 = (int *)param_1[0x8f];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar11 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar11);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121d018(param_1[0x8f]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x227) = 0;
  if (*(char *)(param_1 + 0x8a) != '\0') {
    piVar2 = (int *)param_1[0x1c];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar11 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar11);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x1c],param_1[0x1d]);
    }
  }
  *(undefined2 *)(param_1 + 0x8a) = 0;
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  if (*(char *)((int)param_1 + 0x22a) != '\0') {
    FUN_005f69ac(param_1 + 0x24);
  }
  *(undefined1 *)((int)param_1 + 0x22a) = 0;
  return;
}

