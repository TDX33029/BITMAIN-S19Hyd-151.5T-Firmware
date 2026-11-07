// FUN_01282570 @ 01282570 size=312 calls_out=8 calls_in=252
// strings: 

void FUN_01282570(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_90;
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
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x1c4);
  puVar3 = (undefined4 *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  bVar2 = true;
  local_90 = 0;
  if ((*(char *)(puVar3 + 0xd) != '\x01') &&
     (puVar3 = (undefined4 *)FUN_01284e64(), puVar3 == (undefined4 *)0x0)) {
    FUN_01283788(&local_58);
    FUN_012824e8(&local_90);
    puVar3 = &local_8c;
    local_8c = local_58;
    uStack_88 = uStack_54;
    uStack_84 = uStack_50;
    uStack_80 = uStack_4c;
    local_7c = local_48;
    local_78 = iStack_44;
    local_74 = uStack_40;
    local_70 = iStack_3c;
    bVar2 = false;
    local_6c = local_38;
    local_68 = uStack_34;
    uStack_64 = uStack_30;
    uStack_60 = uStack_2c;
    uStack_5c = uStack_28;
  }
  iVar5 = puVar3[8];
  iVar6 = puVar3[9];
  iVar7 = iVar6 * -4;
  iVar4 = iVar6;
  do {
    if (iVar7 == 0) goto LAB_012825dc;
    piVar1 = (int *)((iVar5 + -4) - iVar7);
    iVar7 = iVar7 + 4;
    iVar4 = iVar4 + -1;
  } while (*piVar1 != param_1);
  puVar3[9] = iVar6 + -1;
  *(undefined4 *)(iVar5 + iVar4 * 4) = *(undefined4 *)(iVar5 + (iVar6 + -1) * 4);
LAB_012825dc:
  if (!bVar2) {
    do {
      iVar7 = DAT_018dd954 + -1;
      bVar2 = (bool)hasExclusiveAccess(0x18dd954);
    } while (!bVar2);
    DAT_018dd954 = iVar7;
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

