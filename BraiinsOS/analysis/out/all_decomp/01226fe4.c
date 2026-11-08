// FUN_01226fe4 @ 01226fe4 size=2832 calls_out=1 calls_in=2
// strings: 

uint FUN_01226fe4(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  puVar4 = &DAT_00110000;
  pbVar12 = param_1;
  if (param_2 != 0) {
    pbVar12 = param_1 + 1;
    puVar10 = (undefined1 *)(uint)*param_1;
    if (0x7fffffff < (uint)(int)(char)*param_1) {
      if (puVar10 < (undefined1 *)0xe0) {
        pbVar12 = param_1 + 2;
        puVar10 = (undefined1 *)(param_1[1] & 0x3f | ((uint)puVar10 & 0x1f) << 6);
      }
      else {
        uVar8 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
        if (puVar10 < (undefined1 *)0xf0) {
          pbVar12 = param_1 + 3;
          puVar10 = (undefined1 *)(uVar8 | ((uint)puVar10 & 0x1f) << 0xc);
        }
        else {
          pbVar12 = param_1 + 4;
          puVar10 = (undefined1 *)(param_1[3] & 0x3f | uVar8 << 6 | ((uint)puVar10 & 7) << 0x12);
          puVar4 = &DAT_00110000;
          if (puVar10 == &DAT_00110000) goto LAB_012270e4;
        }
      }
    }
    puVar4 = puVar10;
    uVar8 = (uint)*(ushort *)(&DAT_003b2ef6 + ((uint)puVar4 >> 8) * 2) + ((uint)puVar4 & 0xff);
    if (0xa2ff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar8,0xa300,&DAT_0188aad8);
    }
    if (((byte)(&DAT_003a8bf5)[uVar8] < 0x1a) &&
       ((1 << (uint)(byte)(&DAT_003a8bf5)[uVar8] & 0x2010040U) != 0)) {
      return 0;
    }
  }
LAB_012270e4:
  param_1 = param_1 + param_2;
  puVar10 = &DAT_00110000;
  uVar8 = 0;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
