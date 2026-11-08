// FUN_01021398 @ 01021398 size=752 calls_out=3 calls_in=3
// strings: 

void FUN_01021398(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint local_38 [3];
  uint local_2c;
  uint local_28;
  
  puVar6 = local_38;
  puVar7 = local_38;
  puVar5 = local_38;
  piVar9 = (int *)*param_2;
  uVar10 = param_2[1];
  local_38[1] = 0;
  uVar1 = piVar9[1];
  local_38[0] = 0;
  local_28 = uVar1 ^ 0x7fffffff;
  if (uVar10 < (uVar1 ^ 0x7fffffff)) {
    local_28 = uVar10;
  }
  if (local_28 < 3) {
    local_2c = 3;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_2c);
  }
  uVar2 = piVar9[2];
  uVar8 = (uint)local_38 | 5;
  uVar3 = 3;
  do {
    if (uVar2 == uVar1) {
      FUN_00f5f538(piVar9,0x40);
      uVar1 = piVar9[1];
      uVar2 = piVar9[2];
    }
    uVar4 = uVar2 - uVar1;
    if (uVar10 < uVar2 - uVar1) {
      uVar4 = uVar10;
    }
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    FUN_016dd1aa(*piVar9 + uVar1,uVar8,uVar4);
    uVar2 = piVar9[2];
    local_28 = uVar2 - piVar9[1];
    if (local_28 < uVar4) {
      local_2c = uVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_2c);
    }
    uVar10 = uVar10 - uVar4;
    uVar1 = piVar9[1] + uVar4;
    uVar8 = uVar8 + uVar4;
    uVar3 = uVar3 - uVar4;
    param_2[1] = uVar10;
    piVar9[1] = uVar1;
  } while (uVar3 != 0);
  local_38[0] = CONCAT31(local_38[0]._1_3_,*(undefined1 *)((int)param_1 + 5));
  uVar3 = uVar1 ^ 0x7fffffff;
  if (uVar10 < (uVar1 ^ 0x7fffffff)) {
    uVar3 = uVar10;
  }
  if (uVar3 != 0) {
    do {
      if (uVar2 == uVar1) {
        FUN_00f5f538(piVar9,0x40);
        uVar1 = piVar9[1];
        uVar2 = piVar9[2];
      }
      uVar3 = uVar2 - uVar1;
      if (uVar10 < uVar2 - uVar1) {
        uVar3 = uVar10;
      }
      uVar8 = (uint)(uVar3 != 0);
      FUN_016dd1aa(*piVar9 + uVar1,puVar6,uVar8);
      uVar2 = piVar9[2];
      if (uVar2 - piVar9[1] < uVar8) goto LAB_01021614;
      uVar10 = uVar10 - uVar8;
      uVar1 = piVar9[1] + uVar8;
      if (uVar3 != 0) {
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      param_2[1] = uVar10;
      piVar9[1] = uVar1;
    } while (uVar3 == 0);
    local_38[0] = CONCAT31(local_38[0]._1_3_,(char)param_1[1]);
    uVar3 = uVar1 ^ 0x7fffffff;
    if (uVar10 < (uVar1 ^ 0x7fffffff)) {
      uVar3 = uVar10;
    }
    if (uVar3 != 0) {
      while( true ) {
        if (uVar2 == uVar1) {
          FUN_00f5f538(piVar9,0x40);
          uVar1 = piVar9[1];
          uVar2 = piVar9[2];
        }
        uVar3 = uVar2 - uVar1;
        if (uVar10 < uVar2 - uVar1) {
          uVar3 = uVar10;
        }
        uVar8 = (uint)(uVar3 != 0);
        FUN_016dd1aa(*piVar9 + uVar1,puVar7,uVar8);
        uVar2 = piVar9[2];
        if (uVar2 - piVar9[1] < uVar8) break;
        uVar10 = uVar10 - uVar8;
        uVar1 = piVar9[1] + uVar8;
        if (uVar3 != 0) {
          puVar7 = (uint *)((int)puVar7 + 1);
        }
        param_2[1] = uVar10;
        piVar9[1] = uVar1;
        if (uVar3 != 0) {
          uVar3 = *param_1;
          local_38[0] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                        uVar3 >> 0x18;
          local_28 = uVar1 ^ 0x7fffffff;
          if (uVar10 < (uVar1 ^ 0x7fffffff)) {
            local_28 = uVar10;
          }
          if (local_28 < 4) {
            local_2c = 4;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_2c);
          }
          uVar3 = 4;
          while( true ) {
            if (uVar2 == uVar1) {
              FUN_00f5f538(piVar9,0x40);
              uVar1 = piVar9[1];
              uVar2 = piVar9[2];
            }
            uVar8 = uVar2 - uVar1;
            if (uVar10 < uVar2 - uVar1) {
              uVar8 = uVar10;
            }
            if (uVar3 <= uVar8) {
              uVar8 = uVar3;
            }
            FUN_016dd1aa(*piVar9 + uVar1,puVar5,uVar8);
            uVar2 = piVar9[2];
            local_28 = uVar2 - piVar9[1];
            if (local_28 < uVar8) break;
            uVar10 = uVar10 - uVar8;
            uVar1 = piVar9[1] + uVar8;
            puVar5 = (uint *)((int)puVar5 + uVar8);
            uVar3 = uVar3 - uVar8;
            param_2[1] = uVar10;
            piVar9[1] = uVar1;
            if (uVar3 == 0) {
              return;
            }
          }
          local_2c = uVar8;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_2c);
        }
      }
LAB_01021614:
      local_28 = 0;
      local_2c = uVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_2c);
    }
  }
  local_28 = 0;
  local_2c = 1;
                    /* WARNING: Subroutine does not return */
  FUN_00f600c0(&local_2c);
}

