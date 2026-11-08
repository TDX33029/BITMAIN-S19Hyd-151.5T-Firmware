// FUN_013f398c @ 013f398c size=1652 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013f398c(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint local_78;
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
  uVar15 = *(uint *)(param_2 + 0x20);
  iVar8 = *(int *)(param_2 + 4);
  uStack_50 = 0;
  uVar2 = uVar15 + 2;
  if (uVar15 == 0) {
    uVar2 = 4;
  }
  uVar5 = *(uint *)(param_2 + 8);
  iVar10 = 0;
  local_60 = 0;
  local_64 = 1;
  local_68 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 1;
  local_48 = 10;
  local_5c = 10;
  local_6c = 1;
  local_4c = uStack_54;
  local_3c = uStack_54;
  do {
    do {
      while( true ) {
        do {
          uVar16 = FUN_013f40c4(&local_5c);
          uVar6 = local_34;
          uVar13 = (uint)((ulonglong)uVar16 >> 0x20);
          if ((int)uVar16 == 0) {
            *param_1 = local_68;
            param_1[1] = local_64;
            param_1[2] = local_60;
            return;
          }
          local_34 = local_34 + 1;
          if (uVar15 == 0) {
            if ((uint)(local_68 - iVar10) < 4) {
              FUN_01401968(&local_68,iVar10,4,1,1);
              local_6c = local_64;
              iVar10 = local_60;
            }
            *(undefined4 *)(local_6c + iVar10) = 0x20202020;
            iVar10 = 4;
          }
          else {
            iVar3 = FUN_00fabc64(local_34,local_30);
            uVar14 = 10 - iVar3;
            if (iVar3 == 10) {
              iVar12 = 1;
              local_78 = 0;
            }
            else {
              iVar12 = thunk_FUN_016d4a50(uVar14);
              if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,uVar14);
              }
              local_78 = uVar14;
            }
            FUN_016dd1aa(iVar12,(int)local_30 + iVar3,uVar14);
            if (uVar15 < uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0189de60);
            }
            FUN_013fbb90(local_30,0x20,uVar15 - uVar14);
            if (local_30[0] - local_30[2] < uVar14) {
              FUN_01401968(local_30,local_30[2],uVar14,1,1);
            }
            uVar7 = local_30[2];
            uVar9 = local_30[1];
            uVar4 = local_30[0];
            FUN_016dd1aa(local_30[1] + local_30[2],iVar12,uVar14);
            if (local_78 != 0) {
              thunk_FUN_016d3fb4(iVar12);
            }
            uVar7 = uVar7 + uVar14;
            if ((uint)(local_68 - iVar10) < uVar7) {
              FUN_01401968(&local_68,iVar10,uVar7,1,1);
              iVar10 = local_60;
              local_6c = local_64;
            }
            else {
            }
            FUN_016dd1aa(local_6c + iVar10,uVar9,uVar7);
            iVar10 = iVar10 + uVar7;
            local_60 = iVar10;
            if (uVar4 != 0) {
              thunk_FUN_016d3fb4(uVar9);
            }
            if ((uint)(local_68 - iVar10) < 2) {
              FUN_01401968(&local_68,iVar10,2,1,1);
              iVar10 = local_60;
              local_6c = local_64;
            }
            else {
            }
            *(undefined2 *)(local_6c + iVar10) = 0x203a;
            iVar10 = 2;
          }
          local_60 = local_60 + iVar10;
          if ((uint)(local_68 - local_60) < uVar13) {
            FUN_01401968(&local_68,local_60,uVar13,1,1);
          }
          iVar10 = local_60;
          local_6c = local_64;
          iVar3 = local_68;
          FUN_016dd1aa(local_64 + local_60,(int)uVar16,uVar13);
          iVar10 = iVar10 + uVar13;
          local_60 = iVar10;
          if (iVar3 == iVar10) {
            FUN_01401968(&local_68,iVar3,1,1,1);
            local_6c = local_64;
          }
          *(undefined1 *)(local_6c + local_60) = 10;
          iVar10 = iVar10 + 1;
          local_60 = iVar10;
          if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar6,uVar5,&DAT_0189de50);
          }
          iVar3 = iVar8 + uVar6 * 0xc;
        } while (*(int *)(iVar3 + 8) == 0);
        uVar6 = 0;
        local_30[2] = 0;
        local_30[1] = 1;
        local_30[0] = 0;
        uVar13 = uVar2;
        if (uVar2 == 0) break;
        uVar6 = 1;
        do {
          uVar14 = local_30[2];
          if (local_30[2] == local_30[0]) {
            FUN_01401968(local_30,local_30[2],1,1,1);
            uVar6 = local_30[1];
          }
          uVar14 = uVar14 + 1;
          *(undefined1 *)(uVar6 + local_30[2]) = 0x20;
          local_30[2] = uVar14;
        } while (uVar2 != uVar14);
        if (*(int *)(iVar3 + 8) != 0) {
          iVar12 = *(int *)(iVar3 + 4);
          uVar14 = 0;
          iVar3 = iVar12 + *(int *)(iVar3 + 8) * 0x18;
          uVar6 = uVar2;
          goto LAB_013f3cec;
        }
        if (local_30[0] != 0x80000000) goto LAB_013f3df8;
      }
      iVar12 = *(int *)(iVar3 + 4);
      uVar14 = 0;
      iVar3 = iVar12 + *(int *)(iVar3 + 8) * 0x18;
