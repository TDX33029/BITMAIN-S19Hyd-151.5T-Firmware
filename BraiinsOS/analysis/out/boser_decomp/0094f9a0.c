// FUN_0094f9a0 @ 0094f9a0 size=892 calls_out=12 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0094f9a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *unaff_r11;
  ulonglong uVar18;
  undefined1 *local_90;
  undefined1 *local_74;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_2[1] == 0) {
    puVar17 = (undefined1 *)0x80000001;
    goto LAB_0094fa3c;
  }
  uVar15 = *param_2;
  param_2[1] = param_2[1] + -1;
  FUN_009c98e8(&local_40,uVar15);
  uVar12 = local_34;
  puVar4 = local_38;
  if (local_40 == (undefined1 *)0x1) {
LAB_0094fa2c:
    puVar13 = local_3c;
    puVar17 = (undefined1 *)0x80000002;
  }
  else {
    FUN_009c9b04(&local_40,uVar15);
    uVar9 = local_2c;
    uVar8 = local_30;
    uVar7 = local_34;
    puVar5 = local_38;
    if (local_40 == (undefined1 *)0x1) goto LAB_0094fa2c;
    FUN_0094f574(&local_40,uVar15);
    if ((char)local_40 == '\x01') goto LAB_0094fa2c;
    uVar10 = (uint)local_40 >> 8 & 0xff;
    if (uVar10 == 0) {
      local_74 = (undefined1 *)0x80000000;
      puVar11 = puVar5;
LAB_0094faa0:
      param_1[7] = puVar11;
      param_1[1] = uVar12;
      param_1[2] = puVar5;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      param_1[8] = unaff_r11;
      param_1[5] = uVar9;
      puVar13 = puVar4;
      puVar17 = local_74;
    }
    else {
      if (uVar10 != 1) {
        local_40 = &DAT_80000004;
        local_3c = (undefined1 *)uVar10;
        local_3c = (undefined1 *)FUN_0073696c(&local_40);
        goto LAB_0094fa2c;
      }
      FUN_009c98e8(&local_40,uVar15);
      if (local_40 == (undefined1 *)0x1) {
        uVar18 = CONCAT44(local_3c,1);
      }
      else {
        uVar18 = FUN_00736cb4(local_38,local_34);
      }
      local_90 = (undefined1 *)(uVar18 >> 0x20);
      puVar17 = (undefined1 *)0x80000002;
      if ((uVar18 & 1) == 0) {
        puVar16 = (undefined1 *)0x6666;
        if (uVar18 < 0x666600000000) {
          puVar16 = local_90;
        }
        if (local_90 == (undefined1 *)0x0) {
          puVar11 = (undefined1 *)0x8;
          puVar16 = (undefined1 *)0x0;
        }
        else {
          puVar11 = (undefined1 *)FUN_01298504((int)puVar16 * 0x28,8);
          if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(8,(int)puVar16 * 0x28);
          }
        }
        local_6c = (undefined1 *)0x0;
        iVar14 = 0x20;
        local_74 = puVar16;
        local_70 = puVar11;
        while (unaff_r11 = local_6c, local_90 != local_6c) {
          local_44 = 2;
          local_48 = uVar15;
          FUN_0094e4d8(&local_40,&local_48);
          puVar6 = local_38;
          puVar2 = local_3c;
          puVar16 = local_40;
          if (local_38 == (undefined1 *)0x3b9aca01) {
            puVar13 = local_40;
            goto LAB_0094fcf8;
          }
          if (local_38 == &DAT_3b9aca00) {
            uVar12 = 0;
LAB_0094fcd8:
            puVar13 = (undefined1 *)FUN_00a9d070(uVar12,&DAT_01c0c3d8,&DAT_01d064b8);
LAB_0094fcf8:
            FUN_0132b958(local_74,puVar11,8,0x28);
            goto LAB_0094fa30;
          }
          if (local_44 == 0) {
            uVar12 = 1;
            goto LAB_0094fcd8;
          }
          FUN_00a49f64(&local_40,local_48);
          puVar13 = local_38;
          puVar3 = local_3c;
          puVar1 = local_40;
          if (local_40 == (undefined1 *)0x5 && local_3c == (undefined1 *)0x0) goto LAB_0094fcf8;
          local_68 = local_34;
          uStack_64 = local_30;
          uStack_60 = local_2c;
          if (((uint)local_40 & 7) == 5) break;
          if (local_40 == (undefined1 *)0x6) goto LAB_0094fcf8;
          if (unaff_r11 == local_74) {
            FUN_00a20e70(&local_74);
            puVar11 = local_70;
          }
          local_6c = unaff_r11 + 1;
          *(undefined1 **)(puVar11 + iVar14 + -0x18) = puVar13;
          *(undefined1 **)(puVar11 + iVar14 + -0x20) = puVar1;
          *(undefined1 **)(puVar11 + iVar14 + -0x1c) = puVar3;
          *(undefined4 *)(puVar11 + iVar14 + -0x14) = local_68;
          *(undefined4 *)(puVar11 + iVar14 + -0x10) = uStack_64;
          *(undefined4 *)(puVar11 + iVar14 + -0xc) = uStack_60;
          *(undefined1 **)(puVar11 + iVar14) = puVar6;
          *(undefined1 **)(puVar11 + iVar14 + -8) = puVar16;
          *(undefined1 **)(puVar11 + iVar14 + -4) = puVar2;
          iVar14 = iVar14 + 0x28;
        }
        puVar13 = puVar11;
        if (-0x7fffffff < (int)local_74) goto LAB_0094faa0;
      }
      else {
        puVar13 = local_90;
      }
    }
  }
LAB_0094fa30:
  *param_1 = puVar13;
LAB_0094fa3c:
  param_1[6] = puVar17;
  return;
}

