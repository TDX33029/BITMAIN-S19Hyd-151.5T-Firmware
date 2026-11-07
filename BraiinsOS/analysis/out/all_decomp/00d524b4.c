// FUN_00d524b4 @ 00d524b4 size=188 calls_out=2 calls_in=1
// strings: lDefaultError | SetGloba | lDefaultError

undefined1 FUN_00d524b4(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = DAT_018da098;
  local_24 = 0;
  local_28 = 1;
  DataMemoryBarrier(0xb);
  pcVar3 = s_SetGloba_00414c05;
  puVar1 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar3 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar3 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_18 = param_1;
  iVar2 = (**(code **)(puVar1 + 0x28))(pcVar3,&local_28);
  if (iVar2 != 0) {
    (**(code **)(puVar1 + 0x2c))(pcVar3,&local_28);
  }
  return DAT_018dd947;
}

