// FUN_011e9578 @ 011e9578 size=2252 calls_out=2 calls_in=4
// strings: 

void FUN_011e9578(int *param_1,char *param_2,int param_3,undefined4 param_4,uint param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  bool bVar17;
  uint local_34;
  int *local_28;
  
  local_34 = param_5;
  iVar3 = *(int *)(param_2 + 8);
  uVar7 = *(uint *)(param_2 + 0xc);
  cVar2 = *param_2;
  do {
    if ((char)param_1[0x1b] != '\0') {
      if (*(int *)(param_3 + 8) == 0) {
        return;
      }
      FUN_016dd606(*(undefined4 *)(param_3 + 4),1);
      return;
    }
    if (param_1[0x17] != 0) {
      FUN_011e9578(param_1[0x17],param_2,param_3,param_4,1);
    }
    iVar4 = param_1[0x19];
    if ((iVar4 != 0) && (DataMemoryBarrier(0xb), *(int *)(iVar4 + 0x78) == 0)) {
      FUN_011e9578(iVar4 + 8,param_2,param_3,param_4,1);
    }
    if (param_1[0x18] != 0) {
      FUN_011e9578(param_1[0x18],param_2,param_3,param_4,1);
    }
    iVar4 = *(int *)(param_3 + 4);
    uVar12 = *(uint *)(param_3 + 8);
    if ((*param_1 == 1) && (param_1[1] != 0 && uVar12 != 0)) {
      uVar6 = param_1[1] - 1;
      if (uVar12 - 1 < uVar6) {
        uVar6 = uVar12 - 1;
      }
      FUN_016dd606(iVar4,1,uVar6 + 1);
      iVar4 = *(int *)(param_3 + 4);
      uVar12 = *(uint *)(param_3 + 8);
      iVar5 = param_1[2];
    }
    else {
      iVar5 = param_1[2];
    }
    if ((iVar5 == 1) && (param_1[3] != 0 && uVar12 != 0)) {
      uVar6 = param_1[3] - 1;
      if (uVar12 - 1 < uVar6) {
        uVar6 = uVar12 - 1;
      }
      FUN_016dd606(iVar4,1,uVar6 + 1);
      iVar4 = *(int *)(param_3 + 4);
      uVar12 = *(uint *)(param_3 + 8);
    }
    uVar6 = 0;
    do {
      if (uVar12 == uVar6) {
        return;
      }
      pcVar1 = (char *)(iVar4 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\0');
    if (cVar2 == '\x04') {
      if (uVar7 <= uVar12) {
        uVar12 = uVar7;
      }
      if (uVar12 != 0) {
        uVar6 = 0;
        do {
          if (*(char *)(iVar4 + uVar6) == '\0') {
            iVar14 = iVar3 + uVar6 * 0x18;
            iVar5 = param_1[0x12];
            if (iVar5 != 0) {
              uVar8 = 1;
              if ((int)*(uint *)(iVar5 + 8) < 0) {
                uVar8 = *(uint *)(iVar5 + 8) ^ 0x80000000;
              }
              if (uVar8 == 0) {
                if (*(int *)(iVar5 + 0xc) == 0) goto LAB_011e9728;
                goto LAB_011e9804;
              }
              if (uVar8 != 1) {
                puVar13 = *(undefined4 **)(iVar5 + 0x10);
                iVar5 = *(int *)(iVar5 + 0x14) << 5;
                do {
                  if (iVar5 == 0) goto LAB_011e9728;
                  iVar9 = (**(code **)(puVar13[1] + 0x10))(*puVar13,iVar14,param_4);
                  iVar5 = iVar5 + -0x20;
                  puVar13 = puVar13 + 8;
                } while (iVar9 != 0);
                goto LAB_011e9804;
              }
              iVar9 = *(int *)(iVar5 + 0x10);
              puVar13 = *(undefined4 **)(iVar5 + 0xc);
              if (iVar9 == 1) {
                iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,iVar14,param_4);
                if (iVar5 == 0) goto LAB_011e9804;
              }
              else if (iVar9 != 0) {
                puVar10 = puVar13 + iVar9 * 8;
                do {
                  iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,iVar14,param_4);
                  if (iVar5 == 0) goto LAB_011e9804;
                  puVar13 = puVar13 + 8;
                } while (puVar13 != puVar10);
              }
              goto LAB_011e9728;
            }
LAB_011e9804:
            if (((local_34 & 1) != 0) && (iVar5 = param_1[0xd], iVar5 != 0)) {
              uVar8 = 1;
              if ((int)*(uint *)(iVar5 + 8) < 0) {
                uVar8 = *(uint *)(iVar5 + 8) ^ 0x80000000;
              }
              if (uVar8 == 0) {
                if (*(int *)(iVar5 + 0xc) == 0) goto LAB_011e9728;
              }
              else if (uVar8 == 1) {
                iVar9 = *(int *)(iVar5 + 0x10);
                puVar13 = *(undefined4 **)(iVar5 + 0xc);
                if (iVar9 == 1) {
                  iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,iVar14,param_4);
                  if (iVar5 == 0) goto LAB_011e9734;
                }
                else if (iVar9 != 0) {
                  puVar10 = puVar13 + iVar9 * 8;
                  do {
                    iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,iVar14,param_4);
                    if (iVar5 == 0) goto LAB_011e9734;
                    puVar13 = puVar13 + 8;
                  } while (puVar13 != puVar10);
                }
LAB_011e9728:
                *(undefined1 *)(iVar4 + uVar6) = 1;
              }
              else {
                puVar13 = *(undefined4 **)(iVar5 + 0x10);
                iVar5 = *(int *)(iVar5 + 0x14) << 5;
                do {
                  if (iVar5 == 0) goto LAB_011e9728;
                  iVar9 = (**(code **)(puVar13[1] + 0x10))(*puVar13,iVar14,param_4);
                  iVar5 = iVar5 + -0x20;
                  puVar13 = puVar13 + 8;
                } while (iVar9 != 0);
              }
            }
          }
LAB_011e9734:
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar12);
      }
    }
    iVar4 = param_1[0x1a];
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + 0x150);
      uVar12 = 1;
      if ((int)*(uint *)(iVar5 + 8) < 0) {
        uVar12 = *(uint *)(iVar5 + 8) ^ 0x80000000;
      }
      if (uVar12 == 0) {
        if (*(int *)(iVar5 + 0xc) == 0) goto LAB_011e9de0;
LAB_011e99dc:
        piVar11 = (int *)(iVar4 + 0xe0);
        iVar4 = *piVar11;
      }
      else {
        if (uVar12 != 1) {
          puVar13 = *(undefined4 **)(iVar5 + 0x10);
          iVar5 = *(int *)(iVar5 + 0x14) << 5;
          do {
            if (iVar5 == 0) goto LAB_011e9de0;
            iVar14 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
            iVar5 = iVar5 + -0x20;
            puVar13 = puVar13 + 8;
          } while (iVar14 != 0);
          goto LAB_011e99dc;
        }
        iVar14 = *(int *)(iVar5 + 0x10);
        puVar13 = *(undefined4 **)(iVar5 + 0xc);
        if (iVar14 == 1) {
          iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
          if (iVar5 == 0) goto LAB_011e99dc;
        }
        else if (iVar14 != 0) {
          puVar10 = puVar13 + iVar14 * 8;
          do {
            iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
            if (iVar5 == 0) goto LAB_011e99dc;
            puVar13 = puVar13 + 8;
          } while (puVar13 != puVar10);
        }
LAB_011e9de0:
        FUN_011e9578(iVar4,param_2,param_3,param_4,1);
        piVar11 = (int *)(iVar4 + 0x70);
        iVar4 = *piVar11;
      }
      if (iVar4 != 2) {
        FUN_011e9578(piVar11,param_2,param_3,param_4,1);
      }
    }
    if ((param_1[4] != -0x80000000) && (iVar4 = param_1[6], iVar4 != 0)) {
      piVar15 = (int *)param_1[5];
      piVar11 = piVar15;
      do {
        piVar16 = piVar11 + 0x21;
        iVar5 = *piVar11;
        uVar12 = 1;
        if ((int)*(uint *)(iVar5 + 8) < 0) {
          uVar12 = *(uint *)(iVar5 + 8) ^ 0x80000000;
        }
        if (uVar12 == 0) {
          if (*(int *)(iVar5 + 0xc) == 0) goto LAB_011e9a34;
        }
        else if (uVar12 == 1) {
          iVar14 = *(int *)(iVar5 + 0x10);
          puVar13 = *(undefined4 **)(iVar5 + 0xc);
          if (iVar14 == 1) {
            iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
            if (iVar5 == 0) goto LAB_011e9a50;
          }
          else if (iVar14 != 0) {
            puVar10 = puVar13 + iVar14 * 8;
            do {
              iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
              if (iVar5 == 0) goto LAB_011e9a50;
              puVar13 = puVar13 + 8;
            } while (puVar13 != puVar10);
          }
LAB_011e9a34:
          FUN_011e9578(piVar11 + 5,param_2,param_3,param_4,1);
        }
        else {
          puVar13 = *(undefined4 **)(iVar5 + 0x10);
          iVar5 = *(int *)(iVar5 + 0x14) << 5;
          do {
            if (iVar5 == 0) goto LAB_011e9a34;
            iVar14 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
            iVar5 = iVar5 + -0x20;
            puVar13 = puVar13 + 8;
          } while (iVar14 != 0);
        }
LAB_011e9a50:
        piVar11 = piVar16;
      } while (piVar16 != piVar15 + iVar4 * 0x21);
    }
    if ((param_1[7] != -0x80000000) && (iVar4 = param_1[9], iVar4 != 0)) {
      piVar15 = (int *)param_1[8];
      piVar11 = piVar15;
      do {
        piVar16 = piVar11 + 0x21;
        iVar5 = *piVar11;
        uVar12 = 1;
        if ((int)*(uint *)(iVar5 + 8) < 0) {
          uVar12 = *(uint *)(iVar5 + 8) ^ 0x80000000;
        }
        if (uVar12 == 0) {
          if (*(int *)(iVar5 + 0xc) == 0) goto LAB_011e9b68;
        }
        else if (uVar12 == 1) {
          iVar14 = *(int *)(iVar5 + 0x10);
          puVar13 = *(undefined4 **)(iVar5 + 0xc);
          if (iVar14 == 1) {
            iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
            if (iVar5 == 0) goto LAB_011e9b84;
          }
          else if (iVar14 != 0) {
            puVar10 = puVar13 + iVar14 * 8;
            do {
              iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
              if (iVar5 == 0) goto LAB_011e9b84;
              puVar13 = puVar13 + 8;
            } while (puVar13 != puVar10);
          }
LAB_011e9b68:
          FUN_011e9578(piVar11 + 5,param_2,param_3,param_4,1);
        }
        else {
          puVar13 = *(undefined4 **)(iVar5 + 0x10);
          iVar5 = *(int *)(iVar5 + 0x14) << 5;
          do {
            if (iVar5 == 0) goto LAB_011e9b68;
            iVar14 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
            iVar5 = iVar5 + -0x20;
            puVar13 = puVar13 + 8;
          } while (iVar14 != 0);
        }
LAB_011e9b84:
        piVar11 = piVar16;
      } while (piVar16 != piVar15 + iVar4 * 0x21);
    }
    iVar4 = param_1[10];
    bVar17 = iVar4 == -0x80000000;
    if (!bVar17) {
      iVar4 = param_1[0xc];
    }
    if (bVar17 || iVar4 == 0) {
      return;
    }
    piVar15 = (int *)param_1[0xb];
    bVar17 = false;
    local_28 = (int *)0x0;
    piVar11 = piVar15;
    do {
      piVar16 = piVar11 + 0x21;
      iVar5 = *piVar11;
      uVar12 = 1;
      if ((int)*(uint *)(iVar5 + 8) < 0) {
        uVar12 = *(uint *)(iVar5 + 8) ^ 0x80000000;
      }
      if (uVar12 == 0) {
        if (*(int *)(iVar5 + 0xc) == 0) goto LAB_011e9d78;
      }
      else if (uVar12 == 1) {
        iVar14 = *(int *)(iVar5 + 0x10);
        puVar13 = *(undefined4 **)(iVar5 + 0xc);
        if (iVar14 == 1) {
          iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
          if (iVar5 == 0) goto LAB_011e9ca8;
        }
        else if (iVar14 != 0) {
          puVar10 = puVar13 + iVar14 * 8;
          do {
            iVar5 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
            if (iVar5 == 0) goto LAB_011e9ca8;
            puVar13 = puVar13 + 8;
          } while (puVar13 != puVar10);
        }
LAB_011e9d78:
        if (bVar17) {
          return;
        }
        local_28 = piVar11 + 5;
        bVar17 = true;
      }
      else {
        puVar13 = *(undefined4 **)(iVar5 + 0x10);
        iVar5 = *(int *)(iVar5 + 0x14) << 5;
        do {
          if (iVar5 == 0) goto LAB_011e9d78;
          iVar14 = (**(code **)(puVar13[1] + 0x10))(*puVar13,param_2,param_4);
          iVar5 = iVar5 + -0x20;
          puVar13 = puVar13 + 8;
        } while (iVar14 != 0);
      }
LAB_011e9ca8:
      piVar11 = piVar16;
    } while (piVar16 != piVar15 + iVar4 * 0x21);
    if (bVar17) {
      local_34 = 1;
    }
    param_1 = local_28;
    if (!bVar17 || local_28 == (int *)0x0) {
      return;
    }
  } while( true );
}

