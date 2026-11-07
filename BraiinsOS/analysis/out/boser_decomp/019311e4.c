// FUN_019311e4 @ 019311e4 size=176 calls_out=2 calls_in=4
// strings: 

void FUN_019311e4(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar9 = param_1[2];
  if (*param_1 == 0) {
    FUN_01ac6cbc(param_2,param_1[1],uVar9);
    return;
  }
  if (param_1[1] != 0) {
    uVar7 = param_1[3];
    puVar4 = (uint *)(*param_1 + 4);
    iVar8 = param_1[1] << 3;
    uVar5 = 0;
    do {
      uVar3 = *puVar4;
      bVar11 = uVar5 <= uVar7;
      bVar10 = uVar7 == uVar5;
      uVar6 = uVar3 + uVar5;
      if (bVar11 && !bVar10) {
        bVar11 = uVar9 <= uVar6;
        bVar10 = uVar6 == uVar9;
      }
      if (bVar11 && !bVar10) {
        uVar1 = uVar9 - uVar5;
        if (uVar9 < uVar5) {
          uVar1 = 0;
        }
        uVar2 = uVar7 - uVar5;
        if (uVar3 <= uVar7 - uVar5) {
          uVar2 = uVar3;
        }
        if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4();
        }
        FUN_01ac6cbc(param_2,puVar4[-1] + uVar1,uVar2 - uVar1);
      }
      puVar4 = puVar4 + 2;
      iVar8 = iVar8 + -8;
      uVar5 = uVar6;
    } while (iVar8 != 0);
  }
  return;
}

