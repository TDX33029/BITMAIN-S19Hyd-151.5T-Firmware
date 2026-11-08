// FUN_0147179c @ 0147179c size=392 calls_out=3 calls_in=0
// strings: 

void FUN_0147179c(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uStack_54;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_40 = 2;
  uVar7 = thunk_FUN_016de0ee(2,0x40);
  iVar4 = (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar4 + 0x38) == '\x01') {
LAB_01471800:
    uVar1 = *(undefined4 *)(iVar4 + 0x18);
    uVar6 = *(undefined4 *)(iVar4 + 0x1c);
    *(undefined4 *)(iVar4 + 0x18) = uVar3;
    *(undefined4 *)(iVar4 + 0x1c) = uVar5;
  }
  else {
    uVar1 = 0;
    uVar6 = 0;
    if (*(char *)(iVar4 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar4,FUN_01655ec4);
      *(undefined1 *)(iVar4 + 0x38) = 1;
      goto LAB_01471800;
    }
  }
  FUN_01470cc4((undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)(param_1 + 0x14) = uStack_3c;
  *(undefined4 *)(param_1 + 0x18) = uStack_38;
  *(undefined4 *)(param_1 + 0x1c) = uStack_34;
  *(undefined4 *)(param_1 + 0x20) = uStack_30;
  *(undefined4 *)(param_1 + 0x24) = uStack_2c;
  cVar2 = *(char *)(iVar4 + 0x38);
  if (cVar2 == '\x01') {
LAB_0147185c:
    cVar2 = '\x01';
    *(undefined4 *)(iVar4 + 0x18) = uVar1;
    *(undefined4 *)(iVar4 + 0x1c) = uVar6;
  }
  else if (cVar2 != '\x02') {
    FUN_015e8e6c(iVar4,FUN_01655ec4);
    *(undefined1 *)(iVar4 + 0x38) = 1;
    local_40 = extraout_r1;
    goto LAB_0147185c;
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (cVar2 != '\x01') {
    uVar1 = 0;
    uVar6 = 0;
    if (cVar2 == '\x02') goto LAB_014718c4;
    FUN_015e8e6c(iVar4,FUN_01655ec4);
    *(undefined1 *)(iVar4 + 0x38) = 1;
  }
  uVar1 = *(undefined4 *)(iVar4 + 0x18);
  uVar6 = *(undefined4 *)(iVar4 + 0x1c);
  *(undefined4 *)(iVar4 + 0x18) = uVar3;
  *(undefined4 *)(iVar4 + 0x1c) = uVar5;
LAB_014718c4:
  FUN_01470cc4((undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = uStack_54;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = local_40;
  if (*(char *)(iVar4 + 0x38) != '\x01') {
    if (*(char *)(iVar4 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar4,FUN_01655ec4);
    *(undefined1 *)(iVar4 + 0x38) = 1;
  }
  *(undefined4 *)(iVar4 + 0x18) = uVar1;
  *(undefined4 *)(iVar4 + 0x1c) = uVar6;
  return;
}

