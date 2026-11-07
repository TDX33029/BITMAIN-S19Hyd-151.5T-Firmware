// FUN_01022ba8 @ 01022ba8 size=760 calls_out=9 calls_in=3
// strings: assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01022ba8(uint *param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  uint local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  uint local_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint local_28;
  
  local_dc = *(undefined1 *)(param_2 + 0xa8);
  uVar4 = *(uint *)(param_2 + 0xa0);
  local_db = 5;
  uVar8 = *(uint *)(param_2 + 0xa4);
  local_e0 = uVar4;
  FUN_016dd1aa(&local_c8,param_2,0xa0);
  FUN_01022f3c(&local_d8,&local_c8,param_3);
  uVar2 = *(uint *)(*param_4 + 4);
  FUN_01021398(&local_e0,param_4);
  piVar6 = (int *)*param_4;
  uVar11 = param_4[1];
  local_28 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18;
  uVar12 = piVar6[1];
  uVar8 = uVar12 ^ 0x7fffffff;
  if (uVar11 < (uVar12 ^ 0x7fffffff)) {
    uVar8 = uVar11;
  }
  if (uVar8 < 4) {
    local_c8 = 4;
    local_c4 = uVar8;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_c8);
  }
  uVar5 = piVar6[2];
  puVar7 = &local_28;
  uVar9 = 4;
  uVar8 = uVar12;
  do {
    if (uVar5 == uVar8) {
      FUN_00f5f538(piVar6,0x40);
      uVar8 = piVar6[1];
      uVar5 = piVar6[2];
    }
    uVar13 = uVar5 - uVar8;
    if (uVar11 < uVar5 - uVar8) {
      uVar13 = uVar11;
    }
    if (uVar9 <= uVar13) {
      uVar13 = uVar9;
    }
    FUN_016dd1aa(*piVar6 + uVar8,puVar7,uVar13);
    uVar1 = local_d0;
    uVar5 = piVar6[2];
    uVar8 = uVar5 - piVar6[1];
    if (uVar8 < uVar13) {
      local_c8 = uVar13;
      local_c4 = uVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_c8);
    }
    uVar11 = uVar11 - uVar13;
    uVar8 = piVar6[1] + uVar13;
    puVar7 = (uint *)((int)puVar7 + uVar13);
    uVar9 = uVar9 - uVar13;
    param_4[1] = uVar11;
    piVar6[1] = uVar8;
  } while (uVar9 != 0);
  uVar9 = uVar8 ^ 0x7fffffff;
  if (uVar11 < (uVar8 ^ 0x7fffffff)) {
    uVar9 = uVar11;
  }
  if (uVar9 < local_d0) {
    FUN_010259e4(param_4,&local_d8,uVar9);
    piVar6 = (int *)*param_4;
    local_c4 = local_d4;
    uStack_c0 = local_d0;
    uStack_bc = uStack_cc;
    uVar8 = piVar6[1];
    local_c8 = local_d8;
    local_b8 = uVar4;
  }
  else {
    if (local_d0 != 0) {
      uVar4 = local_d4;
      uVar13 = local_d0;
      do {
        if (uVar5 == uVar8) {
          FUN_00f5f538(piVar6,0x40);
          uVar8 = piVar6[1];
          uVar5 = piVar6[2];
        }
        uVar10 = uVar5 - uVar8;
        if (uVar11 < uVar5 - uVar8) {
          uVar10 = uVar11;
        }
        if (uVar13 <= uVar10) {
          uVar10 = uVar13;
        }
        FUN_016dd1aa(*piVar6 + uVar8,uVar4,uVar10);
        uVar5 = piVar6[2];
        uVar8 = uVar5 - piVar6[1];
        if (uVar8 < uVar10) {
          local_c8 = uVar10;
          local_c4 = uVar8;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_c8);
        }
        uVar11 = uVar11 - uVar10;
        uVar8 = piVar6[1] + uVar10;
        uVar4 = uVar4 + uVar10;
        uVar13 = uVar13 - uVar10;
        param_4[1] = uVar11;
        piVar6[1] = uVar8;
      } while (uVar13 != 0);
    }
    local_c8 = 0;
  }
  uVar12 = uVar8 - uVar12;
  if (uVar12 >> 0x18 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)",0x3e,&DAT_01882cd0
                );
  }
  bVar15 = 0xfffffffb < uVar2;
  bVar14 = uVar2 == 0xfffffffc;
  if (uVar2 < 0xfffffffd) {
    bVar15 = uVar8 <= uVar2 + 3;
    bVar14 = uVar2 + 3 == uVar8;
  }
  if (!bVar15 || bVar14) {
    iVar3 = *piVar6;
    *(ushort *)(iVar3 + uVar2) =
         (ushort)(((uVar12 >> 8 & 0xff) << 0x10) >> 8) | (ushort)(uVar12 >> 0x10) & 0xff;
    *(char *)((ushort *)(iVar3 + uVar2) + 1) = (char)(uVar12 * 0x1000000 >> 0x18);
    if (local_c8 != 0) {
      uVar2 = uVar2 + 4;
      if ((uint)piVar6[1] <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,piVar6[1],&DAT_01882ce0);
      }
      *(char *)(*piVar6 + uVar2) = *(char *)(*piVar6 + uVar2) + -4;
    }
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = uStack_c0;
    param_1[3] = uStack_bc;
    param_1[4] = local_b8;
    if (uVar1 <= uVar9) {
      (**(code **)(local_d8 + 0x10))(&uStack_cc,local_d4,local_d0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c();
}

