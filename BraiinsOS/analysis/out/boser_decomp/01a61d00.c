// FUN_01a61d00 @ 01a61d00 size=2880 calls_out=9 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x01a5efbc) */
/* WARNING: Removing unreachable block (ram,0x01a5efc4) */
/* WARNING: Removing unreachable block (ram,0x01a5efe4) */
/* WARNING: Removing unreachable block (ram,0x01a5eff8) */
/* WARNING: Removing unreachable block (ram,0x01a5f044) */
/* WARNING: Removing unreachable block (ram,0x01a5f00c) */
/* WARNING: Removing unreachable block (ram,0x01a5f050) */
/* WARNING: Removing unreachable block (ram,0x01a5f020) */
/* WARNING: Removing unreachable block (ram,0x01a5f03c) */
/* WARNING: Removing unreachable block (ram,0x01a5f058) */
/* WARNING: Removing unreachable block (ram,0x01a5f098) */
/* WARNING: Removing unreachable block (ram,0x01a5f0a0) */
/* WARNING: Removing unreachable block (ram,0x01a5f0a4) */
/* WARNING: Removing unreachable block (ram,0x01a5f060) */
/* WARNING: Removing unreachable block (ram,0x01a5f0b4) */
/* WARNING: Removing unreachable block (ram,0x01a5f0bc) */
/* WARNING: Removing unreachable block (ram,0x01a5f0c0) */
/* WARNING: Removing unreachable block (ram,0x01a5f0e8) */
/* WARNING: Removing unreachable block (ram,0x01a5f0ec) */
/* WARNING: Removing unreachable block (ram,0x01a5f0f0) */
/* WARNING: Removing unreachable block (ram,0x01a5f0f4) */
/* WARNING: Removing unreachable block (ram,0x01a5f0cc) */
/* WARNING: Removing unreachable block (ram,0x01a5f0d4) */
/* WARNING: Removing unreachable block (ram,0x01a5f0dc) */
/* WARNING: Removing unreachable block (ram,0x01a5f068) */
/* WARNING: Removing unreachable block (ram,0x01a5f074) */
/* WARNING: Removing unreachable block (ram,0x01a5f078) */
/* WARNING: Removing unreachable block (ram,0x01a5f080) */
/* WARNING: Removing unreachable block (ram,0x01a5f084) */
/* WARNING: Removing unreachable block (ram,0x01a5f088) */
/* WARNING: Removing unreachable block (ram,0x01a5f08c) */
/* WARNING: Removing unreachable block (ram,0x01a5f0a8) */
/* WARNING: Removing unreachable block (ram,0x01a5f0b0) */
/* WARNING: Removing unreachable block (ram,0x01a5f15c) */
/* WARNING: Removing unreachable block (ram,0x01a5f1d4) */
/* WARNING: Removing unreachable block (ram,0x01a5f168) */
/* WARNING: Removing unreachable block (ram,0x01a5f1d8) */
/* WARNING: Removing unreachable block (ram,0x01a5f1e0) */
/* WARNING: Removing unreachable block (ram,0x01a5f1e8) */
/* WARNING: Removing unreachable block (ram,0x01a5f1ec) */
/* WARNING: Removing unreachable block (ram,0x01a5f1f0) */
/* WARNING: Removing unreachable block (ram,0x01a5f1f4) */
/* WARNING: Removing unreachable block (ram,0x01a5f200) */
/* WARNING: Removing unreachable block (ram,0x01a5f204) */
/* WARNING: Removing unreachable block (ram,0x01a5f178) */
/* WARNING: Removing unreachable block (ram,0x01a5f208) */
/* WARNING: Removing unreachable block (ram,0x01a5f1b8) */
/* WARNING: Removing unreachable block (ram,0x01a5f8f8) */
/* WARNING: Removing unreachable block (ram,0x01a5f448) */
/* WARNING: Removing unreachable block (ram,0x01a5f35c) */
/* WARNING: Removing unreachable block (ram,0x01a5f3fc) */
/* WARNING: Removing unreachable block (ram,0x01a5f6f0) */
/* WARNING: Removing unreachable block (ram,0x01a5f884) */
/* WARNING: Removing unreachable block (ram,0x01a5f704) */
/* WARNING: Removing unreachable block (ram,0x01a5f968) */
/* WARNING: Removing unreachable block (ram,0x01a5f91c) */

