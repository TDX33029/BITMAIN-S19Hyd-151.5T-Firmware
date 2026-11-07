// FUN_0008cbc0 @ 0008cbc0  size=420  callers=1
// program: bmminer


void FUN_0008cbc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int local_24;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/rotater.c",0x22,"a_rotater is null or 0");
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    uVar10 = *(undefined4 *)(param_1 + 0x24);
    iVar11 = param_1 + 0x28;
    uVar5 = *(undefined4 *)(param_1 + 0x42c);
    uVar6 = *(undefined4 *)(param_1 + 0x430);
    uVar7 = *(undefined4 *)(param_1 + 0x434);
    uVar8 = *(undefined4 *)(param_1 + 0x438);
    uVar9 = *(undefined4 *)(param_1 + 0x43c);
    FUN_00095b4c(param_2,"src/rotater.c",0x32,"--rotater[%p][%p,%s,%d][%s,%s,%s,%ld,%ld,%d,%d,%d]--"
                 ,param_1,param_1,uVar3,uVar2,uVar1,uVar10,iVar11,uVar5,uVar6,uVar7,uVar8,uVar9);
    if (*(int *)(param_1 + 0x440) != 0) {
      for (local_24 = 0; local_24 < *(int *)(*(int *)(param_1 + 0x440) + 4); local_24 = local_24 + 1
          ) {
        puVar4 = *(undefined4 **)(**(int **)(param_1 + 0x440) + local_24 * 4);
        FUN_00095b4c(param_2,"src/rotater.c",0x37,"[%s,%d]->",puVar4 + 1,*puVar4,uVar3,uVar2,uVar1,
                     uVar10,iVar11,uVar5,uVar6,uVar7,uVar8,uVar9);
      }
    }
  }
  return;
}

