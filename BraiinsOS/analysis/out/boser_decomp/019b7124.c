// FUN_019b7124 @ 019b7124 size=392 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_019b7124(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  char *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x04') {
    local_30 = param_1 + 4;
    uVar1 = FUN_013032f4(param_2,&DAT_0052e42c,2,&local_30,&DAT_019b72cc);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar4 = param_2[1];
  pcVar3 = *(code **)(iVar4 + 0xc);
  iVar2 = (*pcVar3)(uVar1,&DAT_0052c2af,3);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_019a6b74(param_1,param_2);
    }
    else {
      iVar2 = (*pcVar3)(uVar1,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_30 = (char *)&local_40;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar1;
      local_3c = iVar4;
      iVar2 = FUN_019a6b74(param_1,&local_30);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    }
    if (iVar2 == 0) {
      uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
      return uVar1;
    }
  }
  return 1;
}

