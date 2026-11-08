// FUN_01039bf4 @ 01039bf4 size=1072 calls_out=10 calls_in=4
// strings: 

int FUN_01039bf4(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  ulonglong uVar21;
  uint local_7c;
  undefined4 *local_78;
  int local_74;
  int local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  ushort local_68 [2];
  uint local_64;
  
  if (*(short *)(param_1 + 0x24) == 1) {
    uVar7 = *(uint *)(param_1 + 0x30);
  }
  else {
    uVar7 = (uint)*(ushort *)(param_1 + 0x26);
  }
  bVar20 = 0x3ffffffe < uVar7;
  bVar19 = uVar7 == 0x3fffffff;
  uVar4 = uVar7 * 4;
  if (uVar7 < 0x40000000) {
    bVar20 = 0x7ffffffb < uVar4;
    bVar19 = uVar4 == 0x7ffffffc;
  }
  if (bVar20 && !bVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  iVar14 = 0;
  iVar9 = *(int *)(param_2 + 0xc);
  iVar5 = *(int *)(iVar9 + 8);
  if (uVar4 == 0) {
    puVar2 = (undefined4 *)&DAT_00000004;
    local_7c = 0;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(uVar4);
    local_7c = uVar7;
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar4);
    }
  }
  iVar16 = 1;
  local_74 = 0;
  local_6b = (undefined1)uVar7;
  local_6c = 0;
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  iVar12 = *(int *)(param_2 + 0x14);
  local_78 = puVar2;
  local_70 = param_1;
  while( true ) {
    uVar21 = FUN_01039230(&local_70);
    puVar1 = local_78;
    uVar7 = (uint)(uVar21 >> 0x20);
    if ((int)uVar21 == 0) break;
    if (0x3fffffffff < uVar21) {
      local_68[0] = 0xc;
      local_64 = uVar7;
      iVar3 = thunk_FUN_016d4a50(0x44);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x44);
      }
      goto LAB_01039dd0;
    }
    if (iVar16 - 1U == local_7c) {
      FUN_01286e0c(&local_7c);
      puVar2 = local_78;
    }
    *(int *)((int)puVar2 + iVar14) = iVar12;
    local_68[0] = CONCAT11(local_68[0]._1_1_,(char)(uVar21 >> 0x20));
    local_74 = iVar16;
    iVar3 = FUN_0105dce0(iVar9,uVar8,iVar12,local_68,1);
    if (iVar3 != 0) goto LAB_01039f54;
    iVar12 = iVar12 + 1;
    *(int *)(param_2 + 0x14) = iVar12;
    iVar3 = FUN_0105dce0(iVar9,uVar8,iVar12,(int)uVar21,uVar7);
    if (iVar3 != 0) goto LAB_01039f54;
    iVar12 = iVar12 + uVar7;
    iVar16 = iVar16 + 1;
    iVar14 = iVar14 + 4;
    *(int *)(param_2 + 0x14) = iVar12;
  }
  if (iVar16 != 1) {
    if (param_3 == 0) {
      iVar9 = 0;
      do {
        uVar21 = FUN_0104c364(param_2,*(undefined4 *)((int)puVar1 + iVar9),iVar12);
        uVar7 = (uint)(uVar21 >> 0x20);
        uVar4 = *(uint *)((int)puVar1 + iVar9);
        if (((uVar21 & 1) != 0) && ((uVar7 & 0xffff) < 0x4000)) {
          iVar5 = *(int *)(param_2 + 0xc);
          *(uint *)(param_2 + 0x14) = uVar4;
          if (uVar4 <= *(uint *)(iVar5 + 8)) {
            *(uint *)(iVar5 + 8) = uVar4;
          }
          uVar15 = *(uint *)(param_2 + 8);
          if (uVar15 == 0) goto LAB_01039f14;
          iVar9 = 0;
          puVar13 = *(uint **)(param_2 + 4);
          puVar11 = puVar13;
          uVar10 = uVar15;
          goto LAB_01039ef4;
        }
        FUN_0104c574(param_2,uVar4,iVar12);
        iVar9 = iVar9 + 4;
      } while (iVar14 != iVar9);
    }
    else {
      puVar2 = local_78;
      do {
        uVar7 = FUN_0104c364(param_2,*puVar2,iVar12);
        if ((uVar7 & 1) == 0) {
          FUN_0104c574(param_2,*puVar2,iVar12);
        }
        iVar14 = iVar14 + -4;
        puVar2 = puVar2 + 1;
      } while (iVar14 != 0);
    }
  }
  iVar9 = *(int *)(param_2 + 0xc);
  iVar14 = *(int *)(param_2 + 0x14);
  local_68[0] = local_68[0] & 0xff00;
  iVar3 = FUN_0105dce0(iVar9,*(undefined4 *)(param_2 + 0x10),iVar14,local_68,1);
  if (iVar3 == 0) {
    iVar9 = *(int *)(iVar9 + 8);
    *(int *)(param_2 + 0x14) = iVar14 + 1;
    uVar7 = iVar9 - iVar5;
    iVar3 = 0;
    if (0xff < uVar7) {
      local_68[0] = 8;
      local_64 = uVar7;
      iVar3 = thunk_FUN_016d4a50(0x44);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x44);
      }
LAB_01039dd0:
      FUN_016dd1aa(iVar3,local_68,0x44);
    }
  }
LAB_01039f54:
  if (local_7c != 0) {
    thunk_FUN_016d3fb4(local_78);
  }
  return iVar3;
LAB_01039ef4:
  uVar10 = uVar10 - 1;
  if (uVar4 <= *puVar11) {
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(puVar11[2]);
    }
    if (iVar9 + 1U < uVar15) {
      puVar11 = puVar11 + 6;
      do {
        if (puVar11[-2] < uVar4) {
          uVar17 = puVar11[-1];
          uVar18 = *puVar11;
          uVar15 = puVar11[1];
          puVar6 = puVar13 + iVar9 * 4;
          *puVar6 = puVar11[-2];
          iVar9 = iVar9 + 1;
          puVar6[1] = uVar17;
          puVar6[2] = uVar18;
          puVar6[3] = uVar15;
        }
        else if (puVar11[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar11);
        }
        puVar11 = puVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    *(int *)(param_2 + 8) = iVar9;
LAB_01039f14:
    local_68[0] = (ushort)((uVar7 & 0xff) << 8) | (ushort)(uVar21 >> 0x28) & 0xff | 0xc0;
    iVar3 = FUN_0105dce0(iVar5,*(undefined4 *)(param_2 + 0x10),uVar4,local_68,2);
    if (iVar3 == 0) {
      *(uint *)(param_2 + 0x14) = uVar4 + 2;
    }
    goto LAB_01039f54;
  }
  puVar11 = puVar11 + 4;
  iVar9 = iVar9 + 1;
  if (uVar10 == 0) goto LAB_01039f14;
  goto LAB_01039ef4;
}

