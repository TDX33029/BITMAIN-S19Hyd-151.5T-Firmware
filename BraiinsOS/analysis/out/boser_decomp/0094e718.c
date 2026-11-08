// FUN_0094e718 @ 0094e718 size=740 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0094e718(uint *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint unaff_r6;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  if (param_2[1] == 0) {
    *param_1 = 0x80000001;
    return;
  }
  uVar12 = *param_2;
  param_2[1] = param_2[1] + -1;
  FUN_0094f574(&local_38,uVar12);
  if ((char)local_38 == '\x01') {
    uVar8 = local_34;
  }
  else {
    uVar8 = (uint)local_38 >> 8 & 0xff;
    if (uVar8 == 0) {
      local_4c = 0x80000000;
      uVar8 = 0;
LAB_0094e7a8:
      *param_1 = local_4c;
      param_1[1] = uVar8;
      param_1[2] = unaff_r6;
      return;
    }
    if (uVar8 == 1) {
      FUN_009c98e8(&local_38,uVar12);
      if (local_38 == (undefined1 *)0x1) {
        uVar15 = CONCAT44(local_34,1);
      }
      else {
        uVar15 = FUN_00736cb4(local_30,local_2c);
      }
      uVar14 = (uint)(uVar15 >> 0x20);
      uVar8 = uVar14;
      if ((uVar15 & 1) == 0) {
        uVar11 = uVar14;
        if (0x7fffffffffff < uVar15) {
          uVar11 = 0x8000;
        }
        if (uVar14 == 0) {
          uVar8 = 8;
          uVar11 = 0;
        }
        else {
          uVar8 = FUN_01298504(uVar11 << 5,8);
          if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(8,uVar11 << 5);
          }
        }
        iVar13 = 0x18;
        local_44 = 0;
        local_4c = uVar11;
        local_48 = uVar8;
        while (unaff_r6 = local_44, uVar14 != local_44) {
          local_40 = uVar12;
          FUN_00aeed24(&local_38,uVar12);
          uVar5 = local_30;
          uVar11 = local_34;
          puVar1 = local_38;
          if (local_38 == (undefined1 *)0x80000000) {
            uVar8 = local_34;
LAB_0094e9e4:
            FUN_00a9303c(&local_4c);
            goto LAB_0094e9ec;
          }
          local_3c = 1;
          FUN_00abba78(&local_38,uVar12);
          uVar7 = local_2c;
          uVar6 = local_30;
          uVar3 = local_34;
          puVar2 = local_38;
          if (local_38 == (undefined1 *)0x2 && local_34 == 0) {
            uVar8 = local_30;
LAB_0094e9d8:
            FUN_019bb7e0(puVar1,uVar11);
            goto LAB_0094e9e4;
          }
          FUN_0094e544(&local_38,&local_40);
          uVar4 = local_34;
          if (local_38 == (undefined1 *)0x2) {
LAB_0094e9d4:
            uVar8 = local_34;
            goto LAB_0094e9d8;
          }
          if (((uint)local_38 & 1) == 0) {
            local_34 = FUN_00a9d070(2,&DAT_01c0c3f0,&DAT_01d064b8);
            goto LAB_0094e9d4;
          }
          if (((uint)puVar2 & 3) == 2) break;
          if (puVar2 == (undefined1 *)0x3) {
            uVar8 = uVar6;
            goto LAB_0094e9e4;
          }
          if (unaff_r6 == local_4c) {
            FUN_00a20ed0(&local_4c);
            uVar8 = local_48;
          }
          iVar10 = uVar8 + iVar13;
          *(uint *)(iVar10 + -0x10) = uVar6;
          *(undefined4 *)(iVar10 + -0xc) = uVar7;
          iVar9 = uVar8 + unaff_r6 * 0x20;
          *(uint *)(iVar10 + -0x14) = uVar3;
          *(undefined1 **)(iVar10 + -0x18) = puVar2;
          local_44 = unaff_r6 + 1;
          *(undefined1 **)(iVar9 + 0x10) = puVar1;
          *(uint *)(iVar9 + 0x14) = uVar11;
          *(uint *)(uVar8 + iVar13) = uVar5;
          iVar13 = iVar13 + 0x20;
          *(uint *)(iVar10 + 4) = uVar4;
        }
        if (-0x7fffffff < (int)local_4c) goto LAB_0094e7a8;
      }
    }
    else {
      local_38 = &DAT_80000004;
      local_34 = uVar8;
      uVar8 = FUN_0073696c(&local_38);
    }
  }
LAB_0094e9ec:
  *param_1 = 0x80000002;
  param_1[1] = uVar8;
  return;
}

