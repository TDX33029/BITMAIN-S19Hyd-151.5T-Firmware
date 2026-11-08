// FUN_01598d24 @ 01598d24 size=2820 calls_out=1 calls_in=2
// strings: 

uint FUN_01598d24(byte *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  puVar10 = &DAT_00110000;
  pbVar5 = param_1;
  if (param_2 != 0) {
    pbVar5 = param_1 + 1;
    puVar12 = (undefined1 *)(uint)*param_1;
    if (0x7fffffff < (uint)(int)(char)*param_1) {
      if (puVar12 < (undefined1 *)0xe0) {
        pbVar5 = param_1 + 2;
        puVar12 = (undefined1 *)(param_1[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
      }
      else {
        uVar8 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
        if (puVar12 < (undefined1 *)0xf0) {
          pbVar5 = param_1 + 3;
          puVar12 = (undefined1 *)(uVar8 | ((uint)puVar12 & 0x1f) << 0xc);
        }
        else {
          puVar12 = (undefined1 *)(param_1[3] & 0x3f | uVar8 << 6 | ((uint)puVar12 & 7) << 0x12);
          pbVar5 = param_1 + 4;
          if (puVar12 == &DAT_00110000) goto LAB_01598e14;
        }
      }
    }
    puVar10 = puVar12;
    uVar8 = (uint)*(ushort *)(&DAT_004b1026 + ((uint)puVar10 >> 8) * 2) + ((uint)puVar10 & 0xff);
    if (0xa2ff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar8,0xa300,&DAT_01cfc5c0);
    }
    if (((byte)(&DAT_004a6d25)[uVar8] < 0x1a) &&
       ((1 << (uint)(byte)(&DAT_004a6d25)[uVar8] & 0x2010040U) != 0)) {
      return 0;
    }
  }
LAB_01598e14:
  puVar9 = (undefined1 *)0x110001;
  param_1 = param_1 + param_2;
  uVar8 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  puVar12 = &DAT_00110000;
LAB_01598e34:
  do {
    while( true ) {
      puVar11 = puVar12;
      uVar15 = uVar4;
      uVar14 = uVar3;
      uVar13 = uVar2;
      uVar7 = uVar8;
      if (puVar10 == (undefined1 *)0x110001) {
        if (pbVar5 == param_1) goto LAB_015997ec;
        puVar12 = (undefined1 *)(uint)*pbVar5;
        pbVar1 = pbVar5 + 1;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (puVar12 < (undefined1 *)0xe0) {
            pbVar1 = pbVar5 + 2;
            puVar12 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
          }
          else {
            uVar8 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (puVar12 < (undefined1 *)0xf0) {
              pbVar1 = pbVar5 + 3;
              puVar12 = (undefined1 *)(uVar8 | ((uint)puVar12 & 0x1f) << 0xc);
            }
            else {
              pbVar1 = pbVar5 + 4;
              puVar12 = (undefined1 *)(pbVar5[3] & 0x3f | uVar8 << 6 | ((uint)puVar12 & 7) << 0x12);
            }
          }
        }
      }
      else {
        pbVar1 = pbVar5;
        puVar12 = puVar10;
      }
      pbVar5 = pbVar1;
      puVar10 = puVar9;
      uVar8 = uVar7;
      uVar2 = uVar13;
      uVar3 = uVar14;
      uVar4 = uVar15;
      if ((undefined1 *)0x5f3 < puVar12) break;
      if (puVar12 == (undefined1 *)0xb7) {
        if (puVar11 != (undefined1 *)0x6c) {
          return 0;
        }
        if (pbVar5 == param_1) {
          return 0;
        }
        puVar11 = (undefined1 *)(uint)*pbVar5;
        pbVar1 = pbVar5 + 1;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (puVar11 < (undefined1 *)0xe0) {
            puVar11 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar11 & 0x1f) << 6);
            pbVar1 = pbVar5 + 2;
          }
          else {
            uVar7 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (puVar11 < (undefined1 *)0xf0) {
              puVar11 = (undefined1 *)(uVar7 | ((uint)puVar11 & 0x1f) << 0xc);
              pbVar1 = pbVar5 + 3;
            }
            else {
              puVar11 = (undefined1 *)(pbVar5[3] & 0x3f | uVar7 << 6 | ((uint)puVar11 & 7) << 0x12);
              if (puVar11 == &DAT_00110000) {
                return 0;
              }
              pbVar1 = pbVar5 + 4;
            }
          }
        }
        pbVar5 = pbVar1;
        puVar10 = (undefined1 *)0x6c;
        if (puVar11 != (undefined1 *)0x6c) {
          return 0;
        }
      }
      else if (puVar12 == (undefined1 *)0x375) {
        if (pbVar5 == param_1) {
          return 0;
        }
        puVar10 = (undefined1 *)(uint)*pbVar5;
        pbVar1 = pbVar5 + 1;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (puVar10 < (undefined1 *)0xe0) {
            puVar10 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar10 & 0x1f) << 6);
            pbVar1 = pbVar5 + 2;
          }
          else {
            uVar7 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (puVar10 < (undefined1 *)0xf0) {
              puVar10 = (undefined1 *)(uVar7 | ((uint)puVar10 & 0x1f) << 0xc);
              pbVar1 = pbVar5 + 3;
            }
            else {
              puVar10 = (undefined1 *)(pbVar5[3] & 0x3f | uVar7 << 6 | ((uint)puVar10 & 7) << 0x12);
              if (puVar10 == &DAT_00110000) {
                return 0;
              }
              pbVar1 = pbVar5 + 4;
            }
          }
        }
        pbVar5 = pbVar1;
        if ((undefined1 *)0x8f < puVar10 + -0x370) {
          return 0;
        }
      }
      else {
        if (puVar12 == (undefined1 *)0x5f3) goto LAB_01598f7c;
LAB_01598fd8:
        uVar3 = uVar14;
        uVar4 = 1;
        if ((undefined1 *)0xbf < puVar12 + -0x3040) {
          if ((undefined1 *)0x51ff < puVar12 + -0x4e00) {
            uVar8 = 1;
            uVar4 = uVar15;
            if ((undefined1 *)0x9 < puVar12 + -0x660) {
              uVar8 = uVar7;
              uVar2 = 1;
              if ((undefined1 *)0x9 < puVar12 + -0x6f0) {
                if ((puVar12 + -0x302e < (undefined1 *)0xe) &&
                   ((1 << ((uint)(puVar12 + -0x302e) & 0xff) & 0x20fbU) != 0)) {
                  return 0;
                }
                if (puVar12 == (undefined1 *)0x7fa) {
                  return 0;
                }
                uVar2 = uVar13;
                if (puVar12 == (undefined1 *)0x640) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    if ((undefined1 *)0x30fa < puVar12) {
      uVar3 = 1;
      if (puVar12 != (undefined1 *)0x30fb) {
        if (puVar12 == &DAT_00110000) {
LAB_015997ec:
          return (uVar14 & (uVar15 ^ 1) | uVar7 & uVar13) ^ 1;
        }
        goto LAB_01598fd8;
      }
      goto LAB_01598e34;
    }
    if (puVar12 == (undefined1 *)0x5f4) {
LAB_01598f7c:
      if ((undefined1 *)0x6f < puVar11 + -0x590) {
        return 0;
      }
      goto LAB_01598e34;
    }
    if (puVar12 != (undefined1 *)0x200d) goto LAB_01598fd8;
    if (puVar11 < (undefined1 *)0xabed) {
      if (puVar11 < (undefined1 *)0x1714) {
        if (puVar11 < (undefined1 *)0xc4d) {
          if (puVar11 < (undefined1 *)0xacd) {
            if ((puVar11 == (undefined1 *)0x94d) || (puVar11 == (undefined1 *)0x9cd))
            goto LAB_01598e34;
            puVar6 = (undefined1 *)0xa4d;
          }
          else {
            if ((puVar11 == (undefined1 *)0xacd) || (puVar11 == (undefined1 *)0xb4d))
            goto LAB_01598e34;
            puVar6 = (undefined1 *)0xbcd;
          }
        }
        else if (puVar11 < (undefined1 *)0xdca) {
          if ((puVar11 == (undefined1 *)0xc4d) || (puVar11 == (undefined1 *)0xccd))
          goto LAB_01598e34;
          puVar6 = (undefined1 *)0xd4d;
        }
        else if (puVar11 < (undefined1 *)0xf84) {
          if (puVar11 == (undefined1 *)0xdca) goto LAB_01598e34;
          puVar6 = (undefined1 *)0xe3a;
        }
        else {
          if (puVar11 == (undefined1 *)0xf84) goto LAB_01598e34;
          puVar6 = (undefined1 *)0x1039;
        }
      }
      else if (puVar11 < (undefined1 *)0x1bf2) {
        if (puVar11 < (undefined1 *)0x1a60) {
          if ((puVar11 == (undefined1 *)0x1714) || (puVar11 == (undefined1 *)0x1734))
          goto LAB_01598e34;
          puVar6 = (undefined1 *)0x17d2;
        }
        else {
          if ((puVar11 == (undefined1 *)0x1a60) || (puVar11 == (undefined1 *)0x1b44))
          goto LAB_01598e34;
          puVar6 = (undefined1 *)0x1baa;
        }
      }
      else if (puVar11 < (undefined1 *)0xa806) {
        if (puVar11 + -0x1bf2 < (undefined1 *)0x2) goto LAB_01598e34;
        puVar6 = (undefined1 *)0x2d7f;
      }
      else {
        if ((puVar11 == (undefined1 *)0xa806) || (puVar11 == (undefined1 *)0xa8c4))
        goto LAB_01598e34;
        puVar6 = (undefined1 *)0xa953;
      }
    }
    else {
      if (puVar11 < (undefined1 *)0x1163f) {
        if (puVar11 < (undefined1 *)0x111c0) {
          if (puVar11 < (undefined1 *)0x1107f) {
            if ((puVar11 == (undefined1 *)0xabed) || (puVar11 == (undefined1 *)0x10a3f))
            goto LAB_01598e34;
            uVar7 = 0x1046;
          }
          else {
            if ((puVar11 == (undefined1 *)0x1107f) || (puVar11 == (undefined1 *)0x110b9))
            goto LAB_01598e34;
            uVar7 = 0x1133;
          }
        }
        else if (puVar11 < (undefined1 *)0x1134d) {
          if ((puVar11 == (undefined1 *)0x111c0) || (puVar11 == (undefined1 *)0x11235))
          goto LAB_01598e34;
          uVar7 = 0x12ea;
        }
        else if (puVar11 < (undefined1 *)0x114c2) {
          if (puVar11 == (undefined1 *)0x1134d) goto LAB_01598e34;
          uVar7 = 0x1442;
        }
        else {
          if (puVar11 == (undefined1 *)0x114c2) goto LAB_01598e34;
          uVar7 = 0x15bf;
        }
      }
      else if (puVar11 < (undefined1 *)0x11a47) {
        if (puVar11 < (undefined1 *)0x11839) {
          if ((puVar11 == (undefined1 *)0x1163f) || (puVar11 == (undefined1 *)0x116b6))
          goto LAB_01598e34;
          uVar7 = 0x172b;
        }
        else {
          if ((puVar11 == (undefined1 *)0x11839) || (puVar11 == (undefined1 *)0x119e0))
          goto LAB_01598e34;
          uVar7 = 0x1a34;
        }
      }
      else if (puVar11 < (undefined1 *)0x11d44) {
        if ((puVar11 == (undefined1 *)0x11a47) || (puVar11 == (undefined1 *)0x11a99))
        goto LAB_01598e34;
        uVar7 = 0x1c3f;
      }
      else {
        if (puVar11 + -0x11d44 < (undefined1 *)0x2) goto LAB_01598e34;
        uVar7 = 0x1d97;
      }
      puVar6 = (undefined1 *)(uVar7 | 0x10000);
    }
    if (puVar11 != puVar6) {
      return 0;
    }
  } while( true );
}

