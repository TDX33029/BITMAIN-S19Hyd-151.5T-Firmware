// FUN_007a6398 @ 007a6398 size=832 calls_out=7 calls_in=2
// strings: 

void FUN_007a6398(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  undefined1 *puVar13;
  bool bVar14;
  longlong lVar15;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar9 = 0;
  if (param_3 < 0) {
LAB_007a63b0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar9,param_3);
  }
  if (param_3 == 0) {
    iVar10 = 0;
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
  }
  else {
    uVar9 = 1;
    iVar3 = FUN_01298504(param_3,1);
    if (iVar3 == 0) goto LAB_007a63b0;
    iVar10 = 0;
    iVar12 = 0;
    local_28 = 0;
    pbVar6 = param_2;
    local_30 = param_3;
    local_2c = iVar3;
    do {
      pbVar11 = pbVar6 + 1;
      puVar13 = (undefined1 *)(uint)*pbVar6;
      if (0x7fffffff < (uint)(int)(char)*pbVar6) {
        if (puVar13 < (undefined1 *)0xe0) {
          puVar13 = (undefined1 *)(pbVar6[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
          pbVar11 = pbVar6 + 2;
        }
        else {
          uVar8 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (puVar13 < (undefined1 *)0xf0) {
            puVar13 = (undefined1 *)(uVar8 | ((uint)puVar13 & 0x1f) << 0xc);
            pbVar11 = pbVar6 + 3;
          }
          else {
            puVar13 = (undefined1 *)(pbVar6[3] & 0x3f | uVar8 << 6 | ((uint)puVar13 & 7) << 0x12);
            if (puVar13 == &DAT_00110000) break;
            pbVar11 = pbVar6 + 4;
          }
        }
      }
      puVar5 = puVar13 + -0x30;
      bVar14 = (undefined1 *)0x9 < puVar5;
      if (bVar14) {
        puVar5 = (undefined1 *)(((uint)puVar13 & 0xffffffdf) - 0x41);
      }
      if (bVar14 && (undefined1 *)0x19 < puVar5) {
        if ((iVar12 == 0) || (*(char *)(iVar3 + iVar12 + -1) != '-')) {
          if (iVar12 != 0) {
            if (local_30 == iVar10) {
              FUN_016092cc(&local_30,iVar10,1,1,1);
              iVar3 = local_2c;
              iVar10 = local_28;
            }
            *(undefined1 *)(iVar3 + iVar10) = 0x2d;
            iVar10 = iVar12 + 1;
            goto LAB_007a6590;
          }
          iVar12 = 0;
        }
      }
      else {
        uVar8 = 1;
        if (puVar13 + -0x41 < (undefined1 *)0x1a) {
          puVar13 = (undefined1 *)((uint)puVar13 | 0x20);
        }
        if ((undefined1 *)0x7f < puVar13) {
          uVar8 = 2;
        }
        if (((undefined1 *)0x7ff < puVar13) && (uVar8 = 4, puVar13 < (undefined1 *)0x10000)) {
          uVar8 = 3;
        }
        iVar3 = iVar10;
        if ((uint)(local_30 - iVar10) < uVar8) {
          FUN_016092cc(&local_30,iVar10,uVar8,1,1);
          iVar3 = local_28;
        }
        pbVar6 = (byte *)(local_2c + iVar3);
        if (puVar13 < (undefined1 *)0x80) {
          *pbVar6 = (byte)puVar13;
        }
        else {
          bVar1 = (byte)puVar13 & 0x3f | 0x80;
          bVar7 = (byte)((uint)puVar13 >> 6);
          if (puVar13 < (undefined1 *)0x800) {
            bVar7 = bVar7 | 0xc0;
            pbVar6[1] = bVar1;
          }
          else {
            bVar2 = bVar7 & 0x3f | 0x80;
            bVar7 = (byte)((uint)puVar13 >> 0xc);
            if ((uint)puVar13 >> 0x10 != 0) {
              pbVar6[3] = bVar1;
              pbVar6[2] = bVar2;
              pbVar6[1] = bVar7 & 0x3f | 0x80;
              *pbVar6 = (byte)((uint)puVar13 >> 0x12) | 0xf0;
              goto LAB_007a658c;
            }
            pbVar6[1] = bVar2;
            bVar7 = bVar7 | 0xe0;
            pbVar6[2] = bVar1;
          }
          *pbVar6 = bVar7;
        }
LAB_007a658c:
        iVar10 = uVar8 + iVar10;
        iVar3 = local_2c;
LAB_007a6590:
        iVar12 = iVar10;
        local_28 = iVar10;
      }
      pbVar6 = pbVar11;
    } while (pbVar11 != param_2 + param_3);
  }
  iVar3 = local_2c;
  lVar15 = FUN_007a8164(local_2c,iVar10);
  iVar12 = (int)((ulonglong)lVar15 >> 0x20);
  if (iVar12 == 0) {
    puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
    iVar12 = 7;
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)((int)puVar4 + 3) = 0x736e6969;
      *puVar4 = 0x69617262;
LAB_007a66ac:
      *param_1 = iVar12;
      param_1[1] = (int)puVar4;
      param_1[2] = iVar12;
      FUN_019bb7e0(local_30,iVar3);
      return;
    }
    iVar12 = 7;
    uVar9 = 1;
  }
  else if (lVar15 < 0) {
    uVar9 = 0;
    iVar12 = iVar10;
  }
  else {
    uVar9 = 1;
    puVar4 = (undefined4 *)FUN_01298504(iVar12,1);
    if (puVar4 != (undefined4 *)0x0) {
      FUN_01bed4e2(puVar4,(int)lVar15,iVar12);
      goto LAB_007a66ac;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar9,iVar12);
}

