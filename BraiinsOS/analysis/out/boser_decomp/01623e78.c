// FUN_01623e78 @ 01623e78 size=1016 calls_out=12 calls_in=1
// strings: failed to parse prefix message attributes

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01623e78(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  short sVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined4 **ppuVar17;
  undefined1 uVar18;
  undefined4 **ppuVar19;
  int iVar20;
  ulonglong uVar21;
  int local_98;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined1 *local_78;
  int local_74;
  undefined4 local_70;
  undefined4 **local_6c;
  undefined4 **local_68;
  undefined4 local_64;
  undefined4 **local_60;
  undefined4 **local_5c;
  undefined4 **local_58;
  undefined1 *local_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined8 local_48;
  undefined4 **local_40;
  undefined1 *local_3c;
  undefined4 **local_34;
  undefined4 **local_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  
  uVar15 = param_2[1];
  if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d06018);
  }
  if (uVar15 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(4,8,uVar15,&DAT_01d06018);
  }
  if (uVar15 == 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(8,8,&DAT_01d06018);
  }
  if (uVar15 == 9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(9,9,&DAT_01d06018);
  }
  if (uVar15 < 0xb) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(10,10,&DAT_01d06018);
  }
  local_78 = (undefined1 *)*param_2;
  iVar20 = 0;
  local_7c = 0;
  uVar1 = *local_78;
  iVar16 = *(int *)(local_78 + 4);
  uVar2 = local_78[8];
  uVar3 = local_78[9];
  uVar4 = local_78[10];
  local_98 = 4;
  local_80 = 4;
  local_84 = 0;
  if (uVar15 == 0xb) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0xc,0xb,0xb,&DAT_01d06018);
  }
  local_78 = local_78 + 0xc;
  local_74 = uVar15 - 0xc;
  puVar12 = (undefined4 *)((uint)&local_60 | 4);
  puVar8 = (undefined2 *)((uint)&local_60 | 1);
  local_70 = 0;
  do {
    iVar5 = local_7c;
    FUN_0162385c(&local_6c,&local_78);
    uVar11 = local_64;
    ppuVar19 = local_68;
    if (local_6c == (undefined4 **)&DAT_80000001) {
      *param_1 = local_84;
      param_1[1] = local_80;
      param_1[2] = iVar5;
      param_1[3] = iVar16;
      param_1[4] = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
      return;
    }
    if (local_6c != (undefined4 **)&DAT_80000000) {
      ppuVar17 = local_6c;
      goto LAB_01624170;
    }
    uVar21 = FUN_01623bf0(local_68,local_64);
    iVar13 = (int)(uVar21 >> 0x20);
    puVar9 = (undefined4 *)uVar21;
    local_48 = uVar21;
    sVar7 = FUN_01623bc0(ppuVar19,uVar11);
    if (sVar7 == 1) {
      if (iVar13 != 0x10) {
        local_34 = (undefined4 **)&local_48;
        local_30 = (undefined4 **)&LAB_0141634c;
        FUN_00664898(puVar12,&DAT_00575fb3,&local_34);
LAB_01624164:
        ppuVar19 = local_58;
        ppuVar17 = local_5c;
LAB_01624170:
        FUN_01632180(&local_84);
        local_60 = ppuVar17;
        local_5c = ppuVar19;
        FUN_016403ac(&local_90,&local_60,"failed to parse prefix message attributes",0x29);
        param_1[1] = local_90;
        param_1[2] = iStack_8c;
        param_1[3] = iStack_88;
        *param_1 = -0x80000000;
        return;
      }
      FUN_01bed4e2(puVar8,puVar9,0x10);
      uVar18 = 0;
      ppuVar19 = local_5c;
    }
    else if (sVar7 == 2) {
      if (uVar21 < 0x400000000) {
        uVar14 = 4;
        uVar11 = 0;
LAB_016241e4:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar11,uVar14,iVar13,&DAT_01d061d8);
      }
      if (uVar21 < 0x800000000) {
        uVar14 = 8;
        uVar11 = 4;
        goto LAB_016241e4;
      }
      ppuVar19 = (undefined4 **)*puVar9;
      ppuVar17 = (undefined4 **)puVar9[1];
      local_3c = &LAB_0141634c;
      local_40 = (undefined4 **)&local_48;
      FUN_00664898(&local_34,&DAT_005b5586,&local_40);
      FUN_0134bd64(local_34,local_30);
      uVar18 = 1;
      local_5c = ppuVar19;
      local_58 = ppuVar17;
    }
    else {
      FUN_01623ae4(&local_34,ppuVar19,uVar11);
      local_40 = local_30;
      local_3c = puStack_2c;
      if (local_34 == (undefined4 **)&DAT_80000000) {
        *puVar12 = local_30;
        puVar12[1] = puStack_2c;
        puVar12[2] = uStack_28;
        goto LAB_01624164;
      }
      uVar18 = 2;
      local_58 = local_30;
      local_54 = puStack_2c;
      uStack_50 = uStack_28;
      ppuVar19 = local_34;
    }
    uVar11 = uStack_50;
    puVar6 = local_54;
    ppuVar17 = local_58;
    local_4a = *(undefined1 *)(puVar8 + 1);
    local_4c = *puVar8;
    if (iVar5 == local_84) {
      FUN_0161d664(&local_84);
      local_98 = local_80;
    }
    local_7c = iVar5 + 1;
    puVar10 = (undefined1 *)(local_98 + iVar20);
    *puVar10 = uVar18;
    iVar20 = iVar20 + 0x14;
    *(undefined2 *)(puVar10 + 1) = local_4c;
    puVar10[3] = local_4a;
    *(undefined4 ***)(puVar10 + 4) = ppuVar19;
    *(undefined4 ***)(puVar10 + 8) = ppuVar17;
    *(undefined1 **)(puVar10 + 0xc) = puVar6;
    *(undefined4 *)(puVar10 + 0x10) = uVar11;
  } while( true );
}

