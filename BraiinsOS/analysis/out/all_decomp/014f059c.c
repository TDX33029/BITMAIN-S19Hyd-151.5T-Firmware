// FUN_014f059c @ 014f059c size=316 calls_out=0 calls_in=8
// strings: 

void FUN_014f059c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  
  uVar14 = param_1[3];
  if (uVar14 != 0) {
    uVar4 = *param_1;
    puVar11 = (uint *)param_1[1];
    uVar1 = param_1[2];
    uVar2 = uVar4;
    if (uVar1 < uVar4) {
      uVar2 = 0;
    }
    iVar7 = uVar1 - uVar2;
    uVar13 = uVar4 - iVar7;
    iVar10 = uVar14 - uVar13;
    if (uVar14 < uVar13) {
      iVar10 = 0;
    }
    if (uVar14 <= uVar13) {
      uVar4 = iVar7 + uVar14;
    }
    iVar7 = uVar4 - iVar7;
    if (iVar7 != 0) {
      iVar3 = uVar1 * 0x28 + uVar2 * -0x28;
      do {
        if (*(uint *)((int)puVar11 + iVar3) < 3) {
          iVar6 = 0xc;
          iVar8 = 8;
          iVar5 = 0x10;
          iVar9 = 4;
LAB_014f0680:
          (**(code **)(*(int *)((int)puVar11 + iVar3 + iVar9) + 0x10))
                    ((int)puVar11 + iVar3 + iVar5,*(undefined4 *)((int)puVar11 + iVar3 + iVar8),
                     *(undefined4 *)((int)puVar11 + iVar3 + iVar6));
        }
        else if (*(uint *)((int)puVar11 + iVar3) != 3) {
          iVar6 = 0x14;
          iVar8 = 0x10;
          iVar5 = 0x18;
          iVar9 = 0xc;
          goto LAB_014f0680;
        }
        iVar3 = iVar3 + 0x28;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (uVar13 < uVar14) {
      do {
        puVar12 = puVar11 + 10;
        if (*puVar11 < 3) {
          iVar5 = 0xc;
          iVar3 = 8;
          iVar7 = 0x10;
          iVar8 = 4;
LAB_014f0600:
          (**(code **)(*(int *)((int)puVar12 + iVar8 + -0x28) + 0x10))
                    ((int)puVar12 + iVar7 + -0x28,*(undefined4 *)((int)puVar12 + iVar3 + -0x28),
                     *(undefined4 *)((int)puVar12 + iVar5 + -0x28));
        }
        else if (*puVar11 != 3) {
          iVar5 = 0x14;
          iVar3 = 0x10;
          iVar7 = 0x18;
          iVar8 = 0xc;
          goto LAB_014f0600;
        }
        iVar10 = iVar10 + -1;
        puVar11 = puVar12;
      } while (iVar10 != 0);
    }
  }
  return;
}

