// FUN_00d36a0c @ 00d36a0c size=1864 calls_out=27 calls_in=2
// strings: 

void FUN_00d36a0c(int *param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_r6;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 1) {
    bVar16 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r6 = param_1[4];
      bVar16 = unaff_r6 == 0;
    }
    if (!bVar16) {
      puVar8 = (undefined4 *)param_1[5];
      pcVar5 = (code *)*puVar8;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(unaff_r6);
      }
      if (puVar8[1] != 0) {
        if (unaff_r6 == 0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar14 = *(byte *)(unaff_r6 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
          iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar10 = (uint)(*(byte *)(unaff_r6 + -3) >> 5);
        iVar13 = *(int *)(iVar4 + 8) + 0x10;
        iVar11 = iVar6 * uVar14 + iVar6 + -4;
        iVar6 = iVar13 + iVar11;
        if (4 < uVar10) {
          if (uVar10 != 5) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar5)();
          }
          uVar10 = *(uint *)(iVar6 + -4);
          if (uVar10 < 5) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar5)();
          }
          if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar5)();
          }
        }
        if ((uint)(iVar6 - unaff_r6) < uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar5)();
        }
        if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar5)();
        }
        if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar5)();
        }
        bVar2 = *(byte *)(iVar4 + 0x14);
        uVar10 = 1 << uVar14;
        *(undefined1 *)(unaff_r6 + -3) = 0xff;
        *(undefined2 *)(unaff_r6 + -2) = 0;
        do {
          uVar12 = *(uint *)(iVar4 + 0x10);
          uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
          if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar5)();
          }
          if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar4,uVar14);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar8 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar8;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar8 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
            return;
          }
          puVar15 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar7 = *puVar15;
            if (uVar12 != uVar7) goto LAB_016d409c;
            bVar16 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar16);
          *puVar15 = uVar10 + uVar12;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar12 == uVar7) {
            return;
          }
        } while( true );
      }
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x1fd] == '\x03') {
    FUN_00887914(param_1 + 0x1f6);
    return;
  }
  if ((char)param_1[0x1fd] != '\0') {
    return;
  }
  if ((char)param_1[0x1f5] != '\x03') {
    if ((char)param_1[0x1f5] == '\0') {
      piVar3 = (int *)param_1[500];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar16 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar16);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d06854(param_1[500]);
      }
      FUN_005e6cdc(param_1 + 2);
      if (param_1[5] != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(param_1 + 2);
    }
    goto LAB_00d371a4;
  }
  switch((char)param_1[0x21]) {
  case '\0':
    FUN_005e6cdc(param_1 + 6);
    if (param_1[9] != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 6);
    break;
  case '\x03':
    goto switchD_00d36b14_caseD_3;
  case '\x04':
    switch((char)param_1[0x36]) {
    case '\x03':
    case '\x06':
      if ((char)param_1[0x47] == '\x03') {
        FUN_00b216bc(param_1 + 0x3b);
      }
      break;
    case '\x04':
    case '\a':
      FUN_00ad3ec0(param_1 + 0x3a);
      break;
    case '\x05':
      if (*(char *)((int)param_1 + 0x16d) == '\x03') {
        FUN_00accc50(param_1 + 0x3e);
        *(undefined1 *)(param_1 + 0x5b) = 0;
      }
      piVar3 = (int *)param_1[0x3d];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar16 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar16);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1030(param_1[0x3d]);
      }
      if (param_1[0x3a] != 0) {
        thunk_FUN_016d3fb4(param_1[0x3b]);
      }
      break;
    case '\b':
      cVar1 = (char)param_1[0x57];
      bVar16 = cVar1 == '\x03';
      if (bVar16) {
        cVar1 = *(char *)((int)param_1 + 0x159);
      }
      if (bVar16 && cVar1 == '\x03') {
        FUN_00accc50(param_1 + 0x3b);
      }
      break;
    case '\t':
      FUN_00d2e5ac(param_1 + 0x3a);
      break;
    case '\n':
      FUN_00d28498(param_1 + 0x3a);
      break;
    case '\v':
      FUN_00cefb4c(param_1 + 0x3a);
      break;
    case '\r':
      FUN_00cea1dc(param_1 + 0x3a);
      break;
    case '\x0e':
      FUN_00ad235c(param_1 + 0x3a);
      goto LAB_00d36dc8;
    case '\x0f':
      FUN_00ad4acc(param_1 + 0x3e);
      if (param_1[0x3a] != 0) {
        thunk_FUN_016d3fb4(param_1[0x3b]);
      }
