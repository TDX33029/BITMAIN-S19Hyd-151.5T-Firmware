// FUN_0067ace4 @ 0067ace4 size=1224 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_0067ace4(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  piVar10 = (int *)param_1[2];
  if (piVar10 != (int *)0x0) {
    param_3 = piVar10[3];
  }
  if (piVar10 != (int *)0x0 && param_3 != 0) {
    local_34 = 0x8efff9aa;
    uVar8 = 0x84222325;
    iVar6 = 0;
    local_38 = -0x2e332b93;
    do {
      pbVar2 = (byte *)((int)&local_38 + iVar6);
      iVar6 = iVar6 + 1;
      uVar8 = (uVar8 ^ *pbVar2) * 0x1b3;
    } while (iVar6 != 8);
    uVar1 = uVar8 >> 0x19;
    iVar6 = *piVar10;
    local_3c = 0;
    while( true ) {
      uVar8 = piVar10[1] & uVar8;
      uVar9 = *(uint *)(iVar6 + uVar8);
      uVar3 = uVar9 ^ uVar1 * 0x1010101;
      uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
      while (uVar3 != 0) {
        uVar7 = uVar8 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                       (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                piVar10[1];
        piVar4 = (int *)(iVar6 + -0x18 + uVar7 * -0x18);
        uVar3 = uVar3 - 1 & uVar3;
        if ((*piVar4 == -0x12108374 && piVar4[2] == -0x2e332b93) &&
            (piVar4[1] == -0x29eb1557 && piVar4[3] == -0x71000656)) {
          iVar6 = iVar6 + uVar7 * -0x18;
          goto LAB_0067b144;
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
      local_3c = local_3c + 4;
      uVar8 = uVar8 + local_3c;
    }
  }
  piVar10 = (int *)param_1[1];
  if (piVar10[3] != 0) {
    local_34 = 0x8efff9aa;
    uVar8 = 0x84222325;
    iVar6 = 0;
    local_38 = -0x2e332b93;
    do {
      pbVar2 = (byte *)((int)&local_38 + iVar6);
      iVar6 = iVar6 + 1;
      uVar8 = (uVar8 ^ *pbVar2) * 0x1b3;
    } while (iVar6 != 8);
    uVar1 = uVar8 >> 0x19;
    iVar6 = *piVar10;
    local_3c = 0;
    while( true ) {
      uVar8 = piVar10[1] & uVar8;
      uVar9 = *(uint *)(iVar6 + uVar8);
      uVar3 = uVar9 ^ uVar1 * 0x1010101;
      uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
      while (uVar3 != 0) {
        uVar7 = uVar8 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                       (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                piVar10[1];
        piVar4 = (int *)(iVar6 + -0x18 + uVar7 * -0x18);
        uVar3 = uVar3 - 1 & uVar3;
        if ((*piVar4 == -0x12108374 && piVar4[2] == -0x2e332b93) &&
            (piVar4[1] == -0x29eb1557 && piVar4[3] == -0x71000656)) {
          iVar6 = iVar6 + uVar7 * -0x18;
          goto LAB_0067b144;
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
      local_3c = local_3c + 4;
      uVar8 = uVar8 + local_3c;
    }
  }
  iVar11 = *(int *)*param_1;
  if (*(int *)(iVar11 + 0x34) == 0) {
    return 0;
  }
  uVar8 = 0x84222325;
  iVar6 = 0;
  local_34 = 0x8efff9aa;
  local_38 = -0x2e332b93;
  do {
    pbVar2 = (byte *)((int)&local_38 + iVar6);
    iVar6 = iVar6 + 1;
    uVar8 = (uVar8 ^ *pbVar2) * 0x1b3;
  } while (iVar6 != 8);
  uVar1 = uVar8 >> 0x19;
  iVar6 = *(int *)(iVar11 + 0x28);
  local_3c = 0;
  do {
    uVar8 = *(uint *)(iVar11 + 0x2c) & uVar8;
    uVar9 = *(uint *)(iVar6 + uVar8);
    uVar3 = uVar9 ^ uVar1 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar7 = uVar8 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
              *(uint *)(iVar11 + 0x2c);
      piVar10 = (int *)(iVar6 + -0x18 + uVar7 * -0x18);
      uVar3 = uVar3 - 1 & uVar3;
      if ((*piVar10 == -0x12108374 && piVar10[2] == -0x2e332b93) &&
          (piVar10[1] == -0x29eb1557 && piVar10[3] == -0x71000656)) {
        iVar6 = iVar6 + uVar7 * -0x18;
LAB_0067b144:
        local_34 = -0x71000656;
        local_38 = -0x2e332b93;
        uVar5 = *(undefined4 *)(iVar6 + -8);
        (**(code **)(*(int *)(iVar6 + -4) + 0xc))(&local_38,uVar5);
        if ((local_38 == -0x12108374 && iStack_30 == -0x2e332b93) &&
            (local_34 == -0x29eb1557 && iStack_2c == -0x71000656)) {
          return uVar5;
        }
        return 0;
      }
    }
    if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) {
      return 0;
    }
    local_3c = local_3c + 4;
    uVar8 = uVar8 + local_3c;
  } while( true );
}

