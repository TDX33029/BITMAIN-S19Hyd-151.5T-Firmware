// FUN_013f5720 @ 013f5720 size=928 calls_out=8 calls_in=18
// strings: 

void FUN_013f5720(uint *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_164;
  int local_160;
  int local_15c;
  undefined1 auStack_158 [88];
  uint local_100;
  undefined4 *local_fc;
  int *local_f8;
  uint local_f4;
  int *local_a8;
  int *piStack_a4;
  uint uStack_a0;
  uint local_9c;
  undefined4 local_98;
  undefined1 auStack_90 [88];
  int *local_38;
  int *local_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = *param_1;
  if (uVar4 == 0x110008) {
    if ((*(undefined1 **)param_1[1] == (undefined1 *)0x110008) ||
       (*(undefined1 **)param_1[1] != &DAT_00110000)) goto LAB_013f57c0;
    puVar5 = *(undefined1 **)param_1[2];
  }
  else {
    uVar8 = 2;
    if (0x10ffff < uVar4) {
      uVar8 = uVar4 - 0x110000;
    }
    if (uVar8 < 6) {
      return;
    }
    if (uVar8 != 6) {
      if (param_1[3] == 0) {
        return;
      }
      goto LAB_013f57c0;
    }
    puVar5 = *(undefined1 **)param_1[1];
  }
  if ((puVar5 != (undefined1 *)0x110008) && (puVar5 == &DAT_00110000)) {
    return;
  }
LAB_013f57c0:
  iVar6 = thunk_FUN_016d4a50(0x58);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x58);
  }
  FUN_016dd1aa(iVar6,param_1,0x58);
  *param_1 = (uint)&DAT_00110000;
  param_1[1] = 0;
  iVar12 = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_164 = 1;
  local_160 = iVar6;
  do {
    iVar11 = local_164;
    iVar10 = iVar12 + -1;
    local_15c = iVar10;
    FUN_016dd1aa(auStack_158,iVar10 * 0x58 + iVar6,0x58);
    FUN_016dd1aa(&local_100,auStack_158,0x58);
    uVar4 = local_f4;
    puVar2 = local_fc;
    if (local_100 == 0x110008) {
      FUN_016dd1aa(auStack_90,local_fc,0x58);
      iVar6 = local_160;
      *puVar2 = &DAT_00110000;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      FUN_016dd1aa(iVar10 * 0x58 + local_160,auStack_90,0x58);
      piVar3 = local_f8;
      local_15c = iVar12;
      FUN_016dd1aa(auStack_90,local_f8,0x58);
      *piVar3 = (int)&DAT_00110000;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      if (iVar12 == iVar11) {
        FUN_01401754(&local_164);
        iVar6 = local_160;
      }
      FUN_016dd1aa(iVar12 * 0x58 + iVar6,auStack_90,0x58);
      iVar12 = iVar12 + 1;
      local_15c = iVar12;
    }
    else {
      uVar8 = 2;
      if (0x10ffff < local_100) {
        uVar8 = local_100 - 0x110000;
      }
      if (uVar8 < 6) {
        iVar12 = iVar10;
      }
      else if (uVar8 == 6) {
        FUN_016dd1aa(auStack_90,local_fc,0x58);
        iVar6 = local_160;
        *puVar2 = &DAT_00110000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        FUN_016dd1aa(iVar10 * 0x58 + local_160,auStack_90,0x58);
        local_15c = iVar12;
      }
      else {
        piStack_a4 = local_f8 + local_f4 * 0x16;
        local_f4 = 0;
        local_98 = 0;
        local_a8 = local_f8;
        local_9c = uVar4;
        uStack_a0 = (uint)&local_100 | 4;
        if ((uint)(iVar11 - iVar10) < uVar4) {
          FUN_01401968(&local_164,iVar10,uVar4,4,0x58);
          iVar12 = local_15c;
          iVar6 = local_160;
        }
        else {
          iVar12 = iVar10;
        }
        piVar3 = piStack_a4;
        local_38 = local_a8;
        local_34 = piStack_a4;
        uStack_30 = uStack_a0;
        uStack_2c = local_9c;
        uStack_28 = local_98;
        if (local_a8 != piStack_a4) {
          iVar11 = iVar12 * 0x58 + iVar6 + 4;
          piVar1 = local_a8;
          do {
            piVar7 = piVar1 + 0x16;
            iVar10 = *piVar1;
            if (iVar10 == 0x110008) break;
            FUN_016dd1aa(auStack_90,piVar1 + 1,0x54);
            *(int *)(iVar11 + -4) = iVar10;
            FUN_016dd1aa(iVar11,auStack_90,0x54);
            iVar11 = iVar11 + 0x58;
            iVar12 = iVar12 + 1;
            piVar9 = piVar1 + 0x16;
            piVar1 = piVar7;
          } while (piVar9 != piVar3);
          local_38 = piVar7;
        }
        local_15c = iVar12;
        FUN_013f8698(&local_38);
      }
    }
    FUN_013f5b78(&local_100);
    if (iVar12 == 0) {
      if (local_164 == 0) {
        return;
      }
      thunk_FUN_016d3fb4(local_160);
      return;
    }
  } while( true );
}

