// FUN_016949d8 @ 016949d8 size=128 calls_out=1 calls_in=51
// strings: SetGloba | SetGloba | lDefaultError

undefined4 FUN_016949d8(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined *puVar3;
  
  if (param_2 == '\x02') {
    return 1;
  }
  puVar3 = &DAT_018ae394;
  DataMemoryBarrier(0xb);
  pcVar2 = s_SetGloba_00414c05;
  if ((DAT_018dd984 == 2) && (pcVar2 = DAT_018daa74, puVar3 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar2 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  uVar1 = (**(code **)(puVar3 + 0x14))(pcVar2,param_1);
  return uVar1;
}

