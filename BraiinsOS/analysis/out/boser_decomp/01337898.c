// FUN_01337898 @ 01337898 size=600 calls_out=1 calls_in=1
// strings: 

void FUN_01337898(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 *puVar10;
  bool bVar11;
  
  if (param_3 == 0) {
    return;
  }
  pbVar5 = param_2;
  do {
    pbVar8 = pbVar5 + 1;
    puVar10 = (undefined1 *)(uint)*pbVar5;
    if (0x7fffffff < (uint)(int)(char)*pbVar5) {
      if (puVar10 < (undefined1 *)0xe0) {
        puVar10 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar10 & 0x1f) << 6);
        pbVar8 = pbVar5 + 2;
      }
      else {
        uVar7 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
        if (puVar10 < (undefined1 *)0xf0) {
          puVar10 = (undefined1 *)(uVar7 | ((uint)puVar10 & 0x1f) << 0xc);
          pbVar8 = pbVar5 + 3;
        }
        else {
          puVar10 = (undefined1 *)(pbVar5[3] & 0x3f | uVar7 << 6 | ((uint)puVar10 & 7) << 0x12);
          if (puVar10 == &DAT_00110000) {
            return;
          }
          pbVar8 = pbVar5 + 4;
        }
      }
    }
    if ((puVar10 + -0x23 < (undefined1 *)0x1d) &&
       ((1 << ((uint)(puVar10 + -0x23) & 0xff) & 0x100009e3U) != 0)) {
LAB_0133796c:
      iVar9 = param_1[2];
      iVar6 = iVar9;
      if (*param_1 == iVar9) {
        FUN_006520b4(param_1,iVar9,1,1,1);
        iVar6 = param_1[2];
      }
      bVar11 = puVar10 < (undefined1 *)0x80;
      iVar9 = iVar9 + 1;
      param_1[2] = iVar9;
      *(undefined1 *)(param_1[1] + iVar6) = 0x5c;
LAB_0133799c:
      uVar7 = 1;
    }
    else {
      puVar4 = puVar10 + -0x5b;
      bVar11 = (undefined1 *)0x3 < puVar4;
      if (bVar11) {
        puVar4 = puVar10 + -0x7b;
      }
      if (!bVar11 || puVar4 < (undefined1 *)0x3) goto LAB_0133796c;
      iVar9 = param_1[2];
      bVar11 = true;
      if (puVar10 < (undefined1 *)0x80) goto LAB_0133799c;
      uVar7 = 2;
      bVar11 = false;
      if (((undefined1 *)0x7ff < puVar10) && (uVar7 = 4, puVar10 < (undefined1 *)0x10000)) {
        uVar7 = 3;
      }
    }
    iVar6 = iVar9;
    if ((uint)(*param_1 - iVar9) < uVar7) {
      FUN_006520b4(param_1,iVar9,uVar7,1,1);
      iVar6 = param_1[2];
    }
    pbVar5 = (byte *)(param_1[1] + iVar6);
    if (bVar11) {
      *pbVar5 = (byte)puVar10;
    }
    else {
      bVar1 = (byte)puVar10 & 0x3f | 0x80;
      bVar2 = (byte)((uint)puVar10 >> 6);
      if (puVar10 < (undefined1 *)0x800) {
        pbVar5[1] = bVar1;
        *pbVar5 = bVar2 | 0xc0;
      }
      else {
        bVar2 = bVar2 & 0x3f | 0x80;
        bVar3 = (byte)((uint)puVar10 >> 0xc);
        if ((uint)puVar10 >> 0x10 == 0) {
          pbVar5[1] = bVar2;
          pbVar5[2] = bVar1;
          *pbVar5 = bVar3 | 0xe0;
        }
        else {
          pbVar5[3] = bVar1;
          pbVar5[2] = bVar2;
          pbVar5[1] = bVar3 & 0x3f | 0x80;
          *pbVar5 = (byte)((uint)puVar10 >> 0x12) | 0xf0;
        }
      }
    }
    param_1[2] = uVar7 + iVar9;
    pbVar5 = pbVar8;
    if (pbVar8 == param_2 + param_3) {
      return;
    }
  } while( true );
}

