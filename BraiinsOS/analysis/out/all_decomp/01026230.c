// FUN_01026230 @ 01026230 size=556 calls_out=9 calls_in=3
// strings: assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01026230(uint *param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
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
  uint uStack_b8;
  
  local_dc = *(undefined1 *)(param_2 + 0xac);
  uVar7 = *(uint *)(param_2 + 0xa8);
  local_db = 1;
  local_e0 = uVar7;
  FUN_016dd1aa(&local_c8,param_2,0xa0);
  FUN_01022f3c(&local_d8,&local_c8,param_3);
  uVar2 = *(uint *)(*param_4 + 4);
  FUN_01021398(&local_e0,param_4);
  uVar1 = local_d0;
  piVar8 = (int *)*param_4;
  uVar9 = param_4[1];
  uVar10 = piVar8[1];
  uVar11 = uVar10 ^ 0x7fffffff;
  if (uVar9 < (uVar10 ^ 0x7fffffff)) {
    uVar11 = uVar9;
  }
  if (uVar11 < local_d0) {
    FUN_010259e4(param_4,&local_d8,uVar11);
    piVar8 = (int *)*param_4;
    local_c4 = local_d4;
    uStack_c0 = local_d0;
    uStack_bc = uStack_cc;
    uVar4 = piVar8[1];
    local_c8 = local_d8;
    uStack_b8 = uVar7;
  }
  else {
    uVar4 = uVar10;
    if (local_d0 != 0) {
      uVar5 = piVar8[2];
      uVar7 = local_d4;
      uVar12 = local_d0;
      do {
        if (uVar5 == uVar4) {
          FUN_00f5f538(piVar8,0x40);
          uVar4 = piVar8[1];
          uVar5 = piVar8[2];
        }
        uVar6 = uVar5 - uVar4;
        if (uVar9 < uVar5 - uVar4) {
          uVar6 = uVar9;
        }
        if (uVar12 <= uVar6) {
          uVar6 = uVar12;
        }
        FUN_016dd1aa(*piVar8 + uVar4,uVar7,uVar6);
        uVar5 = piVar8[2];
        uVar4 = uVar5 - piVar8[1];
        if (uVar4 < uVar6) {
          local_c8 = uVar6;
          local_c4 = uVar4;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_c8);
        }
        uVar9 = uVar9 - uVar6;
        uVar4 = piVar8[1] + uVar6;
        uVar7 = uVar7 + uVar6;
        uVar12 = uVar12 - uVar6;
        param_4[1] = uVar9;
        piVar8[1] = uVar4;
      } while (uVar12 != 0);
    }
    local_c8 = 0;
  }
  uVar10 = uVar4 - uVar10;
  if (uVar10 >> 0x18 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)",0x3e,&DAT_01882cd0
                );
  }
  bVar14 = 0xfffffffb < uVar2;
  bVar13 = uVar2 == 0xfffffffc;
  if (uVar2 < 0xfffffffd) {
    bVar14 = uVar4 <= uVar2 + 3;
    bVar13 = uVar2 + 3 == uVar4;
  }
  if (!bVar14 || bVar13) {
    iVar3 = *piVar8;
    *(ushort *)(iVar3 + uVar2) =
         (ushort)(((uVar10 >> 8 & 0xff) << 0x10) >> 8) | (ushort)(uVar10 >> 0x10) & 0xff;
    *(char *)((ushort *)(iVar3 + uVar2) + 1) = (char)(uVar10 * 0x1000000 >> 0x18);
    if (local_c8 != 0) {
      uVar2 = uVar2 + 4;
      if ((uint)piVar8[1] <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,piVar8[1],&DAT_01882ce0);
      }
      *(char *)(*piVar8 + uVar2) = *(char *)(*piVar8 + uVar2) + -4;
    }
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = uStack_c0;
    param_1[3] = uStack_bc;
    param_1[4] = uStack_b8;
    if (uVar1 <= uVar11) {
      (**(code **)(local_d8 + 0x10))(&uStack_cc,local_d4,local_d0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c();
}

