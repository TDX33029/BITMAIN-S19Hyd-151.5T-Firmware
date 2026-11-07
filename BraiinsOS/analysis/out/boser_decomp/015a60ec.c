// FUN_015a60ec @ 015a60ec size=312 calls_out=4 calls_in=2
// strings: 

void FUN_015a60ec(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar1 = 4;
  local_28 = 0;
  local_2c = 4;
  local_30 = 0;
  if (param_2[3] == 0) {
    uVar4 = param_2[1];
    uVar3 = 0;
  }
  else {
    uVar4 = param_2[1];
    uVar10 = param_2[4];
    iVar5 = param_2[3] << 2;
    uVar3 = 0;
    puVar7 = (uint *)param_2[2];
    do {
      uVar8 = uVar10 + *puVar7;
      if ((uVar10 < 0x80000000 != CARRY4(uVar10,*puVar7)) && (uVar8 < uVar4)) {
        if (uVar3 == local_30) {
          FUN_01a54b48(&local_30);
          uVar1 = local_2c;
        }
        *(uint *)(uVar1 + uVar3 * 4) = uVar8;
        uVar3 = uVar3 + 1;
        local_28 = uVar3;
      }
      iVar5 = iVar5 + -4;
      puVar7 = puVar7 + 1;
    } while (iVar5 != 0);
  }
  uVar10 = local_2c;
  uVar1 = local_30;
  uVar6 = 0;
  if ((int)uVar4 < 0) {
LAB_015a61b0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar6,uVar4);
  }
  uVar9 = *param_2;
  if (uVar4 == 0) {
    uVar2 = 1;
    uVar8 = 0;
  }
  else {
    uVar6 = 1;
    uVar2 = FUN_01298504(uVar4,1);
    uVar8 = uVar4;
    if (uVar2 == 0) goto LAB_015a61b0;
  }
  FUN_01bed4e2(uVar2,uVar9,uVar4);
  *param_1 = uVar8;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  param_1[4] = uVar10;
  param_1[5] = uVar3;
  return;
}

