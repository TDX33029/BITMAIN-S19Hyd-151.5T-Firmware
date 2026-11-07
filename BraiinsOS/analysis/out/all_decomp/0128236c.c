// FUN_0128236c @ 0128236c size=304 calls_out=9 calls_in=356
// strings: 

void FUN_0128236c(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar5 = thunk_FUN_016de0ee(param_1,0x1c4);
  puVar2 = (undefined4 *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  iVar4 = 0;
  local_90 = 0;
  if ((*(char *)(puVar2 + 0xd) != '\x01') &&
     (puVar2 = (undefined4 *)FUN_01284e64(puVar2), puVar2 == (undefined4 *)0x0)) {
    FUN_01283788(&local_58);
    FUN_012824e8(&local_90);
    iVar4 = 1;
    puVar2 = &local_8c;
    local_90 = 1;
    local_8c = local_58;
    uStack_88 = uStack_54;
    uStack_84 = uStack_50;
    uStack_80 = uStack_4c;
    local_7c = local_48;
    local_78 = iStack_44;
    local_74 = uStack_40;
    local_70 = iStack_3c;
    local_6c = local_38;
    local_68 = uStack_34;
    uStack_64 = uStack_30;
    uStack_60 = uStack_2c;
    uStack_5c = uStack_28;
  }
  iVar3 = puVar2[9];
  if (iVar3 == puVar2[7]) {
    FUN_01286e0c();
    iVar4 = local_90;
  }
  *(undefined4 *)(puVar2[8] + iVar3 * 4) = param_1;
  puVar2[9] = iVar3 + 1;
  if (iVar4 != 0) {
    do {
      iVar4 = DAT_018dd954 + -1;
      bVar1 = (bool)hasExclusiveAccess(0x18dd954);
    } while (!bVar1);
    DAT_018dd954 = iVar4;
    if (local_70 != 0) {
      thunk_FUN_016d3fb4(local_6c);
    }
    if (local_78 != 3) {
      if (local_78 == 0) {
        FUN_012848c0(local_74);
        return;
      }
      if (local_78 == 1) {
        FUN_01283d28();
        return;
      }
      FUN_01284358();
      return;
    }
  }
  return;
}

