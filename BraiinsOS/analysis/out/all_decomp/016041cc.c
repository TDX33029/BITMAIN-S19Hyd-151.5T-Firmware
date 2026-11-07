// FUN_016041cc @ 016041cc size=368 calls_out=2 calls_in=0
// strings: stdout | stderr

byte FUN_016041cc(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int local_40;
  undefined1 auStack_3c [8];
  int local_34;
  undefined1 auStack_30 [8];
  undefined4 *local_28;
  byte local_24;
  byte local_23;
  
  FUN_00fab1e0(&local_40,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_00fab1e0(&local_34,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  local_24 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00410ace,6);
  local_23 = 0;
  local_28 = param_2;
  uVar2 = FUN_00fb2258(&local_28,&DAT_00410ad4,6,param_1 + 0x18,FUN_01604360);
  pcVar3 = FUN_0160460c;
  if (local_40 == 0) {
    pcVar3 = (code *)&LAB_015ee458;
    puVar4 = auStack_3c;
  }
  else {
    puVar4 = param_1;
  }
  uVar2 = FUN_00fb2258(uVar2,"stdout",6,puVar4,pcVar3);
  puVar4 = auStack_30;
  pcVar3 = (code *)&LAB_015ee458;
  if (local_34 != 0) {
    puVar4 = param_1 + 0xc;
    pcVar3 = FUN_0160460c;
  }
  FUN_00fb2258(uVar2,"stderr",6,puVar4,pcVar3);
  if (local_23 != 1 || (local_24 & 1) != 0) {
    return (local_23 | local_24) & 1;
  }
  if ((*(byte *)((int)local_28 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_28[1] + 0xc))(*local_28," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_28[1] + 0xc))(*local_28,"}",1);
  return bVar1 & 1;
}

