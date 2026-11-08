// FUN_016d7134 @ 016d7134 size=716 calls_out=12 calls_in=1
// strings: 

int FUN_016d7134(int param_1,int param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  bool bVar19;
  uint *local_6b0;
  undefined4 *local_6ac;
  uint local_6a8;
  int local_6a4;
  uint *local_6a0;
  uint *local_69c;
  uint local_698;
  uint local_694;
  int local_690;
  uint local_674 [3];
  undefined *local_668;
  undefined *local_664;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined1 auStack_560 [1340];
  
  if (param_1 == 0 && param_2 == 0) {
    return -2;
  }
  if (param_3 == (uint *)0x0) {
    uVar9 = 0;
    uVar10 = 0;
    uVar17 = 0;
    local_698 = 0;
    local_694 = 0;
  }
  else {
    uVar17 = *param_3;
    uVar10 = param_3[1];
    local_698 = param_3[3];
    uVar9 = param_3[2];
    if ((uVar17 & 0xfffffbc0) != 0) {
      return -1;
    }
    if ((10 < uVar10) || (-1 < (int)((0x405U >> (uVar10 & 0xff)) << 0x1f))) {
      return -6;
    }
    local_694 = uVar17 & 0x20;
    if (local_694 != 0) {
      puVar12 = local_674 + 1;
      local_668 = &DAT_00427cc0;
      local_674[2] = 10;
      local_6a8 = 10;
      local_6b0 = local_674 + 3;
      local_664 = &DAT_00427cd0;
      local_6ac = &local_568;
      local_694 = 0;
      local_674[1] = 2;
      local_568 = 0x10;
      uStack_564 = 0x1c;
      local_69c = puVar12;
      do {
        if (local_6a8 != uVar10) {
          uVar8 = *puVar12;
          iVar4 = FUN_016d997a(uVar8,0x80002,0x11);
          piVar5 = (int *)FUN_016d2bc8();
          if (iVar4 < 0) {
            local_690 = *piVar5;
          }
          else {
            FUN_016df690(1,local_674);
            iVar6 = FUN_016d6ed2(iVar4,*local_6b0,*local_6ac);
            local_690 = *piVar5;
            FUN_016df690(local_674[0],0);
            FUN_016dffb2(iVar4);
            if (iVar6 == 0) goto LAB_016d725e;
            *piVar5 = local_690;
          }
          if ((0x10 < local_690 - 0x61U) ||
             (-1 < (int)((0x1001dU >> (local_690 - 0x61U & 0xff)) << 0x1f))) {
            return -0xb;
          }
          bVar19 = uVar8 == uVar10;
          uVar10 = local_6a8;
          if (bVar19) {
            local_694 = 1;
          }
        }
LAB_016d725e:
        puVar12 = puVar12 + 1;
        local_6b0 = local_6b0 + 1;
        local_6ac = local_6ac + 1;
        if (local_69c == local_674) break;
        local_6a8 = *local_69c;
        local_69c = local_69c + -1;
      } while( true );
    }
  }
  local_6a0 = local_674 + 1;
  iVar4 = FUN_016d8780(local_6a0,param_2,local_698,uVar9,uVar17);
  local_6a4 = iVar4;
  if (-1 < iVar4) {
    puVar12 = local_674 + 3;
    local_6a4 = FUN_016d81a8(&local_568,puVar12,param_1,uVar10,uVar17);
    if (-1 < local_6a4) {
      if (local_694 == 0) {
        iVar13 = local_6a4 * iVar4;
        iVar6 = FUN_016dd8a2(puVar12);
        iVar11 = iVar13 * 0x44;
        iVar7 = FUN_016d38c8(1,iVar11 + 1 + iVar6);
        if (iVar7 == 0) {
          local_6a4 = -10;
        }
        else {
          if (iVar6 == 0) {
            local_6a8 = local_694;
          }
          else {
            local_6a8 = iVar7 + iVar11;
            FUN_016dd1aa(local_6a8,puVar12,iVar6 + 1);
          }
          iVar6 = 0;
          puVar14 = auStack_560;
          for (local_6ac = (undefined4 *)0x0; local_6ac != (undefined4 *)local_6a4;
              local_6ac = (undefined4 *)((int)local_6ac + 1)) {
            iVar11 = iVar6 * 0x44 + iVar7;
            iVar16 = iVar4 + iVar6;
            puVar12 = local_6a0;
            for (; iVar6 != iVar16; iVar6 = iVar6 + 1) {
              *(short *)(iVar11 + 0x40) = (short)iVar6;
              iVar15 = *(int *)(puVar14 + -8);
              bVar1 = *(byte *)((int)puVar12 + 3);
              bVar2 = *(byte *)((int)puVar12 + 2);
              if (iVar15 == 2) {
                uVar18 = 0x10;
              }
              else {
                uVar18 = 0x1c;
              }
              FUN_016dd606(iVar11,0,0x20);
              *(uint *)(iVar11 + 8) = (uint)bVar1;
              *(uint *)(iVar11 + 0xc) = (uint)bVar2;
              *(uint *)(iVar11 + 0x18) = local_6a8;
              *(int *)(iVar11 + 4) = iVar15;
              *(undefined4 *)(iVar11 + 0x10) = uVar18;
              *(int *)(iVar11 + 0x14) = iVar11 + 0x20;
              if (iVar6 != 0) {
                *(int *)(iVar11 + -0x28) = iVar11;
              }
              if (*(int *)(puVar14 + -8) == 2) {
                *(undefined2 *)(iVar11 + 0x20) = 2;
                uVar3 = FUN_016d78c6((short)*puVar12);
                *(undefined2 *)(iVar11 + 0x22) = uVar3;
                FUN_016dd1aa(iVar11 + 0x24,puVar14,4);
              }
              else if (*(int *)(puVar14 + -8) == 10) {
                *(undefined2 *)(iVar11 + 0x20) = 10;
                uVar3 = FUN_016d78c6((short)*puVar12);
                *(undefined2 *)(iVar11 + 0x22) = uVar3;
                *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(puVar14 + -4);
                FUN_016dd1aa(iVar11 + 0x28,puVar14,0x10);
              }
              iVar11 = iVar11 + 0x44;
              puVar12 = puVar12 + 1;
            }
            puVar14 = puVar14 + 0x1c;
          }
          local_6a4 = 0;
          *(short *)(iVar7 + 0x42) = (short)iVar13;
          *param_4 = iVar7;
        }
      }
      else {
        local_6a4 = -5;
      }
    }
  }
  return local_6a4;
}

