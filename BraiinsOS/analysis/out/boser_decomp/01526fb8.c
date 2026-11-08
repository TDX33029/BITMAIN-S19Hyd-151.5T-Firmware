// FUN_01526fb8 @ 01526fb8 size=292 calls_out=5 calls_in=1
// strings: additionalProperties

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01526fb8(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_30;
  int local_2c;
  int local_28;
  
  FUN_0155f304(&local_30,param_3,param_2);
  if (local_30 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = local_2c;
    FUN_019bb7e0(*param_4,param_4[1]);
    return;
  }
  iVar2 = *param_4;
  iVar3 = param_4[1];
  iVar6 = param_4[2];
  uVar4 = *(undefined4 *)(param_3 + 0x38);
  uVar5 = *(undefined4 *)(param_3 + 0x3c);
  uVar7 = FUN_015345a4(uVar4,uVar5,"additionalProperties",0x14);
  uVar8 = FUN_015345a4(uVar4,uVar5,&DAT_0056fdb8,8);
  piVar1 = (int *)thunk_FUN_01be5118(0x28);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x28);
  }
  *piVar1 = local_30;
  piVar1[1] = local_2c;
  piVar1[2] = local_28;
  piVar1[3] = iVar2;
  piVar1[4] = iVar3;
  piVar1[5] = iVar6;
  *(undefined8 *)(piVar1 + 6) = uVar7;
  *(undefined8 *)(piVar1 + 8) = uVar8;
  *param_1 = (int)piVar1;
  param_1[1] = (int)&DAT_01cfacf0;
  return;
}

