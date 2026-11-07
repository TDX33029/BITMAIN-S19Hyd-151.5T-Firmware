// FUN_00947d88 @ 00947d88 size=1284 calls_out=17 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00947d88(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  undefined1 *local_110;
  undefined1 *local_10c;
  undefined1 *local_e8;
  byte local_c4 [4];
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined1 *local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_00963860(local_c4);
  if (local_c4[0] == 2) {
    *param_1 = 2;
    param_1[1] = local_c0;
    return;
  }
  if ((local_c4[0] & 1) == 0) {
    FUN_009c98e8(&local_48);
    if (local_48 == (undefined1 *)0x1) {
      uVar21 = CONCAT44(local_44,1);
    }
    else {
      uVar21 = FUN_00736cb4(local_40,uStack_3c);
    }
    puVar17 = (undefined1 *)(uVar21 >> 0x20);
    local_e8 = puVar17;
    if ((uVar21 & 1) == 0) {
      puVar16 = (undefined1 *)0x2762;
      if (uVar21 < 0x276200000000) {
        puVar16 = puVar17;
      }
      if (puVar17 == (undefined1 *)0x0) {
        local_e8 = (undefined1 *)0x8;
        puVar16 = (undefined1 *)0x0;
      }
      else {
        local_e8 = (undefined1 *)FUN_01298504((int)puVar16 * 0x68,8);
        if (local_e8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(8,(int)puVar16 * 0x68);
        }
      }
      local_b4 = (undefined1 *)0x0;
      iVar18 = 0x5c;
      local_bc = puVar16;
      local_b8 = local_e8;
      while (puVar16 = local_b4, puVar17 != local_b4) {
        local_70 = local_c0;
        FUN_00a4dc18(&local_48);
        puVar10 = local_40;
        puVar6 = local_44;
        puVar2 = local_48;
        puVar15 = local_40;
        if (local_48 == (undefined1 *)0x7 && local_44 == (undefined1 *)0x0) {
LAB_009481fc:
          FUN_0132b958(local_bc,local_e8,8,0x68);
          local_e8 = puVar15;
          goto LAB_00948214;
        }
        local_68 = uStack_3c;
        uStack_64 = uStack_38;
        uStack_60 = uStack_34;
        local_6c = 4;
        FUN_00a49f64(&local_48,local_c0);
        puVar15 = local_40;
        puVar7 = local_44;
        puVar3 = local_48;
        if (local_48 == (undefined1 *)0x5 && local_44 == (undefined1 *)0x0) goto LAB_009481fc;
        local_58 = uStack_3c;
        uStack_54 = uStack_38;
        uStack_50 = uStack_34;
        FUN_0094f420(&local_48,&local_70);
        puVar11 = local_40;
        puVar8 = local_44;
        puVar4 = local_48;
        if (local_40 == (undefined1 *)0x3b9aca01) {
LAB_009481c8:
          puVar15 = local_48;
          goto LAB_009481fc;
        }
        if (local_40 == &DAT_3b9aca00) {
          uVar14 = 2;
LAB_009481dc:
          puVar15 = (undefined1 *)FUN_00a9d070(uVar14,&DAT_01c0c398,&DAT_01d064b8);
          goto LAB_009481fc;
        }
        if (local_6c == 0) {
          uVar14 = 3;
          goto LAB_009481dc;
        }
        local_6c = local_6c + -1;
        FUN_00947370(&local_48,local_70);
        uVar14 = uStack_3c;
        puVar12 = local_40;
        if (local_48 == (undefined1 *)0x1) goto LAB_009481c0;
        FUN_0094e4d8(&local_48,&local_70);
        puVar13 = local_40;
        puVar9 = local_44;
        puVar5 = local_48;
        uVar1 = local_70;
        if (local_40 == (undefined1 *)0x3b9aca01) goto LAB_009481c8;
        if (local_40 == &DAT_3b9aca00) {
          uVar14 = 4;
          goto LAB_009481dc;
        }
        if (local_6c == 0) {
          uVar14 = 5;
          goto LAB_009481dc;
        }
        FUN_0094f574(&local_48,local_70);
        if ((char)local_48 == '\x01') {
LAB_009481c0:
          puVar15 = local_44;
          goto LAB_009481fc;
        }
        puVar19 = (undefined1 *)((uint)local_48 >> 8 & 0xff);
        uVar20 = 0;
        if (puVar19 != (undefined1 *)0x0) {
          if (puVar19 != (undefined1 *)0x1) {
            local_48 = &DAT_80000004;
            local_44 = puVar19;
            puVar15 = (undefined1 *)FUN_0073696c(&local_48);
            goto LAB_009481fc;
          }
          FUN_0094ef18(&local_48,uVar1);
          if (local_48 != (undefined1 *)0x1) {
            local_10c = local_44;
            FUN_0094ef18(&local_48,uVar1);
            if (local_48 != (undefined1 *)0x1) {
              uVar20 = 1;
              local_110 = local_44;
              goto LAB_0094807c;
            }
          }
          goto LAB_009481c0;
        }
LAB_0094807c:
        local_90 = local_68;
        uStack_8c = uStack_64;
        uStack_88 = uStack_60;
        local_80 = local_58;
        uStack_7c = uStack_54;
        uStack_78 = uStack_50;
        local_a0 = local_58;
        uStack_9c = uStack_54;
        uStack_98 = uStack_50;
        local_b0 = local_68;
        uStack_ac = uStack_64;
        uStack_a8 = uStack_60;
        if (((uint)puVar3 & 7) == 5) break;
        if (puVar3 == (undefined1 *)0x6) goto LAB_009481fc;
        if (puVar16 == local_bc) {
          FUN_00a20e40(&local_bc);
          local_e8 = local_b8;
        }
        *(undefined1 **)(local_e8 + iVar18 + -0x54) = puVar15;
        *(undefined1 **)(local_e8 + iVar18 + -0x5c) = puVar3;
        *(undefined1 **)(local_e8 + iVar18 + -0x58) = puVar7;
        *(undefined4 *)(local_e8 + iVar18 + -0x50) = local_a0;
        *(undefined4 *)(local_e8 + iVar18 + -0x4c) = uStack_9c;
        *(undefined4 *)(local_e8 + iVar18 + -0x48) = uStack_98;
        *(undefined1 **)(local_e8 + iVar18 + -0x44) = puVar2;
        *(undefined1 **)(local_e8 + iVar18 + -0x40) = puVar6;
        *(undefined1 **)(local_e8 + iVar18 + -0x3c) = puVar10;
        *(undefined4 *)(local_e8 + iVar18 + -0x38) = local_b0;
        *(undefined4 *)(local_e8 + iVar18 + -0x34) = uStack_ac;
        *(undefined4 *)(local_e8 + iVar18 + -0x30) = uStack_a8;
        *(undefined1 **)(local_e8 + iVar18) = local_10c;
        *(undefined1 **)(local_e8 + iVar18 + 4) = local_110;
        *(undefined1 **)(local_e8 + iVar18 + -0x1c) = puVar5;
        *(undefined1 **)(local_e8 + iVar18 + -0x18) = puVar9;
        *(undefined4 *)(local_e8 + iVar18 + -4) = uVar20;
        *(undefined1 **)(local_e8 + iVar18 + -0x14) = puVar13;
        *(undefined1 **)(local_e8 + iVar18 + -0x24) = puVar11;
        *(undefined1 **)(local_e8 + iVar18 + -0x28) = puVar8;
        *(undefined4 *)(local_e8 + iVar18 + -8) = uVar14;
        *(undefined1 **)(local_e8 + iVar18 + -0xc) = puVar12;
        local_b4 = puVar16 + 1;
        *(undefined1 **)(local_e8 + iVar18 + -0x2c) = puVar4;
        iVar18 = iVar18 + 0x68;
      }
      if (local_bc != (undefined1 *)0x80000000) {
        param_1[1] = local_bc;
        param_1[2] = local_e8;
        uVar14 = 0;
        param_1[3] = puVar16;
        goto LAB_0094821c;
      }
    }
LAB_00948214:
    param_1[1] = local_e8;
  }
  else {
    FUN_00947854(&local_48);
    if (local_48 != (undefined1 *)0x80000000) {
      param_1[1] = local_48;
      param_1[2] = local_44;
      param_1[3] = local_40;
      uVar14 = 1;
      goto LAB_0094821c;
    }
    param_1[1] = local_44;
  }
  uVar14 = 2;
LAB_0094821c:
  *param_1 = uVar14;
  return;
}

