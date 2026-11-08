// FUN_012be674 @ 012be674 size=592 calls_out=6 calls_in=0
// strings: explicit panic

void FUN_012be674(int *param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 unaff_d8;
  undefined8 uVar10;
  uint local_48;
  uint local_44;
  undefined8 local_40;
  uint *local_38;
  uint local_34;
  
  uVar10 = (**(code **)(param_3 + 0x14))(param_2);
  puVar1 = (uint *)uVar10;
  (**(code **)((int)((ulonglong)uVar10 >> 0x20) + 0xc))(&local_48,puVar1);
  if ((local_48 != 0x40a95d19 || (uint)local_40 != 0x1664936) ||
      (local_44 != 0x2445d8da || local_40._4_4_ != 0x67394fb6)) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724("explicit panic",0xe,&DAT_01890758);
  }
  puVar6 = (uint *)0x0;
  bVar9 = (*puVar1 & 1) == 0;
  if (bVar9) {
    uVar3 = puVar1[4];
  }
  else {
    unaff_d8 = *(undefined8 *)(puVar1 + 2);
    uVar3 = puVar1[4];
  }
  if (uVar3 != 0) {
    puVar6 = (uint *)thunk_FUN_016d4a50(0x10);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    FUN_012c14a0(&local_48,uVar3);
    *puVar6 = local_48;
    puVar6[1] = local_44;
    puVar6[2] = (uint)local_40;
    puVar6[3] = local_40._4_4_;
  }
  local_34 = puVar1[5];
  local_44 = 0;
  local_48 = (uint)!bVar9;
  local_40 = unaff_d8;
  local_38 = puVar6;
  puVar1 = (uint *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x18);
  }
  *puVar1 = local_48;
  puVar1[1] = local_44;
  puVar1[2] = (uint)local_40;
  puVar1[3] = local_40._4_4_;
  puVar1[4] = (uint)local_38;
  puVar1[5] = local_34;
  iVar8 = *param_1;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = (int)puVar1;
  if (iVar8 != 0) {
    piVar4 = *(int **)(iVar8 + 0x10);
    if (piVar4 != (int *)0x0) {
      iVar2 = piVar4[1];
      if (iVar2 != 0) {
        iVar7 = piVar4[3];
        if (iVar7 != 0) {
          puVar6 = (uint *)*piVar4;
          puVar1 = puVar6 + 1;
          uVar3 = ~*puVar6 & 0x80808080;
          do {
            puVar5 = puVar1;
            if (uVar3 == 0) {
              do {
                puVar1 = puVar5 + 1;
                uVar3 = *puVar5;
                puVar6 = puVar6 + -0x34;
                puVar5 = puVar1;
              } while ((uVar3 & 0x80808080) == 0x80808080);
              uVar3 = uVar3 & 0x80808080 ^ 0x80808080;
            }
            FUN_00a64f9c(puVar6 + (short)-(short)((uint)LZCOUNT(uVar3 << 0x18 |
                                                                (uVar3 >> 8 & 0xff) << 0x10 |
                                                                (uVar3 >> 0x10 & 0xff) << 8 |
                                                                uVar3 >> 0x18) >> 3) * 0xd + -0xd);
            iVar7 = iVar7 + -1;
            uVar3 = uVar3 - 1 & uVar3;
          } while (iVar7 != 0);
        }
        if (iVar2 * 0x35 != -0x39) {
          thunk_FUN_016d3fb4(*piVar4 + iVar2 * -0x34 + -0x34);
        }
      }
      thunk_FUN_016d3fb4(piVar4);
    }
    thunk_FUN_016d3fb4(iVar8);
  }
  return;
}

