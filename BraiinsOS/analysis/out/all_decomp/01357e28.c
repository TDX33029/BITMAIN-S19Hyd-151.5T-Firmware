// FUN_01357e28 @ 01357e28 size=904 calls_out=1 calls_in=3
// strings: 

void FUN_01357e28(byte *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *local_2c;
  undefined4 local_28;
  
  if (param_2 == 0) {
    return;
  }
  pbVar15 = param_1 + param_2;
  do {
    while( true ) {
      uVar10 = (uint)*param_1;
      local_2c = param_1 + 1;
      if ((uint)(int)(char)*param_1 < 0x80000000) break;
      if (uVar10 < 0xe0) {
        uVar10 = param_1[1] & 0x3f | (uVar10 & 0x1f) << 6;
        local_2c = param_1 + 2;
      }
      else {
        uVar8 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
        if (uVar10 < 0xf0) {
          uVar10 = uVar8 | (uVar10 & 0x1f) << 0xc;
          local_2c = param_1 + 3;
        }
        else {
          local_2c = param_1 + 4;
          uVar10 = param_1[3] & 0x3f | uVar8 << 6 | (uVar10 & 7) << 0x12;
        }
      }
      if (uVar10 < 0x80) break;
      uVar3 = (undefined1)uVar10;
      uVar1 = (undefined1)(uVar10 >> 6);
      if (uVar10 < 0x800) {
        local_28 = (CONCAT11(uVar3,uVar1) & 0x3fff | 0x8000) | 0xc0;
        pbVar14 = (byte *)((uint)&local_28 | 2);
      }
      else {
        uVar2 = (undefined1)(uVar10 >> 0xc);
        if (uVar10 >> 0x10 == 0) {
          local_28 = (CONCAT21(CONCAT11(uVar3,uVar1),uVar2) & 0xff3fff | 0x8000) & 0x3fffff |
                     0x8000e0;
          pbVar14 = (byte *)((uint)&local_28 | 3);
        }
        else {
          local_28 = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar1),uVar2),(char)(uVar10 >> 0x12)) &
                     0x3f3f3fff | 0x808080f0;
          pbVar14 = (byte *)((int)register0x00000054 + -0x24);
        }
      }
LAB_01357f8c:
      iVar5 = param_3[2];
      pbVar7 = (byte *)&local_28;
      do {
        iVar6 = *param_3;
        pbVar13 = pbVar7 + 1;
        bVar11 = *pbVar7;
        iVar9 = iVar5;
        if (iVar6 == iVar5) {
          FUN_01150aa8(param_3,iVar5,1);
          iVar6 = *param_3;
          iVar9 = param_3[2];
        }
        iVar4 = param_3[1];
        iVar5 = iVar5 + 1;
        param_3[2] = iVar5;
        *(undefined1 *)(iVar4 + iVar9) = 0x25;
        uVar10 = 2;
        bVar12 = (&DAT_003c4f9d)[(uint)bVar11 * 2];
        if ((uint)(int)(char)bVar12 < 0x80000000) {
          uVar10 = 1;
        }
        if ((uint)(iVar6 - iVar5) < uVar10) {
          FUN_01150aa8(param_3,iVar5,uVar10);
          iVar4 = param_3[1];
          pbVar7 = (byte *)(iVar4 + param_3[2]);
        }
        else {
          pbVar7 = (byte *)(iVar4 + iVar5);
        }
        if (0x7fffffff < (uint)(int)(char)bVar12) {
          pbVar7[1] = bVar12 & 0xbf;
          bVar12 = bVar12 >> 6 | 0xc0;
        }
        bVar11 = (&DAT_003c4f9e)[(uint)bVar11 * 2];
        iVar5 = uVar10 + iVar5;
        iVar9 = *param_3;
        uVar10 = 2;
        *pbVar7 = bVar12;
        if ((uint)(int)(char)bVar11 < 0x80000000) {
          uVar10 = 1;
        }
        param_3[2] = iVar5;
        if ((uint)(iVar9 - iVar5) < uVar10) {
          FUN_01150aa8(param_3,iVar5,uVar10);
          pbVar7 = (byte *)(param_3[1] + param_3[2]);
        }
        else {
          pbVar7 = (byte *)(iVar4 + iVar5);
        }
        if (0x7fffffff < (uint)(int)(char)bVar11) {
          pbVar7[1] = bVar11 & 0xbf;
          bVar11 = bVar11 >> 6 | 0xc0;
        }
        iVar5 = uVar10 + iVar5;
        *pbVar7 = bVar11;
        param_3[2] = iVar5;
        pbVar7 = pbVar13;
      } while (pbVar13 != pbVar14);
      param_1 = local_2c;
      if (local_2c == pbVar15) {
        return;
      }
    }
    param_1 = local_2c;
    if (""[uVar10] == '\0') {
      local_28 = uVar10 & 0xff;
      pbVar14 = (byte *)((uint)&local_28 | 1);
      local_2c = param_1;
      goto LAB_01357f8c;
    }
    iVar9 = param_3[2];
    iVar5 = iVar9;
    if (*param_3 == iVar9) {
      FUN_01150aa8(param_3,iVar9,1);
      iVar5 = param_3[2];
    }
    *(char *)(param_3[1] + iVar5) = (char)uVar10;
    param_3[2] = iVar9 + 1;
    if (param_1 == pbVar15) {
      return;
    }
  } while( true );
}

