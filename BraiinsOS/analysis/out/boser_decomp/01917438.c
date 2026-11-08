// FUN_01917438 @ 01917438 size=212 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01917438(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar2 = *param_2;
  iVar8 = param_2[1];
  if (iVar2 != iVar8) {
    iVar7 = param_2[2];
    iVar6 = param_2[3];
    piVar4 = (int *)param_2[4];
    do {
      uVar5 = *(undefined4 *)(iVar2 + 8);
      iVar2 = iVar2 + 0xc;
      *param_2 = iVar2;
      FUN_018a7af8(&local_30,uVar5);
      iVar1 = local_2c;
      iVar3 = (**(code **)(iVar6 + 0x10))(iVar7,local_2c,local_28);
      if (iVar3 != 0) {
        FUN_0134bd64(local_30,iVar1);
        if (*piVar4 != -0x7fffffd7) {
          FUN_0193b140(piVar4);
        }
        *piVar4 = -0x7fffffde;
        break;
      }
      if (-0x7fffffff < local_30) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = local_28;
        return;
      }
    } while (iVar2 != iVar8);
  }
  *param_1 = -0x80000000;
  return;
}

