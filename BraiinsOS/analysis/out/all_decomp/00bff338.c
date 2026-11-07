// FUN_00bff338 @ 00bff338 size=316 calls_out=4 calls_in=1
// strings: 

void FUN_00bff338(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 local_50;
  undefined4 local_40;
  int local_3c;
  int iStack_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x230);
  piVar2 = (int *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  iVar6 = param_2[1];
  if ((char)piVar2[1] == '\0') {
    piVar2 = (int *)FUN_00d47df0();
  }
  iVar5 = *piVar2;
  DataMemoryBarrier(0xb);
  if (iVar5 == *(int *)(iVar6 + 0x2f8)) {
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar6 + 0x2f8) = 1;
    local_34 = local_34 & 0xffffff00;
    local_40 = 1;
    local_3c = iVar5;
    iStack_38 = iVar6;
  }
  else {
    FUN_00c0095c(&local_40,iVar6);
  }
  iVar6 = *(int *)(*param_2 + 0xc);
  piVar2 = (int *)(**(code **)(iVar6 + 0x10))
                            (*(int *)(*param_2 + 8) + (*(int *)(iVar6 + 8) - 1U & 0xfffffff8) + 8);
  piVar3 = (int *)*piVar2;
  do {
    iVar6 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xbff470);
    (*pcVar1)();
  }
  iVar5 = *piVar2;
  uVar4 = 0;
  bVar7 = *(int *)(iVar5 + 0x10) == 0;
  iVar6 = 0;
  if (!bVar7) {
    iVar6 = *(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x10) * 8;
    bVar7 = iVar6 == 8;
  }
  if (!bVar7) {
    uVar4 = *(undefined4 *)(iVar6 + -4);
  }
  FUN_005ff9d4(&local_30,uVar4);
  param_1[1] = local_3c;
  param_1[2] = iStack_38;
  param_1[3] = local_34;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  param_1[0x10] = 0;
  param_1[0x11] = param_4;
  param_1[0xc] = 0;
  *param_1 = local_40;
  param_1[0x13] = param_2;
  param_1[4] = 0;
  param_1[5] = local_50;
  param_1[6] = local_30;
  param_1[7] = uStack_2c;
  param_1[8] = uStack_28;
  param_1[9] = iVar5;
  param_1[10] = 0;
  return;
}

