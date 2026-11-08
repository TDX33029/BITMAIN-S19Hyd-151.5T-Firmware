// FUN_006f127c @ 006f127c size=3760 calls_out=16 calls_in=1
// strings: internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_006f127c(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined2 *puVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int *piVar32;
  undefined4 uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  bool bVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  
  if ((*param_1 == 1) && (uVar33 = 1, (uint)param_1[2] <= (uint)param_1[1])) goto LAB_006f207c;
  iVar39 = param_1[0x22];
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar2 = param_1[0x23];
  iVar12 = 0;
  uVar40 = param_1[5];
  iVar19 = 0;
  if (iVar39 == iVar2) {
    iVar12 = param_1[8];
  }
  uVar13 = (uint)*(byte *)(param_1 + 0x24);
  if (iVar39 == iVar2) {
    iVar19 = param_1[0xb];
  }
  uVar38 = uVar40;
  if ((uVar13 == 2) && (uVar13 = 0, *(char *)((int)param_1 + 0x91) != '\0')) {
    if (uVar40 == param_1[3]) {
      FUN_0161d664();
    }
    uVar13 = uVar40 * 5;
    puVar3 = (undefined1 *)(param_1[4] + uVar40 * 0x14);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(int *)(puVar3 + 8) = iVar39;
    iVar2 = param_1[0x23];
    param_1[5] = uVar40 + 1;
    uVar38 = uVar40 + 1;
  }
  bVar41 = iVar2 == iVar39;
  iVar28 = 0;
  if (bVar41) {
    iVar2 = param_1[8];
    uVar13 = param_1[0xb];
  }
  iVar20 = *param_1;
  uVar25 = param_1[1];
  if (bVar41) {
    iVar28 = uVar13 + iVar2;
  }
  iVar2 = param_1[0x17];
  uVar13 = param_1[0x1e];
  if ((iVar20 == 1) && ((uint)param_1[2] <= uVar25)) {
LAB_006f14d0:
    uVar43 = CONCAT44(param_1,1);
  }
  else {
    piVar32 = param_1 + 0x20;
    if (iVar20 == 0) {
      local_48 = *piVar32;
      iStack_44 = param_1[0x21];
      iStack_40 = param_1[0x22];
LAB_006f13cc:
      iVar20 = param_1[0x24];
      *(bool *)(param_1 + 0x24) = (char)iVar20 != '\x01';
      local_38 = *piVar32;
      local_34 = param_1[0x21];
      local_30 = (undefined1 *)param_1[0x22];
      FUN_00700e8c(param_1 + 0xc);
      uVar43 = FUN_006f5094(param_1,"\"",1);
      uVar25 = (uint)(uVar43 >> 0x20);
      if ((uVar43 & 1) == 0) {
        uVar43 = (ulonglong)uVar25 << 0x20;
      }
      else {
        uVar43 = FUN_006f5094(uVar25,"\\",1);
      }
      uVar25 = (uint)(uVar43 >> 0x20);
      if ((uVar43 & 1) == 0) {
        uVar43 = (ulonglong)uVar25 << 0x20;
      }
      else {
        uVar43 = FUN_006e8748(uVar25);
      }
      param_1 = (int *)(uVar43 >> 0x20);
      param_1[0x20] = local_38;
      param_1[0x21] = local_34;
      param_1[0x22] = (int)local_30;
      *(char *)(param_1 + 0x24) = (char)iVar20;
      if ((uVar43 & 1) == 0) {
        FUN_00700d14(param_1 + 0xc);
        goto LAB_006f148c;
      }
      FUN_00700d14(param_1 + 0xc);
      uVar43 = FUN_006f5184(param_1);
    }
    else {
      param_1[1] = uVar25 + 1;
      local_48 = *piVar32;
      iStack_44 = param_1[0x21];
      iStack_40 = param_1[0x22];
      if ((iVar20 == 0) || (uVar25 + 1 < (uint)param_1[2])) {
        param_1[1] = uVar25 + 2;
        goto LAB_006f13cc;
      }
LAB_006f148c:
      uVar43 = CONCAT44(param_1,1);
    }
    uVar33 = (undefined4)(uVar43 >> 0x20);
    if ((uVar43 & 1) == 0) {
      uVar43 = FUN_006f581c(uVar33);
    }
    else {
      uVar43 = CONCAT44(uVar33,1);
    }
    param_1 = (int *)(uVar43 >> 0x20);
    if ((uVar43 & 1) != 0) {
      param_1[0x20] = local_48;
      param_1[0x21] = iStack_44;
      param_1[0x22] = iStack_40;
      if (uVar38 <= (uint)param_1[5]) {
        param_1[5] = uVar38;
      }
      goto LAB_006f14d0;
    }
  }
  piVar32 = (int *)(uVar43 >> 0x20);
  if ((uVar43 & 1) == 0) {
    uVar43 = ZEXT48(piVar32) << 0x20;
  }
  else if ((*piVar32 == 1) && ((uint)piVar32[2] <= (uint)piVar32[1])) {
    uVar43 = CONCAT44(piVar32,1);
  }
  else {
    if (*piVar32 != 0) {
      piVar32[1] = piVar32[1] + 1;
    }
    uVar38 = piVar32[5];
    local_38 = piVar32[0x20];
    local_34 = piVar32[0x21];
    local_30 = (undefined1 *)piVar32[0x22];
    uVar42 = FUN_006f5094(piVar32,"\\",1);
    uVar33 = (undefined4)(uVar42 >> 0x20);
    uVar43 = CONCAT44(uVar33,1);
    if ((uVar42 & 1) == 0) {
      uVar43 = FUN_006f5184(uVar33);
    }
    uVar33 = (undefined4)(uVar43 >> 0x20);
    if ((uVar43 & 1) == 0) {
      uVar43 = FUN_006f5094(uVar33,"\"",1);
      uVar25 = (uint)(uVar43 >> 0x20);
      if ((uVar43 & 1) == 0) {
        uVar43 = (ulonglong)uVar25 << 0x20;
      }
      else {
        uVar43 = FUN_006f5094(uVar25,"\\",1);
      }
      uVar25 = (uint)(uVar43 >> 0x20);
      if ((uVar43 & 1) == 0) {
        uVar43 = (ulonglong)uVar25 << 0x20;
      }
      else {
        uVar43 = FUN_006f5094(uVar25,&DAT_005327c4,1);
      }
      uVar25 = (uint)(uVar43 >> 0x20);
      if ((uVar43 & 1) == 0) {
        uVar43 = (ulonglong)uVar25 << 0x20;
      }
      else {
        uVar43 = FUN_006f5094(uVar25,&DAT_004ba608,1);
      }
      uVar25 = (uint)(uVar43 >> 0x20);
      if ((uVar43 & 1) == 0) {
        uVar43 = (ulonglong)uVar25 << 0x20;
      }
      else {
        uVar43 = FUN_006f5094(uVar25,&DAT_004ba60a,1);
      }
      uVar25 = (uint)(uVar43 >> 0x20);
      if ((uVar43 & 1) == 0) {
        uVar43 = (ulonglong)uVar25 << 0x20;
      }
      else {
        uVar43 = FUN_006f5094(uVar25,&DAT_004e95ab,1);
      }
      uVar25 = (uint)(uVar43 >> 0x20);
      if ((uVar43 & 1) == 0) {
        uVar43 = (ulonglong)uVar25 << 0x20;
      }
      else {
        uVar43 = FUN_006f5094(uVar25,&DAT_004ba612,1);
      }
      uVar25 = (uint)(uVar43 >> 0x20);
      if ((uVar43 & 1) == 0) {
        uVar43 = (ulonglong)uVar25 << 0x20;
      }
      else {
        uVar43 = FUN_006f5094(uVar25,&DAT_004e977a,1);
      }
    }
    else {
      uVar43 = CONCAT44(uVar33,1);
    }
    iVar20 = (int)(uVar43 >> 0x20);
    if ((uVar43 & 1) != 0) {
      *(int *)(iVar20 + 0x80) = local_38;
      *(int *)(iVar20 + 0x84) = local_34;
      *(undefined1 **)(iVar20 + 0x88) = local_30;
      uVar43 = CONCAT44(iVar20,1);
      if (uVar38 <= *(uint *)(iVar20 + 0x14)) {
        *(uint *)(iVar20 + 0x14) = uVar38;
        uVar43 = CONCAT44(iVar20,1);
      }
    }
  }
  param_1 = (int *)(uVar43 >> 0x20);
  if ((uVar43 & 1) == 0) {
    piVar32 = param_1 + 0x24;
  }
  else {
    if ((*param_1 != 1) || (bVar41 = true, (uint)param_1[1] < (uint)param_1[2])) {
      if (*param_1 != 0) {
        param_1[1] = param_1[1] + 1;
      }
      uVar38 = param_1[5];
      iVar20 = param_1[0x20];
      iVar29 = param_1[0x21];
      iVar34 = param_1[0x22];
      uVar43 = FUN_006f5094(param_1,"\\u",2);
      uVar33 = (undefined4)(uVar43 >> 0x20);
      if ((uVar43 & 1) == 0) {
        uVar43 = FUN_006f5184(uVar33);
      }
      else {
        uVar43 = CONCAT44(uVar33,1);
      }
      param_1 = (int *)(uVar43 >> 0x20);
      bVar1 = true;
      if ((uVar43 & 1) == 0) {
        if ((*param_1 != 1) || ((uint)param_1[1] < (uint)param_1[2])) {
          iVar21 = param_1[0x22];
          if (*param_1 != 0) {
            param_1[1] = param_1[1] + 1;
          }
          iVar4 = param_1[0x23];
          iVar14 = 0;
          iVar35 = 0;
          uVar25 = param_1[5];
          if (iVar21 == iVar4) {
            iVar14 = param_1[0xb];
            iVar35 = param_1[8];
          }
          uVar18 = uVar25;
          if (((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
            if (uVar25 == param_1[3]) {
              FUN_0161d664();
            }
            puVar3 = (undefined1 *)(param_1[4] + uVar25 * 0x14);
            *puVar3 = 0;
            *(undefined4 *)(puVar3 + 4) = 0;
            *(int *)(puVar3 + 8) = iVar21;
            iVar4 = param_1[0x23];
            param_1[5] = uVar25 + 1;
            uVar18 = uVar25 + 1;
          }
          iVar30 = 0;
          if (iVar4 == iVar21) {
            iVar30 = param_1[0xb] + param_1[8];
          }
          iVar4 = param_1[0x17];
          uVar5 = param_1[0x1e];
          iVar15 = *param_1;
          uVar22 = param_1[1];
          if ((iVar15 == 1) && ((uint)param_1[2] <= uVar22)) {
            uVar43 = CONCAT44(param_1,1);
          }
          else {
            piVar32 = param_1 + 0x20;
            if (iVar15 == 0) {
              local_68 = *piVar32;
              iStack_64 = param_1[0x21];
              iStack_60 = param_1[0x22];
LAB_006f18c8:
              iVar15 = param_1[0x24];
              *(bool *)(param_1 + 0x24) = (char)iVar15 != '\x01';
              iVar23 = *piVar32;
              iVar26 = param_1[0x21];
              iVar36 = param_1[0x22];
              FUN_00700e8c(param_1 + 0xc);
              iVar6 = *param_1;
              if ((iVar6 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
LAB_006f1b0c:
                uVar43 = CONCAT44(param_1,1);
              }
              else {
                iVar7 = 0;
                if (iVar6 != 0) {
                  iVar7 = param_1[1] + 1;
                }
                uVar22 = param_1[5];
                if (iVar6 != 0) {
                  param_1[1] = iVar7;
                }
                iVar6 = *piVar32;
                iVar7 = param_1[0x21];
                iVar27 = param_1[0x22];
                uVar16 = param_1[0x21];
                uVar24 = param_1[0x22];
                if (uVar24 != 0) {
                  if (uVar24 < uVar16) {
                    if (*(char *)(param_1[0x20] + uVar24) < -0x40) goto LAB_006f1968;
                  }
                  else if (uVar16 != uVar24) {
LAB_006f1968:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb514();
                  }
                }
                pbVar8 = (byte *)(param_1[0x20] + uVar24);
                if (uVar16 - uVar24 < 2) {
                  iVar37 = 0;
                  if (uVar16 - uVar24 == 1) goto LAB_006f19b0;
                }
                else {
                  iVar37 = 0;
                  if (-0x41 < (char)pbVar8[1]) {
LAB_006f19b0:
                    iVar37 = 1;
                    pbVar17 = &DAT_004ba609;
                    do {
                      if (iVar37 == 0) {
                        iVar37 = 1;
                        param_1[0x22] = uVar24 + 1;
                        break;
                      }
                      uVar31 = (uint)*pbVar17;
                      uVar16 = (uint)*pbVar8;
                      if (uVar31 - 0x41 < 0x1a) {
                        uVar31 = uVar31 | 0x20;
                      }
                      if (uVar16 - 0x41 < 0x1a) {
                        uVar16 = uVar16 | 0x20;
                      }
                      iVar37 = 0;
                      pbVar8 = pbVar8 + 1;
                      pbVar17 = pbVar17 + 1;
                    } while (uVar16 == uVar31);
                  }
                }
                if ((char)param_1[0x1f] == '\x01') {
                  puVar3 = (undefined1 *)thunk_FUN_01be5118(1);
                  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00664620(1,1);
                  }
                  local_2c = 1;
                  *puVar3 = 100;
                  local_34 = 1;
                  local_38 = 1;
                  local_30 = puVar3;
                  FUN_006e7f1c(param_1,uVar24,&local_38,iVar37);
                }
                if (iVar37 == 0) {
                  uVar43 = CONCAT44(param_1,1);
                }
                else {
                  uVar43 = FUN_006f5184(param_1);
                }
                uVar33 = (undefined4)(uVar43 >> 0x20);
                if ((uVar43 & 1) == 0) {
                  uVar43 = FUN_006f4f54(uVar33,0x38,0x39);
                  uVar16 = (uint)(uVar43 >> 0x20);
                  if ((uVar43 & 1) == 0) {
                    uVar43 = (ulonglong)uVar16 << 0x20;
                  }
                  else {
                    uVar43 = FUN_006f4f54(uVar16,0x61,0x66);
                  }
                  uVar16 = (uint)(uVar43 >> 0x20);
                  if ((uVar43 & 1) == 0) {
                    uVar43 = (ulonglong)uVar16 << 0x20;
                  }
                  else {
                    uVar43 = FUN_006f4f54(uVar16,0x41,0x46);
                  }
                }
                else {
                  uVar43 = CONCAT44(uVar33,1);
                }
                param_1 = (int *)(uVar43 >> 0x20);
                if ((uVar43 & 1) != 0) {
                  param_1[0x20] = iVar6;
                  param_1[0x21] = iVar7;
                  param_1[0x22] = iVar27;
                  if (uVar22 <= (uint)param_1[5]) {
                    param_1[5] = uVar22;
                  }
                  goto LAB_006f1b0c;
                }
              }
              param_1 = (int *)(uVar43 >> 0x20);
              param_1[0x20] = iVar23;
              param_1[0x21] = iVar26;
              param_1[0x22] = iVar36;
              *(char *)(param_1 + 0x24) = (char)iVar15;
              if ((uVar43 & 1) == 0) {
                FUN_00700d14(param_1 + 0xc);
                goto LAB_006f1b5c;
              }
              FUN_00700d14(param_1 + 0xc);
              uVar43 = FUN_006f5184(param_1);
            }
            else {
              param_1[1] = uVar22 + 1;
              local_68 = *piVar32;
              iStack_64 = param_1[0x21];
              iStack_60 = param_1[0x22];
              if ((iVar15 == 0) || (uVar22 + 1 < (uint)param_1[2])) {
                param_1[1] = uVar22 + 2;
                goto LAB_006f18c8;
              }
LAB_006f1b5c:
              uVar43 = CONCAT44(param_1,1);
            }
            uVar33 = (undefined4)(uVar43 >> 0x20);
            if ((uVar43 & 1) == 0) {
              uVar43 = FUN_006f4f54(uVar33,0x30,0x39);
              uVar22 = (uint)(uVar43 >> 0x20);
              if ((uVar43 & 1) == 0) {
                uVar43 = (ulonglong)uVar22 << 0x20;
              }
              else {
                uVar43 = FUN_006f4f54(uVar22,0x61,0x66);
              }
              uVar22 = (uint)(uVar43 >> 0x20);
              if ((uVar43 & 1) == 0) {
                uVar43 = (ulonglong)uVar22 << 0x20;
              }
              else {
                uVar43 = FUN_006f4f54(uVar22,0x41,0x46);
              }
            }
            else {
              uVar43 = CONCAT44(uVar33,1);
            }
            uVar33 = (undefined4)(uVar43 >> 0x20);
            if ((uVar43 & 1) == 0) {
              uVar43 = FUN_006f5184(uVar33);
            }
            else {
              uVar43 = CONCAT44(uVar33,1);
            }
            uVar33 = (undefined4)(uVar43 >> 0x20);
            if ((uVar43 & 1) == 0) {
              uVar43 = FUN_006f4f54(uVar33,0x30,0x39);
              uVar22 = (uint)(uVar43 >> 0x20);
              if ((uVar43 & 1) == 0) {
                uVar43 = (ulonglong)uVar22 << 0x20;
              }
              else {
                uVar43 = FUN_006f4f54(uVar22,0x61,0x66);
              }
              uVar22 = (uint)(uVar43 >> 0x20);
              if ((uVar43 & 1) == 0) {
                uVar43 = (ulonglong)uVar22 << 0x20;
              }
              else {
                uVar43 = FUN_006f4f54(uVar22,0x41,0x46);
              }
            }
            else {
              uVar43 = CONCAT44(uVar33,1);
            }
            uVar33 = (undefined4)(uVar43 >> 0x20);
            if ((uVar43 & 1) == 0) {
              uVar43 = FUN_006f5184(uVar33);
            }
            else {
              uVar43 = CONCAT44(uVar33,1);
            }
            uVar33 = (undefined4)(uVar43 >> 0x20);
            if ((uVar43 & 1) == 0) {
              uVar43 = FUN_006f4f54(uVar33,0x30,0x39);
              uVar22 = (uint)(uVar43 >> 0x20);
              if ((uVar43 & 1) == 0) {
                uVar43 = (ulonglong)uVar22 << 0x20;
              }
              else {
                uVar43 = FUN_006f4f54(uVar22,0x61,0x66);
              }
              uVar22 = (uint)(uVar43 >> 0x20);
              if ((uVar43 & 1) == 0) {
                uVar43 = (ulonglong)uVar22 << 0x20;
              }
              else {
                uVar43 = FUN_006f4f54(uVar22,0x41,0x46);
              }
            }
            else {
              uVar43 = CONCAT44(uVar33,1);
            }
            uVar33 = (undefined4)(uVar43 >> 0x20);
            if ((uVar43 & 1) == 0) {
              uVar43 = FUN_006f5184(uVar33);
            }
            else {
              uVar43 = CONCAT44(uVar33,1);
            }
            uVar33 = (undefined4)(uVar43 >> 0x20);
            if ((uVar43 & 1) == 0) {
              uVar43 = FUN_006f4f54(uVar33,0x30,0x39);
              uVar22 = (uint)(uVar43 >> 0x20);
              if ((uVar43 & 1) == 0) {
                uVar43 = (ulonglong)uVar22 << 0x20;
              }
              else {
                uVar43 = FUN_006f4f54(uVar22,0x61,0x66);
              }
              uVar22 = (uint)(uVar43 >> 0x20);
              if ((uVar43 & 1) == 0) {
                uVar43 = (ulonglong)uVar22 << 0x20;
              }
              else {
                uVar43 = FUN_006f4f54(uVar22,0x41,0x46);
              }
            }
            else {
              uVar43 = CONCAT44(uVar33,1);
            }
            iVar15 = (int)(uVar43 >> 0x20);
            if ((uVar43 & 1) != 0) {
              *(int *)(iVar15 + 0x80) = local_68;
              *(int *)(iVar15 + 0x84) = iStack_64;
              *(int *)(iVar15 + 0x88) = iStack_60;
              uVar43 = CONCAT44(iVar15,1);
              if (uVar18 <= *(uint *)(iVar15 + 0x14)) {
                *(uint *)(iVar15 + 0x14) = uVar18;
                uVar43 = CONCAT44(iVar15,1);
              }
            }
          }
          param_1 = (int *)(uVar43 >> 0x20);
          cVar11 = (char)param_1[0x24];
          if ((uVar43 & 1) == 0) {
            if (cVar11 == '\x01') {
              FUN_006e82ec(param_1,0x3b,iVar21,iVar35,iVar14,iVar30);
              cVar11 = (char)param_1[0x24];
            }
            if ((cVar11 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
              uVar18 = param_1[5];
              if (uVar18 <= uVar25) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar25,uVar18,&DAT_01c061d0);
              }
              pcVar9 = (char *)(param_1[4] + uVar25 * 0x14);
              if (*pcVar9 == '\x01') {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
              }
              *(uint *)(pcVar9 + 4) = uVar18;
              iVar21 = param_1[5];
              iVar14 = param_1[0x22];
              if (iVar21 == param_1[3]) {
                FUN_0161d664(param_1 + 3);
              }
              puVar10 = (undefined2 *)(param_1[4] + iVar21 * 0x14);
              *puVar10 = 0x3b01;
              *(uint *)(puVar10 + 2) = uVar25;
              *(int *)(puVar10 + 8) = iVar14;
              *(undefined4 *)(puVar10 + 4) = 0;
              param_1[5] = iVar21 + 1;
            }
            bVar1 = false;
            bVar41 = (char)param_1[0x1f] != '\0';
            cVar11 = '\0';
            if (bVar41) {
              cVar11 = *(char *)((int)param_1 + 0x91);
            }
            if (bVar41 && cVar11 != '\0') {
              if (uVar5 < (uint)param_1[0x1e]) {
                iVar4 = 0;
              }
              FUN_006e83b8(param_1 + 0x15,0x3b,iVar4);
            }
          }
          else if (cVar11 != '\x01') {
            FUN_006e82ec(param_1,0x3b,iVar21,iVar35,iVar14,iVar30);
            if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
              if (uVar5 < (uint)param_1[0x1e]) {
                iVar4 = 0;
              }
              FUN_006e83b8(param_1 + 0x15,0x3b,iVar4);
            }
            if ((((char)param_1[0x24] == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
               (uVar25 <= (uint)param_1[5])) {
              param_1[5] = uVar25;
            }
          }
        }
      }
      bVar41 = false;
      if (bVar1) {
        bVar41 = true;
        param_1[0x20] = iVar20;
        param_1[0x21] = iVar29;
        param_1[0x22] = iVar34;
        if (uVar38 <= (uint)param_1[5]) {
          param_1[5] = uVar38;
        }
      }
    }
    piVar32 = param_1 + 0x24;
    if (bVar41) {
      uVar33 = 1;
      if ((char)*piVar32 != '\x01') {
        FUN_006e82ec(param_1,0x3a,iVar39,iVar12,iVar19,iVar28);
        if (((char)param_1[0x1f] == '\x01') && (*(char *)((int)param_1 + 0x91) != '\0')) {
          if (uVar13 < (uint)param_1[0x1e]) {
            iVar2 = 0;
          }
          FUN_006e83b8(param_1 + 0x15,0x3a,iVar2);
        }
        if ((((char)*piVar32 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) &&
           (uVar40 <= (uint)param_1[5])) {
          param_1[5] = uVar40;
        }
      }
      goto LAB_006f207c;
    }
  }
  cVar11 = (char)param_1[0x24];
  if (cVar11 == '\x01') {
    FUN_006e82ec(param_1,0x3a,iVar39,iVar12,iVar19,iVar28);
    cVar11 = (char)*piVar32;
  }
  if ((cVar11 == '\x02') && (*(char *)((int)param_1 + 0x91) != '\0')) {
    uVar38 = param_1[5];
    if (uVar38 <= uVar40) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar40,uVar38,&DAT_01c061d0);
    }
    pcVar9 = (char *)(param_1[4] + uVar40 * 0x14);
    if (*pcVar9 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c061e0);
    }
    *(uint *)(pcVar9 + 4) = uVar38;
    iVar39 = param_1[5];
    iVar12 = param_1[0x22];
    if (iVar39 == param_1[3]) {
      FUN_0161d664(param_1 + 3);
    }
    puVar10 = (undefined2 *)(param_1[4] + iVar39 * 0x14);
    *puVar10 = 0x3a01;
    *(uint *)(puVar10 + 2) = uVar40;
    *(int *)(puVar10 + 8) = iVar12;
    *(undefined4 *)(puVar10 + 4) = 0;
    param_1[5] = iVar39 + 1;
  }
  uVar33 = 0;
  bVar41 = (char)param_1[0x1f] != '\0';
  cVar11 = '\0';
  if (bVar41) {
    cVar11 = *(char *)((int)param_1 + 0x91);
  }
  if (bVar41 && cVar11 != '\0') {
    if (uVar13 < (uint)param_1[0x1e]) {
      iVar2 = 0;
    }
    FUN_006e83b8(param_1 + 0x15,0x3a,iVar2);
  }
LAB_006f207c:
  return CONCAT44(param_1,uVar33);
}

