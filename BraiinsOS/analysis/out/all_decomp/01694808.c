// FUN_01694808 @ 01694808 size=120 calls_out=0 calls_in=1
// strings: 

void FUN_01694808(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  
  piVar4 = *(int **)(param_2 + 0xc);
  iVar5 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 8) != 1) {
    uVar6 = (**(code **)(iVar5 + 0x38))(piVar4);
    *param_1 = uVar6;
    *(undefined4 *)(param_1 + 1) = 0;
    *(int **)((int)param_1 + 0xc) = piVar4;
    *(int *)(param_1 + 2) = iVar5;
    return;
  }
  uVar6 = (**(code **)(iVar5 + 0x38))((int)piVar4 + (*(int *)(iVar5 + 8) - 1U & 0xfffffff8) + 8);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x169487c);
    (*pcVar1)();
  }
  *param_1 = uVar6;
  *(undefined4 *)(param_1 + 1) = 1;
  *(int **)((int)param_1 + 0xc) = piVar4;
  *(int *)(param_1 + 2) = iVar5;
  return;
}

