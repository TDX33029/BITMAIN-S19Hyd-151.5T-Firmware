// FUN_01650a90 @ 01650a90 size=200 calls_out=4 calls_in=171
// strings: 

void FUN_01650a90(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
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
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar7 = thunk_FUN_01bee35a(param_1,0x184);
  puVar2 = (undefined4 *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  local_90 = 0;
  if ((*(char *)(puVar2 + 0xd) != '\x01') &&
     (puVar2 = (undefined4 *)FUN_01652ae4(), puVar2 == (undefined4 *)0x0)) {
    FUN_01651608(&local_58);
    FUN_0164cc04(&local_90);
    local_90 = 1;
    puVar2 = &local_8c;
    local_8c = local_58;
    uStack_88 = uStack_54;
    uStack_84 = uStack_50;
    uStack_80 = uStack_4c;
    local_7c = local_48;
    uStack_78 = uStack_44;
    uStack_74 = uStack_40;
    uStack_70 = uStack_3c;
    local_6c = local_38;
    local_68 = uStack_34;
    uStack_64 = uStack_30;
    uStack_60 = uStack_2c;
    uStack_5c = uStack_28;
  }
  iVar4 = puVar2[8];
  iVar5 = puVar2[9];
  iVar6 = iVar5 * -4;
  iVar3 = iVar5;
  do {
    if (iVar6 == 0) goto LAB_01650af8;
    piVar1 = (int *)((iVar4 + -4) - iVar6);
    iVar6 = iVar6 + 4;
    iVar3 = iVar3 + -1;
  } while (*piVar1 != param_1);
  puVar2[9] = iVar5 + -1;
  *(undefined4 *)(iVar4 + iVar3 * 4) = *(undefined4 *)(iVar4 + (iVar5 + -1) * 4);
LAB_01650af8:
  FUN_0164cc04(&local_90);
  return;
}

