// FUN_00ebebfc @ 00ebebfc size=856 calls_out=12 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | ReceiveResponse | lDefaultError | SetGloba

void FUN_00ebebfc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 in_stack_00000000;
  undefined1 auStack_6b8 [8];
  int local_6b0;
  undefined1 auStack_660 [8];
  uint local_658;
  int local_654;
  int local_650;
  undefined4 local_610;
  undefined4 local_60c;
  int **local_608;
  undefined4 local_604;
  int *local_600;
  int *local_5fc;
  char **local_5f8;
  undefined *local_5f4;
  char *local_5f0;
  undefined4 local_5ec;
  int local_5e8;
  int local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_308;
  undefined4 local_304;
  int ***local_2f8;
  int local_2f4;
  
  FUN_00ee3b78(auStack_6b8,param_1 + 0x80);
  if (local_6b0 == 3) {
    FUN_00ebe57c(in_stack_00000000);
    return;
  }
  FUN_016dd1aa(auStack_660,auStack_6b8,0x58);
  if (local_658 != 2) {
    iVar2 = local_654;
    if ((local_658 & 1) != 0) {
      iVar2 = local_654 + (*(int *)(local_650 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_650 + 0x30))(iVar2,auStack_660);
  }
  uVar4 = (uint)DAT_018dd947;
  if (2 < DAT_018d9130) goto LAB_00ebee50;
  uVar3 = (uint)DAT_018daa6c;
  uVar4 = uVar3 - 1;
  if (1 < uVar4) {
    if (uVar3 == 0) goto LAB_00ebee50;
    uVar7 = FUN_0169ac90(&DAT_018daa64);
    uVar4 = (uint)(uVar7 >> 0x20);
    uVar3 = (uint)uVar7 & 0xff;
    if ((uVar7 & 0xff) == 0) goto LAB_00ebee50;
  }
  if (uVar3 != 2) {
    DataMemoryBarrier(0xb);
    pcVar5 = s_SetGloba_00414c05;
    puVar1 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar5 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    uVar6 = (**(code **)(puVar1 + 0x14))(pcVar5);
    uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) goto LAB_00ebee50;
  }
  if (*(int *)(DAT_018daa64 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187bc08);
  }
  local_5e4 = *(int *)(DAT_018daa64 + 0x20);
  local_5e0 = *(undefined4 *)(DAT_018daa64 + 0x24);
  local_5f8 = &local_5f0;
  local_5dc = *(undefined4 *)(DAT_018daa64 + 0x28);
  local_600 = (int *)(DAT_018daa64 + 0x1c);
  local_5e8 = *local_600;
  local_5fc = &local_5e8;
  local_608 = &local_5fc;
  local_5f0 = "ReceiveResponse";
  local_2f8 = &local_608;
  local_5d8 = 0;
  local_604 = 1;
  local_5f4 = &DAT_018abb78;
  local_5ec = 0x1f;
  local_304 = 0;
  local_308 = 1;
  DataMemoryBarrier(0xb);
  pcVar5 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar5 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar5 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_2f4 = DAT_018daa64;
  uVar6 = (**(code **)(puVar1 + 0x28))(pcVar5,&local_308);
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar5,&local_308);
    uVar4 = extraout_r1;
  }
LAB_00ebee50:
  FUN_00ed3b40(param_1 + 0x80,uVar4);
  FUN_005bb5ac(&local_308,param_1,local_60c,&DAT_0187bc18);
  FUN_016dd1aa(&local_308,in_stack_00000000,0x2e0);
  FUN_00e7b62c(&local_5e8,local_610,&local_308);
  if (local_5e8 != 0x1e || local_5e4 != 0) {
    FUN_00ebe57c(&local_5e8);
  }
  if (local_658 != 2) {
    if ((local_658 & 1) != 0) {
      local_654 = local_654 + (*(int *)(local_650 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_650 + 0x34))(local_654,auStack_660);
  }
  FUN_005c3320(auStack_660);
  return;
}

