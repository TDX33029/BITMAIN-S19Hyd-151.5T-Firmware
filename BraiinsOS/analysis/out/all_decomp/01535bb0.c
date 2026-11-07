// FUN_01535bb0 @ 01535bb0 size=732 calls_out=10 calls_in=2
// strings: 

bool FUN_01535bb0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint local_78 [21];
  
  if (param_3 == param_1[3]) {
    iVar1 = param_1[2];
    piVar10 = (int *)*param_1;
    if (iVar1 == 0) {
      uVar6 = 0;
      FUN_016dd606(local_78,0,0x50);
    }
    else {
      puVar8 = (undefined4 *)param_1[1];
      iVar9 = iVar1 << 3;
      uVar6 = 0;
      puVar5 = puVar8 + iVar1 * 2;
      piVar4 = puVar8 + 1;
      do {
        iVar1 = iVar1 + -1;
        uVar6 = *piVar4 + uVar6;
        piVar4 = piVar4 + 2;
      } while (iVar1 != 0);
      if (0x50 < uVar6) {
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,uVar6);
        }
        uVar3 = thunk_FUN_016d4a50(uVar6);
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar6);
        }
        local_78[2] = 0;
        local_78[0] = uVar6;
        local_78[1] = uVar3;
        do {
          uVar2 = *puVar8;
          uVar6 = puVar8[1];
          if (local_78[0] - local_78[2] < uVar6) {
            FUN_0154e5f8(local_78,local_78[2],uVar6,1,1);
            uVar3 = local_78[1];
          }
          uVar7 = local_78[2];
          FUN_016dd1aa(uVar3 + local_78[2],uVar2,uVar6);
          iVar1 = uVar7 + uVar6;
          puVar8 = puVar8 + 2;
          local_78[2] = iVar1;
        } while (puVar8 != puVar5);
        uVar2 = FUN_00605900(piVar10[0x12] + 0x18);
        if (*piVar10 == 1) {
          iVar1 = FUN_0173f598(param_2,param_3,uVar2,*(undefined4 *)(piVar10[1] + 8),
                               *(undefined4 *)(piVar10[1] + 0xc),piVar10[2] + 8,piVar10[3],uVar3,
                               iVar1);
        }
        else {
          iVar1 = FUN_0173efa4(param_2,param_3,uVar2,piVar10 + 2,piVar10[1],uVar3,iVar1);
        }
        if (local_78[0] == 0) {
          return iVar1 != 1;
        }
        thunk_FUN_016d3fb4(uVar3);
        return iVar1 != 1;
      }
      FUN_016dd606(local_78,0,0x50);
      piVar4 = puVar8 + 1;
      uVar3 = 0;
      do {
        uVar7 = *piVar4 + uVar3;
        if ((uVar7 < uVar3) || (0x50 < uVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar3,uVar7,0x50,&DAT_018a7ce0);
        }
        FUN_016dd1aa((int)local_78 + uVar3,piVar4[-1]);
        piVar4 = piVar4 + 2;
        iVar9 = iVar9 + -8;
        uVar3 = uVar7;
      } while (iVar9 != 0);
    }
    uVar2 = FUN_00605900(piVar10[0x12] + 0x18);
    if (*piVar10 == 1) {
      iVar1 = FUN_0173f598(param_2,param_3,uVar2,*(undefined4 *)(piVar10[1] + 8),
                           *(undefined4 *)(piVar10[1] + 0xc),piVar10[2] + 8,piVar10[3],local_78,
                           uVar6);
    }
    else {
      iVar1 = FUN_0173efa4(param_2,param_3,uVar2,piVar10 + 2,piVar10[1],local_78,uVar6);
    }
    if (iVar1 == 1) {
      return false;
    }
  }
  return true;
}