LAB_00d36dc8:
      if (param_1[0x2e] != 0) {
        thunk_FUN_016d3fb4(param_1[0x2c]);
      }
      *(undefined1 *)(param_1 + 0x38) = 0;
      break;
    case '\x10':
      if ((char)param_1[0x79] == '\x03') {
        if ((char)param_1[0x5a] == '\x04') {
          cVar1 = (char)param_1[0x66];
          if (cVar1 == '\x05') {
            puVar8 = (undefined4 *)param_1[0x6b];
            iVar4 = param_1[0x6a];
            pcVar5 = (code *)*puVar8;
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(iVar4);
            }
            if (puVar8[1] != 0) {
              thunk_FUN_016d3fb4(iVar4);
            }
            puVar8 = (undefined4 *)(param_1[0x68] + 4);
            for (iVar4 = param_1[0x69]; iVar4 != 0; iVar4 = iVar4 + -1) {
              if (puVar8[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar8);
              }
              puVar8 = puVar8 + 4;
            }
            if (param_1[0x67] != 0) {
              thunk_FUN_016d3fb4(param_1[0x68]);
            }
            *(undefined1 *)((int)param_1 + 0x199) = 0;
LAB_00d37040:
            FUN_008672e4(param_1[0x65]);
          }
          else {
            if (cVar1 == '\x04') {
              puVar8 = (undefined4 *)param_1[0x68];
              iVar4 = param_1[0x67];
              pcVar5 = (code *)*puVar8;
              if (pcVar5 != (code *)0x0) {
                (*pcVar5)(iVar4);
              }
              if (puVar8[1] != 0) {
                thunk_FUN_016d3fb4(iVar4);
              }
              goto LAB_00d37040;
            }
            bVar16 = cVar1 == '\x03';
            if (bVar16) {
              cVar1 = (char)param_1[0x75];
            }
            if (bVar16 && cVar1 == '\x03') {
              cVar1 = (char)param_1[0x74];
              bVar16 = cVar1 == '\x03';
              if (bVar16) {
                cVar1 = (char)param_1[0x6b];
              }
              if (bVar16 && cVar1 == '\x04') {
                FUN_0163c790(param_1 + 0x6c);
                if (param_1[0x6d] != 0) {
                  (**(code **)(param_1[0x6d] + 0xc))(param_1[0x6e]);
                }
              }
            }
          }
          FUN_00c822ec(param_1[0x59]);
        }
        else if (((char)param_1[0x5a] == '\x03') && (param_1[0x5d] != 0)) {
          FUN_00c8204c(param_1[0x5d],param_1[0x5e],1);
        }
        piVar3 = (int *)param_1[0x78];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar16 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar16);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(param_1[0x78]);
        }
      }
      if (param_1[0x44] != 0) {
        thunk_FUN_016d3fb4(param_1[0x42]);
      }
      FUN_00ce1670(param_1[0x3b],param_1[0x3c]);
      if (param_1[0x3a] != 0) {
        thunk_FUN_016d3fb4(param_1[0x3b]);
      }
      *(undefined1 *)((int)param_1 + 0xdf) = 0;
      *(undefined1 *)((int)param_1 + 0xd9) = 0;
      break;
    case '\x11':
      if ((char)param_1[0x7d] == '\x03') {
        if ((char)param_1[0x5a] == '\x04') {
          cVar1 = (char)param_1[0x68];
          if (cVar1 == '\x04') {
            puVar8 = (undefined4 *)param_1[0x6a];
            iVar4 = param_1[0x69];
            pcVar5 = (code *)*puVar8;
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(iVar4);
            }
            if (puVar8[1] != 0) {
              thunk_FUN_016d3fb4(iVar4);
            }
            FUN_008672e4(param_1[0x67]);
          }
          else {
            bVar16 = cVar1 == '\x03';
            if (bVar16) {
              cVar1 = (char)param_1[0x77];
            }
            if (bVar16 && cVar1 == '\x03') {
              cVar1 = (char)param_1[0x76];
              bVar16 = cVar1 == '\x03';
              if (bVar16) {
                cVar1 = (char)param_1[0x6d];
              }
              if (bVar16 && cVar1 == '\x04') {
                FUN_0163c790(param_1 + 0x6e);
                if (param_1[0x6f] != 0) {
                  (**(code **)(param_1[0x6f] + 0xc))(param_1[0x70]);
                }
              }
            }
          }
          FUN_00c822ec(param_1[0x59]);
        }
        else if (((char)param_1[0x5a] == '\x03') && (param_1[0x5d] != 0)) {
          FUN_00c8204c(param_1[0x5d],param_1[0x5e],1);
        }
        piVar3 = (int *)param_1[0x7c];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar16 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar16);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(param_1[0x7c]);
        }
      }
      if (param_1[0x80] != 0) {
        thunk_FUN_016d3fb4(param_1[0x7e]);
      }
      *(undefined1 *)((int)param_1 + 0xde) = 0;
      break;
    case '\x12':
      FUN_00ad4614(param_1 + 0x3c);
      *(undefined2 *)(param_1 + 0x37) = 0;
      break;
    case '\x13':
      FUN_00ad4780(param_1 + 0x3e);
      if (param_1[0x3c] != 0) {
        thunk_FUN_016d3fb4(param_1[0x3a]);
      }
      *(undefined1 *)((int)param_1 + 0xdb) = 0;
      break;
    case '\x14':
      if ((char)param_1[0x85] == '\x03') {
        if ((char)param_1[0x58] == '\x04') {
          FUN_00ac9e9c(param_1 + 0x5a);
          FUN_00c822ec(param_1[0x57]);
        }
        else if (((char)param_1[0x58] == '\x03') && (param_1[0x5a] != 0)) {
          FUN_00c8204c(param_1[0x5a],param_1[0x5b],1);
        }
        piVar3 = (int *)param_1[0x84];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar16 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar16);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(param_1[0x84]);
        }
      }
      if (param_1[0x40] != 0) {
        thunk_FUN_016d3fb4(param_1[0x3e]);
      }
      *(undefined1 *)((int)param_1 + 0xda) = 0;
    }
