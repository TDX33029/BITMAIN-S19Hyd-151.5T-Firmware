// FUN_00b1c730 @ 00b1c730 size=404 calls_out=2 calls_in=59
// strings: 

void FUN_00b1c730(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined4 local_b8 [18];
  undefined1 auStack_70 [76];
  
  uVar14 = *(uint *)(param_2 + 8);
  if (uVar14 == 0) {
    uVar6 = 2;
  }
  else {
    uVar13 = uVar14 - 1;
    iVar12 = *(int *)(param_2 + 4);
    *(uint *)(param_2 + 8) = uVar13;
    uVar10 = (uint)local_b8 | 4;
    puVar3 = (undefined4 *)(iVar12 + uVar13 * 0x48);
    uVar6 = *puVar3;
    FUN_01bed4e2(uVar10,puVar3 + 1,0x44);
    local_b8[0] = uVar6;
    if (uVar13 != 0) {
      iVar1 = 0;
      do {
        uVar6 = local_b8[iVar1];
        local_b8[iVar1] = *(undefined4 *)(iVar12 + iVar1 * 4);
        *(undefined4 *)(iVar12 + iVar1 * 4) = uVar6;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x12);
      FUN_01bed4e2(auStack_70,iVar12,0x48);
      uVar7 = uVar14 - 3;
      uVar8 = 0;
      if (uVar13 < 2) {
        uVar7 = 0;
      }
      uVar11 = 1;
      iVar1 = 0;
      if (3 < uVar14) {
        uVar4 = 0;
        do {
          uVar8 = uVar11;
          iVar1 = iVar12 + iVar1 * 0x48;
          iVar2 = iVar12 + uVar8 * 0x48;
          iVar5 = *(int *)(iVar1 + 0xd4);
          iVar9 = *(int *)(iVar2 + 0x44);
          bVar15 = *(uint *)(iVar2 + 0x40) < *(uint *)(iVar1 + 0xd0);
          if ((int)(iVar9 - (iVar5 + (uint)bVar15)) < 0 ==
              (SBORROW4(iVar9,iVar5) != SBORROW4(iVar9 - iVar5,(uint)bVar15))) {
            uVar8 = uVar8 + 1;
          }
          FUN_01bed4e2(iVar12 + uVar4 * 0x48,iVar12 + uVar8 * 0x48,0x48);
          uVar11 = uVar8 << 1 | 1;
          iVar1 = uVar8 << 1;
          uVar4 = uVar8;
        } while (uVar8 * 2 < uVar7);
      }
      if (iVar1 == uVar14 - 3) {
        FUN_01bed4e2(iVar12 + uVar8 * 0x48,iVar12 + uVar11 * 0x48,0x48);
        uVar8 = uVar11;
      }
      FUN_01bed4e2(iVar12 + uVar8 * 0x48,auStack_70,0x48);
      FUN_00b1c8e0(iVar12,uVar13,uVar8);
    }
    uVar6 = local_b8[0];
    FUN_01bed4e2(auStack_70,uVar10,0x44);
  }
  *param_1 = uVar6;
  FUN_01bed4e2(param_1 + 1,auStack_70,0x44);
  return;
}

