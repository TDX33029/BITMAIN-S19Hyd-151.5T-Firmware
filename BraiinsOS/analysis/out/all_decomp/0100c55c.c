// FUN_0100c55c @ 0100c55c size=1280 calls_out=7 calls_in=1
// strings: 

ulonglong FUN_0100c55c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar6 = 0;
  iVar10 = 0;
  uVar13 = *(uint *)(param_1 + 0x20);
  uVar11 = *(uint *)(param_1 + 0x24);
  puVar8 = &UNK_00378cef;
  if (*(char *)(param_1 + 0x28) == '\0') {
    puVar8 = &DAT_00378bec;
  }
  piVar1 = (int *)(param_1 + 0x1c);
  uVar12 = uVar11;
  if (uVar11 < uVar13) {
    iVar9 = *piVar1;
    if (*(char *)(param_1 + 0x28) == '\0') {
      do {
        while (*(char *)(iVar9 + uVar12) == '%') {
          if ((uVar13 - (uVar12 + 1) < 2) ||
             (pbVar4 = (byte *)(iVar9 + uVar12 + 1),
             ((&DAT_00378df2)[pbVar4[1]] & (&DAT_00378df2)[*pbVar4]) == 0)) goto LAB_0100c62c;
          uVar12 = uVar12 + 3;
          if (uVar13 <= uVar12) goto LAB_0100c768;
        }
        uVar15 = FUN_0100d378(iVar9,uVar13,uVar12);
        uVar3 = (uint)uVar15;
        if (uVar3 < 0x80) {
          if (puVar8[uVar3] == '\0') break;
          if (uVar3 == 0x3a) {
            iVar10 = iVar10 + 1;
            uVar6 = uVar12;
          }
        }
        else if (0x1ff < uVar3 - 0xfdf0) {
          uVar5 = uVar3 - 0xa0;
          bVar14 = 0xd75f < uVar5;
          if (bVar14) {
            uVar5 = uVar3 - 0xf900;
          }
          if (bVar14 && 0x4cf < uVar5) {
            if ((0xeffd < uVar3 - 0xe1000) && (0xcffff < uVar3 - 0x10000 || (~uVar3 & 0xfffe) == 0))
            break;
          }
        }
        uVar12 = (int)((ulonglong)uVar15 >> 0x20) + uVar12;
      } while (uVar12 < uVar13);
    }
    else {
      do {
        uVar3 = (uint)*(byte *)(iVar9 + uVar12);
        if (uVar3 == 0x25) {
          if (uVar13 - (uVar12 + 1) < 2) {
LAB_0100c62c:
            return (ulonglong)uVar12;
          }
          pbVar4 = (byte *)(iVar9 + uVar12 + 1);
          iVar2 = 3;
          if (((&DAT_00378df2)[pbVar4[1]] & (&DAT_00378df2)[*pbVar4]) == 0) goto LAB_0100c62c;
        }
        else {
          if (puVar8[uVar3] != '\x01') break;
          iVar2 = 1;
          if (uVar3 == 0x3a) {
            iVar10 = iVar10 + 1;
            uVar6 = uVar12;
          }
        }
        uVar12 = uVar12 + iVar2;
      } while (uVar12 < uVar13);
    }
  }
