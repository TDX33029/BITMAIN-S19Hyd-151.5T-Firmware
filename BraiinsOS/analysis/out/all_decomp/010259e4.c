// FUN_010259e4 @ 010259e4 size=260 calls_out=3 calls_in=3
// strings: 

void FUN_010259e4(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_2c;
  uint local_28;
  
  piVar5 = (int *)*param_1;
  uVar6 = param_1[1];
  uVar3 = *(uint *)(param_2 + 8);
  uVar1 = piVar5[1];
  local_28 = uVar1 ^ 0x7fffffff;
  if (uVar6 < (uVar1 ^ 0x7fffffff)) {
    local_28 = uVar6;
  }
  local_2c = uVar3;
  if (param_3 < uVar3) {
    local_2c = param_3;
  }
  if (local_28 < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_2c);
  }
  iVar7 = *(int *)(param_2 + 4);
  while( true ) {
    uVar8 = uVar3;
    if (param_3 < uVar3) {
      uVar8 = param_3;
    }
    if (uVar8 == 0) {
      return;
    }
    uVar2 = piVar5[2];
    if (uVar2 == uVar1) {
      FUN_00f5f538(piVar5,0x40);
      uVar1 = piVar5[1];
      uVar2 = piVar5[2];
    }
    uVar4 = uVar2 - uVar1;
    if (uVar6 < uVar2 - uVar1) {
      uVar4 = uVar6;
    }
    if (uVar8 <= uVar4) {
      uVar4 = uVar8;
    }
    FUN_016dd1aa(*piVar5 + uVar1,iVar7,uVar4);
    local_28 = piVar5[2] - piVar5[1];
    if (local_28 < uVar4) break;
    uVar6 = uVar6 - uVar4;
    uVar1 = piVar5[1] + uVar4;
    iVar7 = iVar7 + uVar4;
    piVar5[1] = uVar1;
    uVar3 = uVar3 - uVar4;
    *(int *)(param_2 + 4) = iVar7;
    param_3 = param_3 - uVar4;
    param_1[1] = uVar6;
    *(uint *)(param_2 + 8) = uVar3;
  }
  local_2c = uVar4;
                    /* WARNING: Subroutine does not return */
  FUN_00f600c0(&local_2c);
}

