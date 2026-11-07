// FUN_00f1d200 @ 00f1d200 size=936 calls_out=3 calls_in=1
// strings: 

void FUN_00f1d200(uint *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint unaff_r8;
  uint uVar12;
  undefined8 *puVar13;
  uint unaff_r11;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  undefined2 uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  uint local_94;
  uint local_80;
  undefined1 local_7c;
  uint local_6c;
  int local_68;
  uint local_64;
  int local_58;
  int local_54;
  int local_4c;
  int local_48;
  uint local_40;
  uint local_3c;
  
  iVar1 = param_3 * 0x48;
  if (0x1c71c71 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  if (iVar1 == 0) {
    local_3c = 8;
    local_40 = 0;
  }
  else {
    uVar14 = 0xd254;
    local_3c = thunk_FUN_016d4a50(iVar1);
    if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar1);
    }
    local_40 = param_3;
    if (param_3 != 0) {
      iVar10 = 0;
      uVar12 = 0;
      puVar13 = param_2;
      uVar6 = extraout_r12;
      do {
        if (iVar1 == iVar10) break;
        uVar9 = *(undefined4 *)(puVar13 + 8);
        uVar17 = *puVar13;
        uVar4 = 0x80000000;
        local_48 = -0x80000000;
        if (*(int *)(puVar13 + 1) != -0x80000000) {
          uVar4 = *(uint *)((int)param_2 + iVar10 + 0x10);
          unaff_r8 = *(uint *)((int)param_2 + iVar10 + 0xc);
          if (uVar4 == 0) {
            local_54 = 1;
          }
          else {
            local_54 = thunk_FUN_016d4a50(uVar4);
            if (local_54 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,uVar4);
            }
          }
          uVar14 = 0xd2ec;
          FUN_016dd1aa(local_54,unaff_r8,uVar4);
          unaff_r11 = uVar4;
          uVar6 = extraout_r12_00;
        }
        if (*(int *)((int)puVar13 + 0x14) != -0x80000000) {
          local_68 = *(int *)((int)param_2 + iVar10 + 0x1c);
          unaff_r8 = *(uint *)((int)param_2 + iVar10 + 0x18);
          if (local_68 == 0) {
            local_58 = 1;
          }
          else {
            local_58 = thunk_FUN_016d4a50(local_68);
            if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_68);
            }
          }
          uVar14 = 0xd354;
          FUN_016dd1aa(local_58,unaff_r8);
          uVar6 = extraout_r12_01;
          local_48 = local_68;
        }
        uVar11 = 0x80000000;
        if (*(int *)(puVar13 + 4) != -0x80000000) {
          uVar11 = *(uint *)((int)param_2 + iVar10 + 0x28);
          unaff_r8 = *(uint *)((int)param_2 + iVar10 + 0x24);
          if (uVar11 == 0) {
            local_4c = 1;
          }
          else {
            local_4c = thunk_FUN_016d4a50(uVar11);
            if (local_4c == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,uVar11);
            }
          }
          uVar14 = 0xd3bc;
          FUN_016dd1aa(local_4c,unaff_r8,uVar11);
          uVar6 = extraout_r12_02;
          local_6c = uVar11;
        }
        local_94 = 0x80000000;
        if (*(int *)((int)puVar13 + 0x2c) == -0x80000000) {
          uVar3 = 0;
          uVar7 = uVar11;
        }
        else {
          uVar5 = 0;
          unaff_r8 = *(uint *)((int)param_2 + iVar10 + 0x34);
          bVar16 = 0x3ffffffe < unaff_r8;
          bVar15 = unaff_r8 == 0x3fffffff;
          uVar2 = unaff_r11;
          if (unaff_r8 < 0x40000000) {
            uVar2 = unaff_r8 << 2;
            bVar16 = 0x7ffffffd < uVar2;
            bVar15 = uVar2 == 0x7ffffffe;
            local_80 = unaff_r11;
          }
          if (bVar16 && !bVar15) {
LAB_00f1d564:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar5,local_64);
          }
          uVar3 = *(undefined1 *)((int)param_2 + iVar10 + 0x3d);
          uVar5 = *(undefined4 *)((int)param_2 + iVar10 + 0x30);
          uVar6 = (uint)*(byte *)((int)param_2 + iVar10 + 0x3e);
          uVar14 = *(undefined2 *)((int)param_2 + iVar10 + 0x3a);
          uVar7 = (uint)*(ushort *)((int)param_2 + iVar10 + 0x38);
          if (uVar2 == 0) {
            local_64 = 2;
            local_94 = 0;
          }
          else {
            local_64 = thunk_FUN_016d4a50(uVar2);
            if (local_64 == 0) {
              uVar5 = 2;
              local_64 = uVar2;
              goto LAB_00f1d564;
            }
            local_94 = unaff_r8;
          }
          FUN_016dd1aa(local_64,uVar5,uVar2);
          local_7c = *(undefined1 *)((int)param_2 + iVar10 + 0x3c);
          unaff_r11 = local_80;
        }
        uVar12 = uVar12 + 1;
        puVar13 = puVar13 + 9;
        puVar8 = (undefined8 *)(local_3c + iVar10);
        iVar10 = iVar10 + 0x48;
        *(undefined1 *)((int)puVar8 + 0x3d) = uVar3;
        *(undefined1 *)((int)puVar8 + 0x3c) = local_7c;
        *(uint *)(puVar8 + 5) = local_6c;
        *(uint *)(puVar8 + 6) = local_64;
        *(uint *)(puVar8 + 1) = uVar4;
        *(int *)((int)puVar8 + 0xc) = local_54;
        *(short *)(puVar8 + 7) = (short)uVar7;
        *(int *)((int)puVar8 + 0x14) = local_48;
        *(int *)((int)puVar8 + 0x24) = local_4c;
        *(int *)(puVar8 + 3) = local_58;
        *(int *)((int)puVar8 + 0x1c) = local_68;
        *(undefined4 *)(puVar8 + 8) = uVar9;
        *(char *)((int)puVar8 + 0x3e) = (char)uVar6;
        *(undefined2 *)((int)puVar8 + 0x3a) = uVar14;
        *(uint *)((int)puVar8 + 0x2c) = local_94;
        *(uint *)((int)puVar8 + 0x34) = unaff_r8;
        *(uint *)(puVar8 + 2) = unaff_r11;
        *(uint *)(puVar8 + 4) = uVar11;
        *puVar8 = uVar17;
      } while (param_3 != uVar12);
    }
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = param_3;
  return;
}