LAB_0122712c:
  uVar15 = uVar3;
  uVar14 = uVar2;
  uVar11 = uVar1;
  uVar9 = uVar8;
  puVar7 = puVar10;
  puVar6 = (undefined1 *)0x110001;
  uVar8 = uVar9;
  uVar1 = uVar11;
  uVar2 = uVar14;
  uVar3 = uVar15;
  if (puVar4 != (undefined1 *)0x110001) {
    puVar10 = puVar4;
    pbVar13 = pbVar12;
    if (puVar4 == &DAT_00110000) goto LAB_01227ab0;
    goto joined_r0x012272f0;
  }
  if (pbVar12 == param_1) {
LAB_01227ab0:
    return (uVar15 & (uVar14 ^ 1) | uVar9 & uVar11) ^ 1;
  }
  puVar10 = (undefined1 *)(uint)*pbVar12;
  pbVar13 = pbVar12 + 1;
  if ((char)*pbVar12 < '\0') {
    if (puVar10 < (undefined1 *)0xe0) {
      puVar10 = (undefined1 *)(pbVar12[1] & 0x3f | ((uint)puVar10 & 0x1f) << 6);
      pbVar13 = pbVar12 + 2;
      goto joined_r0x012272f0;
    }
    uVar5 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
    if ((undefined1 *)0xef < puVar10) {
      puVar10 = (undefined1 *)(pbVar12[3] & 0x3f | uVar5 << 6 | ((uint)puVar10 & 7) << 0x12);
      pbVar13 = pbVar12 + 4;
      goto joined_r0x012272f0;
    }
    puVar10 = (undefined1 *)(uVar5 | ((uint)puVar10 & 0x1f) << 0xc);
    pbVar12 = pbVar12 + 3;
    if ((undefined1 *)0x5f3 < puVar10) goto LAB_012272f4;
LAB_01227188:
    if (puVar10 == (undefined1 *)0xb7) {
      if (puVar7 != (undefined1 *)0x6c) {
        return 0;
      }
      if (pbVar12 == param_1) {
        return 0;
      }
      pbVar13 = pbVar12 + 1;
      uVar9 = (uint)*pbVar12;
      if (0x7fffffff < (uint)(int)(char)*pbVar12) {
        if (uVar9 < 0xe0) {
          uVar9 = pbVar12[1] & 0x3f | (uVar9 & 0x1f) << 6;
          pbVar13 = pbVar12 + 2;
        }
        else {
          uVar11 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
          if (uVar9 < 0xf0) {
            uVar9 = uVar11 | (uVar9 & 0x1f) << 0xc;
            pbVar13 = pbVar12 + 3;
          }
          else {
            pbVar13 = pbVar12 + 4;
            uVar9 = pbVar12[3] & 0x3f | uVar11 << 6 | (uVar9 & 7) << 0x12;
          }
        }
      }
      puVar6 = (undefined1 *)0x6c;
      bVar16 = uVar9 == 0x6c;
      pbVar12 = pbVar13;
LAB_01227a98:
      puVar4 = puVar6;
      if (!bVar16) {
        return 0;
      }
    }
    else if (puVar10 == (undefined1 *)0x375) {
      if (pbVar12 == param_1) {
        return 0;
      }
      if ((uint)(int)(char)*pbVar12 < 0x80000000) {
        return 0;
      }
      uVar9 = (uint)*pbVar12;
      if (uVar9 < 0xe0) {
        puVar4 = (undefined1 *)(pbVar12[1] & 0x3f | (uVar9 & 0x1f) << 6);
        pbVar12 = pbVar12 + 2;
      }
      else {
        uVar11 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
        if (uVar9 < 0xf0) {
          puVar4 = (undefined1 *)(uVar11 | (uVar9 & 0x1f) << 0xc);
          pbVar12 = pbVar12 + 3;
        }
        else {
          puVar4 = (undefined1 *)(pbVar12[3] & 0x3f | uVar11 << 6 | (uVar9 & 7) << 0x12);
          if (puVar4 == &DAT_00110000) {
            return 0;
          }
          pbVar12 = pbVar12 + 4;
        }
      }
      if (&DAT_0000008f < puVar4 + -0x370) {
        return 0;
      }
    }
    else {
      if (puVar10 == (undefined1 *)0x5f3) goto LAB_01227108;
LAB_01227330:
      puVar4 = puVar6;
      uVar2 = 1;
      uVar3 = uVar15;
      if ((undefined1 *)0xbf < puVar10 + -0x3040) {
        if ((undefined1 *)0x51ff < puVar10 + -0x4e00) {
          uVar8 = 1;
          uVar2 = uVar14;
          if ((undefined1 *)0x9 < puVar10 + -0x660) {
            uVar8 = uVar9;
            uVar1 = 1;
            if ((undefined1 *)0x9 < puVar10 + -0x6f0) {
              if ((puVar10 + -0x302e < (undefined1 *)0xe) &&
                 ((1 << ((uint)(puVar10 + -0x302e) & 0xff) & 0x20fbU) != 0)) {
                return 0;
              }
              if (puVar10 == (undefined1 *)0x7fa) {
                return 0;
              }
              puVar4 = (undefined1 *)0x110001;
              uVar1 = uVar11;
              if (puVar10 == (undefined1 *)0x640) {
                return 0;
              }
            }
          }
        }
      }
    }
    goto LAB_0122712c;
  }
joined_r0x012272f0:
  pbVar12 = pbVar13;
  if (puVar10 < (undefined1 *)0x5f4) goto LAB_01227188;
