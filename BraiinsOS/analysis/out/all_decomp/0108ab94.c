// FUN_0108ab94 @ 0108ab94 size=652 calls_out=5 calls_in=1
// strings: 

void FUN_0108ab94(undefined4 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined4 *local_40;
  uint local_3c;
  int local_38;
  undefined4 *local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    local_40 = (undefined4 *)thunk_FUN_016d4a50(0x34);
    if (local_40 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    uVar14 = (uint)(ushort)param_2[0x19];
    *(undefined2 *)((int)local_40 + 0x32) = 0;
    *local_40 = 0;
    local_3c = 0;
    uVar13 = 0;
    if (uVar14 != 0) {
      uVar13 = 0;
      do {
        uVar3 = *(ushort *)((int)local_40 + 0x32);
        if (10 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        uVar1 = param_2[2];
        *(ushort *)((int)local_40 + 0x32) = uVar3 + 1;
        uVar13 = uVar13 + 1;
        uVar2 = param_2[3];
        *(undefined2 *)(local_40 + uVar3 + 1) = uVar1;
        *(undefined2 *)((int)(local_40 + uVar3 + 1) + 2) = uVar2;
        param_2 = param_2 + 2;
      } while (uVar14 != uVar13);
      uVar13 = uVar14;
    }
    *param_1 = local_40;
    param_1[1] = 0;
    param_1[2] = uVar13;
    return;
  }
  FUN_0108ab94(&local_40,*(undefined4 *)(param_2 + 0x1a));
  uVar13 = local_3c;
  if (local_40 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(100);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,100);
  }
  *(undefined2 *)((int)puVar6 + 0x32) = 0;
  puVar6[0xd] = local_40;
  bVar16 = 0xfffffffe < local_3c;
  local_3c = local_3c + 1;
  *puVar6 = 0;
  if (bVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(undefined2 *)(local_40 + 0xc) = 0;
  *local_40 = puVar6;
  local_40 = puVar6;
  if (param_2[0x19] != 0) {
    puVar15 = (undefined4 *)(param_2 + 0x1c);
    uVar14 = 0;
    iVar12 = local_38;
    do {
      uVar1 = *(undefined2 *)((int)puVar15 + -0x32);
      uVar2 = *(undefined2 *)(puVar15 + -0xd);
      FUN_0108ab94(&local_30,*puVar15,param_3 + -1);
      iVar5 = local_28;
      if (local_30 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x34);
        if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x34);
        }
        *(undefined2 *)((int)puVar7 + 0x32) = 0;
        *puVar7 = 0;
        if (uVar13 != 0) goto LAB_0108ad9c;
      }
      else {
        puVar7 = local_30;
        if (local_2c != uVar13) {
LAB_0108ad9c:
          uVar10 = 0x30;
          puVar11 = &DAT_018ac46c;
          puVar8 = &DAT_00413115;
          goto LAB_0108adc8;
        }
      }
      uVar9 = (uint)*(ushort *)((int)puVar6 + 0x32);
      if (10 < uVar9) {
        uVar10 = 0x20;
        puVar8 = &DAT_00565dd0;
        puVar11 = &DAT_018af428;
LAB_0108adc8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar8,uVar10,puVar11);
      }
      uVar4 = (undefined2)(uVar9 + 1);
      *(undefined2 *)((int)puVar6 + 0x32) = uVar4;
      puVar15 = puVar15 + 1;
      uVar14 = uVar14 + 1;
      (puVar6 + 0xd)[uVar9 + 1] = puVar7;
      *(undefined2 *)(puVar6 + uVar9 + 1) = uVar2;
      *(undefined2 *)((int)(puVar6 + uVar9 + 1) + 2) = uVar1;
      *(undefined2 *)(puVar7 + 0xc) = uVar4;
      *puVar7 = puVar6;
      iVar12 = iVar5 + iVar12 + 1;
    } while (uVar14 < (ushort)param_2[0x19]);
    local_38 = iVar12;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