LAB_013f3cec:
      do {
        uVar4 = *(uint *)(iVar12 + 8);
        uVar9 = uVar4 - 1;
        if (uVar14 < uVar9) {
          iVar11 = ~uVar14 + uVar4;
          do {
            if (local_30[0] == uVar6) {
              FUN_01401968(local_30,uVar6,1,1,1);
              uVar6 = local_30[2];
            }
            iVar11 = iVar11 + -1;
            *(undefined1 *)(local_30[1] + uVar6) = 0x20;
            uVar6 = uVar13 + 1;
            uVar13 = uVar6;
            local_30[2] = uVar6;
          } while (iVar11 != 0);
          uVar4 = *(uint *)(iVar12 + 8);
          uVar14 = uVar9;
        }
        puVar1 = (uint *)(iVar12 + 0x14);
        iVar12 = iVar12 + 0x18;
        uVar9 = *puVar1 - uVar4;
        if (*puVar1 < uVar4) {
          uVar9 = 0;
        }
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        uVar14 = uVar9 + uVar14;
        do {
          if (local_30[0] == uVar6) {
            FUN_01401968(local_30,uVar6,1,1,1);
            uVar6 = local_30[2];
          }
          uVar9 = uVar9 - 1;
          *(undefined1 *)(local_30[1] + uVar6) = 0x5e;
          uVar6 = uVar13 + 1;
          uVar13 = uVar6;
          local_30[2] = uVar6;
        } while (uVar9 != 0);
      } while (iVar12 != iVar3);
    } while (local_30[0] == 0x80000000);
LAB_013f3df8:
    uVar14 = local_30[2];
    uVar13 = local_30[1];
    uVar6 = local_30[0];
    if ((uint)(local_68 - local_60) < local_30[2]) {
      FUN_01401968(&local_68,local_60,local_30[2],1,1);
    }
    iVar10 = local_60;
    local_6c = local_64;
    iVar3 = local_68;
    FUN_016dd1aa(local_64 + local_60,uVar13,uVar14);
    iVar10 = iVar10 + uVar14;
    local_60 = iVar10;
    if (iVar3 == iVar10) {
      FUN_01401968(&local_68,iVar3,1,1,1);
      local_6c = local_64;
    }
    *(undefined1 *)(local_6c + local_60) = 10;
    iVar10 = iVar10 + 1;
    local_60 = iVar10;
    if (uVar6 != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
  } while( true );
}

