// FUN_0165098c @ 0165098c size=188 calls_out=5 calls_in=166
// strings: 

void FUN_0165098c(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = thunk_FUN_01bee35a(param_1,0x184);
  puVar1 = (undefined4 *)((int)uVar3 + (int)((ulonglong)uVar3 >> 0x20));
  local_88 = 0;
  if ((*(char *)(puVar1 + 0xd) != '\x01') &&
     (puVar1 = (undefined4 *)FUN_01652ae4(puVar1), puVar1 == (undefined4 *)0x0)) {
    FUN_01651608(&local_50);
    FUN_0164cc04(&local_88);
    puVar1 = &local_84;
    local_88 = 1;
    local_84 = local_50;
    uStack_80 = uStack_4c;
    uStack_7c = uStack_48;
    uStack_78 = uStack_44;
    local_74 = local_40;
    uStack_70 = uStack_3c;
    uStack_6c = uStack_38;
    local_68 = uStack_34;
    local_64 = local_30;
    local_60 = uStack_2c;
    uStack_5c = uStack_28;
    uStack_58 = uStack_24;
    uStack_54 = uStack_20;
  }
  iVar2 = puVar1[9];
  if (iVar2 == puVar1[7]) {
    FUN_019ee1a8();
  }
  *(undefined4 *)(puVar1[8] + iVar2 * 4) = param_1;
  puVar1[9] = iVar2 + 1;
  FUN_0164cc04(&local_88);
  return;
}

