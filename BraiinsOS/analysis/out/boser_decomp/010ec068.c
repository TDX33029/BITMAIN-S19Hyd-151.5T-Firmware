// FUN_010ec068 @ 010ec068 size=1232 calls_out=16 calls_in=1
// strings: 

void FUN_010ec068(undefined4 *param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint extraout_r1;
  int iVar5;
  uint uVar6;
  uint extraout_r1_00;
  bool bVar7;
  
  cVar1 = *(char *)((int)param_1 + 5);
  if (cVar1 == '\0') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    goto LAB_010ec110;
  }
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x11);
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0x10);
    }
    if (bVar7 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0xf);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 0xe);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 6);
      }
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x259) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x62);
      if (cVar1 == '\x04') {
        cVar1 = *(char *)((int)param_1 + 0x34e);
        if (cVar1 == '\x04') {
          FUN_005f02cc(param_1 + 0xd4);
LAB_010ec328:
          if (*(char *)((int)param_1 + 0x34b) != '\0') {
            FUN_019bb7e0(param_1[0x95],param_1[0x96]);
          }
          iVar4 = 0;
          if (*(char *)(param_1 + 0xd3) != '\0') {
            iVar4 = param_1[100];
          }
          if ((*(char *)(param_1 + 0xd3) != '\0' && iVar4 != -0x80000000) &&
             (*(char *)((int)param_1 + 0x34d) == '\x01')) {
            FUN_01a2affc(param_1 + 100);
          }
          *(undefined1 *)(param_1 + 0xd3) = 0;
          if (*(char *)((int)param_1 + 0x34b) != '\0') {
            FUN_005f6b64(param_1 + 0x92);
          }
          *(undefined1 *)((int)param_1 + 0x34d) = 0;
          *(undefined2 *)((int)param_1 + 0x34b) = 0;
        }
        else {
          if (cVar1 == '\x03') {
            cVar1 = *(char *)(param_1 + 0x13a);
            if (cVar1 == '\x04') {
              FUN_010ec7f4(param_1 + 0x13c);
              *(undefined1 *)((int)param_1 + 0x4ea) = 0;
              FUN_019f8c54(param_1[0x137],param_1[0x138]);
LAB_010ec300:
              if (*(char *)((int)param_1 + 0x4e9) != '\0') {
                FUN_01a2affc(param_1 + 0x13b);
              }
              *(undefined1 *)((int)param_1 + 0x4e9) = 0;
            }
            else {
              if (cVar1 == '\x03') {
                cVar1 = *(char *)(param_1 + 0x174);
                bVar7 = cVar1 == '\x03';
                if (bVar7) {
                  cVar1 = *(char *)(param_1 + 0x173);
                }
                if (bVar7 && cVar1 == '\x03') {
                  FUN_0193c3cc(param_1 + 0x16b);
                }
                goto LAB_010ec300;
              }
              if (cVar1 == '\0') {
                FUN_01a2affc(param_1 + 0x102);
              }
            }
            *(undefined1 *)((int)param_1 + 0x34a) = 0;
            goto LAB_010ec328;
          }
          if (cVar1 == '\0') {
            FUN_005f6b38(param_1 + 0x9a);
          }
        }
        *(undefined2 *)((int)param_1 + 0x18a) = 0;
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 == '\0') {
            iVar4 = param_1[2];
            goto LAB_010ec0a8;
          }
          goto LAB_010ec0cc;
        }
        cVar1 = *(char *)(param_1 + 0x6c);
        if (cVar1 == '\x04') {
          cVar1 = *(char *)((int)param_1 + 0x1ef);
          if (cVar1 == '\x05') {
            cVar1 = *(char *)(param_1 + 0x10a);
            if (cVar1 == '\0') {
              FUN_019bb7e0(param_1[0xfa],param_1[0xfb]);
              iVar4 = param_1[0xfd];
              iVar5 = 0x3f4;
              if (iVar4 != -0x80000000) goto LAB_010ec468;
            }
            else {
              if (cVar1 == '\x03') {
                cVar1 = *(char *)(param_1 + 0x116);
                bVar7 = cVar1 == '\x03';
                if (bVar7) {
                  cVar1 = *(char *)(param_1 + 0x115);
                }
                if (bVar7 && cVar1 == '\x03') {
                  FUN_0193c3cc(param_1 + 0x10d);
                  param_2 = extraout_r1_00;
                }
              }
              else {
                if (cVar1 != '\x04') goto LAB_010ec474;
                FUN_010ec7f4(param_1 + 0x10c);
                FUN_019f8c54(param_1[0x107],param_1[0x108]);
                param_2 = extraout_r1;
              }
              iVar4 = param_1[0x104];
              if (iVar4 != -0x80000000) {
                param_2 = (uint)*(byte *)((int)param_1 + 0x429);
              }
              if (iVar4 != -0x80000000 && param_2 != 0) {
                FUN_019bb7e0(iVar4,param_1[0x105]);
              }
              iVar5 = 0x404;
              *(undefined1 *)((int)param_1 + 0x429) = 0;
              iVar4 = param_1[0x101];
LAB_010ec468:
              FUN_019bb7e0(iVar4,*(undefined4 *)((int)param_1 + iVar5 + 4));
            }
LAB_010ec474:
            piVar2 = (int *)param_1[0xef];
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar2;
              bVar7 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar7);
            *piVar2 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0195b288(param_1[0xef]);
            }
            if (param_1[0xbe] != -0x80000000) {
              FUN_01a2affc();
            }
            *(undefined2 *)((int)param_1 + 0x1ed) = 0;
