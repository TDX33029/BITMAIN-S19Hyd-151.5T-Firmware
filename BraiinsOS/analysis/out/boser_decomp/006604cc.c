// FUN_006604cc @ 006604cc size=284 calls_out=2 calls_in=1
// strings: 

void FUN_006604cc(undefined4 *param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6
                 ,uint param_7)

{
  uint uVar1;
  uint3 uVar2;
  uint3 *puVar3;
  uint3 uVar4;
  uint3 *puVar5;
  uint3 *puVar6;
  int iVar7;
  uint3 *puVar8;
  undefined4 uVar9;
  
  if (param_3 <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_4,param_3,&DAT_01c03cf8);
  }
  if (param_6 < param_7) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_7,param_6,param_6,&DAT_01c03d98);
  }
  uVar9 = 0;
  param_2 = param_2 + param_4 * 0xc;
  uVar1 = *(uint *)(param_2 + 8);
  if (param_6 - param_7 < uVar1) goto LAB_006605c4;
  puVar8 = *(uint3 **)(param_2 + 4);
  puVar3 = (uint3 *)(param_5 + param_7);
  switch(uVar1) {
  case 0:
    goto switchD_00660520_caseD_0;
  case 1:
    uVar4 = (uint3)(byte)*puVar8;
    uVar2 = (uint3)(byte)*puVar3;
    break;
  case 2:
    uVar4 = (uint3)(ushort)*puVar8;
    uVar2 = (uint3)(ushort)*puVar3;
    break;
  case 3:
    uVar2 = *puVar3;
    uVar4 = *puVar8;
    break;
  default:
    iVar7 = uVar1 - 4;
    puVar5 = (uint3 *)((int)puVar3 + iVar7);
    if (iVar7 != 0) {
      puVar6 = puVar8;
      do {
        if (*(int *)puVar3 != *(int *)puVar6) goto LAB_006605c4;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      } while (puVar3 < puVar5);
    }
    if (*(int *)puVar5 != *(int *)((int)puVar8 + iVar7)) goto LAB_006605c4;
    goto switchD_00660520_caseD_0;
  }
  if (uVar2 == uVar4) {
switchD_00660520_caseD_0:
    uVar9 = 1;
    param_1[1] = param_7;
    param_1[2] = uVar1 + param_7;
    param_1[3] = param_4;
  }
LAB_006605c4:
  *param_1 = uVar9;
  return;
}

