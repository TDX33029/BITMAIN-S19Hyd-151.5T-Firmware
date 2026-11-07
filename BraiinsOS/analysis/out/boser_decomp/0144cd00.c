// FUN_0144cd00 @ 0144cd00 size=1192 calls_out=3 calls_in=1
// strings: 

bool FUN_0144cd00(int param_1,char param_2,uint *param_3,uint param_4,int param_5,
                 undefined1 *param_6,int param_7,int param_8)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  
  iVar4 = param_1;
  if (param_2 != '\0') {
    iVar3 = FUN_0144d1a8(param_3,param_4,param_2 == '\x01',param_5,param_6);
    iVar4 = 1;
    if (iVar3 != 0) {
      return true;
    }
  }
  if (param_4 != 0) {
    iVar4 = param_7;
  }
  if (param_4 != 0 && iVar4 != 0) {
    piVar5 = *(int **)(param_1 + 0xc0);
    uVar12 = 0xffff;
    uVar9 = *param_3;
    if ((char)piVar5[10] != '\0') {
      uVar12 = 0xfff;
    }
    if (uVar12 < uVar9) {
      if (uVar9 < (uint)piVar5[6]) {
        iVar4 = 0x40;
        if ((char)piVar5[10] == '\0') {
          iVar4 = 0x3fc;
        }
        uVar12 = piVar5[1];
        uVar13 = iVar4 + (uVar9 >> 0xe);
        if (uVar13 < uVar12) {
          iVar4 = *piVar5;
          uVar13 = ((uVar9 & 0x3fff) >> 9) + (uint)*(ushort *)(iVar4 + uVar13 * 2);
          if (uVar13 < uVar12) {
            uVar2 = *(ushort *)(iVar4 + uVar13 * 2);
            if ((short)uVar2 < 0) {
              uVar13 = (uVar9 >> 4 & 0x18 | (uVar9 & 0x1ff) >> 7) + (uVar2 & 0x7fff);
              if (uVar13 < uVar12) {
                uVar15 = uVar9 >> 4 & 7;
                uVar7 = uVar15 + uVar13 + 1;
                if (uVar7 < uVar12) {
                  uVar12 = (uint)*(ushort *)(iVar4 + uVar13 * 2) << uVar15 * 2 + 2 & 0x30000 |
                           (uint)*(ushort *)(iVar4 + uVar7 * 2);
                  goto LAB_0144d188;
                }
              }
              iVar4 = piVar5[4];
              goto LAB_0144ce58;
            }
            uVar13 = ((uVar9 & 0x1ff) >> 4) + (uint)uVar2;
            if (uVar13 < uVar12) {
              uVar12 = (uint)*(ushort *)(iVar4 + uVar13 * 2);
LAB_0144d188:
              uVar12 = uVar12 + (uVar9 & 0xf);
              goto LAB_0144ce5c;
            }
          }
        }
        iVar4 = piVar5[4];
LAB_0144ce58:
        uVar12 = iVar4 - 1;
      }
      else {
        uVar12 = piVar5[4] - 2;
      }
    }
    else {
      if ((uint)piVar5[1] <= uVar9 >> 6) {
        iVar4 = piVar5[4];
        goto LAB_0144ce58;
      }
      uVar12 = (uVar9 & 0x3f) + (uint)*(ushort *)(*piVar5 + (uVar9 >> 6) * 2);
    }
LAB_0144ce5c:
    if (uVar12 < (uint)piVar5[4]) {
      bVar1 = *(byte *)(piVar5[3] + uVar12);
    }
    else {
      bVar1 = *(byte *)(piVar5 + 0xb);
    }
    if ((1 << (uint)bVar1 & 0x1c0U) != 0) {
      if (param_5 != 0) {
        return true;
      }
      *param_3 = 0xfffd;
      *param_6 = 1;
      if (param_8 != 0) goto LAB_0144cee8;
      iVar4 = param_4 << 2;
      puVar8 = param_3;
      do {
        if (iVar4 == 0) {
          return false;
        }
        uVar9 = *puVar8;
        iVar4 = iVar4 + -4;
        puVar8 = puVar8 + 1;
      } while (uVar9 < 0x80);
      if (param_4 < 0x3e9) {
        return false;
      }
      goto LAB_0144d10c;
    }
  }
  if (param_8 != 0 && param_4 != 0) {
LAB_0144cee8:
    iVar3 = 0;
    uVar9 = 0;
    uVar10 = *(undefined4 *)(param_1 + 200);
    iVar4 = param_4 * 4;
    puVar8 = param_3;
    piVar5 = (int *)(param_1 + 0xd0);
    if (*(int *)(param_1 + 0xcc) == 0) {
      piVar5 = *(int **)(param_1 + 0xd0);
    }
LAB_0144cf20:
    iVar4 = iVar4 + -4;
    puVar14 = param_3 + uVar9;
    uVar12 = *puVar14;
    if ((uVar12 & 0xfffffffe) == 0x200c) {
      bVar16 = uVar9 == 0;
      puVar6 = (uint *)0x200c;
      if (!bVar16) {
        puVar6 = puVar14 + -1;
        bVar16 = puVar6 == (uint *)0x0;
      }
      if (!bVar16) {
        uVar7 = *puVar6;
        uVar13 = 0xffff;
        if ((char)piVar5[0xb] != '\0') {
          uVar13 = 0xfff;
        }
        if (uVar13 < uVar7) {
          if (uVar7 < (uint)piVar5[7]) {
            uVar13 = FUN_01449040(piVar5);
          }
          else {
            uVar13 = piVar5[5] - 2;
          }
        }
        else if (uVar7 >> 6 < (uint)piVar5[2]) {
          uVar13 = (uVar7 & 0x3f) + (uint)*(ushort *)(piVar5[1] + (uVar7 >> 6) * 2);
        }
        else {
          uVar13 = piVar5[5] - 1;
        }
        iVar11 = *piVar5;
        if (uVar13 < (uint)piVar5[5]) {
          iVar11 = *(int *)(piVar5[4] + uVar13 * 4);
        }
        if (iVar11 == 0xd809) goto LAB_0144d0b4;
        iVar11 = iVar3;
        if (uVar12 != 0x200d) {
          do {
            if (iVar11 == 0) break;
            uVar12 = FUN_014526d4(uVar10,*(undefined4 *)((int)param_3 + (-4 - iVar11)));
            if ((1 << (uVar12 & 0x1f) & 0xcU) != 0) {
              iVar11 = iVar4;
              puVar6 = puVar8 + 1;
              goto LAB_0144d044;
            }
            iVar11 = iVar11 + 4;
          } while ((uVar12 & 0xff) == 5);
        }
      }
      goto LAB_0144d094;
    }
    goto LAB_0144d0b4;
  }
