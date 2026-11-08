// FUN_0125dd24 @ 0125dd24 size=1260 calls_out=16 calls_in=1
// strings: Failed to read fan period | Failed to set fan PWM polarity | Failed to set fan period | enable | Failed to enable fan PWM

void FUN_0125dd24(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined4 **ppuVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 **ppuVar7;
  undefined4 **ppuVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined4 local_cc;
  char *local_c8;
  undefined4 local_c4;
  int iStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 **local_b0;
  undefined1 *local_ac;
  undefined4 *local_a8;
  undefined4 **local_a0 [3];
  code *local_94;
  undefined4 **local_30;
  undefined1 *local_2c;
  int local_28;
  
  local_cc = param_4;
  FUN_006666fc(&local_30,*(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c));
  if ((param_2 & 1) == 0) {
    local_c8 = (char *)local_30;
    local_c4 = local_2c;
    iStack_c0 = local_28;
  }
  else {
    local_94 = FUN_012fd02c;
    local_a0[2] = &local_b0;
    local_a0[0] = (undefined4 **)(param_5 + 0x24);
    local_a0[1] = (undefined4 **)&LAB_00632348;
    local_b0 = (undefined4 **)param_3;
    FUN_00664898(&local_c8,&DAT_0059d815,local_a0);
    FUN_0134bd64(local_30,local_2c);
  }
  local_30 = (undefined4 **)&local_c8;
  local_2c = &LAB_00632348;
  FUN_00664898(local_a0,&DAT_00574ee5,&local_30);
  ppuVar2 = local_a0[2];
  ppuVar8 = local_a0[1];
  ppuVar7 = local_a0[0];
  iVar6 = FUN_012fc81c(local_cc,local_a0);
  iVar11 = 10 - iVar6;
  if (iVar6 == 10) {
    iVar9 = 1;
    iVar10 = 0;
  }
  else {
    iVar9 = FUN_01298504(iVar11,1);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar11);
    }
    iVar10 = iVar11;
  }
  FUN_01bed4e2(iVar9,(int)local_a0 + iVar6,iVar11);
  FUN_019a63c0(local_a0,ppuVar8,ppuVar2,iVar9,iVar11);
  FUN_0134bd64(iVar10,iVar9);
  FUN_0134bd64(ppuVar7,ppuVar8);
  if (((uint)local_a0[0] & 0xff) != 4) {
    FUN_0069d8a4((uint)local_a0[0] & 0xff,local_a0[1]);
  }
  local_a0[2] = (undefined4 **)&local_cc;
  local_a0[0] = (undefined4 **)&local_c8;
  local_94 = FUN_012fd02c;
  local_a0[1] = (undefined4 **)&LAB_00632348;
  FUN_00664898(&local_30,&DAT_0059e7ca,local_a0);
  puVar5 = local_2c;
  ppuVar7 = local_30;
  FUN_012c1060(&local_bc,local_2c,local_28);
  FUN_0134bd64(ppuVar7,puVar5);
  uVar12 = *(undefined4 *)(param_5 + 0x34);
  uVar13 = *(undefined4 *)(param_5 + 0x38);
  FUN_014b73c4(local_a0,local_b8,local_b4,uVar12,uVar13);
  local_b0 = local_a0[0];
  local_ac = (undefined1 *)local_a0[1];
  local_a8 = local_a0[2];
  uVar14 = FUN_014b6cd8();
  iVar6 = (int)(uVar14 >> 0x20);
  if ((uVar14 & 1) == 0) {
    FUN_0134bd64(local_b0,local_ac);
    if (iVar6 == 0) {
      FUN_014b73c4(local_a0,local_b8,local_b4,uVar12,uVar13);
      ppuVar8 = local_a0[1];
      ppuVar7 = local_a0[0];
      iVar6 = FUN_014b700c(local_a0[1],local_a0[2],*(undefined4 *)(param_5 + 0x20));
      if (iVar6 == 0) {
        FUN_0134bd64(ppuVar7,ppuVar8);
        goto LAB_0125df90;
      }
      local_a0[0] = (undefined4 **)&DAT_00000003;
      local_2c = (undefined1 *)0x18;
      local_30 = (undefined4 **)0x403f66;
      local_28 = iVar6;
      uVar12 = FUN_0125f73c(&local_30,local_a0);
    }
    else {
LAB_0125df90:
      FUN_014b73c4(local_a0,local_b8,local_b4,*(undefined4 *)(param_5 + 0x40),
                   *(undefined4 *)(param_5 + 0x44));
      ppuVar8 = local_a0[1];
      ppuVar7 = local_a0[0];
      iVar6 = FUN_014b70c8(local_a0[1],local_a0[2],*(undefined4 *)(param_5 + 0x4c),
                           *(undefined4 *)(param_5 + 0x50));
      if (iVar6 == 0) {
        FUN_0134bd64(ppuVar7,ppuVar8);
        FUN_014b73c4(&local_b0,local_b8,local_b4,"enable",6);
        puVar1 = local_a8;
        ppuVar8 = (undefined4 **)local_ac;
        FUN_019adea8(local_a0,local_ac,local_a8);
        ppuVar2 = local_a0[0];
        ppuVar7 = local_b0;
        if (local_a0[0] == (undefined4 **)&DAT_00000001) {
          FUN_0069d8a4(local_a0[1],local_a0[2]);
        }
        else {
          iVar6 = FUN_014b700c(ppuVar8,puVar1,1);
          if (iVar6 != 0) {
            local_a0[0] = (undefined4 **)&DAT_00000003;
            local_2c = (undefined1 *)0x18;
            local_30 = (undefined4 **)0x403fa2;
            local_28 = iVar6;
            uVar12 = FUN_0125f73c(&local_30,local_a0);
            *param_1 = 0x80000000;
            param_1[1] = uVar12;
            goto LAB_0125e1e0;
          }
          FUN_0134bd64(ppuVar7,ppuVar8);
        }
        FUN_014b73c4(local_a0,local_b8,local_b4,*(undefined4 *)(param_5 + 0x58),
                     *(undefined4 *)(param_5 + 0x5c));
        ppuVar4 = local_a0[2];
        ppuVar3 = local_a0[1];
        ppuVar7 = local_a0[0];
        FUN_014b73c4(local_a0,local_b8,local_b4,uVar12,uVar13);
        param_1[3] = local_a0[0];
        param_1[4] = local_a0[1];
        param_1[5] = local_a0[2];
        *param_1 = ppuVar7;
        param_1[1] = ppuVar3;
        param_1[2] = ppuVar4;
        if (ppuVar2 == (undefined4 **)0x0) goto LAB_0125e1e4;
        ppuVar7 = local_b0;
        goto LAB_0125e1e0;
      }
      local_a0[0] = (undefined4 **)&DAT_00000003;
      local_2c = (undefined1 *)0x1e;
      local_30 = (undefined4 **)0x403f7e;
      local_28 = iVar6;
      uVar12 = FUN_0125f73c(&local_30,local_a0);
    }
    *param_1 = 0x80000000;
    param_1[1] = uVar12;
  }
  else {
    local_a0[0] = (undefined4 **)&DAT_00000003;
    local_2c = (undefined1 *)0x19;
    local_30 = (undefined4 **)0x403f4d;
    local_28 = iVar6;
    uVar12 = FUN_0125f73c(&local_30,local_a0);
    *param_1 = 0x80000000;
    param_1[1] = uVar12;
    ppuVar7 = local_b0;
    ppuVar8 = (undefined4 **)local_ac;
  }
LAB_0125e1e0:
  FUN_0134bd64(ppuVar7,ppuVar8);
LAB_0125e1e4:
  FUN_0134bd64(local_bc,local_b8);
  FUN_0134bd64(local_c8,local_c4);
  return;
}

