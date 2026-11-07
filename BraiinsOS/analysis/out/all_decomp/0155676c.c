// FUN_0155676c @ 0155676c size=984 calls_out=5 calls_in=2
// strings: exporter 

void FUN_0155676c(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_e0 [68];
  undefined1 auStack_9c [64];
  uint local_5c;
  ushort local_58;
  char local_56;
  undefined1 local_55;
  ushort *local_54;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  uint local_28;
  
  iVar6 = *(int *)(param_2 + 8);
  (**(code **)(*(int *)(iVar6 + 0x1c) + 0x10))(auStack_9c,*(undefined4 *)(iVar6 + 0x18),1,0);
  uVar7 = (**(code **)(*(int *)(iVar6 + 0xc) + 0x18))(*(undefined4 *)(iVar6 + 8),param_2 + 0x94);
  uVar1 = local_5c;
  puVar4 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  if (0x40 < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_5c,0x40,&DAT_018a7f14);
  }
  uVar3 = (*(code *)puVar4[5])(uVar2);
  local_58 = (ushort)((uVar3 & 0xff) << 8) | (ushort)(uVar3 >> 8) & 0xff;
  local_56 = (char)param_6 + '\x06';
  local_30 = 1;
  local_48 = 1;
  local_4c = &local_56;
  local_38 = param_6;
  local_34 = &local_55;
  local_55 = (undefined1)uVar1;
  local_28 = uVar1;
  local_3c = (char *)param_5;
  local_40 = 6;
  local_44 = &DAT_0040c506;
  local_50 = 2;
  local_54 = &local_58;
  local_2c = auStack_9c;
  (*(code *)puVar4[4])(local_e0,uVar2,&local_54,6);
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(uVar2);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  if (param_7 == 0) {
    param_8 = 0;
  }
  if (param_7 == 0) {
    param_7 = 1;
  }
  (**(code **)(*(int *)(iVar6 + 0x1c) + 0x10))
            (auStack_9c,*(undefined4 *)(iVar6 + 0x18),param_7,param_8);
  uVar7 = (**(code **)(*(int *)(iVar6 + 0xc) + 0x18))(*(undefined4 *)(iVar6 + 8),local_e0);
  puVar4 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  if (0x40 < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_5c,0x40,&DAT_018a7f14);
  }
  local_58 = (ushort)((param_4 & 0xff) << 8) | (ushort)(param_4 >> 8) & 0xff;
  local_3c = "exporter\n";
  local_56 = '\x0e';
  local_34 = &local_55;
  local_40 = 6;
  local_4c = &local_56;
  local_55 = (undefined1)local_5c;
  local_28 = local_5c;
  local_30 = 1;
  local_38 = 8;
  local_44 = &DAT_0040c506;
  local_48 = 1;
  local_50 = 2;
  local_54 = &local_58;
  local_2c = auStack_9c;
  iVar6 = (*(code *)puVar4[3])(uVar2,&local_54,6,param_3,param_4);
  if (iVar6 == 0) {
    *param_1 = 0x80000029;
    pcVar5 = (code *)*puVar4;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(0x12);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x12);
    }
    FUN_016dd1aa(iVar6,&DAT_0040c460,0x12);
    *param_1 = 0x80000020;
    param_1[1] = 0x12;
    param_1[2] = iVar6;
    param_1[3] = 0x12;
    pcVar5 = (code *)*puVar4;
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar2);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  return;
}

