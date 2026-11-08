// FUN_0157cf50 @ 0157cf50 size=1572 calls_out=11 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0157cf50(undefined4 *param_1,short *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  short *psVar16;
  bool bVar17;
  undefined8 uVar18;
  char local_c1;
  uint local_c0;
  int *local_bc;
  uint local_b8;
  int local_b0;
  short *local_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  char *local_88;
  uint local_80;
  int *local_7c;
  uint local_78;
  int local_70;
  int local_6c;
  int iStack_68;
  int local_60;
  short *local_5c;
  int local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  int local_30;
  int local_2c;
  int iStack_28;
  
  if (param_3 == 5) {
    iVar3 = thunk_FUN_01bed842(param_2,&DAT_004a68c1,5);
    if (iVar3 == 0) {
      uVar8 = 3;
      goto LAB_0157d49c;
    }
    if (*param_2 == 0x285e) {
      uVar9 = 3;
      goto LAB_0157cfd0;
    }
LAB_0157cfe8:
    uVar18 = FUN_01ad01c4(param_2,param_3,0x5e);
    pbVar5 = (byte *)uVar18;
    if (pbVar5 != (byte *)0x0) {
      pbVar15 = pbVar5 + (int)((ulonglong)uVar18 >> 0x20);
      psVar16 = (short *)0x1;
      local_58 = 0;
      local_5c = (short *)0x1;
      local_60 = 0;
      while (iVar3 = local_58, pbVar5 != pbVar15) {
        pbVar13 = pbVar5 + 1;
        puVar12 = (undefined1 *)(uint)*pbVar5;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (puVar12 < (undefined1 *)0xe0) {
            puVar12 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
            pbVar13 = pbVar5 + 2;
          }
          else {
            uVar9 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (puVar12 < (undefined1 *)0xf0) {
              puVar12 = (undefined1 *)(uVar9 | ((uint)puVar12 & 0x1f) << 0xc);
              pbVar13 = pbVar5 + 3;
            }
            else {
              puVar12 = (undefined1 *)(pbVar5[3] & 0x3f | uVar9 << 6 | ((uint)puVar12 & 7) << 0x12);
              if (puVar12 == &DAT_00110000) break;
              pbVar13 = pbVar5 + 4;
            }
          }
        }
        if (puVar12 == (undefined1 *)0x5c) {
          if (pbVar13 == pbVar15) {
LAB_0157d30c:
            *param_1 = 4;
            FUN_019bb7e0(local_60,local_5c);
            return;
          }
          pbVar5 = pbVar13 + 1;
          uVar9 = (uint)*pbVar13;
          if (0x7fffffff < (uint)(int)(char)*pbVar13) {
            if (uVar9 < 0xe0) {
              uVar9 = pbVar13[1] & 0x3f | (uVar9 & 0x1f) << 6;
              pbVar5 = pbVar13 + 2;
            }
            else {
              uVar11 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
              if (uVar9 < 0xf0) {
                uVar9 = uVar11 | (uVar9 & 0x1f) << 0xc;
                pbVar5 = pbVar13 + 3;
              }
              else {
                pbVar5 = pbVar13 + 4;
                uVar9 = pbVar13[3] & 0x3f | uVar11 << 6 | (uVar9 & 7) << 0x12;
              }
            }
          }
          if (((0xb < uVar9 - 0x24) || ((1 << (uVar9 - 0x24 & 0xff) & 0xe01U) == 0)) &&
             (uVar9 != 0x5f)) goto LAB_0157d30c;
          if (local_60 == local_58) {
            FUN_01af7b44(&local_60,local_58,1,1,1);
            psVar16 = local_5c;
          }
          iVar3 = iVar3 + 1;
          *(char *)((int)psVar16 + local_58) = (char)uVar9;
        }
        else {
          if (puVar12 == (undefined1 *)0x24) {
            if ((pbVar13 != pbVar15) &&
               (((bVar1 = *pbVar13, (uint)(int)(char)bVar1 < 0x80000000 || (bVar1 < 0xf0)) ||
                ((undefined1 *)
                 ((pbVar13[1] & 0x3f) << 0xc | (pbVar13[2] & 0x3f) << 6 | pbVar13[3] & 0x3f |
                 (bVar1 & 7) << 0x12) != &DAT_00110000)))) goto LAB_0157d30c;
            param_1[1] = local_60;
            param_1[2] = local_5c;
            param_1[3] = local_58;
            uVar8 = 1;
            goto LAB_0157d49c;
          }
          puVar4 = puVar12 + -0x30;
          bVar17 = (undefined1 *)0x9 < puVar4;
          if (bVar17) {
            puVar4 = (undefined1 *)(((uint)puVar12 & 0xffffffdf) - 0x41);
          }
          if (bVar17 && (undefined1 *)0x19 < puVar4) {
            bVar17 = true;
            if (puVar12 == (undefined1 *)0x2d || puVar12 == (undefined1 *)0x2f) {
              uVar9 = 1;
            }
            else {
              uVar9 = 1;
              if (puVar12 != (undefined1 *)0x5f) goto LAB_0157d30c;
            }
          }
          else {
            bVar17 = true;
            uVar9 = 1;
            if ((undefined1 *)0x7f < puVar12) {
              uVar9 = 2;
              bVar17 = false;
              if (((undefined1 *)0x7ff < puVar12) && (uVar9 = 4, puVar12 < (undefined1 *)0x10000)) {
                uVar9 = 3;
              }
            }
          }
          if ((uint)(local_60 - local_58) < uVar9) {
            FUN_01af7b44(&local_60,local_58,uVar9,1,1);
          }
          pbVar5 = (byte *)((int)local_5c + local_58);
          if (bVar17) {
            *pbVar5 = (byte)puVar12;
          }
          else {
            bVar1 = (byte)puVar12 & 0x3f | 0x80;
            bVar10 = (byte)((uint)puVar12 >> 6);
            if (puVar12 < (undefined1 *)0x800) {
              bVar10 = bVar10 | 0xc0;
              pbVar5[1] = bVar1;
            }
            else {
              bVar2 = bVar10 & 0x3f | 0x80;
              bVar10 = (byte)((uint)puVar12 >> 0xc);
              if ((uint)puVar12 >> 0x10 != 0) {
                pbVar5[3] = bVar1;
                pbVar5[2] = bVar2;
                pbVar5[1] = bVar10 & 0x3f | 0x80;
                *pbVar5 = (byte)((uint)puVar12 >> 0x12) | 0xf0;
                goto LAB_0157d21c;
              }
              pbVar5[1] = bVar2;
              bVar10 = bVar10 | 0xe0;
              pbVar5[2] = bVar1;
            }
            *pbVar5 = bVar10;
          }
LAB_0157d21c:
          iVar3 = uVar9 + iVar3;
          pbVar5 = pbVar13;
          psVar16 = local_5c;
        }
        local_58 = iVar3;
      }
      param_1[1] = local_60;
      param_1[2] = local_5c;
      param_1[3] = local_58;
      uVar8 = 0;
      goto LAB_0157d49c;
    }
  }
  else {
    if (((param_3 < 2) || (iVar3 = thunk_FUN_01bed842(&DAT_004a68c6,param_2,2), iVar3 != 0)) ||
       (uVar9 = param_3 - 2, uVar9 < 2)) goto LAB_0157cfe8;
LAB_0157cfd0:
    local_ac = param_2 + 1;
    if (*(short *)((int)local_ac + (uVar9 - 2)) != 0x2429) goto LAB_0157cfe8;
    local_88 = &local_c1;
    iStack_a8 = uVar9 - 2;
    uStack_a4 = 0;
    local_8c = CONCAT22(local_8c._2_2_,1);
    local_98 = CONCAT31(local_98._1_3_,1);
    local_c1 = '\0';
    local_94 = 0;
    local_9c = 0x7c;
    local_b0 = 0x7c;
    local_a0 = iStack_a8;
    local_90 = iStack_a8;
    FUN_01566f14(&local_70,&local_b0);
    if (local_70 == -0x80000000) {
      local_b8 = 0;
      local_bc = (int *)&SUB_00000004;
      local_c0 = 0;
    }
    else {
      piVar6 = (int *)FUN_01298504(0x30,4);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x30);
      }
      *piVar6 = local_70;
      piVar6[1] = local_6c;
      piVar6[2] = iStack_68;
      local_78 = 1;
      local_80 = 4;
      local_60 = local_b0;
      local_5c = local_ac;
      local_58 = iStack_a8;
      uStack_54 = uStack_a4;
      iStack_50 = local_a0;
      local_4c = local_9c;
      uStack_48 = local_98;
      uStack_44 = local_94;
      iStack_40 = local_90;
      uStack_3c = local_8c;
      pcStack_38 = local_88;
      iVar3 = 0xc;
      local_7c = piVar6;
      while (uVar9 = local_78, FUN_01566f14(&local_30,&local_60), local_30 != -0x80000000) {
        if (uVar9 == local_80) {
          FUN_006520b4(&local_80,uVar9,1,4,0xc);
          piVar6 = local_7c;
        }
        piVar7 = (int *)((int)piVar6 + iVar3);
        local_78 = uVar9 + 1;
        iVar3 = iVar3 + 0xc;
        *piVar7 = local_30;
        piVar7[1] = local_2c;
        piVar7[2] = iStack_28;
      }
      local_c0 = local_80;
      local_bc = local_7c;
      local_b8 = local_78;
    }
    uVar11 = local_b8;
    piVar6 = local_bc;
    uVar9 = local_c0;
    if (local_c1 == '\x01') {
      FUN_006a41c0(&local_c0);
    }
    else if (local_c0 != 0x80000000) {
      if (1 < local_b8) {
        if (local_b8 < 0x15) {
          iVar14 = 0xc;
          iVar3 = local_b8 * 0xc;
          do {
            FUN_015388e0(piVar6,(undefined1 *)((int)piVar6 + iVar14));
            iVar14 = iVar14 + 0xc;
          } while (iVar3 != iVar14);
        }
        else {
          FUN_0154a194(local_bc,local_b8);
        }
      }
      param_1[2] = piVar6;
      *param_1 = 2;
      param_1[1] = uVar9;
      param_1[3] = uVar11;
      return;
    }
  }
  uVar8 = 4;
LAB_0157d49c:
  *param_1 = uVar8;
  return;
}