LAB_012272f4:
  if (puVar10 == (undefined1 *)0x5f4) {
LAB_01227108:
    puVar4 = puVar6;
    if (&DAT_00000070 <= puVar7 + -0x590) {
      return 0;
    }
    goto LAB_0122712c;
  }
  if (puVar10 != (undefined1 *)0x200d) {
    puVar4 = puVar6;
    uVar3 = 1;
    if (puVar10 != (undefined1 *)0x30fb) goto LAB_01227330;
    goto LAB_0122712c;
  }
  if (puVar7 < (undefined1 *)0xabed) {
    if (puVar7 < (undefined1 *)0x1714) {
      if (puVar7 < (undefined1 *)0xc4d) {
        if (puVar7 < (undefined1 *)0xacd) {
          puVar4 = puVar6;
          if (puVar7 == (undefined1 *)0x94d) goto LAB_0122712c;
          if (puVar7 == (undefined1 *)0x9cd) goto LAB_0122712c;
          puVar4 = (undefined1 *)0xa4d;
        }
        else {
          puVar4 = puVar6;
          if (puVar7 == (undefined1 *)0xacd) goto LAB_0122712c;
          if (puVar7 == (undefined1 *)0xb4d) goto LAB_0122712c;
          puVar4 = (undefined1 *)0xbcd;
        }
      }
      else if (puVar7 < (undefined1 *)0xdca) {
        puVar4 = puVar6;
        if (puVar7 == (undefined1 *)0xc4d) goto LAB_0122712c;
        if (puVar7 == (undefined1 *)0xccd) goto LAB_0122712c;
        puVar4 = (undefined1 *)0xd4d;
      }
      else if (puVar7 < (undefined1 *)0xf84) {
        puVar4 = puVar6;
        if (puVar7 == (undefined1 *)0xdca) goto LAB_0122712c;
        puVar4 = (undefined1 *)0xe3a;
      }
      else {
        puVar4 = puVar6;
        if (puVar7 == (undefined1 *)0xf84) goto LAB_0122712c;
        puVar4 = (undefined1 *)0x1039;
      }
    }
    else if (puVar7 < (undefined1 *)0x1bf2) {
      if (puVar7 < (undefined1 *)0x1a60) {
        puVar4 = puVar6;
        if (puVar7 == (undefined1 *)0x1714) goto LAB_0122712c;
        if (puVar7 == (undefined1 *)0x1734) goto LAB_0122712c;
        puVar4 = (undefined1 *)0x17d2;
      }
      else {
        puVar4 = puVar6;
        if (puVar7 == (undefined1 *)0x1a60) goto LAB_0122712c;
        if (puVar7 == (undefined1 *)0x1b44) goto LAB_0122712c;
        puVar4 = (undefined1 *)0x1baa;
      }
    }
    else if (puVar7 < (undefined1 *)0xa806) {
      puVar4 = puVar6;
      if (puVar7 + -0x1bf2 < (undefined1 *)0x2) goto LAB_0122712c;
      puVar4 = (undefined1 *)0x2d7f;
    }
    else {
      puVar4 = puVar6;
      if (puVar7 == (undefined1 *)0xa806) goto LAB_0122712c;
      if (puVar7 == (undefined1 *)0xa8c4) goto LAB_0122712c;
      puVar4 = (undefined1 *)0xa953;
    }
  }
  else {
    if (puVar7 < (undefined1 *)0x1163f) {
      if (puVar7 < (undefined1 *)0x111c0) {
        if (puVar7 < (undefined1 *)0x1107f) {
          puVar4 = puVar6;
          if (puVar7 == (undefined1 *)0xabed) goto LAB_0122712c;
          if (puVar7 == (undefined1 *)0x10a3f) goto LAB_0122712c;
          uVar9 = 0x1046;
        }
        else {
          puVar4 = puVar6;
          if (puVar7 == (undefined1 *)0x1107f) goto LAB_0122712c;
          if (puVar7 == (undefined1 *)0x110b9) goto LAB_0122712c;
          uVar9 = 0x1133;
        }
      }
      else if (puVar7 < (undefined1 *)0x1134d) {
        puVar4 = puVar6;
        if (puVar7 == (undefined1 *)0x111c0) goto LAB_0122712c;
        if (puVar7 == (undefined1 *)0x11235) goto LAB_0122712c;
        uVar9 = 0x12ea;
      }
      else if (puVar7 < (undefined1 *)0x114c2) {
        puVar4 = puVar6;
        if (puVar7 == (undefined1 *)0x1134d) goto LAB_0122712c;
        uVar9 = 0x1442;
      }
      else {
        puVar4 = puVar6;
        if (puVar7 == (undefined1 *)0x114c2) goto LAB_0122712c;
        uVar9 = 0x15bf;
      }
    }
    else if (puVar7 < (undefined1 *)0x11a47) {
      if (puVar7 < (undefined1 *)0x11839) {
        puVar4 = puVar6;
        if (puVar7 == (undefined1 *)0x1163f) goto LAB_0122712c;
        if (puVar7 == (undefined1 *)0x116b6) goto LAB_0122712c;
        uVar9 = 0x172b;
      }
      else {
        puVar4 = puVar6;
        if (puVar7 == (undefined1 *)0x11839) goto LAB_0122712c;
        if (puVar7 == (undefined1 *)0x119e0) goto LAB_0122712c;
        uVar9 = 0x1a34;
      }
    }
    else if (puVar7 < (undefined1 *)0x11d44) {
      puVar4 = puVar6;
      if (puVar7 == (undefined1 *)0x11a47) goto LAB_0122712c;
      if (puVar7 == (undefined1 *)0x11a99) goto LAB_0122712c;
      uVar9 = 0x1c3f;
    }
    else {
      puVar4 = puVar6;
      if (puVar7 + -0x11d44 < (undefined1 *)0x2) goto LAB_0122712c;
      uVar9 = 0x1d97;
    }
    puVar4 = (undefined1 *)(uVar9 | 0x10000);
  }
  bVar16 = puVar7 == puVar4;
  goto LAB_01227a98;
}

