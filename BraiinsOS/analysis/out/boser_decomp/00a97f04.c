// FUN_00a97f04 @ 00a97f04 size=232 calls_out=2 calls_in=1
// strings: 

void FUN_00a97f04(uint *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  uint uVar3;
  int iVar2;
  int *piVar4;
  int extraout_r1;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_38;
  int local_34;
  int local_30;
  
  uVar7 = param_1[3];
  if (uVar7 != 0) {
    do {
      uVar5 = *param_1;
      uVar8 = param_1[1];
      uVar6 = param_1[2];
      uVar3 = uVar6 - uVar5;
      if (uVar6 < uVar5) {
        uVar3 = uVar6;
      }
      iVar2 = *(int *)(uVar8 + uVar3 * 4);
      FUN_019f90e0(&local_38,param_2,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                   *(undefined4 *)(iVar2 + 0x10));
      if (-1 < local_34) {
        if (param_3 == local_38 && param_4 == local_34) {
          if (local_30 <= param_5) {
            return;
          }
        }
        else if ((int)(param_4 - (local_34 + (uint)(param_3 < local_38))) < 0 ==
                 (SBORROW4(param_4,local_34) !=
                 SBORROW4(param_4 - local_34,(uint)(param_3 < local_38)))) {
          return;
        }
      }
      piVar4 = *(int **)(uVar8 + uVar6 * 4);
      uVar6 = uVar6 + 1;
      uVar3 = uVar6 - uVar5;
      if (uVar6 < uVar5) {
        uVar3 = uVar6;
      }
      param_1[2] = uVar3;
      param_1[3] = uVar7 - 1;
      DataMemoryBarrier(0xb);
      do {
        param_2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = param_2 + -1;
      if (param_2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a95f90();
        param_2 = extraout_r1;
      }
      uVar7 = param_1[3];
    } while (uVar7 != 0);
  }
  return;
}

