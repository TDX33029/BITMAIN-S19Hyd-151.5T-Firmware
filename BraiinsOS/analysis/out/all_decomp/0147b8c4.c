// FUN_0147b8c4 @ 0147b8c4 size=732 calls_out=8 calls_in=2
// strings: 

void FUN_0147b8c4(uint *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  iVar6 = 1;
  if (5 < uVar4) {
    iVar6 = uVar4 - 6;
  }
  if (iVar6 == 1) {
    if (uVar4 == 5) {
      if ((char)param_1[0xf] == '\x02') {
LAB_0147bb30:
        FUN_0147beec(param_1 + 1);
        return;
      }
      if ((char)param_1[0xf] != '\x03') {
LAB_0147bb38:
        FUN_0147bd28();
        return;
      }
    }
    else {
      iVar6 = uVar4 - 2;
      if (uVar4 < 2) {
        iVar6 = 0;
      }
      if (iVar6 == 1) {
        cVar1 = (char)param_1[0xf];
        if (cVar1 == '\x02') goto LAB_0147bb30;
        if (cVar1 != '\x03') {
          if (cVar1 == '\x04') {
            uVar4 = param_1[1];
            FUN_0147e308(uVar4);
            if (uVar4 == 0) {
              return;
            }
            iVar6 = FUN_016d3bc8();
            uVar15 = *(byte *)(uVar4 - 3) & 0x1f;
            if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
               (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0))
            {
              iVar8 = (uint)*(ushort *)
                             (&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
            }
            uVar10 = (uint)(*(byte *)(uVar4 - 3) >> 5);
            iVar13 = *(int *)(iVar6 + 8) + 0x10;
            iVar11 = iVar8 * uVar15 + iVar8 + -4;
            iVar8 = iVar13 + iVar11;
            if (4 < uVar10) {
              if (uVar10 != 5) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)software_udf(0xff,0x16d4018);
                (*pcVar7)();
              }
              uVar10 = *(uint *)(iVar8 + -4);
              if (uVar10 < 5) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)software_udf(0xff,0x16d4022);
                (*pcVar7)();
              }
              if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
                pcVar7 = (code *)software_udf(0xff,0x16d402a);
                (*pcVar7)();
              }
            }
            if (iVar8 - uVar4 < uVar10) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)software_udf(0xff,0x16d4032);
              (*pcVar7)();
            }
            if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
              pcVar7 = (code *)software_udf(0xff,0x16d403a);
              (*pcVar7)();
            }
            if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
              pcVar7 = (code *)software_udf(0xff,0x16d4040);
              (*pcVar7)();
            }
            bVar3 = *(byte *)(iVar6 + 0x14);
            uVar10 = 1 << uVar15;
            *(undefined1 *)(uVar4 - 3) = 0xff;
            *(undefined2 *)(uVar4 - 2) = 0;
            do {
              uVar12 = *(uint *)(iVar6 + 0x10);
              uVar4 = *(uint *)(iVar6 + 0xc) | uVar12;
              if ((uVar10 & uVar4) != 0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)software_udf(0xff,0x16d4074);
                (*pcVar7)();
              }
              if ((uVar12 == 0) || (uVar4 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
                if (DAT_018ddb0b != '\0') {
                  FUN_016ddcc0(&DAT_018ddd48);
                }
                FUN_016d3ca8(&uStack_28,iVar6,uVar15);
                FUN_016dddc0(&DAT_018ddd48);
                if (iStack_24 == 0) {
                  return;
                }
                puVar14 = (undefined4 *)FUN_016d2bc8();
                uVar9 = *puVar14;
                FUN_016d6ac4(uStack_28,iStack_24);
                *puVar14 = uVar9;
                return;
              }
              if (DAT_018ddb0b == '\0') {
                *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
                return;
              }
              puVar16 = (uint *)(iVar6 + 0x10);
              DataMemoryBarrier(0x1b);
              do {
                ExclusiveAccess(puVar16);
                uVar4 = *puVar16;
                if (uVar12 != uVar4) goto LAB_016d409c;
                bVar2 = (bool)hasExclusiveAccess(puVar16);
              } while (!bVar2);
              *puVar16 = uVar10 + uVar12;
LAB_016d409c:
              DataMemoryBarrier(0x1b);
              if (uVar12 == uVar4) {
                return;
              }
            } while( true );
          }
          goto LAB_0147bb38;
        }
      }
      else if ((iVar6 == 0) && (uVar4 != 2)) {
        uVar4 = param_1[0x30];
        if (uVar4 != 3) {
          if (uVar4 == 1) {
            uVar4 = param_1[0x31];
            puVar14 = (undefined4 *)param_1[0x32];
            pcVar7 = (code *)*puVar14;
            if (pcVar7 != (code *)0x0) {
              (*pcVar7)(uVar4);
            }
            if (puVar14[1] != 0) {
              thunk_FUN_016d3fb4(uVar4);
            }
          }
          else if (uVar4 == 0) {
            if (param_1[0x3e] == 0x3b9aca01) {
              uVar4 = param_1[0x3c];
              puVar14 = (undefined4 *)param_1[0x3d];
              pcVar7 = (code *)*puVar14;
              if (pcVar7 != (code *)0x0) {
                (*pcVar7)(uVar4);
              }
              if (puVar14[1] != 0) {
                thunk_FUN_016d3fb4(uVar4);
              }
            }
            else {
              FUN_01466814(param_1 + 0x3c);
            }
            if ((char)param_1[0x31] != '\x03') {
              FUN_0145d5e0();
            }
          }
        }
        FUN_0147f1b4(param_1 + 0x27);
        piVar5 = (int *)param_1[0x2e];
        if (piVar5 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar5;
            bVar2 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar2);
          *piVar5 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0149f9e0(param_1[0x2e]);
          }
        }
        piVar5 = (int *)param_1[0x18];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(param_1[0x18],param_1[0x19]);
        }
        piVar5 = (int *)param_1[0x1a];
        if (piVar5 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar5;
            bVar2 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar2);
          *piVar5 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0089ddfc(param_1[0x1a],param_1[0x1b]);
          }
        }
        piVar5 = (int *)param_1[0x1c];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(param_1[0x1c],param_1[0x1d]);
          return;
        }
        return;
      }
    }
  }
  else if (iVar6 == 0) {
    piVar5 = (int *)param_1[0x4c];
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0149f9e0(param_1[0x4c]);
      }
    }
    if (1 < (byte)param_1[0x30]) {
      piVar5 = (int *)param_1[0x31];
      (**(code **)(*piVar5 + 0x10))(piVar5 + 3,piVar5[1],piVar5[2]);
      thunk_FUN_016d3fb4(piVar5);
    }
    (**(code **)(param_1[0x32] + 0x10))(param_1 + 0x35,param_1[0x33],param_1[0x34]);
    if (param_1[0x20] == 0x3b9aca01) {
      uVar4 = param_1[0x1e];
      puVar14 = (undefined4 *)param_1[0x1f];
      pcVar7 = (code *)*puVar14;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar4);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
    }
    else {
      FUN_01466814(param_1 + 0x1e);
    }
    FUN_0145d5e0(param_1 + 0x41);
    piVar5 = (int *)param_1[0x1a];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0x1a],param_1[0x1b]);
    }
    piVar5 = (int *)param_1[0x1c];
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(param_1[0x1c],param_1[0x1d]);
      }
    }
    piVar5 = (int *)param_1[0x36];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0x36],param_1[0x37]);
      return;
    }
  }
  return;
}

