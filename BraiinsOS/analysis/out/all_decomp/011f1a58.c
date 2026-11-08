// FUN_011f1a58 @ 011f1a58 size=396 calls_out=4 calls_in=5
// strings: 

int FUN_011f1a58(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  uint local_f8;
  undefined1 *local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  int *local_a4;
  undefined4 local_a0;
  undefined1 *puStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  
  local_f8 = local_f8 & 0xffffff00;
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  uVar8 = param_1[4];
  puVar3 = (undefined4 *)((uint)&local_e0 | 4);
  *puVar3 = *param_1;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar3[4] = uVar8;
  local_e0 = &DAT_80000018;
  DataMemoryBarrier(0xb);
  if (DAT_018da8bc != 0) {
    FUN_0120d52c();
  }
  do {
    iVar4 = *DAT_018da8b4;
    bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
  } while (!bVar2);
  *DAT_018da8b4 = iVar4 + 1;
  if (-1 < iVar4) {
    piVar10 = DAT_018da8b4;
    uVar5 = DAT_018da8b8;
    DataMemoryBarrier(0xb);
    if (DAT_018da8bc != 0) {
      FUN_0120d52c();
    }
    do {
      iVar4 = *DAT_018da8b4;
      bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
    } while (!bVar2);
    *DAT_018da8b4 = iVar4 + 1;
    if (-1 < iVar4) {
      piVar9 = DAT_018da8b4;
      uVar6 = DAT_018da8b8;
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar4 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar4 + 1;
      if (-1 < iVar4) {
        local_a0 = DAT_018da8b8;
        local_a4 = DAT_018da8b4;
        local_50 = local_f8;
        puStack_88 = local_e0;
        uStack_84 = uStack_dc;
        uStack_80 = uStack_d8;
        uStack_7c = uStack_d4;
        local_78 = local_d0;
        uStack_74 = uStack_cc;
        uStack_70 = uStack_c8;
        uStack_6c = uStack_c4;
        uStack_68 = uStack_c0;
        local_64 = local_bc;
        uStack_60 = uStack_b8;
        uStack_5c = uStack_b4;
        uStack_58 = uStack_b0;
        uStack_54 = uStack_ac;
        local_a8 = 1;
        local_38 = piVar10;
        local_34 = uVar5;
        local_30 = piVar9;
        local_2c = uVar6;
        iVar4 = thunk_FUN_016d4a50(0x80);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar4,&local_a8,0x80);
        return iVar4;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11f1bc8);
  (*pcVar1)();
}

