// FUN_016ebb38 @ 016ebb38 size=868 calls_out=9 calls_in=6
// strings: 

void FUN_016ebb38(uint *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_164;
  int local_160;
  int local_15c;
  undefined1 auStack_158 [88];
  uint local_100;
  undefined4 *local_fc;
  int *local_f8;
  uint local_f4;
  undefined1 auStack_a8 [88];
  int *local_50;
  int *piStack_4c;
  undefined4 **ppuStack_48;
  uint local_44;
  undefined4 local_40;
  int *local_38;
  int *local_34;
  undefined4 **ppuStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = *param_1;
  if (uVar3 == 0x110008) {
    if (*(undefined1 **)param_1[1] != &DAT_00110000) goto LAB_016ebb7c;
    puVar4 = (undefined4 *)param_1[2];
  }
  else {
    uVar10 = 2;
    if (0x10ffff < uVar3) {
      uVar10 = uVar3 - 0x110000;
    }
    if (uVar10 < 6) {
      return;
    }
    if (uVar10 != 6) {
      if (param_1[3] == 0) {
        return;
      }
      goto LAB_016ebb7c;
    }
    puVar4 = (undefined4 *)param_1[1];
  }
  if ((undefined1 *)*puVar4 == &DAT_00110000) {
    return;
  }
LAB_016ebb7c:
  iVar5 = thunk_FUN_01be5118(0x58);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x58);
  }
  FUN_01bed4e2(iVar5,param_1,0x58);
  *param_1 = (uint)&DAT_00110000;
  FUN_01bed93e(param_1 + 1,0,0x18);
  local_164 = 1;
  iVar12 = 1;
  local_160 = iVar5;
  do {
    iVar13 = local_164;
    iVar11 = iVar12 + -1;
    puVar8 = (uint *)(iVar5 + iVar11 * 0x58);
    uVar3 = *puVar8;
    local_15c = iVar11;
    FUN_01bed4e2(auStack_158,puVar8 + 1,0x54);
    if (uVar3 == 0x110009) break;
    local_100 = uVar3;
    FUN_01bed4e2(&local_fc,auStack_158,0x54);
    uVar10 = local_f4;
    puVar4 = local_fc;
    if (uVar3 == 0x110008) {
      FUN_01bed4e2(auStack_a8,local_fc,0x58);
      *puVar4 = &DAT_00110000;
      FUN_01bed93e(puVar4 + 1,0,0x18);
      iVar5 = local_160;
      FUN_01bed4e2(iVar11 * 0x58 + local_160,auStack_a8,0x58);
      piVar2 = local_f8;
      local_15c = iVar12;
      FUN_01bed4e2(auStack_a8,local_f8,0x58);
      *piVar2 = (int)&DAT_00110000;
      FUN_01bed93e(piVar2 + 1,0,0x18);
      if (iVar12 == iVar13) {
        FUN_016f53a8(&local_164);
        iVar5 = local_160;
      }
      FUN_01bed4e2(iVar12 * 0x58 + iVar5,auStack_a8,0x58);
      iVar11 = iVar12 + 1;
LAB_016ebcc4:
      local_15c = iVar11;
    }
    else {
      uVar6 = 2;
      if (0x10ffff < uVar3) {
        uVar6 = uVar3 - 0x110000;
      }
      if (5 < uVar6) {
        if (uVar6 == 6) {
          FUN_01bed4e2(auStack_a8,local_fc,0x58);
          *puVar4 = &DAT_00110000;
          FUN_01bed93e(puVar4 + 1,0,0x18);
          iVar5 = local_160;
          FUN_01bed4e2(iVar11 * 0x58 + local_160,auStack_a8,0x58);
          iVar11 = iVar12;
          goto LAB_016ebcc4;
        }
        local_f4 = 0;
        local_40 = 0;
        piStack_4c = local_f8 + uVar10 * 0x16;
        local_50 = local_f8;
        local_44 = uVar10;
        ppuStack_48 = &local_fc;
        if ((uint)(iVar13 - iVar11) < uVar10) {
          FUN_006520b4(&local_164,iVar11,uVar10,4,0x58);
          iVar5 = local_160;
          iVar11 = local_15c;
        }
        else {
        }
        piVar2 = piStack_4c;
        local_38 = local_50;
        local_34 = piStack_4c;
        ppuStack_30 = ppuStack_48;
        uStack_2c = local_44;
        uStack_28 = local_40;
        if (local_50 != piStack_4c) {
          iVar12 = iVar11 * 0x58 + iVar5 + 4;
          piVar1 = local_50;
          do {
            piVar7 = piVar1 + 0x16;
            iVar13 = *piVar1;
            if (iVar13 == 0x110008) break;
            FUN_01bed4e2(auStack_a8,piVar1 + 1,0x54);
            *(int *)(iVar12 + -4) = iVar13;
            FUN_01bed4e2(iVar12,auStack_a8,0x54);
            iVar12 = iVar12 + 0x58;
            iVar11 = iVar11 + 1;
            piVar9 = piVar1 + 0x16;
            piVar1 = piVar7;
          } while (piVar9 != piVar2);
          local_38 = piVar7;
        }
        local_15c = iVar11;
        FUN_016f16b4(&local_38);
      }
    }
    FUN_016ebad0(&local_100);
    iVar12 = iVar11;
  } while (iVar11 != 0);
  FUN_016ebf4c(&local_164);
  return;
}

