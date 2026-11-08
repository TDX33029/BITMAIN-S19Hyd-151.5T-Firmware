// FUN_016792f0 @ 016792f0 size=1492 calls_out=6 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016792f0(uint *param_1,byte *param_2,uint param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  uint local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar8 = 0;
  do {
    uVar5 = param_3 - uVar8;
    if (uVar5 < 8) {
      uVar3 = 0;
      if (uVar5 == 0) {
        uVar16 = 0;
      }
      else {
        do {
          if ((param_2 + uVar8)[uVar3] == 0x7e) {
            uVar16 = CONCAT44(uVar3,1);
            goto LAB_01679364;
          }
          uVar3 = uVar3 + 1;
        } while (uVar5 != uVar3);
        uVar16 = (ulonglong)uVar5 << 0x20;
      }
    }
    else {
      uVar16 = FUN_01307168(0x7e,param_2 + uVar8);
    }
LAB_01679364:
    if ((uVar16 & 1) == 0) break;
    uVar8 = (int)(uVar16 >> 0x20) + uVar8;
    if ((uVar8 < param_3) && (param_2[uVar8] == 0x7e)) {
      uVar9 = 0;
      if ((int)param_3 < 0) {
LAB_016793b0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,param_3);
      }
      uVar9 = 1;
      local_38 = FUN_01298504(param_3,1);
      if (local_38 == 0) goto LAB_016793b0;
      uVar5 = 0;
      local_28 = 0;
      local_30 = param_3;
      local_2c = local_38;
LAB_016793f4:
      if (param_3 < uVar8) {
        uVar3 = 0;
        puVar1 = &DAT_01d2e668;
        goto LAB_01679874;
      }
      if (local_30 - uVar5 < uVar8) {
        FUN_016092cc(&local_30,uVar5,uVar8,1,1);
        local_38 = local_2c;
        uVar5 = local_28;
      }
      uVar14 = param_3 - uVar8;
      pbVar15 = param_2 + uVar8;
      FUN_01bed4e2(local_38 + uVar5,param_2,uVar8);
      uVar5 = uVar5 + uVar8;
      local_28 = uVar5;
      if (uVar14 < 2) {
        if (uVar14 != 1) {
          uVar3 = 1;
          param_3 = 0;
          uVar8 = 0;
          puVar1 = &DAT_01d07404;
          param_2 = pbVar15;
          goto LAB_01679874;
        }
      }
      else if ((char)pbVar15[1] < -0x40) {
        uVar3 = 1;
        puVar1 = &DAT_01d07404;
        param_3 = uVar14;
        param_2 = pbVar15;
        uVar8 = uVar14;
        goto LAB_01679874;
      }
      pbVar13 = pbVar15 + 1;
      if (pbVar13 == param_2 + param_3) {
LAB_016797ec:
        if (local_30 == uVar5) {
          FUN_016092cc(&local_30,uVar5,1,1,1);
        }
        *(undefined1 *)(local_2c + local_28) = 0x7e;
        uVar5 = uVar5 + 1;
LAB_016797d8:
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = uVar5;
        return;
      }
      puVar12 = (undefined1 *)(uint)*pbVar13;
      if (0x7fffffff < (uint)(int)(char)*pbVar13) {
        if (puVar12 < (undefined1 *)0xe0) {
          puVar12 = (undefined1 *)(pbVar15[2] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
        }
        else {
          uVar8 = pbVar15[3] & 0x3f | (pbVar15[2] & 0x3f) << 6;
          if (puVar12 < (undefined1 *)0xf0) {
            puVar12 = (undefined1 *)(uVar8 | ((uint)puVar12 & 0x1f) << 0xc);
          }
          else {
            puVar12 = (undefined1 *)(pbVar15[4] & 0x3f | uVar8 << 6 | ((uint)puVar12 & 7) << 0x12);
          }
        }
      }
      if (puVar12 == (undefined1 *)0x30) {
        if (local_30 == uVar5) {
          FUN_016092cc(&local_30,uVar5,1,1,1);
          local_38 = local_2c;
        }
        uVar2 = 0x7e;
LAB_0167957c:
        uVar5 = uVar5 + 1;
        *(undefined1 *)(local_38 + local_28) = uVar2;
        uVar3 = 1;
      }
      else {
        if (puVar12 == (undefined1 *)0x31) {
          if (local_30 == uVar5) {
            FUN_016092cc(&local_30,uVar5,1,1,1);
          }
          uVar2 = 0x2f;
          local_38 = local_2c;
          goto LAB_0167957c;
        }
        if (puVar12 == &DAT_00110000) goto LAB_016797ec;
        if (local_30 == uVar5) {
          FUN_016092cc(&local_30,uVar5,1,1,1);
        }
        iVar10 = uVar5 + 1;
        uVar8 = 1;
        *(undefined1 *)(local_2c + local_28) = 0x7e;
        if ((undefined1 *)0x7f < puVar12) {
          uVar8 = 2;
        }
        if (((undefined1 *)0x7ff < puVar12) && (uVar8 = 4, puVar12 < (undefined1 *)0x10000)) {
          uVar8 = 3;
        }
        local_28 = iVar10;
        if (local_30 - iVar10 < uVar8) {
          FUN_016092cc(&local_30,iVar10,uVar8,1,1);
        }
        pbVar15 = (byte *)(local_2c + local_28);
        local_38 = local_2c;
        if (puVar12 < (undefined1 *)0x80) {
          *pbVar15 = (byte)puVar12;
          uVar3 = 1;
LAB_016795b8:
          uVar5 = uVar8 + iVar10;
        }
        else {
          uVar5 = uVar8 + iVar10;
          bVar4 = (byte)puVar12 & 0x3f | 0x80;
          bVar7 = (byte)((uint)puVar12 >> 6);
          if (puVar12 < (undefined1 *)0x800) {
            *pbVar15 = bVar7 | 0xc0;
            pbVar15[1] = bVar4;
            uVar3 = 2;
            goto LAB_016795b8;
          }
          bVar6 = bVar7 & 0x3f | 0x80;
          bVar7 = (byte)((uint)puVar12 >> 0xc);
          if ((uint)puVar12 >> 0x10 == 0) {
            bVar11 = bVar7 | 0xe0;
            uVar3 = 3;
            bVar7 = bVar6;
          }
          else {
            bVar11 = (byte)((uint)puVar12 >> 0x12) | 0xf0;
            bVar7 = bVar7 & 0x3f | 0x80;
            pbVar15[3] = bVar4;
            uVar3 = 4;
            bVar4 = bVar6;
          }
          pbVar15[2] = bVar4;
          pbVar15[1] = bVar7;
          *pbVar15 = bVar11;
        }
      }
      param_3 = uVar14 - 1;
      local_28 = uVar5;
      if (uVar3 < param_3) {
        if (-0x41 < (char)pbVar13[uVar3]) goto LAB_01679644;
      }
      else if (param_3 == uVar3) {
LAB_01679644:
        param_2 = pbVar13 + uVar3;
        param_3 = param_3 - uVar3;
        uVar8 = 0;
LAB_01679650:
        uVar3 = param_3 - uVar8;
        if (uVar3 < 8) {
          uVar14 = 0;
          if (uVar3 == 0) {
            uVar16 = 0;
          }
          else {
            do {
              if ((param_2 + uVar8)[uVar14] == 0x7e) {
                uVar16 = CONCAT44(uVar14,1);
                goto LAB_016796ac;
              }
              uVar14 = uVar14 + 1;
            } while (uVar3 != uVar14);
            uVar16 = (ulonglong)uVar3 << 0x20;
          }
        }
        else {
          uVar16 = FUN_01307168(0x7e,param_2 + uVar8);
        }
LAB_016796ac:
        if ((uVar16 & 1) == 0) goto LAB_016797b0;
        uVar8 = (int)(uVar16 >> 0x20) + uVar8;
        if ((param_3 <= uVar8) || (param_2[uVar8] != 0x7e)) goto LAB_016796cc;
        goto LAB_016793f4;
      }
      puVar1 = &DAT_01d07414;
      param_2 = pbVar13;
      uVar8 = param_3;
LAB_01679874:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_2,param_3,uVar3,uVar8,puVar1);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 <= param_3);
  param_1[2] = param_3;
  *param_1 = 0x80000000;
  param_1[1] = (uint)param_2;
  return;
LAB_016796cc:
  uVar8 = uVar8 + 1;
  if (param_3 < uVar8) {
LAB_016797b0:
    if (local_30 - uVar5 < param_3) {
      FUN_016092cc(&local_30,uVar5,param_3,1,1);
      uVar5 = local_28;
    }
    FUN_01bed4e2(local_2c + uVar5,param_2,param_3);
    uVar5 = uVar5 + param_3;
    goto LAB_016797d8;
  }
  goto LAB_01679650;
}

