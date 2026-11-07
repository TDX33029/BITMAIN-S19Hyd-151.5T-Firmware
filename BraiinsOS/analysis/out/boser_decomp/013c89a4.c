// FUN_013c89a4 @ 013c89a4 size=636 calls_out=6 calls_in=9
// strings: 

/* WARNING: Switch with 1 destination removed at 0x013c8ac0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_013c89a4(undefined2 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int iVar11;
  int local_184;
  short local_170;
  undefined2 local_16e;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130;
  int local_128;
  int local_124;
  int local_120;
  undefined1 *local_11c;
  short sStack_118;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  short local_b0;
  undefined2 local_ae;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  short local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uVar4 = FUN_01bed93e(&local_170,0,0x41);
  local_184 = 1;
  local_120 = 0;
  local_124 = 1;
  local_128 = 0;
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar4 = (uint)*param_2;
    }
    if (param_3 == 1 && uVar4 == 0x2e) {
      local_130 = 1;
      FUN_01bed4e2(param_1,&local_170,0x44);
      local_184 = 1;
      goto LAB_013c9380;
    }
    iVar11 = 0;
    pbVar7 = param_2;
    do {
      pbVar10 = pbVar7 + 1;
      puVar9 = (undefined1 *)(uint)*pbVar7;
      if (0x7fffffff < (uint)(int)(char)*pbVar7) {
        if (puVar9 < (undefined1 *)0xe0) {
          puVar9 = (undefined1 *)(pbVar7[1] & 0x3f | ((uint)puVar9 & 0x1f) << 6);
          pbVar10 = pbVar7 + 2;
        }
        else {
          uVar4 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
          if (puVar9 < (undefined1 *)0xf0) {
            puVar9 = (undefined1 *)(uVar4 | ((uint)puVar9 & 0x1f) << 0xc);
            pbVar10 = pbVar7 + 3;
          }
          else {
            puVar9 = (undefined1 *)(pbVar7[3] & 0x3f | uVar4 << 6 | ((uint)puVar9 & 7) << 0x12);
            if (puVar9 == &DAT_00110000) break;
            pbVar10 = pbVar7 + 4;
          }
        }
      }
                    /* WARNING (jumptable): Second-stage recovery error */
                    /* WARNING: This code block may not be properly labeled as switch case */
      local_11c = puVar9;
      if (puVar9 == (undefined1 *)0x2e) {
        FUN_01bed4e2(&ppuStack_70,&local_170,0x44);
        local_184 = local_124;
        FUN_013d9998(&local_b0,local_124,iVar11);
        if (local_b0 == 2) {
          *param_1 = 2;
          *(undefined4 *)(param_1 + 2) = local_ac;
          goto LAB_013c9370;
        }
        uStack_110 = local_a8;
        uStack_10c = uStack_a4;
        uStack_108 = uStack_a0;
        uStack_104 = uStack_9c;
        uStack_100 = uStack_98;
        uStack_114 = local_ac;
        uStack_116 = local_ae;
        sStack_118 = local_b0;
        FUN_013c86d0(&local_f8,&ppuStack_70,&sStack_118);
        if ((short)local_f8 == 2) {
          *param_1 = 2;
          *(undefined4 *)(param_1 + 2) = local_f4;
          goto LAB_013c9380;
        }
        iVar11 = 0;
        local_168 = local_f0;
        uStack_164 = uStack_ec;
        uStack_160 = uStack_e8;
        uStack_15c = uStack_e4;
        uStack_158 = uStack_e0;
        local_154 = local_dc;
        uStack_150 = uStack_d8;
        uStack_14c = uStack_d4;
        uStack_148 = uStack_d0;
        uStack_144 = uStack_cc;
        local_140 = local_c8;
        uStack_13c = uStack_c4;
        uStack_138 = uStack_c0;
        uStack_134 = uStack_bc;
        local_130 = (undefined1)_uStack_b8;
        local_16e = local_f8._2_2_;
        local_16c = local_f4;
        local_170 = (short)local_f8;
LAB_013c8ec0:
        local_120 = iVar11;
      }
      else {
        puVar5 = (undefined1 *)0x1;
        if (puVar9 != (undefined1 *)0x5c) {
          if (&DAT_0000001f < puVar9) {
            puVar5 = puVar9 + -0x7f;
          }
          if ((&DAT_0000001f >= puVar9 || puVar5 <= &DAT_00000020) ||
             ((puVar9 + -9 <= &DAT_00000017 &&
              ((1 << ((uint)(puVar9 + -9) & 0xff) & 0x80001fU) != 0)))) goto LAB_013c8f7c;
          uVar4 = 1;
          if ((undefined1 *)0x7f < puVar9) {
            uVar4 = (uint)puVar9 >> 8;
            if (uVar4 < 0x20) {
              if (uVar4 == 0) {
                bVar1 = (&DAT_00533bcd)[(uint)puVar9 & 0xff] & 1;
                goto joined_r0x013c8e78;
              }
              if ((uVar4 == 0x16) && (puVar9 == (undefined1 *)0x1680)) goto LAB_013c8f7c;
            }
            else if (uVar4 == 0x20) {
              bVar1 = (&DAT_00533bcd)[(uint)puVar9 & 0xff] & 2;
joined_r0x013c8e78:
              if (bVar1 != 0) {
LAB_013c8f7c:
                pcStack_6c = FUN_012fbb84;
                ppuStack_70 = &local_11c;
                FUN_00664898(&local_f8,&DAT_005a20db,&ppuStack_70);
                pcStack_6c = (code *)local_f8;
                uStack_68 = local_f4;
                uStack_64 = local_f0;
                ppuStack_70 = (undefined1 **)CONCAT22(ppuStack_70._2_2_,0x11);
                uVar8 = FUN_013e649c(&ppuStack_70);
                *(undefined4 *)(param_1 + 2) = uVar8;
                *param_1 = 2;
                FUN_019bb7e0(local_128,local_124);
                FUN_0079217c(&local_170);
                return;
              }
            }
            else if (uVar4 == 0x30 && puVar9 == (undefined1 *)0x3000) goto LAB_013c8f7c;
            uVar4 = 2;
            if (((undefined1 *)0x7ff < puVar9) && (uVar4 = 4, puVar9 < (undefined1 *)0x10000)) {
              uVar4 = 3;
            }
          }
          iVar6 = iVar11;
          if ((uint)(local_128 - iVar11) < uVar4) {
            FUN_01af7b44(&local_128,iVar11,uVar4,1,1);
            iVar6 = local_120;
          }
          pbVar7 = (byte *)(local_124 + iVar6);
          if (puVar9 < (undefined1 *)0x80) {
            *pbVar7 = (byte)puVar9;
          }
          else {
            bVar1 = (byte)puVar9 & 0x3f | 0x80;
            bVar2 = (byte)((uint)puVar9 >> 6);
            if (puVar9 < (undefined1 *)0x800) {
              pbVar7[1] = bVar1;
              *pbVar7 = bVar2 | 0xc0;
            }
            else {
              bVar2 = bVar2 & 0x3f | 0x80;
              bVar3 = (byte)((uint)puVar9 >> 0xc);
              if ((uint)puVar9 >> 0x10 == 0) {
                pbVar7[2] = bVar1;
                pbVar7[1] = bVar2;
                *pbVar7 = bVar3 | 0xe0;
              }
              else {
                pbVar7[3] = bVar1;
                pbVar7[2] = bVar2;
                pbVar7[1] = bVar3 & 0x3f | 0x80;
                *pbVar7 = (byte)((uint)puVar9 >> 0x12) | 0xf0;
              }
            }
          }
          iVar11 = uVar4 + iVar11;
          goto LAB_013c8ec0;
        }
      }
      pbVar7 = pbVar10;
    } while (pbVar10 != param_2 + param_3);
    local_184 = local_124;
    if (iVar11 == 0) {
      local_130 = 1;
    }
    else {
      FUN_01bed4e2(&ppuStack_70,&local_170,0x44);
      FUN_013d9998(&local_b0,local_184,iVar11);
      if (local_b0 == 2) {
        *param_1 = 2;
        *(undefined4 *)(param_1 + 2) = local_ac;
LAB_013c9370:
        FUN_0079217c(&local_170);
        goto LAB_013c9380;
      }
      local_88 = local_a8;
      uStack_84 = uStack_a4;
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      uStack_78 = uStack_98;
      local_8c = local_ac;
      local_8e = local_ae;
      local_90 = local_b0;
      FUN_013c86d0(&local_f8,&ppuStack_70);
      if ((short)local_f8 == 2) {
        *param_1 = 2;
        *(undefined4 *)(param_1 + 2) = local_f4;
        goto LAB_013c9380;
      }
      local_168 = local_f0;
      uStack_164 = uStack_ec;
      uStack_160 = uStack_e8;
      uStack_15c = uStack_e4;
      uStack_158 = uStack_e0;
      local_154 = local_dc;
      uStack_150 = uStack_d8;
      uStack_14c = uStack_d4;
      uStack_148 = uStack_d0;
      uStack_144 = uStack_cc;
      local_140 = local_c8;
      uStack_13c = uStack_c4;
      uStack_138 = uStack_c0;
      uStack_134 = uStack_bc;
      local_130 = uStack_b8;
      local_16c = local_f4;
      local_16e = local_f8._2_2_;
      local_170 = (short)local_f8;
    }
  }
  FUN_01bed4e2(param_1,&local_170,0x44);
LAB_013c9380:
  FUN_019bb7e0(local_128,local_184);
  return;
}

