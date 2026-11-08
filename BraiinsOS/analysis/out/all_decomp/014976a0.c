// FUN_014976a0 @ 014976a0 size=1056 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014976a0(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint local_d4;
  uint local_d0;
  uint local_c8;
  undefined1 local_c4;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_a8;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_34 = (uint)local_34._1_3_ << 8;
  iVar1 = param_3 * 0x3c;
  if (0x2222222 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  if (iVar1 == 0) {
    local_8c = 4;
    local_90 = 0;
  }
  else {
    local_8c = thunk_FUN_016d4a50(iVar1);
    if (local_8c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
    local_90 = param_3;
    if (param_3 != 0) {
      iVar10 = 0;
      uVar11 = 0;
      do {
        if (iVar1 == iVar10) break;
        if (*(int *)(param_2 + iVar10) == -0x80000000) {
          iVar7 = param_2 + iVar10;
          uVar3 = 0;
          local_d4 = *(uint *)(iVar7 + 0xc);
          uVar9 = local_a8;
          if ((int)local_d4 < 0) {
LAB_01497a8c:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar3,uVar9);
          }
          uVar3 = *(undefined4 *)(iVar7 + 8);
          uVar8 = *(undefined2 *)(iVar7 + 0x12);
          uVar12 = (uint)*(ushort *)(iVar7 + 0x10);
          if (local_d4 == 0) {
            local_b4 = 0;
            uVar4 = 1;
          }
          else {
            uVar4 = thunk_FUN_016d4a50(local_d4);
            if (uVar4 == 0) {
              uVar3 = 1;
              uVar9 = local_d4;
              goto LAB_01497a8c;
            }
            local_b4 = local_d4;
          }
          FUN_016dd1aa(uVar4,uVar3);
          uVar9 = 0x80000000;
          uVar5 = local_b4;
          local_a8 = uVar4;
        }
        else {
          iVar7 = param_2 + iVar10;
          uVar3 = 0;
          uVar4 = *(uint *)(iVar7 + 8);
          uVar9 = local_94;
          if ((int)uVar4 < 0) goto LAB_01497a8c;
          uVar9 = *(uint *)(iVar7 + 4);
          uStack_7c = *(uint *)(iVar7 + 0x18);
          uVar2 = *(undefined1 *)(iVar7 + 0x1c);
          local_b8 = 0;
          if (uVar4 == 0) {
            uVar5 = 1;
            local_b4 = 0;
          }
          else {
            uVar5 = thunk_FUN_016d4a50(uVar4,local_94);
            if (uVar5 == 0) {
              uVar3 = 1;
              uVar9 = uVar4;
              goto LAB_01497a8c;
            }
            local_b4 = uVar4;
          }
          FUN_016dd1aa(uVar5,uVar9);
          local_80 = *(uint *)(iVar7 + 0x14);
          bVar14 = 0x1ffffffe < local_80;
          bVar13 = local_80 == 0x1fffffff;
          if (local_80 < 0x20000000) {
            uVar9 = local_80 << 3;
            bVar14 = 0x7ffffffd < uVar9;
            bVar13 = uVar9 == 0x7ffffffe;
          }
          if (bVar14 && !bVar13) {
LAB_01497aa0:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(local_b8,local_d0);
          }
          uVar3 = *(undefined4 *)(iVar7 + 0x10);
          if (uVar9 == 0) {
            uVar12 = 2;
            local_d4 = 0;
          }
          else {
            uVar12 = thunk_FUN_016d4a50(uVar9);
            if (uVar12 == 0) {
              local_b8 = 2;
              local_d0 = uVar9;
              goto LAB_01497aa0;
            }
            local_d4 = local_80;
          }
          FUN_016dd1aa(uVar12,uVar3,uVar9);
          local_34 = CONCAT31(local_34._1_3_,uVar2);
          local_bc = *(uint *)(iVar7 + 0x34);
          uVar9 = *(uint *)(iVar7 + 0x30);
          local_c4 = *(undefined1 *)(iVar7 + 0x38);
          local_b8 = 0x80000000;
          if (*(int *)(iVar7 + 0x2c) == -0x80000000) {
            local_c8 = uVar9;
          }
          else {
            if (local_bc == 0) {
              local_c8 = 1;
            }
            else {
              local_c8 = thunk_FUN_016d4a50(local_bc);
              if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,local_bc);
              }
            }
            FUN_016dd1aa(local_c8,uVar9,local_bc);
            local_b8 = local_bc;
          }
          FUN_01497b38(&local_30,*(undefined4 *)(iVar7 + 0x24),*(undefined4 *)(iVar7 + 0x28));
          uStack_78 = local_34;
          uStack_74 = local_30;
          uStack_70 = local_2c;
          uStack_6c = local_28;
          uVar8 = (undefined2)(uVar12 >> 0x10);
          uVar9 = local_b4;
          local_d0 = uVar12;
          local_94 = uVar5;
        }
        uVar11 = uVar11 + 1;
        puVar6 = (uint *)(local_8c + iVar10);
        *puVar6 = uVar9;
        puVar6[1] = uVar5;
        puVar6[2] = uVar4;
        puVar6[3] = local_d4;
        *(short *)(puVar6 + 4) = (short)uVar12;
        *(undefined2 *)((int)puVar6 + 0x12) = uVar8;
        puVar6[5] = local_80;
        puVar6[6] = uStack_7c;
        puVar6[7] = uStack_78;
        puVar6[8] = uStack_74;
        puVar6[9] = uStack_70;
        puVar6[10] = uStack_6c;
        iVar10 = iVar10 + 0x3c;
        *(undefined1 *)(puVar6 + 0xe) = local_c4;
        puVar6[0xb] = local_b8;
        puVar6[0xc] = local_c8;
        puVar6[0xd] = local_bc;
      } while (param_3 != uVar11);
    }
  }
  *param_1 = local_90;
  param_1[1] = local_8c;
  param_1[2] = param_3;
  return;
}

