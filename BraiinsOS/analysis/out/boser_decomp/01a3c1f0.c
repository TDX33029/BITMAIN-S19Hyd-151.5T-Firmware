// FUN_01a3c1f0 @ 01a3c1f0 size=220 calls_out=2 calls_in=1
// strings: 

void FUN_01a3c1f0(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_2c;
  uint local_28;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar3 = 0;
  uVar4 = ((int *)param_2[2])[1];
  uVar6 = uVar4 - uVar7;
  if (uVar4 < uVar7) {
    uVar6 = 0;
  }
  if (uVar8 != 0) {
    uVar6 = 0;
  }
  if (uVar6 < param_4) {
    param_1[1] = param_4;
    param_1[2] = uVar6;
    uVar3 = 1;
  }
  else if (param_4 != 0) {
    iVar1 = *(int *)param_2[2];
    do {
      uVar6 = uVar4 - uVar7;
      uVar2 = uVar7;
      if (uVar4 < uVar7) {
        uVar6 = 0;
        uVar2 = uVar4;
      }
      if (uVar8 != 0) {
        uVar2 = uVar4;
      }
      if (uVar8 != 0) {
        uVar6 = 0;
      }
      uVar5 = uVar4 - uVar2;
      if (param_4 < uVar4 - uVar2) {
        uVar5 = param_4;
      }
      FUN_01bed4e2(param_3,iVar1 + uVar2,uVar5);
      if (uVar6 < uVar5) {
        local_2c = uVar5;
        local_28 = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_2c);
      }
      bVar9 = CARRY4(uVar7,uVar5);
      uVar7 = uVar7 + uVar5;
      param_3 = param_3 + uVar5;
      uVar8 = uVar8 + bVar9;
      param_4 = param_4 - uVar5;
      *param_2 = uVar7;
      param_2[1] = uVar8;
    } while (param_4 != 0);
    uVar3 = 0;
  }
  *param_1 = uVar3;
  return;
}