void FUN_01a61d00(uint *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar11;
  uint extraout_r1;
  uint uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  byte *pbVar15;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined1 *local_34;
  undefined1 **local_30;
  code *local_2c;
  undefined1 auStack_25 [13];
  
  uVar10 = 0;
  do {
    if (param_3 == uVar10) {
      if (param_3 != 0) {
        uVar14 = 0;
        if (-1 < (int)param_3) {
          uVar14 = 1;
          uVar10 = FUN_01298504(param_3,1);
          if (uVar10 != 0) {
            FUN_01bed4e2(uVar10,param_2,param_3);
            *param_1 = param_3;
            param_1[1] = uVar10;
            param_1[2] = param_3;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar14,param_3);
      }
      break;
    }
    uVar12 = (uint)param_2[uVar10];
    uVar10 = uVar10 + 1;
  } while ((uVar12 == 0x5f || uVar12 == 0x2d) ||
          (uVar12 - 0x30 < 10 || (uVar12 & 0xdf) - 0x41 < 0x1a));
  if (param_3 < 8) {
    bVar4 = false;
    if (param_3 == 0) {
      bVar3 = false;
    }
    else {
      pbVar8 = param_2;
      uVar10 = param_3;
      do {
        uVar10 = uVar10 - 1;
        bVar1 = *pbVar8;
        if (bVar1 == 0x22) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar10 != 0);
      bVar3 = bVar1 == 0x22;
      pbVar8 = param_2;
      uVar10 = param_3;
      do {
        if (*pbVar8 == 0x5c) goto LAB_01a5f220;
        uVar10 = uVar10 - 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar10 != 0);
    }
  }
  else {
    iVar9 = FUN_01307168(0x22,param_2,param_3);
    bVar3 = iVar9 == 1;
    iVar9 = FUN_01307168(0x5c,param_2,param_3);
    bVar4 = iVar9 == 1;
  }
  if (bVar3 || bVar4) {
LAB_01a5f220:
    bVar3 = true;
    pbVar8 = param_2;
    do {
      if (pbVar8 == param_2 + param_3) goto LAB_01a5f2f8;
      puVar13 = (undefined1 *)(uint)*pbVar8;
      pbVar15 = pbVar8 + 1;
      if (0x7fffffff < (uint)(int)(char)*pbVar8) {
        if (puVar13 < (undefined1 *)0xe0) {
          puVar13 = (undefined1 *)(pbVar8[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
          pbVar15 = pbVar8 + 2;
        }
        else {
          uVar10 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
          if (puVar13 < (undefined1 *)0xf0) {
            puVar13 = (undefined1 *)(uVar10 | ((uint)puVar13 & 0x1f) << 0xc);
            pbVar15 = pbVar8 + 3;
          }
          else {
            puVar13 = (undefined1 *)(pbVar8[3] & 0x3f | uVar10 << 6 | ((uint)puVar13 & 7) << 0x12);
            if (puVar13 == &DAT_00110000) goto LAB_01a5f2f8;
            pbVar15 = pbVar8 + 4;
          }
        }
      }
      pbVar8 = pbVar15;
    } while ((((((uint)puVar13 & 0xffffff80) == 0x80) || (puVar13 == (undefined1 *)0x9)) ||
             ((undefined1 *)0xfffffff7 < puVar13 + -0x27 && puVar13 != (undefined1 *)0x1f)) ||
            ((undefined1 *)0xffffffa7 < puVar13 + -0x7f && puVar13 != (undefined1 *)0x27));
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_01a5f2f8:
  uVar10 = param_3 * 2;
  uVar14 = 0;
  if ((int)uVar10 < 0) {
LAB_01a5f308:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar14,uVar10);
  }
  if (uVar10 == 0) {
    local_3c = 1;
    local_40 = 0;
    if (bVar3) {
LAB_01a5f390:
      local_38 = 0;
      if (local_40 == 0) {
        FUN_006520b4(&local_40,0,1,1,1);
      }
      uVar6 = local_38;
      uVar12 = local_3c;
      uVar10 = local_40;
      FUN_01bed4e2(local_3c + local_38,&DAT_0052d60c,1);
      local_38 = uVar6 + 1;
      if (uVar10 - local_38 < param_3) {
        FUN_006520b4(&local_40,local_38,param_3,1,1);
        uVar10 = local_40;
        uVar12 = local_3c;
      }
      uVar6 = local_38;
      FUN_01bed4e2(uVar12 + local_38,param_2,param_3);
      local_38 = uVar6 + param_3;
      if (uVar10 == local_38) {
        FUN_006520b4(&local_40,local_38,1,1,1);
        uVar12 = local_3c;
      }
      uVar10 = local_38;
      FUN_01bed4e2(uVar12 + local_38,&DAT_0052d60c,1);
      goto LAB_01a5f938;
    }
LAB_01a5f454:
    local_38 = 0;
    FUN_006520b4(&local_40,0,1,1,1);
  }
  else {
    uVar14 = 1;
    local_3c = FUN_01298504(uVar10,1);
    if (local_3c == 0) goto LAB_01a5f308;
    local_38 = 0;
    local_40 = uVar10;
    if (bVar3) goto LAB_01a5f390;
    if (uVar10 == 0) goto LAB_01a5f454;
  }
  uVar10 = local_38;
  FUN_01bed4e2(local_3c + local_38,"\"",1);
  local_38 = uVar10 + 1;
  if (param_3 != 0) {
    pbVar8 = param_2;
    do {
      uVar10 = local_38;
      pbVar15 = pbVar8 + 1;
      puVar13 = (undefined1 *)(uint)*pbVar8;
      if (0x7fffffff < (uint)(int)(char)*pbVar8) {
        if (puVar13 < (undefined1 *)0xe0) {
          puVar13 = (undefined1 *)(pbVar8[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
          pbVar15 = pbVar8 + 2;
        }
        else {
          uVar12 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
          if (puVar13 < (undefined1 *)0xf0) {
            puVar13 = (undefined1 *)(uVar12 | ((uint)puVar13 & 0x1f) << 0xc);
            pbVar15 = pbVar8 + 3;
          }
          else {
            pbVar15 = pbVar8 + 4;
            puVar13 = (undefined1 *)(pbVar8[3] & 0x3f | uVar12 << 6 | ((uint)puVar13 & 7) << 0x12);
          }
        }
      }
      if (puVar13 < (undefined1 *)0x22) {
        switch(puVar13) {
        case (undefined1 *)0x8:
          if (local_40 - local_38 < 2) {
            FUN_006520b4(&local_40,local_38,2,1,1);
          }
          puVar7 = (undefined2 *)(local_3c + local_38);
          uVar11 = 0x625c;
          break;
        case (undefined1 *)0x9:
          if (local_40 - local_38 < 2) {
            FUN_006520b4(&local_40,local_38,2,1,1);
          }
          puVar7 = (undefined2 *)(local_3c + local_38);
          uVar11 = 0x745c;
          break;
        case (undefined1 *)0xa:
          if (local_40 - local_38 < 2) {
            FUN_006520b4(&local_40,local_38,2,1,1);
          }
          puVar7 = (undefined2 *)(local_3c + local_38);
          uVar11 = 0x6e5c;
          break;
        default:
switchD_01a5f544_caseD_b:
          if ((puVar13 < (undefined1 *)0x20) || (puVar13 == (undefined1 *)0x7f)) {
            local_2c = FUN_012fdbc0;
            local_30 = &local_34;
            local_34 = puVar13;
            iVar9 = FUN_012fa178(&local_40,&DAT_01d2c43c,&DAT_0052d617,&local_30);
            if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533467,0x2b,auStack_25,&DAT_01d2c5b8,&DAT_01d2c608);
            }
          }
          else {
            uVar12 = 1;
            if ((undefined1 *)0x7f < puVar13) {
              uVar12 = 2;
            }
            if (((undefined1 *)0x7ff < puVar13) && (uVar12 = 4, puVar13 < (undefined1 *)0x10000)) {
              uVar12 = 3;
            }
            if (local_40 - local_38 < uVar12) {
              FUN_006520b4(&local_40,local_38,uVar12,1,1);
            }
            pbVar8 = (byte *)(local_3c + local_38);
            if (puVar13 < (undefined1 *)0x80) {
              *pbVar8 = (byte)puVar13;
            }
            else {
              bVar1 = (byte)puVar13 & 0x3f | 0x80;
              bVar2 = (byte)((uint)puVar13 >> 6);
              if (puVar13 < (undefined1 *)0x800) {
                pbVar8[1] = bVar1;
                *pbVar8 = bVar2 | 0xc0;
              }
              else {
                bVar2 = bVar2 & 0x3f | 0x80;
                bVar5 = (byte)((uint)puVar13 >> 0xc);
                if ((uint)puVar13 >> 0x10 == 0) {
                  pbVar8[1] = bVar2;
                  pbVar8[2] = bVar1;
                  *pbVar8 = bVar5 | 0xe0;
                }
                else {
                  pbVar8[3] = bVar1;
                  pbVar8[2] = bVar2;
                  pbVar8[1] = bVar5 & 0x3f | 0x80;
                  *pbVar8 = (byte)((uint)puVar13 >> 0x12) | 0xf0;
                }
              }
            }
            local_38 = uVar12 + uVar10;
          }
          goto LAB_01a5f688;
        case (undefined1 *)0xc:
          if (local_40 - local_38 < 2) {
            FUN_006520b4(&local_40,local_38,2,1,1);
          }
          puVar7 = (undefined2 *)(local_3c + local_38);
          uVar11 = 0x665c;
          break;
        case (undefined1 *)0xd:
          if (local_40 - local_38 < 2) {
            FUN_006520b4(&local_40,local_38,2,1,1);
          }
          puVar7 = (undefined2 *)(local_3c + local_38);
          uVar11 = 0x725c;
        }
      }
      else {
        if (puVar13 != (undefined1 *)0x22) {
          if (puVar13 == (undefined1 *)0x5c) {
            if (local_40 - local_38 < 2) {
              FUN_006520b4(&local_40,local_38,2,1,1);
            }
            puVar7 = (undefined2 *)(local_3c + local_38);
            uVar11 = 0x5c5c;
            goto LAB_01a5f678;
          }
          if (puVar13 != &DAT_00110000) goto switchD_01a5f544_caseD_b;
          break;
        }
        if (local_40 - local_38 < 2) {
          FUN_006520b4(&local_40,local_38,2,1,1);
        }
        puVar7 = (undefined2 *)(local_3c + local_38);
        uVar11 = 0x225c;
      }
LAB_01a5f678:
      *puVar7 = uVar11;
      local_38 = local_38 + 2;
LAB_01a5f688:
      pbVar8 = pbVar15;
    } while (pbVar15 != param_2 + param_3);
  }
  if (local_40 == local_38) {
    FUN_006520b4(&local_40,local_38,1,1,1);
  }
  FUN_01bed4e2(local_3c + local_38,"\"",1);
  uVar10 = local_38;
  uVar12 = local_3c;
LAB_01a5f938:
  local_38 = uVar10 + 1;
  if (local_38 == 0) {
    FUN_0134bd64(local_40,uVar12);
    local_40 = 0x80000000;
    local_38 = extraout_r1;
  }
  *param_1 = local_40;
  param_1[1] = uVar12;
  param_1[2] = local_38;
  return;
}

