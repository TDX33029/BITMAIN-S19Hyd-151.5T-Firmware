// FUN_018fed9c @ 018fed9c size=692 calls_out=5 calls_in=2
// strings: tls13  | exporterk | tls13  | exporting too much

void FUN_018fed9c(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
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
  char *local_44;
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
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  if (0x40 < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_5c,0x40,&DAT_01d258e8);
  }
  pcVar5 = *(code **)(iVar4 + 0x10);
  uVar3 = (**(code **)(iVar4 + 0x14))(uVar2);
  local_54 = &local_58;
  local_58 = (ushort)((uVar3 & 0xff) << 8) | (ushort)(uVar3 >> 8) & 0xff;
  local_56 = (char)param_6 + '\x06';
  local_30 = 1;
  local_48 = 1;
  local_4c = &local_56;
  local_38 = param_6;
  local_55 = (undefined1)uVar1;
  local_28 = uVar1;
  local_34 = &local_55;
  local_3c = (char *)param_5;
  local_40 = 6;
  local_44 = "tls13 ";
  local_50 = 2;
  local_2c = auStack_9c;
  (*pcVar5)(local_e0,uVar2,&local_54,6);
  FUN_01443048(uVar2,iVar4);
  if (param_7 == 0) {
    param_8 = 0;
  }
  if (param_7 == 0) {
    param_7 = 1;
  }
  (**(code **)(*(int *)(iVar6 + 0x1c) + 0x10))
            (auStack_9c,*(undefined4 *)(iVar6 + 0x18),param_7,param_8);
  uVar7 = (**(code **)(*(int *)(iVar6 + 0xc) + 0x18))(*(undefined4 *)(iVar6 + 8),local_e0);
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  if (0x40 < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_5c,0x40,&DAT_01d258e8);
  }
  local_54 = &local_58;
  local_3c = "exporterk";
  local_58 = (ushort)((param_4 & 0xff) << 8) | (ushort)(param_4 >> 8) & 0xff;
  local_56 = '\x0e';
  local_34 = &local_55;
  local_55 = (undefined1)local_5c;
  local_28 = local_5c;
  local_30 = 1;
  local_38 = 8;
  local_40 = 6;
  local_48 = 1;
  local_44 = "tls13 ";
  local_4c = &local_56;
  local_50 = 2;
  local_2c = auStack_9c;
  iVar6 = (**(code **)(iVar4 + 0xc))((int)uVar7,&local_54,6,param_3,param_4);
  if (iVar6 == 0) {
    *param_1 = 0x80000029;
  }
  else {
    iVar6 = thunk_FUN_01be5118(0x12);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x12);
    }
    FUN_01bed4e2(iVar6,"exporting too much",0x12);
    *param_1 = &DAT_80000020;
    param_1[1] = 0x12;
    param_1[2] = iVar6;
    param_1[3] = 0x12;
  }
  FUN_01443048((int)uVar7,iVar4);
  iVar4 = 0;
  do {
    local_e0[iVar4] = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x40);
  return;
}

