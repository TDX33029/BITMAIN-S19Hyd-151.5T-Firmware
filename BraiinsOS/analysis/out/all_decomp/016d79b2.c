// FUN_016d79b2 @ 016d79b2 size=478 calls_out=3 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

uint FUN_016d79b2(int param_1,byte *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined2 auStack_30 [10];
  
  if (param_1 == 2) {
    puVar11 = (undefined1 *)(param_3 + -1);
    iVar2 = 0;
    do {
      iVar8 = 0;
      pbVar9 = param_2 + -1;
      iVar7 = 0;
      do {
        pbVar9 = pbVar9 + 1;
        if (9 < *pbVar9 - 0x30) {
          if (iVar7 == 0) {
            return 0;
          }
          if (iVar7 == 1) goto LAB_016d7a1c;
          iVar7 = 2;
          break;
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 * 10 + (uint)*pbVar9 + -0x30;
      } while (iVar7 != 3);
      if (*param_2 == 0x30) {
        return 0;
      }
LAB_016d7a1c:
      if (0xff < iVar8) {
        return 0;
      }
      puVar11 = puVar11 + 1;
      *puVar11 = (char)iVar8;
      if (param_2[iVar7] == 0) {
        return (uint)(iVar2 == 3);
      }
      if (param_2[iVar7] != 0x2e) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + iVar7 + 1;
    } while (iVar2 != 4);
  }
  else {
    if (param_1 != 10) {
      puVar3 = (undefined4 *)FUN_016d2bc8();
      *puVar3 = 0x61;
      return 0xffffffff;
    }
    uVar4 = (uint)*param_2;
    if (uVar4 == 0x3a) {
      if (param_2[1] != 0x3a) {
        return 0;
      }
      param_2 = param_2 + 1;
      uVar4 = 0x3a;
    }
    uVar10 = 0;
    uVar12 = 0xffffffff;
    while (uVar12 == 0xffffffff && uVar4 == 0x3a) {
      uVar4 = (uint)param_2[1];
      param_2 = param_2 + 1;
      auStack_30[uVar10 & 7] = 0;
      uVar12 = uVar10;
      if (uVar4 == 0) {
        bVar1 = false;
        goto LAB_016d7b56;
      }
      if (uVar10 == 7) {
        return 0;
      }
LAB_016d7ab4:
      uVar10 = uVar10 + 1;
    }
    iVar7 = 0;
    iVar2 = iVar7;
    pbVar9 = param_2;
    while( true ) {
      uVar6 = (undefined2)iVar7;
      uVar13 = uVar4 - 0x30;
      if ((9 < uVar13) && (uVar13 = (uVar4 | 0x20) - 0x57, 5 < (uVar4 | 0x20) - 0x61)) {
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_016d7a82;
      }
      iVar2 = iVar2 + 1;
      iVar7 = uVar13 + iVar7 * 0x10;
      uVar6 = (undefined2)iVar7;
      if (iVar2 == 4) break;
      pbVar9 = pbVar9 + 1;
      uVar4 = (uint)*pbVar9;
    }
    uVar4 = (uint)param_2[4];
LAB_016d7a82:
    auStack_30[uVar10 & 7] = uVar6;
    if (uVar4 == 0) {
      uVar4 = uVar10 - 7;
      if (uVar10 != 7) {
        uVar4 = uVar12;
      }
      if ((int)uVar4 < 0 == (uVar10 == 7 && SBORROW4(uVar10,7))) {
        bVar1 = false;
LAB_016d7b16:
        if (uVar12 != 0xffffffff) {
LAB_016d7b56:
          FUN_016dd52c(auStack_30 + ((uVar12 + 7) - uVar10),auStack_30 + uVar12,
                       ((uVar10 + 1) - uVar12) * 2);
          puVar5 = auStack_30 + uVar12;
          for (iVar2 = 0; iVar2 < (int)(7 - uVar10); iVar2 = iVar2 + 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
        }
        iVar2 = param_3 + 2;
        puVar5 = auStack_30;
        do {
          uVar6 = *puVar5;
          iVar7 = iVar2 + 2;
          *(char *)(iVar2 + -1) = (char)uVar6;
          *(char *)(iVar2 + -2) = (char)((ushort)uVar6 >> 8);
          iVar2 = iVar7;
          puVar5 = puVar5 + 1;
        } while (param_3 + 0x12 != iVar7);
        if (!bVar1) {
          return 1;
        }
        iVar2 = FUN_016d79b2(2,param_2,param_3 + 0xc);
        return (uint)(0 < iVar2);
      }
    }
    else if (uVar10 != 7) {
      if (uVar4 == 0x3a) {
        param_2 = param_2 + iVar2 + 1;
        uVar4 = (uint)*param_2;
        goto LAB_016d7ab4;
      }
      if (uVar4 == 0x2e) {
        uVar4 = uVar12 >> 0x1f;
        if (5 < (int)uVar10) {
          uVar4 = 0;
        }
        if (uVar4 == 0) {
          uVar10 = uVar10 + 1;
          bVar1 = true;
          auStack_30[uVar10 & 7] = 0;
          goto LAB_016d7b16;
        }
      }
    }
  }
  return 0;
}