switchD_00d36b70_caseD_c:
    bVar16 = *(char *)((int)param_1 + 0x85) != '\0';
    iVar4 = 0;
    if (bVar16) {
      iVar4 = param_1[0x1e];
    }
    if (bVar16 && iVar4 != 0) {
      thunk_FUN_016d3fb4(param_1[0x1f]);
    }
    *(undefined1 *)((int)param_1 + 0x85) = 0;
    if (param_1[0x1b] != 0) {
      thunk_FUN_016d3fb4(param_1[0x1c]);
    }
switchD_00d36b14_caseD_3:
    piVar3 = (int *)param_1[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar16 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar16);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d05ff8(param_1[0x14]);
    }
    piVar3 = (int *)param_1[0x13];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar16 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar16);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d05ff8(param_1[0x13]);
    }
    if ((param_1[0x10] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(param_1[0x11]);
    }
    *(undefined2 *)((int)param_1 + 0x86) = 0;
    break;
  case '\x05':
    if ((param_1[0x22] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(param_1[0x23]);
    }
    goto switchD_00d36b70_caseD_c;
  }
  piVar3 = (int *)param_1[500];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar16 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar16);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d06854(param_1[500]);
  }
LAB_00d371a4:
  FUN_00ac9c30(param_1 + 0x1fa);
  return;
}

