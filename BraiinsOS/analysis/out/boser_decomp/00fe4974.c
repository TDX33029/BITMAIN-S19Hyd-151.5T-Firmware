// FUN_00fe4974 @ 00fe4974 size=212 calls_out=3 calls_in=1
// strings: 

void FUN_00fe4974(int *param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int local_3c;
  undefined8 local_38;
  
  pcVar4 = *(code **)(param_3 + 0xc);
  do {
    do {
      iVar2 = (*pcVar4)(param_2);
      if (iVar2 == 0) {
        iVar7 = 0;
        iVar8 = 2;
        goto LAB_00fe4a30;
      }
    } while (*(int *)(iVar2 + 0x2b0) != 0);
    iVar5 = *(int *)(iVar2 + 0x2a0);
    iVar6 = *(int *)(iVar2 + 0x2a4);
    FUN_01220b60(&local_40,iVar2);
    uVar1 = local_38;
    iVar7 = local_3c;
    iVar8 = local_40;
    uVar3 = FUN_01220064(iVar2);
    FUN_01221990(&local_40,uVar3);
  } while ((iVar8 == 0 && local_40 == 0) && (iVar7 == 0 && local_3c == 0));
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  *(undefined8 *)(param_1 + 8) = local_38;
  *(undefined8 *)(param_1 + 2) = uVar1;
  param_1[6] = local_40;
  param_1[7] = local_3c;
  param_1[4] = iVar6;
LAB_00fe4a30:
  *param_1 = iVar8;
  param_1[1] = iVar7;
  return;
}

