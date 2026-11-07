// FUN_00e5eb3c @ 00e5eb3c size=1148 calls_out=3 calls_in=0
// strings: -gzip

undefined8 FUN_00e5eb3c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_24;
  
  local_24 = 2;
  local_28 = 1;
  local_34 = 1;
  local_38 = 0x3b;
  uStack_4c = 0x3b;
  uStack_40 = 0;
  local_30 = 0;
  uStack_48 = param_2;
  uStack_44 = param_3;
  local_3c = param_3;
  local_2c = param_3;
  iVar1 = FUN_01aa510c(&uStack_4c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c16a44);
  }
  uVar14 = FUN_013245a0();
  iVar5 = (int)((ulonglong)uVar14 >> 0x20);
  iVar1 = (int)uVar14;
  if (iVar5 == 4) {
    iVar2 = 0;
    do {
      if (iVar2 == 4) goto LAB_00e5ec28;
      uVar9 = (uint)*(byte *)(iVar1 + iVar2);
      uVar8 = (uint)(byte)(&DAT_0056c9b0)[iVar2];
      iVar2 = iVar2 + 1;
      if (uVar9 - 0x41 < 0x1a) {
        uVar9 = uVar9 | 0x20;
      }
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 | 0x20;
      }
    } while (uVar9 == uVar8);
  }
  if (iVar5 == 6) {
    iVar2 = 0;
    do {
      if (iVar2 == 6) goto LAB_00e5ec28;
      uVar9 = (uint)*(byte *)(iVar1 + iVar2);
      uVar8 = (uint)(byte)"x"[iVar2];
      iVar2 = iVar2 + 1;
      if (uVar9 - 0x41 < 0x1a) {
        uVar9 = uVar9 | 0x20;
      }
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 | 0x20;
      }
    } while (uVar9 == uVar8);
  }
LAB_00e5ecb8:
  uVar8 = 0;
  uVar3 = 5;
  if (iVar5 == 8) {
    uVar12 = 0;
    iVar5 = 0;
    do {
      if (iVar5 == 8) goto LAB_00e5ec34;
      uVar9 = (uint)*(byte *)(iVar1 + iVar5);
      uVar8 = (uint)(byte)(&DAT_00570440)[iVar5];
      iVar5 = iVar5 + 1;
      if (uVar9 - 0x41 < 0x1a) {
        uVar9 = uVar9 | 0x20;
      }
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 | 0x20;
      }
    } while (uVar9 == uVar8);
    uVar8 = 0;
  }
LAB_00e5efa4:
  return CONCAT44(uVar8,uVar3);
