// FUN_01533c94 @ 01533c94 size=364 calls_out=3 calls_in=4
// strings: 

void FUN_01533c94(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar9 = param_1[2];
  if (*param_1 == 0) {
    iVar4 = param_2[2];
    iVar3 = param_1[1];
    if ((uint)(*param_2 - iVar4) < uVar9) {
      FUN_0154e5f8(param_2,iVar4,uVar9,1,1);
      iVar4 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar4,iVar3,uVar9);
    param_2[2] = iVar4 + uVar9;
  }
  else if (param_1[1] != 0) {
    uVar2 = param_1[3];
    puVar6 = (uint *)(*param_1 + 4);
    iVar3 = param_1[1] << 3;
    uVar8 = 0;
    do {
      uVar1 = *puVar6;
      bVar12 = uVar8 <= uVar2;
      bVar11 = uVar2 == uVar8;
      uVar7 = uVar1 + uVar8;
      if (bVar12 && !bVar11) {
        bVar12 = uVar9 <= uVar7;
        bVar11 = uVar7 == uVar9;
      }
      if (bVar12 && !bVar11) {
        uVar5 = uVar9 - uVar8;
        if (uVar9 < uVar8) {
          uVar5 = 0;
        }
        uVar10 = uVar2 - uVar8;
        if (uVar1 <= uVar2 - uVar8) {
          uVar10 = uVar1;
        }
        if (uVar10 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar5,uVar10,uVar1,&DAT_018a7a04);
        }
        uVar8 = puVar6[-1];
        uVar10 = uVar10 - uVar5;
        iVar4 = param_2[2];
        if ((uint)(*param_2 - iVar4) < uVar10) {
          FUN_0154e5f8(param_2,iVar4,uVar10,1,1);
          iVar4 = param_2[2];
        }
        FUN_016dd1aa(param_2[1] + iVar4,uVar8 + uVar5,uVar10);
        param_2[2] = iVar4 + uVar10;
      }
      puVar6 = puVar6 + 2;
      iVar3 = iVar3 + -8;
      uVar8 = uVar7;
    } while (iVar3 != 0);
  }
  return;
}