LAB_010ec4c0:
            if (*(char *)(param_1 + 0x7b) != '\0') {
              FUN_019f8c54(param_1[0x76],param_1[0x77]);
            }
LAB_010ec4d8:
            *(undefined1 *)(param_1 + 0x7b) = 0;
          }
          else {
            if (cVar1 == '\x04') {
              if (*(char *)(param_1 + 0x80) == '\x05') {
                if (*(char *)((int)param_1 + 0x251) == '\x03') {
                  if (*(char *)(param_1 + 0x89) == '\x03') {
                    FUN_009cdcac(param_1 + 0x83);
                  }
                  FUN_0193d87c(param_1 + 0x8a);
                  *(undefined1 *)(param_1 + 0x94) = 0;
                }
                piVar2 = (int *)param_1[0x81];
                DataMemoryBarrier(0xb);
                do {
                  iVar4 = *piVar2;
                  bVar7 = (bool)hasExclusiveAccess(piVar2);
                } while (!bVar7);
                *piVar2 = iVar4 + -1;
                if (iVar4 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_01a38f34(param_1[0x81]);
                }
              }
              else if (*(char *)(param_1 + 0x80) == '\x04') {
                if (*(char *)(param_1 + 0x83) == '\x04') {
                  FUN_005f1388(param_1 + 0x84);
                }
                FUN_005fb2fc(param_1 + 0xd8);
              }
              goto LAB_010ec4c0;
            }
            if (cVar1 == '\x03') {
              cVar1 = *(char *)(param_1 + 0x87);
              bVar7 = cVar1 == '\x03';
              if (bVar7) {
                cVar1 = *(char *)(param_1 + 0x86);
              }
              if (bVar7 && cVar1 == '\x03') {
                FUN_0193c3cc(param_1 + 0x7e);
              }
              goto LAB_010ec4d8;
            }
          }
          FUN_0134c054(param_1[0x6d],param_1[0x6e],1,0x10);
LAB_010ec4f4:
          puVar3 = param_1 + 0x69;
LAB_010ec4f8:
          FUN_019bb7e0(*puVar3,puVar3[1]);
        }
        else {
          if (cVar1 == '\x03') {
            cVar1 = *(char *)(param_1 + 0x78);
            bVar7 = cVar1 == '\x03';
            if (bVar7) {
              cVar1 = *(char *)(param_1 + 0x77);
            }
            if (bVar7 && cVar1 == '\x03') {
              FUN_0193c3cc(param_1 + 0x6f);
            }
            goto LAB_010ec4f4;
          }
          if (cVar1 == '\0') {
            puVar3 = param_1 + 100;
            goto LAB_010ec4f8;
          }
        }
      }
      uVar6 = param_1[0x33];
      bVar7 = uVar6 != 0x80000000;
      if (bVar7) {
        uVar6 = (uint)*(byte *)((int)param_1 + 0x189);
      }
      if (bVar7 && uVar6 != 0) {
        FUN_01a2affc();
      }
      *(undefined1 *)((int)param_1 + 0x189) = 0;
    }
    else if (*(char *)(param_1 + 0x259) == '\0') {
      iVar4 = param_1[0x22a];
LAB_010ec0a8:
      if (iVar4 != -0x80000000) {
        FUN_01a2affc();
      }
    }
  }
LAB_010ec0cc:
  piVar2 = (int *)*param_1;
  *(undefined1 *)(param_1 + 1) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar4 + -1;
LAB_010ec110:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180ffc(*param_1);
    return;
  }
  return;
}