LAB_0144d0cc:
  iVar4 = param_4 << 2;
  puVar8 = param_3;
  do {
    if (iVar4 == 0) {
      return false;
    }
    uVar9 = *puVar8;
    iVar4 = iVar4 + -4;
    puVar8 = puVar8 + 1;
  } while (uVar9 < 0x80);
  if (param_4 < 0x3e9) {
    return 1000 < param_4;
  }
  if (param_5 != 0) {
    return 1000 < param_4;
  }
LAB_0144d10c:
  param_3[1000] = 0xfffd;
  *param_6 = 1;
  return false;
  while( true ) {
    uVar12 = FUN_014526d4(uVar10,*puVar6);
    if ((1 << (uVar12 & 0x1f) & 0x14U) != 0) goto LAB_0144d0b4;
    puVar6 = puVar6 + 1;
    iVar11 = iVar11 + -4;
    if ((uVar12 & 0xff) != 5) break;
LAB_0144d044:
    if (iVar11 == 0) break;
  }
LAB_0144d094:
  if (param_5 != 0) {
    return true;
  }
  *puVar14 = 0xfffd;
  *param_6 = 1;
LAB_0144d0b4:
  uVar9 = uVar9 + 1;
  iVar3 = iVar3 + -4;
  puVar8 = puVar8 + 1;
  if (uVar9 == param_4) goto LAB_0144d0cc;
  goto LAB_0144cf20;
}

