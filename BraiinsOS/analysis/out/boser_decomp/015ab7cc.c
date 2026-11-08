// FUN_015ab7cc @ 015ab7cc size=692 calls_out=6 calls_in=2
// strings: 

void FUN_015ab7cc(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *local_84;
  undefined1 local_7d;
  undefined4 local_7c [4];
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined *local_64;
  undefined4 **local_60;
  undefined1 *local_5c;
  undefined4 **local_58;
  code *local_54;
  undefined **local_50;
  code *local_4c;
  int *local_48;
  undefined1 *local_44;
  undefined4 **local_40;
  undefined1 *local_3c;
  undefined *local_38;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  
  local_84 = (undefined4 *)&local_7d;
  if ((char)param_3[5] == '\x02') {
    local_7d = 0;
    local_7c[0] = *(undefined4 *)((int)param_3 + 0x1a);
    local_6c = local_7c;
    if (3 < DAT_01d51b00) {
      local_40 = &local_6c;
      local_48 = param_3 + 2;
      local_3c = &LAB_015fb900;
      local_50 = (undefined **)&DAT_01cfc828;
      local_54 = (code *)0x17;
      local_5c = (undefined1 *)0x17;
      local_44 = &LAB_00632348;
      local_58 = (undefined4 **)0x4b3d9f;
      local_60 = (undefined4 **)0x4b3d9f;
      FUN_015fb650(&DAT_005bb13e,&local_48,4,&local_60);
    }
    local_60 = (undefined4 **)0xfb0000e0;
    local_5c = (undefined1 *)local_7c[0];
    FUN_01979e70(&local_30,*param_2,0x23,&local_60);
    if ((char)local_30 == '\x04') {
LAB_015aba08:
      uVar1 = 4;
      goto LAB_015aba74;
    }
    local_54 = FUN_019a7d7c;
    local_58 = (undefined4 **)&local_28;
    local_60 = &local_84;
    local_24 = local_2c;
    local_28 = local_30;
    local_5c = &LAB_015fb8e8;
    FUN_00664898(&local_48,&DAT_005874a6,&local_60);
  }
  else {
    FUN_01bed4e2(local_7c,(int)param_3 + 0x25,0x10);
    puVar2 = (undefined *)param_3[1];
    local_7d = 1;
    if (*param_3 == 0) {
      puVar2 = (undefined *)0x0;
    }
    local_68 = local_7c;
    local_64 = puVar2;
    if (3 < DAT_01d51b00) {
      local_50 = &local_64;
      local_60 = (undefined4 **)(param_3 + 2);
      local_4c = FUN_012fd02c;
      local_38 = &DAT_01cfc838;
      local_3c = (undefined1 *)0x17;
      local_44 = (undefined1 *)0x17;
      local_5c = &LAB_00632348;
      local_58 = &local_68;
      local_54 = (code *)&DAT_015fb8f0;
      local_40 = (undefined4 **)0x4b3d9f;
      local_48 = (int *)0x4b3d9f;
      FUN_015fb650(&DAT_005a32ca,&local_60,4,&local_48);
    }
    local_60 = (undefined4 **)0x2ff;
    local_5c = (undefined1 *)0x0;
    local_58 = (undefined4 **)0x0;
    local_54 = (code *)0xfb000000;
    local_50 = (undefined **)puVar2;
    FUN_01979e24(&local_30,*param_2,0x14);
    if ((char)local_30 == '\x04') goto LAB_015aba08;
    local_54 = FUN_019a7d7c;
    local_58 = (undefined4 **)&local_28;
    local_60 = &local_68;
    local_24 = local_2c;
    local_28 = local_30;
    local_5c = &DAT_015fb8f0;
    FUN_00664898(&local_48,&DAT_005874a6,&local_60);
  }
  param_1[1] = local_48;
  param_1[2] = local_44;
  param_1[3] = local_40;
  FUN_0069d8a4(local_28 & 0xff,local_24);
  uVar1 = 2;
LAB_015aba74:
  *param_1 = uVar1;
  return;
}

