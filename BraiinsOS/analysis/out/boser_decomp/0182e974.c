// FUN_0182e974 @ 0182e974 size=596 calls_out=8 calls_in=3
// strings:  0   |  0  

byte FUN_0182e974(int *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  char *local_6c;
  undefined4 local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  
  puVar5 = &local_88;
  uVar6 = param_2[2];
  if (*param_1 == 0) {
    FUN_01428c44(&local_60,uVar6);
    local_88 = *param_2;
    uStack_84 = param_2[1];
    local_80 = param_2[2];
    local_7c = param_2[3];
    local_38 = local_60;
    uStack_34 = local_5c;
    uStack_30 = local_58;
    local_78 = local_60;
    uStack_74 = local_5c;
    uStack_70 = local_58;
    local_68 = 7;
    local_6c = "\r\n0\r\n\r\n";
    if (*(char *)(param_3 + 0x24) == '\0') {
      uVar6 = (local_58 >> 0x18) - (local_58 >> 0x10 & 0xff) & 0xff;
      uVar4 = uVar6 + local_80;
      if (CARRY4(uVar6,local_80)) {
        uVar4 = 0xffffffff;
      }
      iVar2 = uVar4 + 7;
      if (0xfffffff8 < uVar4) {
        iVar2 = -1;
      }
      local_48 = local_88;
      local_44 = uStack_84;
      uStack_40 = local_80;
      local_3c = local_7c;
      FUN_01424824(param_3,iVar2);
      while( true ) {
        uVar7 = FUN_01876730(&local_88);
        iVar2 = (int)((ulonglong)uVar7 >> 0x20);
        if (iVar2 == 0) break;
        FUN_01ac6cbc(param_3,(int)uVar7,iVar2);
        FUN_0177763c(&local_88,iVar2);
      }
      uVar6 = local_88;
      uVar4 = uStack_84;
      uVar3 = local_80;
LAB_0182eba8:
      (**(code **)(uVar6 + 0x10))(puVar5 + 3,uVar4,uVar3);
    }
    else {
      uStack_34 = local_60;
      uStack_30 = local_5c;
      uStack_2c = local_58;
      pcStack_28 = "\r\n0\r\n\r\n";
      uStack_24 = 7;
      local_48 = 2;
      local_44 = local_88;
      uStack_40 = uStack_84;
      local_3c = local_80;
      local_38 = local_7c;
LAB_0182eab0:
      FUN_01885284(param_3 + 0x10);
    }
LAB_0182ebb4:
    bVar1 = *(byte *)(param_1 + 4) ^ 1;
  }
  else {
    if (*param_1 == 1) {
      local_50 = param_1[2];
      uVar4 = param_1[3];
      uVar6 = (uint)(uVar4 == 0 && (uVar6 <= local_50) <= uVar4) -
              (uint)((uint)(local_50 <= uVar6) <= -uVar4);
      if (uVar6 == 0) {
        local_48 = *param_2;
        local_44 = param_2[1];
        uStack_40 = param_2[2];
        local_3c = param_2[3];
        FUN_01876850(param_3);
        goto LAB_0182ebb4;
      }
      if ((uVar6 & 0xff) == 1) {
        local_60 = *param_2;
        local_5c = param_2[1];
        local_58 = param_2[2];
        uStack_54 = param_2[3];
        if (*(char *)(param_3 + 0x24) == '\0') {
          uVar6 = local_50;
          if (local_58 <= local_50) {
            uVar6 = local_58;
          }
          FUN_01424824(param_3,uVar6);
          puVar5 = &local_60;
          while( true ) {
            uVar6 = local_50;
            if (local_58 <= local_50) {
              uVar6 = local_58;
            }
            if (uVar6 == 0) break;
            FUN_01ac6cbc(param_3,local_5c,uVar6);
            FUN_0176e7f8(puVar5,uVar6);
          }
          uVar6 = local_60;
          uVar4 = local_5c;
          uVar3 = local_58;
          goto LAB_0182eba8;
        }
        local_48 = 1;
        local_44 = local_60;
        uStack_40 = local_5c;
        local_3c = local_58;
        local_38 = uStack_54;
        uStack_34 = local_50;
        goto LAB_0182eab0;
      }
    }
    local_48 = *param_2;
    local_44 = param_2[1];
    uStack_40 = param_2[2];
    local_3c = param_2[3];
    FUN_01876850(param_3);
    bVar1 = 0;
  }
  return bVar1 & 1;
}