LAB_00e5ec28:
  uVar12 = 2;
  if ((param_1 & 1) != 0) {
LAB_00e5ec34:
    iVar1 = FUN_01aa510c(&uStack_4c);
    if (iVar1 == 0) {
      uVar8 = 1000;
    }
    else {
      uVar14 = FUN_013245a0();
      iVar1 = (int)((ulonglong)uVar14 >> 0x20);
      pbVar13 = (byte *)uVar14;
      uVar3 = 5;
      uVar8 = 0;
      if (iVar1 == 0) goto LAB_00e5efa4;
      pbVar4 = pbVar13 + 1;
      uVar9 = (uint)*pbVar13;
      if (0x7fffffff < (uint)(int)(char)*pbVar13) {
        if (uVar9 < 0xe0) {
          uVar9 = pbVar13[1] & 0x3f | (uVar9 & 0x1f) << 6;
          pbVar4 = pbVar13 + 2;
        }
        else {
          uVar7 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
          if (uVar9 < 0xf0) {
            uVar9 = uVar7 | (uVar9 & 0x1f) << 0xc;
            pbVar4 = pbVar13 + 3;
          }
          else {
            uVar9 = pbVar13[3] & 0x3f | uVar7 << 6 | (uVar9 & 7) << 0x12;
            pbVar4 = pbVar13 + 4;
          }
        }
      }
      if (((uVar9 | 0x20) != 0x71) || (pbVar13 = pbVar13 + iVar1, pbVar4 == pbVar13))
      goto LAB_00e5efa4;
      pbVar6 = pbVar4 + 1;
      uVar9 = (uint)*pbVar4;
      if (0x7fffffff < (uint)(int)(char)*pbVar4) {
        if (uVar9 < 0xe0) {
          uVar9 = pbVar4[1] & 0x3f | (uVar9 & 0x1f) << 6;
          pbVar6 = pbVar4 + 2;
        }
        else {
          uVar7 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
          if (uVar9 < 0xf0) {
            uVar9 = uVar7 | (uVar9 & 0x1f) << 0xc;
            pbVar6 = pbVar4 + 3;
          }
          else {
            uVar9 = pbVar4[3] & 0x3f | uVar7 << 6 | (uVar9 & 7) << 0x12;
            pbVar6 = pbVar4 + 4;
          }
        }
      }
      if ((uVar9 != 0x3d) || (pbVar6 == pbVar13)) goto LAB_00e5efa4;
      pbVar4 = pbVar6 + 1;
      uVar9 = (uint)*pbVar6;
      if (0x7fffffff < (uint)(int)(char)*pbVar6) {
        if (uVar9 < 0xe0) {
          uVar9 = pbVar6[1] & 0x3f | (uVar9 & 0x1f) << 6;
          pbVar4 = pbVar6 + 2;
        }
        else {
          uVar8 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (uVar9 < 0xf0) {
            uVar9 = uVar8 | (uVar9 & 0x1f) << 0xc;
            pbVar4 = pbVar6 + 3;
          }
          else {
            uVar9 = pbVar6[3] & 0x3f | uVar8 << 6 | (uVar9 & 7) << 0x12;
            pbVar4 = pbVar6 + 4;
          }
        }
      }
      uVar8 = 0;
      uVar7 = 0;
      if (uVar9 != 0x30) {
        if (uVar9 != 0x31) goto LAB_00e5efa4;
        uVar7 = 1000;
      }
      if (pbVar4 != pbVar13) {
        pbVar6 = pbVar4 + 1;
        puVar10 = (undefined1 *)(uint)*pbVar4;
        if (0x7fffffff < (uint)(int)(char)*pbVar4) {
          if (puVar10 < (undefined1 *)0xe0) {
            puVar10 = (undefined1 *)(pbVar4[1] & 0x3f | ((uint)puVar10 & 0x1f) << 6);
            pbVar6 = pbVar4 + 2;
          }
          else {
            uVar9 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
            if (puVar10 < (undefined1 *)0xf0) {
              puVar10 = (undefined1 *)(uVar9 | ((uint)puVar10 & 0x1f) << 0xc);
              pbVar6 = pbVar4 + 3;
            }
            else {
              pbVar6 = pbVar4 + 4;
              puVar10 = (undefined1 *)(pbVar4[3] & 0x3f | uVar9 << 6 | ((uint)puVar10 & 7) << 0x12);
            }
          }
        }
        if (puVar10 != &DAT_00110000) {
          if (puVar10 != (undefined1 *)0x2e) goto LAB_00e5efa4;
          if (pbVar6 != pbVar13) {
            uVar9 = 100;
            do {
              pbVar4 = pbVar6 + 1;
              puVar10 = (undefined1 *)(uint)*pbVar6;
              if (0x7fffffff < (uint)(int)(char)*pbVar6) {
                if (puVar10 < (undefined1 *)0xe0) {
                  puVar10 = (undefined1 *)(pbVar6[1] & 0x3f | ((uint)puVar10 & 0x1f) << 6);
                  pbVar4 = pbVar6 + 2;
                }
                else {
                  uVar11 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
                  if (puVar10 < (undefined1 *)0xf0) {
                    puVar10 = (undefined1 *)(uVar11 | ((uint)puVar10 & 0x1f) << 0xc);
                    pbVar4 = pbVar6 + 3;
                  }
                  else {
                    puVar10 = (undefined1 *)
                              (pbVar6[3] & 0x3f | uVar11 << 6 | ((uint)puVar10 & 7) << 0x12);
                    if (puVar10 == &DAT_00110000) break;
                    pbVar4 = pbVar6 + 4;
                  }
                }
              }
              if ((puVar10 + -0x3a < (undefined1 *)0xfffffff6) || (uVar9 == 0)) goto LAB_00e5efa4;
              uVar7 = (int)(puVar10 + -0x30) * uVar9 + uVar7;
              uVar9 = uVar9 / 10;
              pbVar6 = pbVar4;
            } while (pbVar4 != pbVar13);
            if (1000 < (uVar7 & 0xffff)) goto LAB_00e5efa4;
          }
        }
      }
      uVar8 = uVar7;
    }
    uVar3 = uVar12;
    goto LAB_00e5efa4;
  }
  goto LAB_00e5ecb8;
}

