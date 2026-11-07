// FUN_016d8780 @ 016d8780 size=580 calls_out=9 calls_in=1
// strings: /etc/services

int FUN_016d8780(undefined2 *param_1,char *param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  byte *local_54c;
  byte abStack_548 [128];
  undefined1 auStack_4c8 [144];
  undefined1 auStack_438 [1036];
  
  local_54c = &DAT_0059e494;
  if (param_4 == 1) {
    if ((param_3 != 0) && (param_3 != 6)) {
      return -8;
    }
    param_3 = 6;
    if (param_2 == (char *)0x0) {
      *param_1 = 0;
      param_1[1] = 0x106;
      return 1;
    }
LAB_016d87e2:
    if (*param_2 == '\0') {
      return -8;
    }
    uVar1 = FUN_016dd11a(param_2,&local_54c,10);
    if (*local_54c != 0) {
      if ((param_5 & 0x400) != 0) {
        return -2;
      }
      iVar10 = FUN_016dd8a2(param_2);
      iVar2 = FUN_016daaa4("/etc/services",auStack_4c8,auStack_438,0x408);
      if (iVar2 == 0) {
        puVar7 = (uint *)FUN_016d2bc8();
        if ((*puVar7 < 0x15) && ((int)((0x102004U >> (*puVar7 & 0xff)) << 0x1f) < 0)) {
          return -8;
        }
        return -0xb;
      }
      iVar11 = 0;
LAB_016d8888:
      iVar3 = FUN_016dafa8(abStack_548,0x80,iVar2);
      if (iVar3 == 0) {
        FUN_016daa9e(iVar2);
        if (iVar11 == 0) {
          return -8;
        }
        return iVar11;
      }
      if (1 < iVar11) {
        FUN_016daa9e(iVar2);
        return iVar11;
      }
      puVar4 = (undefined1 *)FUN_016dd7a2(abStack_548,0x23);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 10;
        puVar4[1] = 0;
      }
      pbVar8 = abStack_548;
LAB_016d88b2:
      do {
        pbVar5 = (byte *)FUN_016ddb26(pbVar8,param_2);
        if (pbVar5 == (byte *)0x0) goto LAB_016d8888;
        pbVar8 = pbVar5 + 1;
        if (abStack_548 < pbVar5) {
          uVar1 = (uint)pbVar5[-1];
          bVar12 = 0x1f < uVar1;
          if (uVar1 != 0x20) {
            bVar12 = 3 < uVar1 - 9;
          }
          if (bVar12 && (uVar1 != 0x20 && uVar1 - 9 != 4)) goto LAB_016d88b2;
        }
        if (((pbVar5[iVar10] & 0xdf) == 0) || (pbVar5[iVar10] - 9 < 5)) goto LAB_016d88e6;
      } while( true );
    }
    if (0xffff < uVar1) {
      return -8;
    }
    param_2 = (char *)(uVar1 & 0xffff);
LAB_016d8806:
    uVar9 = SUB42(param_2,0);
    if (param_3 != 0x11) {
      *param_1 = uVar9;
      param_1[1] = 0x106;
      if (param_3 == 6) {
        return 1;
      }
      param_1 = param_1 + 2;
      iVar10 = 2;
      goto LAB_016d8840;
    }
  }
  else {
    if (param_4 != 2) {
      if (param_4 != 0) {
        if (param_2 == (char *)0x0) {
          *param_1 = 0;
          *(char *)(param_1 + 1) = (char)param_3;
          *(char *)((int)param_1 + 3) = (char)param_4;
          return 1;
        }
        return -8;
      }
      if (param_2 != (char *)0x0) goto LAB_016d87e2;
      goto LAB_016d8806;
    }
    if ((param_3 != 0) && (param_3 != 0x11)) {
      return -8;
    }
    param_3 = 0x11;
    if (param_2 != (char *)0x0) goto LAB_016d87e2;
  }
  uVar9 = SUB42(param_2,0);
  iVar10 = 1;
LAB_016d8840:
  *param_1 = uVar9;
  param_1[1] = 0x211;
  return iVar10;
LAB_016d88e6:
  pbVar8 = abStack_548;
  do {
    pbVar5 = pbVar8;
    if ((*pbVar5 & 0xdf) == 0) break;
    pbVar8 = pbVar5 + 1;
  } while (4 < *pbVar5 - 9);
  uVar1 = FUN_016dd11a(pbVar5,&local_54c,10);
  if ((uVar1 < 0x10000) && (local_54c != pbVar5)) {
    iVar6 = FUN_016dd8de(local_54c,&DAT_005a4bb8,4);
    iVar3 = iVar11;
    if (iVar6 == 0) {
      if (param_3 == 6) goto LAB_016d8888;
      param_1[iVar11 * 2] = (short)uVar1;
      iVar3 = iVar11 + 1;
      param_1[iVar11 * 2 + 1] = 0x211;
    }
    iVar6 = FUN_016dd8de(local_54c,&DAT_005a2a2c,4);
    iVar11 = iVar3;
    if (param_3 != 0x11 && iVar6 == 0) {
      param_1[iVar3 * 2] = (short)uVar1;
      iVar11 = iVar3 + 1;
      param_1[iVar3 * 2 + 1] = 0x106;
    }
  }
  goto LAB_016d8888;
}

