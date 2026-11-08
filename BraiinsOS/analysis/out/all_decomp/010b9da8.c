// FUN_010b9da8 @ 010b9da8 size=876 calls_out=4 calls_in=0
// strings: Chunked | Length | EofExpectedArrayExpectedAttributeExpectedAttributeEndExpectedBooleanExpectedCommaExpectedCharExpectedByteLiteralExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd

undefined4 FUN_010b9da8(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  uint *puVar5;
  int iVar6;
  uint **local_68;
  undefined *local_64;
  uint *local_60;
  undefined *local_5c;
  uint *local_58;
  undefined *local_54;
  uint *local_50;
  undefined *local_4c;
  uint *local_48;
  undefined *puStack_44;
  uint *puStack_40;
  undefined *puStack_3c;
  uint **local_38;
  undefined *local_34;
  uint *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar1 = 1;
  if (1 < *param_1) {
    iVar1 = *param_1 - 2;
  }
  if (iVar1 == 0) {
    puVar5 = (uint *)*param_2;
    iVar6 = param_2[1];
    pcVar4 = *(code **)(iVar6 + 0xc);
    iVar1 = (*pcVar4)(puVar5,"Length",6);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(puVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00fd3054(param_1 + 2,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      puVar5 = (uint *)*param_2;
      pcVar4 = *(code **)(param_2[1] + 0xc);
      goto LAB_010ba0d0;
    }
    iVar1 = (*pcVar4)(puVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_64 = &DAT_01880dc4;
    local_68 = &local_30;
    local_60 = (uint *)param_2[2];
    local_5c = (undefined *)param_2[3];
    local_21 = 1;
    local_30 = puVar5;
    local_2c = iVar6;
    iVar1 = FUN_00fd3054(param_1 + 2,&local_68);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_64 + 0xc))(local_68,&DAT_00414a81,2);
  }
  else {
    if (iVar1 == 1) {
      local_30 = param_1 + 2;
      local_34 = &DAT_01884a7c;
      local_38 = &local_30;
      puStack_44 = &DAT_01884a5c;
      puStack_3c = &DAT_01884a6c;
      local_48 = param_1 + 0xc;
      local_50 = param_1 + 8;
      local_58 = param_1 + 6;
      local_60 = param_1 + 4;
      local_68 = (uint **)(param_1 + 0xd);
      local_4c = &DAT_01884a4c;
      local_54 = &DAT_01884a3c;
      local_5c = &DAT_01884a3c;
      local_64 = &DAT_01884a2c;
      puStack_40 = param_1;
      uVar2 = FUN_00fb36b8(param_2,"Chunked",7,&DAT_01884a8c,7,&local_68,7);
      return uVar2;
    }
    puVar5 = (uint *)*param_2;
    iVar6 = param_2[1];
    pcVar4 = *(code **)(iVar6 + 0xc);
    iVar1 = (*pcVar4)(puVar5,
                      "EofExpectedArrayExpectedAttributeExpectedAttributeEndExpectedBooleanExpectedCommaExpectedCharExpectedByteLiteralExpectedFloatFloatUnderscoreExpectedIntegerExpectedOptionExpectedOptionEndExpectedMapExpectedMapEnd"
                      ,3);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(puVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      if ((char)param_1[1] == '\x01') {
        uVar2 = 4;
        puVar3 = &DAT_00568b2c;
      }
      else {
        uVar2 = 5;
        puVar3 = &DAT_00414fdc;
      }
      iVar1 = FUN_00faace8(param_2,puVar3,uVar2);
    }
    else {
      iVar1 = (*pcVar4)(puVar5,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_28 = &local_21;
      local_64 = &DAT_01880dc4;
      local_60 = (uint *)param_2[2];
      local_5c = (undefined *)param_2[3];
      local_21 = 1;
      local_68 = &local_30;
      local_30 = puVar5;
      local_2c = iVar6;
      if ((char)param_1[1] == '\x01') {
        iVar1 = FUN_00faace8(&local_68,&DAT_00568b2c,4);
      }
      else {
        iVar1 = FUN_00faace8(&local_68,&DAT_00414fdc,5);
      }
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    }
  }
  if (iVar1 != 0) {
    return 1;
  }
LAB_010ba0d0:
  uVar2 = (*pcVar4)(puVar5,&DAT_00418e07,1);
  return uVar2;
}

