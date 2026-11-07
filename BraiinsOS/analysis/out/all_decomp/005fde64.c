// FUN_005fde64 @ 005fde64 size=304 calls_out=2 calls_in=1
// strings: 

void FUN_005fde64(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6
                 )

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  
  if (*(uint *)(param_2 + 0x10) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,*(uint *)(param_2 + 0x10),&DAT_01857388);
  }
  if (param_5 < param_6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_6,param_5,param_5,&DAT_018573d8);
  }
  uVar1 = 0;
  iVar3 = *(int *)(param_2 + 0xc) + param_3 * 0xc;
  uVar7 = *(uint *)(iVar3 + 8);
  if (uVar7 <= param_5 - param_6) {
    piVar6 = *(int **)(iVar3 + 4);
    piVar2 = (int *)(param_4 + param_6);
    switch(uVar7) {
    case 0:
      break;
    case 1:
      if ((char)*piVar2 != (char)*piVar6) goto LAB_005fdf50;
      break;
    case 2:
      if ((short)*piVar2 != (short)*piVar6) goto LAB_005fdf50;
      break;
    case 3:
      if ((int3)*piVar2 != (int3)*piVar6) goto LAB_005fdf50;
      break;
    default:
      iVar3 = uVar7 - 4;
      piVar4 = (int *)((int)piVar2 + iVar3);
      if (iVar3 != 0) {
        piVar5 = piVar6;
        do {
          if (*piVar2 != *piVar5) goto LAB_005fdf50;
          piVar2 = piVar2 + 1;
          piVar5 = piVar5 + 1;
        } while (piVar2 < piVar4);
      }
      if (*piVar4 != *(int *)((int)piVar6 + iVar3)) goto LAB_005fdf50;
    }
    param_1[2] = uVar7 + param_6;
    uVar1 = 1;
    param_1[1] = param_6;
    param_1[3] = param_3;
  }
LAB_005fdf50:
  *param_1 = uVar1;
  return;
}

