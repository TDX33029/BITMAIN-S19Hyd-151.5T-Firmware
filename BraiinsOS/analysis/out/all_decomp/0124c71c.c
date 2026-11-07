// FUN_0124c71c @ 0124c71c size=1048 calls_out=16 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_0124c71c(undefined4 param_1,char *param_2,undefined4 param_3,int param_4,
                   undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  uint local_28;
  
  if (*param_2 != '\x05') {
    return (uint *)&DAT_00000001;
  }
  local_80 = *(uint *)(param_2 + 4);
  local_7c = *(uint *)(param_2 + 8);
  local_68 = *(undefined4 *)(param_2 + 0xc);
  local_8c = 0;
  local_94 = 0;
  local_74 = 0;
  if (local_80 == 0) {
    local_68 = 0;
  }
  local_84 = 0;
  local_88 = (uint)(local_80 != 0);
  local_90 = 4;
  local_78 = local_88;
  local_70 = local_80;
  local_6c = local_7c;
  do {
    iVar2 = FUN_00f45584(&local_88);
    if (iVar2 == 0) {
      local_80 = local_94;
      local_7c = local_90 + local_8c * 4;
      local_88 = local_90;
      local_84 = local_90;
      puVar8 = (uint *)thunk_FUN_016d4a50(0x10);
      if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *puVar8 = local_88;
      puVar8[1] = local_84;
      puVar8[2] = local_80;
      puVar8[3] = local_7c;
      return puVar8;
    }
    iVar11 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 4);
    if (iVar11 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(iVar11);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar11);
      }
    }
    FUN_016dd1aa(iVar2,uVar14,iVar11);
    local_60[0] = 3;
    local_5c = iVar11;
    local_58 = iVar2;
    local_54 = iVar11;
    uVar17 = FUN_011cf8a8(param_1,local_60,param_3,param_4,param_5);
    puVar9 = (undefined4 *)((ulonglong)uVar17 >> 0x20);
    uVar14 = (undefined4)uVar17;
    pcVar3 = (code *)puVar9[3];
    while (iVar2 = (*pcVar3)(uVar14), iVar2 != 0) {
      piVar4 = *(int **)(iVar2 + 0x78);
      do {
        iVar11 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar11 + 1;
      if (iVar11 < 0) {
LAB_0124cb3c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xfdee,0x124cb3c);
        (*pcVar3)();
      }
      piVar4 = *(int **)(iVar2 + 0x78);
      uVar5 = *(uint *)(iVar2 + 0x7c);
      do {
        iVar11 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_0124cb3c;
      if (param_4 == 0) {
        local_44[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar6 = *(int **)(param_4 + 0xc);
        do {
          iVar11 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar11 + 1;
        if (iVar11 < 0) goto LAB_0124cb3c;
        uVar10 = *(undefined4 *)(param_4 + 0x10);
        uVar15 = *(undefined4 *)(param_4 + 0xc);
        uVar12 = (*(int **)(param_4 + 4))[1];
        uVar16 = 0;
        if (uVar12 <= uVar5) {
          iVar11 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar4 + 2,uVar12);
          if (iVar11 != 0) {
            uVar12 = 0;
          }
          uVar16 = uVar12;
        }
        uVar12 = uVar5 - uVar16;
        if (0x7ffffff4 < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,local_44,&DAT_018574d8,&DAT_01857540);
        }
        uVar13 = uVar12 + 0xb & 0xfffffffc;
        puVar7 = (undefined4 *)thunk_FUN_016d4a50(uVar13);
        if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar13);
        }
        *puVar7 = 1;
        puVar7[1] = 1;
        FUN_016dd1aa(puVar7 + 2,(int)(piVar4 + 2) + uVar16,uVar12);
        local_38 = 3;
        local_44[0] = 2;
        local_34 = uVar15;
        local_30 = uVar10;
        local_2c = puVar7;
        local_28 = uVar12;
      }
      uVar17 = FUN_01238114(param_3);
      uVar10 = FUN_011f0ab8(iVar2);
      uVar10 = FUN_011f0950(piVar4,uVar5,local_44,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                            param_2,uVar10);
      uVar16 = local_8c;
      if (local_8c == local_94) {
        FUN_011c4424(&local_94);
      }
      *(undefined4 *)(local_90 + uVar16 * 4) = uVar10;
      local_8c = uVar16 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(piVar4,uVar5);
      }
    }
    if ((code *)*puVar9 != (code *)0x0) {
      (*(code *)*puVar9)(uVar14);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(uVar14);
    }
    FUN_01164f34(local_60);
  } while( true );
}

