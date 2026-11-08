// FUN_011ada2c @ 011ada2c size=556 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_011ada2c(int param_1,char *param_2,undefined4 param_3)

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
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
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
      uVar12 = *(uint *)(local_28 + 8);
      iVar13 = iVar3;
      local_2c = iVar5;
      while( true ) {
        iVar11 = iVar13 + 0x10c;
        uVar1 = *(ushort *)(iVar13 + 0x192);
        uVar15 = 0xffffffff;
        iVar14 = (uint)uVar1 * 0xc;
        do {
          uVar6 = (uint)uVar1;
          if (iVar14 == 0) goto joined_r0x011adb60;
          uVar9 = *(uint *)(iVar11 + 8);
          uVar6 = uVar9;
          if (uVar12 < uVar9) {
            uVar6 = uVar12;
          }
          iVar4 = FUN_016dd50a(uVar7,*(undefined4 *)(iVar11 + 4),uVar6);
          if (iVar4 == 0) {
            iVar4 = uVar12 - uVar9;
          }
          iVar14 = iVar14 + -0xc;
          uVar15 = uVar15 + 1;
          iVar11 = iVar11 + 0xc;
        } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
        uVar6 = uVar15;
        if (0 < iVar4 == iVar4 < 0) break;
joined_r0x011adb60:
        if (local_2c == 0) goto LAB_011ada8c;
        local_2c = local_2c + -1;
        iVar13 = *(int *)(iVar13 + uVar6 * 4 + 0x198);
      }
      uVar12 = 1;
      iVar13 = *(int *)(local_28 + 0xc);
      if ((int)*(uint *)(iVar13 + 8) < 0) {
        uVar12 = *(uint *)(iVar13 + 8) ^ 0x80000000;
      }
      if (uVar12 == 0) {
        if (*(int *)(iVar13 + 0xc) != 0) {
          return 0;
        }
      }
      else if (uVar12 == 1) {
        puVar8 = *(undefined4 **)(iVar13 + 0xc);
        iVar13 = *(int *)(iVar13 + 0x10);
        if (iVar13 == 1) {
          iVar13 = (**(code **)(puVar8[1] + 0x10))(*puVar8,param_2,param_3);
          if (iVar13 == 0) {
            return 0;
          }
        }
        else if (iVar13 != 0) {
          puVar10 = puVar8 + iVar13 * 8;
          do {
            iVar13 = (**(code **)(puVar8[1] + 0x10))(*puVar8,param_2,param_3);
            if (iVar13 == 0) {
              return 0;
            }
            puVar8 = puVar8 + 8;
          } while (puVar8 != puVar10);
        }
      }
      else {
        puVar8 = *(undefined4 **)(iVar13 + 0x10);
        iVar13 = *(int *)(iVar13 + 0x14) << 5;
        while (iVar13 != 0) {
          iVar14 = (**(code **)(puVar8[1] + 0x10))(*puVar8,param_2,param_3);
          iVar13 = iVar13 + -0x20;
          puVar8 = puVar8 + 8;
          if (iVar14 == 0) {
            return 0;
          }
        }
      }
    }
LAB_011ada8c:
    local_28 = local_28 + 0x20;
    if (local_28 == iVar2) {
      return 1;
    }
  } while( true );
}

