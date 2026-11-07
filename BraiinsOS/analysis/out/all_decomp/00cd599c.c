// FUN_00cd599c @ 00cd599c size=1240 calls_out=4 calls_in=1
// strings: 

void FUN_00cd599c(int *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  if ((undefined1 *)*param_2 == &DAT_00110000) {
    *param_1 = -0x80000000;
    return;
  }
  if ((*(byte *)((int)param_2 + 0x25) & 1) == 0) {
    iVar15 = param_2[1];
    uVar19 = param_2[4];
    iVar14 = param_2[8];
    cVar1 = *(char *)(param_2 + 9);
    uVar5 = param_2[2];
    if (uVar5 < uVar19) {
      iVar8 = param_2[7];
      if (cVar1 == '\0') {
        iVar6 = iVar14 - iVar8;
        *(undefined1 *)((int)param_2 + 0x25) = 1;
        if (iVar6 == 0) goto LAB_00cd59d4;
        iVar11 = iVar6;
        if (((*(char *)(iVar15 + iVar14 + -1) == '\n') && (iVar11 = iVar6 + -1, iVar11 != 0)) &&
           (*(char *)(iVar15 + iVar14 + -2) == '\r')) {
          iVar11 = iVar6 + -2;
        }
      }
      else {
        *(undefined1 *)((int)param_2 + 0x25) = 1;
        iVar6 = iVar14 - iVar8;
        iVar11 = iVar6;
        if ((iVar6 != 0) && (*(char *)(iVar15 + iVar14 + -1) == '\n')) {
          iVar11 = iVar6 + -1;
          if ((iVar11 != 0) && (*(char *)(iVar15 + iVar14 + -2) == '\r')) {
            iVar11 = iVar6 + -2;
          }
        }
      }
joined_r0x00cd5e6c:
      if ((iVar15 + iVar8 != 0) &&
         (FUN_00bad3b8(&local_3c,iVar15 + iVar8,iVar11), local_3c != -0x80000000)) {
LAB_00cd5d2c:
        local_50 = local_38;
        iStack_4c = iStack_34;
        iStack_48 = iStack_30;
        iStack_44 = iStack_2c;
        iStack_40 = iStack_28;
        goto LAB_00cd59e0;
      }
    }
    else {
      bVar2 = *(byte *)(param_2 + 6);
      puVar9 = param_2 + 5;
      uVar18 = param_2[3];
      uVar7 = (uint)bVar2;
      if (uVar7 < 5) {
        do {
          if (uVar18 <= uVar19) {
            uVar17 = (uint)*(byte *)((int)puVar9 + (bVar2 - 1));
            do {
              uVar10 = uVar19 - uVar18;
              iVar8 = iVar15 + uVar18;
              if (uVar10 < 8) {
                if (uVar19 == uVar18) goto LAB_00cd5c14;
                uVar13 = 0;
                while (*(byte *)(iVar8 + uVar13) != uVar17) {
                  uVar13 = uVar13 + 1;
                  if (uVar10 == uVar13) goto LAB_00cd5c14;
                }
              }
              else {
                uVar12 = (iVar8 + 3U & 0xfffffffc) - iVar8;
                if (uVar12 == 0) {
                  uVar12 = 0;
                  goto LAB_00cd5b48;
                }
                uVar13 = 0;
                do {
                  if (*(byte *)(iVar8 + uVar13) == uVar17) goto LAB_00cd5bc0;
                  uVar13 = uVar13 + 1;
                } while (uVar12 != uVar13);
                for (; uVar12 <= uVar10 - 8; uVar12 = uVar12 + 8) {
LAB_00cd5b48:
                  uVar16 = *(uint *)(iVar8 + uVar12) ^ uVar17 * 0x1010101;
                  uVar13 = ((uint *)(iVar8 + uVar12))[1] ^ uVar17 * 0x1010101;
                  if (((0x1010100 - uVar16 | uVar16) & 0x80808080 & (0x1010100 - uVar13 | uVar13))
                      != 0x80808080) break;
                }
                if (uVar10 == uVar12) {
LAB_00cd5c14:
                  param_2[3] = uVar19;
                  uVar18 = uVar19;
                  break;
                }
                iVar11 = 0;
                while (*(byte *)(iVar8 + uVar12 + iVar11) != uVar17) {
                  iVar11 = iVar11 + 1;
                  if ((uVar19 - uVar12) - uVar18 == iVar11) goto LAB_00cd5c14;
                }
                uVar13 = iVar11 + uVar12;
              }
LAB_00cd5bc0:
              uVar18 = uVar18 + uVar13 + 1;
              param_2[3] = uVar18;
              if (((uVar7 <= uVar18) && (uVar18 <= uVar5)) &&
                 (iVar8 = thunk_FUN_016dd50a(iVar15 + (uVar18 - uVar7),puVar9), iVar8 == 0)) {
                iVar11 = param_2[7];
                bVar4 = false;
                param_2[7] = uVar18;
                iVar8 = uVar18 - iVar11;
                goto joined_r0x00cd5c9c;
              }
            } while (uVar18 <= uVar19);
          }
          *(undefined1 *)((int)param_2 + 0x25) = 1;
          iVar11 = param_2[7];
          if (cVar1 == '\0' && iVar14 == iVar11) break;
          iVar8 = iVar14 - iVar11;
          bVar4 = true;
joined_r0x00cd5c9c:
          iVar11 = iVar15 + iVar11;
          iVar6 = iVar8;
          if ((iVar8 != 0) && (*(char *)(iVar11 + iVar8 + -1) == '\n')) {
            iVar6 = iVar8 + -1;
            if ((iVar6 != 0) && (*(char *)(iVar11 + iVar8 + -2) == '\r')) {
              iVar6 = iVar8 + -2;
            }
          }
          if (iVar11 == 0) break;
          FUN_00bad3b8(&local_3c,iVar11,iVar6);
          if (local_3c != -0x80000000) goto LAB_00cd5d2c;
        } while (!bVar4);
      }
      else {
        if (uVar18 <= uVar19) {
          cVar3 = *(char *)((int)puVar9 + (bVar2 - 1));
          do {
            uVar17 = uVar19 - uVar18;
            if (uVar17 < 8) {
              uVar10 = 0;
              if (uVar17 == 0) {
                uVar20 = 0;
              }
              else {
                do {
                  if (*(char *)(iVar15 + uVar18 + uVar10) == cVar3) {
                    uVar20 = CONCAT44(uVar10,1);
                    goto LAB_00cd5dbc;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar17 != uVar10);
                uVar20 = (ulonglong)uVar17 << 0x20;
              }
            }
            else {
              uVar20 = FUN_00fb727c(cVar3,iVar15 + uVar18);
            }
LAB_00cd5dbc:
            if ((uVar20 & 1) == 0) {
              param_2[3] = uVar19;
              break;
            }
            uVar18 = uVar18 + (int)(uVar20 >> 0x20) + 1;
            param_2[3] = uVar18;
            if ((uVar7 <= uVar18) && (uVar18 <= uVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar7,4,&DAT_018af1a8);
            }
          } while (uVar18 <= uVar19);
        }
        iVar8 = param_2[7];
        *(undefined1 *)((int)param_2 + 0x25) = 1;
        if (cVar1 != '\0' || iVar14 != iVar8) {
          iVar6 = iVar14 - iVar8;
          iVar11 = iVar6;
          if ((iVar6 != 0) && (*(char *)(iVar15 + iVar14 + -1) == '\n')) {
            iVar11 = iVar6 + -1;
            if ((iVar11 != 0) && (*(char *)(iVar15 + iVar14 + -2) == '\r')) {
              iVar11 = iVar6 + -2;
            }
          }
          goto joined_r0x00cd5e6c;
        }
      }
    }
  }
LAB_00cd59d4:
  *param_2 = &DAT_00110000;
  local_3c = -0x80000000;
LAB_00cd59e0:
  *param_1 = local_3c;
  param_1[1] = local_50;
  param_1[2] = iStack_4c;
  param_1[3] = iStack_48;
  param_1[4] = iStack_44;
  param_1[5] = iStack_40;
  return;
}