LAB_0100c768:
  *(uint *)(param_1 + 0x24) = uVar12;
  if ((uVar12 < uVar13) && (*(char *)(*piVar1 + uVar12) == '@')) {
    uVar11 = uVar12 + 1;
    *(uint *)(param_1 + 0x24) = uVar11;
    FUN_0100cd18(&local_30,piVar1);
    uVar6 = local_2c & 0xff;
    if (uVar6 != 3) {
LAB_0100c90c:
      return CONCAT44(uVar6,local_30);
    }
    bVar7 = (byte)local_30;
    if ((byte)local_30 == 4) {
      puVar8 = &UNK_00378ae9;
      if (*(char *)(param_1 + 0x28) == '\0') {
        puVar8 = &DAT_003789e6;
      }
      uVar13 = FUN_0100bd54(piVar1);
      FUN_0100c21c(&local_30,piVar1,puVar8);
      uVar6 = local_2c & 0xff;
      if (uVar6 != 3) goto LAB_0100c90c;
      bVar7 = (byte)local_30 & 1;
      if ((local_30 & 1) != 0) {
        bVar7 = 3;
      }
      if ((uVar13 & 1) == 0) {
        bVar7 = 3;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x20);
    uVar12 = *(uint *)(param_1 + 0x24);
    if (uVar6 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar12,uVar6,uVar6,&DAT_01882234);
    }
    if (uVar6 == uVar12) goto LAB_0100c9dc;
    if (*(char *)(*piVar1 + uVar12) != ':') goto LAB_0100c9dc;
    uVar13 = uVar12 + 1;
    if (uVar13 < uVar6) {
      do {
        if (9 < *(byte *)(*piVar1 + uVar13) - 0x30) goto LAB_0100c980;
        uVar13 = uVar13 + 1;
      } while (uVar6 != uVar13);
      uVar13 = uVar6;
    }
  }
  else {
    if (uVar12 != uVar11) {
      if (iVar10 != 0) {
        if (iVar10 != 1) {
          return CONCAT44(1,uVar6);
        }
        uVar3 = uVar6;
        while (uVar5 = uVar3 + 1, uVar5 < uVar12) {
          if (uVar13 <= uVar5) {
            uVar11 = uVar6 + 1;
            if (uVar6 + 1 < uVar13) {
              uVar11 = uVar13;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar11,uVar13,&DAT_01882214);
          }
          pbVar4 = (byte *)(*piVar1 + 1 + uVar3);
          uVar3 = uVar5;
          if (9 < *pbVar4 - 0x30) {
            return CONCAT44(1,uVar5);
          }
        }
        uVar12 = uVar6;
      }
      if ((uVar12 < uVar11) || (uVar13 < uVar12)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar11,uVar12,uVar13,&DAT_01882204);
      }
      bVar7 = 0;
      local_2c = uVar12 - uVar11;
      local_28 = 0;
      local_30 = *piVar1 + uVar11;
      uVar6 = FUN_0100bd54(&local_30);
      if (local_28 < local_2c) {
        bVar7 = 3;
      }
      if ((uVar6 & 1) == 0) {
        bVar7 = 3;
      }
      goto LAB_0100c9dc;
    }
    FUN_0100cd18(&local_30,piVar1);
    uVar6 = local_2c & 0xff;
    if (uVar6 != 3) goto LAB_0100c90c;
    uVar12 = *(uint *)(param_1 + 0x24);
    if ((byte)local_30 == 4) {
      uVar11 = uVar12;
      bVar7 = 3;
      goto LAB_0100c9dc;
    }
    uVar6 = *(uint *)(param_1 + 0x20);
    if (uVar6 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar12,uVar6,uVar6,&DAT_01882234);
    }
    bVar7 = (byte)local_30;
    if ((uVar6 == uVar12) || (*(char *)(*piVar1 + uVar12) != ':')) goto LAB_0100c9dc;
    uVar13 = uVar12 + 1;
    if (uVar13 < uVar6) {
      do {
        if (9 < *(byte *)(*piVar1 + uVar13) - 0x30) goto LAB_0100c980;
        uVar13 = uVar13 + 1;
      } while (uVar6 != uVar13);
      uVar13 = uVar6;
    }
  }
LAB_0100c980:
  *(uint *)(param_1 + 0x24) = uVar13;
LAB_0100c9dc:
  *(uint *)(param_1 + 0x10) = uVar11;
  *(byte *)(param_1 + 0x18) = bVar7;
  *(uint *)(param_1 + 0x14) = uVar12;
  uVar16 = FUN_0100ca84(param_1,1);
  return uVar16;
}

