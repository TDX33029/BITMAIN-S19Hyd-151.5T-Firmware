// FUN_018fec60 @ 018fec60 size=280 calls_out=2 calls_in=3
// strings: traffic upd | tls13 

void FUN_018fec60(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [68];
  ushort local_54;
  undefined1 local_52;
  undefined1 local_51;
  ushort *local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar3 = 0xc;
  if (param_3 != 0) {
    iVar3 = 0x50;
  }
  iVar3 = param_2 + iVar3;
  uVar5 = (**(code **)(*(int *)(*(int *)(param_2 + 8) + 0xc) + 0x18))
                    (*(undefined4 *)(*(int *)(param_2 + 8) + 8),iVar3);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  pcVar4 = *(code **)(iVar2 + 0x10);
  uVar1 = (**(code **)(iVar2 + 0x14))();
  local_54 = (ushort)((uVar1 & 0xff) << 8) | (ushort)(uVar1 >> 8) & 0xff;
  local_30 = &local_51;
  local_52 = 0x11;
  local_28 = 1;
  local_2c = 1;
  local_44 = 1;
  local_48 = &local_52;
  local_4c = 2;
  local_50 = &local_54;
  local_38 = "traffic upd";
  local_51 = 0;
  local_24 = 0;
  local_34 = 0xb;
  local_3c = 6;
  local_40 = "tls13 ";
  (*pcVar4)(auStack_98,(int)uVar5,&local_50,6);
  FUN_01443048((int)uVar5,iVar2);
  iVar2 = 0;
  do {
    *(undefined1 *)(iVar3 + iVar2) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x40);
  FUN_01bed4e2(iVar3,auStack_98,0x44);
  FUN_01bed4e2(param_1,auStack_98,0x44);
  return;
}

