// FUN_0124b144 @ 0124b144 size=568 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0124b144(int param_1,char *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int local_2c;
  int local_28;
  
  if ((*param_2 != '\x05') || (*(int *)(param_1 + 8) == 0)) {
    return 1;
  }
  local_28 = *(int *)(param_1 + 4);
  iVar2 = local_28 + *(int *)(param_1 + 8) * 0x20;
  iVar3 = *(int *)(param_2 + 4);
  iVar5 = *(int *)(param_2 + 8);
  do {
    if (iVar3 != 0) {
      uVar7 = *(undefined4 *)(local_28 + 4);
      uVar14 = *(uint *)(local_28 + 8);
      iVar13 = iVar3;
      local_2c = iVar5;
      while( true ) {
        iVar10 = iVar13 + 0x10c;
        uVar1 = *(ushort *)(iVar13 + 0x192);
        uVar15 = 0xffffffff;
        iVar12 = (uint)uVar1 * 0xc;
        do {
          uVar6 = (uint)uVar1;
          if (iVar12 == 0) goto joined_r0x0124b274;
          uVar9 = *(uint *)(iVar10 + 8);
          uVar6 = uVar9;
          if (uVar14 < uVar9) {
            uVar6 = uVar14;
          }
          iVar4 = FUN_016dd50a(uVar7,*(undefined4 *)(iVar10 + 4),uVar6);
          if (iVar4 == 0) {
            iVar4 = uVar14 - uVar9;
          }
          iVar12 = iVar12 + -0xc;
          uVar15 = uVar15 + 1;
          iVar10 = iVar10 + 0xc;
        } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
        uVar6 = uVar15;
        if (0 < iVar4 == iVar4 < 0) break;
joined_r0x0124b274:
        if (local_2c == 0) goto LAB_0124b1a0;
        local_2c = local_2c + -1;
        iVar13 = *(int *)(iVar13 + uVar6 * 4 + 0x198);
      }
      uVar14 = 1;
      iVar12 = *(int *)(local_28 + 0xc);
      if ((int)*(uint *)(iVar12 + 8) < 0) {
        uVar14 = *(uint *)(iVar12 + 8) ^ 0x80000000;
      }
      if (uVar14 == 0) {
        if (*(int *)(iVar12 + 0xc) != 0) {
          return 0;
        }
      }
      else {
        iVar13 = iVar13 + uVar15 * 0x18;
        if (uVar14 == 1) {
          iVar10 = *(int *)(iVar12 + 0x10);
          puVar8 = *(undefined4 **)(iVar12 + 0xc);
          if (iVar10 == 1) {
            iVar13 = (**(code **)(puVar8[1] + 0x10))(*puVar8,iVar13,param_3);
            if (iVar13 == 0) {
              return 0;
            }
          }
          else if (iVar10 != 0) {
            puVar11 = puVar8 + iVar10 * 8;
            do {
              iVar12 = (**(code **)(puVar8[1] + 0x10))(*puVar8,iVar13,param_3);
              if (iVar12 == 0) {
                return 0;
              }
              puVar8 = puVar8 + 8;
            } while (puVar8 != puVar11);
          }
        }
        else {
          puVar8 = *(undefined4 **)(iVar12 + 0x10);
          iVar12 = *(int *)(iVar12 + 0x14) << 5;
          while (iVar12 != 0) {
            iVar10 = (**(code **)(puVar8[1] + 0x10))(*puVar8,iVar13,param_3);
            iVar12 = iVar12 + -0x20;
            puVar8 = puVar8 + 8;
            if (iVar10 == 0) {
              return 0;
            }
          }
        }
      }
    }
LAB_0124b1a0:
    local_28 = local_28 + 0x20;
    if (local_28 == iVar2) {
      return 1;
    }
  } while( true );
}

