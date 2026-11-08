// FUN_016f05ac @ 016f05ac size=1624 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016f05ac(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  uint local_34;
  uint local_30 [3];
  
  local_58 = *(undefined4 *)(param_2 + 0x18);
  uStack_54 = *(undefined4 *)(param_2 + 0x1c);
  uVar13 = *(uint *)(param_2 + 0x20);
  iVar7 = *(int *)(param_2 + 4);
  uStack_50 = 0;
  uVar2 = uVar13 + 2;
  if (uVar13 == 0) {
    uVar2 = 4;
  }
  uVar5 = *(uint *)(param_2 + 8);
  local_70 = 1;
  local_60 = 0;
  local_64 = 1;
  local_68 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 1;
  local_48 = 10;
  local_5c = 10;
  local_6c = 0;
  local_4c = uStack_54;
  local_3c = uStack_54;
  do {
    do {
      uVar15 = FUN_016f0278(&local_5c);
      uVar6 = local_34;
      uVar9 = (uint)((ulonglong)uVar15 >> 0x20);
      if ((int)uVar15 == 0) {
        *param_1 = local_68;
        param_1[1] = local_64;
        param_1[2] = local_60;
        return;
      }
      local_34 = local_34 + 1;
      if (uVar13 == 0) {
        if ((uint)(local_68 - local_6c) < 4) {
          FUN_006520b4(&local_68,local_6c,4,1,1);
          local_6c = local_60;
          local_70 = local_64;
        }
        *(undefined4 *)(local_70 + local_6c) = 0x20202020;
        iVar3 = 4;
      }
      else {
        iVar3 = FUN_012fc81c(local_34,local_30);
        uVar14 = 10 - iVar3;
        if (iVar3 == 10) {
          iVar11 = 1;
          local_74 = 0;
        }
        else {
          iVar11 = FUN_01298504(uVar14,1);
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,uVar14);
          }
          local_74 = uVar14;
        }
        FUN_01bed4e2(iVar11,(int)local_30 + iVar3,uVar14);
        if (uVar13 < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d13138);
        }
        FUN_016eb78c(local_30,0x20,uVar13 - uVar14);
        if (local_30[0] - local_30[2] < uVar14) {
          FUN_006520b4(local_30,local_30[2],uVar14,1,1);
        }
        uVar8 = local_30[2];
        uVar10 = local_30[1];
        uVar4 = local_30[0];
        FUN_01bed4e2(local_30[1] + local_30[2],iVar11,uVar14);
        FUN_0134bd64(local_74,iVar11);
        uVar8 = uVar8 + uVar14;
        if ((uint)(local_68 - local_6c) < uVar8) {
          FUN_006520b4(&local_68,local_6c,uVar8,1,1);
          local_6c = local_60;
          local_70 = local_64;
        }
        iVar3 = local_68;
        FUN_01bed4e2(local_70 + local_6c,uVar10,uVar8);
        local_6c = local_6c + uVar8;
        local_60 = local_6c;
        FUN_0134bd64(uVar4,uVar10);
        if ((uint)(iVar3 - local_6c) < 2) {
          FUN_006520b4(&local_68,local_6c,2,1,1);
          local_6c = local_60;
          local_70 = local_64;
        }
        else {
        }
        *(undefined2 *)(local_70 + local_6c) = 0x203a;
        iVar3 = 2;
      }
      local_60 = local_60 + iVar3;
      if ((uint)(local_68 - local_60) < uVar9) {
        FUN_006520b4(&local_68,local_60,uVar9,1,1);
      }
      local_6c = local_60;
      local_70 = local_64;
      iVar3 = local_68;
      FUN_01bed4e2(local_64 + local_60,(int)uVar15,uVar9);
      local_6c = local_6c + uVar9;
      local_60 = local_6c;
      if (iVar3 == local_6c) {
        FUN_006520b4(&local_68,iVar3,1,1,1);
        local_70 = local_64;
      }
      *(undefined1 *)(local_70 + local_60) = 10;
      local_6c = local_6c + 1;
      local_60 = local_6c;
      if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,uVar5,&DAT_01d13128);
      }
      iVar11 = iVar7 + uVar6 * 0xc;
      iVar3 = *(int *)(iVar11 + 8);
    } while (iVar3 == 0);
    uVar6 = 0;
    local_30[2] = 0;
    local_30[1] = 1;
    local_30[0] = 0;
    if (uVar2 == 0) {
      iVar11 = *(int *)(iVar11 + 4);
LAB_016f08e8:
      iVar3 = iVar11 + iVar3 * 0x18;
      uVar14 = 0;
      uVar9 = uVar2;
      do {
        uVar4 = *(uint *)(iVar11 + 8);
        uVar10 = uVar4 - 1;
        if (uVar14 < uVar10) {
          iVar12 = ~uVar14 + uVar4;
          do {
            if (local_30[0] == uVar6) {
              FUN_006520b4(local_30,uVar6,1,1,1);
              uVar6 = local_30[2];
            }
            iVar12 = iVar12 + -1;
            *(undefined1 *)(local_30[1] + uVar6) = 0x20;
            uVar6 = uVar9 + 1;
            uVar9 = uVar6;
            local_30[2] = uVar6;
          } while (iVar12 != 0);
          uVar4 = *(uint *)(iVar11 + 8);
          uVar14 = uVar10;
        }
        puVar1 = (uint *)(iVar11 + 0x14);
        iVar11 = iVar11 + 0x18;
        uVar10 = *puVar1 - uVar4;
        if (*puVar1 < uVar4) {
          uVar10 = 0;
        }
        if (uVar10 < 2) {
          uVar10 = 1;
        }
        uVar14 = uVar10 + uVar14;
        do {
          if (local_30[0] == uVar6) {
            FUN_006520b4(local_30,uVar6,1,1,1);
            uVar6 = local_30[2];
          }
          uVar10 = uVar10 - 1;
          *(undefined1 *)(local_30[1] + uVar6) = 0x5e;
          uVar6 = uVar9 + 1;
          uVar9 = uVar6;
          local_30[2] = uVar6;
        } while (uVar10 != 0);
      } while (iVar11 != iVar3);
    }
    else {
      uVar6 = 1;
      do {
        uVar9 = local_30[2];
        if (local_30[2] == local_30[0]) {
          FUN_006520b4(local_30,local_30[2],1,1,1);
          uVar6 = local_30[1];
        }
        uVar9 = uVar9 + 1;
        *(undefined1 *)(uVar6 + local_30[2]) = 0x20;
        local_30[2] = uVar9;
      } while (uVar2 != uVar9);
      iVar3 = *(int *)(iVar11 + 8);
      if (iVar3 != 0) {
        iVar11 = *(int *)(iVar11 + 4);
        uVar6 = uVar2;
        goto LAB_016f08e8;
      }
    }
    uVar14 = local_30[2];
    uVar9 = local_30[1];
    uVar6 = local_30[0];
    if (local_30[0] != 0x80000000) {
      if ((uint)(local_68 - local_60) < local_30[2]) {
        FUN_006520b4(&local_68,local_60,local_30[2],1,1);
      }
      local_6c = local_60;
      local_70 = local_64;
      iVar3 = local_68;
      FUN_01bed4e2(local_64 + local_60,uVar9,uVar14);
      local_6c = local_6c + uVar14;
      local_60 = local_6c;
      if (iVar3 == local_6c) {
        FUN_006520b4(&local_68,iVar3,1,1,1);
        local_70 = local_64;
      }
      *(undefined1 *)(local_70 + local_60) = 10;
      local_6c = local_6c + 1;
      local_60 = local_6c;
      FUN_0134bd64(uVar6,uVar9);
    }
  } while( true );
}

