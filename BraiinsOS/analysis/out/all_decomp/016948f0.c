// FUN_016948f0 @ 016948f0 size=216 calls_out=1 calls_in=12
// strings: lDefaultError | SetGloba | SetGloba | SetGloba | SetGloba

void FUN_016948f0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar5 = 0;
  DataMemoryBarrier(0xb);
  local_34 = 0;
  piVar6 = DAT_018daa74;
  puVar3 = DAT_018daa78;
  if (DAT_018dd984 != 2) {
    piVar6 = (int *)s_SetGloba_00414c05;
    puVar3 = &DAT_018ae394;
  }
  local_38 = 1;
  local_28 = param_2;
  local_24 = param_3;
  if ((DAT_018dd984 != 2) || (DAT_018daa70 == 0)) {
    uVar7 = (**(code **)(puVar3 + 0x1c))(piVar6,&local_38);
  }
  else {
    uVar7 = (**(code **)(puVar3 + 0x1c))
                      ((int)piVar6 + (*(int *)(puVar3 + 8) - 1U & 0xfffffff8) + 8,&local_38);
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    uVar5 = 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x16949a0);
      (*pcVar1)();
    }
  }
  *(undefined4 *)(param_1 + 3) = param_2;
  *param_1 = uVar7;
  *(undefined4 *)(param_1 + 1) = uVar5;
  *(int **)((int)param_1 + 0xc) = piVar6;
  *(undefined **)(param_1 + 2) = puVar3;
  return;
}

