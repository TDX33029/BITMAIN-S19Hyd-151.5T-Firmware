// FUN_01025ae8 @ 01025ae8 size=524 calls_out=8 calls_in=3
// strings: assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)

void FUN_01025ae8(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint local_50;
  undefined2 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_48 = *param_2;
  local_44 = param_2[1];
  local_40 = param_2[2];
  uStack_3c = param_2[3];
  uVar8 = param_2[4];
  local_4c = 0x904;
  uVar2 = *(uint *)(*param_3 + 4);
  local_50 = uVar8;
  FUN_01021398(&local_50,param_3);
  uVar1 = local_40;
  piVar6 = (int *)*param_3;
  uVar7 = param_3[1];
  uVar10 = piVar6[1];
  uVar12 = uVar10 ^ 0x7fffffff;
  if (uVar7 < (uVar10 ^ 0x7fffffff)) {
    uVar12 = uVar7;
  }
  if (uVar12 < local_40) {
    FUN_010259e4(param_3,&local_48,uVar12);
    piVar6 = (int *)*param_3;
    local_34 = local_44;
    uStack_30 = local_40;
    uStack_2c = uStack_3c;
    uVar4 = piVar6[1];
    local_38 = local_48;
    uStack_28 = uVar8;
  }
  else {
    uVar4 = uVar10;
    if (local_40 != 0) {
      uVar5 = piVar6[2];
      uVar8 = local_40;
      uVar11 = local_44;
      do {
        if (uVar5 == uVar4) {
          FUN_00f5f538(piVar6,0x40);
          uVar4 = piVar6[1];
          uVar5 = piVar6[2];
        }
        uVar9 = uVar5 - uVar4;
        if (uVar7 < uVar5 - uVar4) {
          uVar9 = uVar7;
        }
        if (uVar8 <= uVar9) {
          uVar9 = uVar8;
        }
        FUN_016dd1aa(*piVar6 + uVar4,uVar11,uVar9);
        uVar5 = piVar6[2];
        uVar4 = uVar5 - piVar6[1];
        if (uVar4 < uVar9) {
          local_38 = uVar9;
          local_34 = uVar4;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_38);
        }
        uVar7 = uVar7 - uVar9;
        uVar4 = piVar6[1] + uVar9;
        uVar11 = uVar11 + uVar9;
        uVar8 = uVar8 - uVar9;
        param_3[1] = uVar7;
        piVar6[1] = uVar4;
      } while (uVar8 != 0);
    }
    local_38 = 0;
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
    iVar3 = *piVar6;
    *(ushort *)(iVar3 + uVar2) =
         (ushort)(((uVar10 >> 8 & 0xff) << 0x10) >> 8) | (ushort)(uVar10 >> 0x10) & 0xff;
    *(char *)((ushort *)(iVar3 + uVar2) + 1) = (char)(uVar10 * 0x1000000 >> 0x18);
    if (local_38 != 0) {
      uVar2 = uVar2 + 4;
      if ((uint)piVar6[1] <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,piVar6[1],&DAT_01882ce0);
      }
      *(char *)(*piVar6 + uVar2) = *(char *)(*piVar6 + uVar2) + -4;
    }
    *param_1 = local_38;
    param_1[1] = local_34;
    param_1[2] = uStack_30;
    param_1[3] = uStack_2c;
    param_1[4] = uStack_28;
    if (uVar1 <= uVar12) {
      (**(code **)(local_48 + 0x10))(&uStack_3c,local_44,local_40);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c();
}

