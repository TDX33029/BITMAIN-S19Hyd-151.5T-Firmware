// FUN_018fe998 @ 018fe998 size=308 calls_out=2 calls_in=1
// strings: tls13 

void FUN_018fe998(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 local_9c [68];
  ushort local_58;
  undefined1 local_56;
  undefined1 local_55;
  ushort *local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  char *local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar5 = (**(code **)(*(int *)(param_2 + 0xc) + 0x18))(*(undefined4 *)(param_2 + 8),param_3);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  pcVar4 = *(code **)(iVar2 + 0x10);
  uVar1 = (**(code **)(iVar2 + 0x14))();
  local_58 = (ushort)((uVar1 & 0xff) << 8) | (ushort)(uVar1 >> 8) & 0xff;
  local_34 = &local_55;
  local_56 = 0xe;
  local_55 = 0;
  local_28 = 0;
  local_2c = 1;
  local_30 = 1;
  local_48 = 1;
  local_4c = &local_56;
  local_50 = 2;
  local_54 = &local_58;
  local_3c = &DAT_00570760;
  local_38 = 8;
  local_40 = 6;
  local_44 = "tls13 ";
  (*pcVar4)(local_9c,(int)uVar5,&local_54,6);
  uVar1 = *(uint *)(param_4 + 0x40);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d258e8);
  }
  (**(code **)(*(int *)(param_2 + 0xc) + 0x1c))
            (param_1,*(undefined4 *)(param_2 + 8),local_9c,param_4,uVar1);
  iVar3 = 0;
  do {
    local_9c[iVar3] = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x40);
  FUN_01443048((int)uVar5,iVar2);
  return;
}

