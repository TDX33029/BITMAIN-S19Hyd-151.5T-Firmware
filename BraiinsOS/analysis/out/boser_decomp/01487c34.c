// FUN_01487c34 @ 01487c34 size=836 calls_out=8 calls_in=2
// strings: Temperature | Temperature | Temperature | PauseMode

void FUN_01487c34(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *local_f88;
  char *local_f84;
  undefined4 local_f80;
  undefined1 auStack_e00 [392];
  undefined1 auStack_c78 [392];
  undefined4 *local_af0;
  undefined4 local_aec;
  undefined4 local_ae8;
  undefined1 auStack_ae0 [376];
  int *local_968;
  undefined1 *local_964;
  undefined4 local_960;
  undefined1 auStack_958 [376];
  undefined1 auStack_7e0 [380];
  undefined4 **local_664;
  undefined1 *local_660;
  int *local_65c;
  undefined1 *local_658;
  undefined4 local_654;
  undefined4 *local_650;
  char *local_64c;
  undefined4 local_648 [2];
  undefined1 auStack_640 [1168];
  int *local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 auStack_1a4 [384];
  
  local_648[0] = 0xb;
  local_650 = (undefined4 *)0x80000000;
  local_968 = (int *)&local_650;
  local_64c = "Temperature";
  local_964 = &LAB_012b97d8;
  FUN_00664898(&local_f88,&DAT_00590e5f,&local_968);
  if (local_650 != (undefined4 *)0x80000000) {
    FUN_019bb7e0(local_650,local_64c);
  }
  uVar3 = local_f80;
  pcVar2 = local_f84;
  piVar1 = local_f88;
  local_f80 = 0;
  local_f84 = (char *)0x8;
  local_f88 = (int *)0x0;
  FUN_0145a89c(&local_650,&local_f88);
  local_ae8 = uVar3;
  local_aec = pcVar2;
  local_af0 = piVar1;
  FUN_01bed4e2(auStack_ae0,&local_650,0x178);
  local_648[0] = 0xb;
  local_64c = "Temperature";
  local_650 = (undefined4 *)0x80000000;
  local_964 = &LAB_012b97d8;
  local_968 = (int *)&local_650;
  FUN_00664898(&local_f88,&DAT_00590e5f,&local_968);
  if (local_650 != (undefined4 *)0x80000000) {
    FUN_019bb7e0(local_650,local_64c);
  }
  uVar3 = local_f80;
  pcVar2 = local_f84;
  piVar1 = local_f88;
  local_f80 = 0;
  local_f84 = (char *)0x8;
  local_f88 = (undefined4 *)0x0;
  FUN_0145a89c(&local_650,&local_f88);
  local_960 = uVar3;
  local_964 = pcVar2;
  local_968 = piVar1;
  FUN_01bed4e2(auStack_958,&local_650,0x178);
  local_648[0] = 0xb;
  local_64c = "Temperature";
  local_650 = (undefined4 *)0x80000000;
  local_658 = &LAB_012b97d8;
  local_65c = (int *)&local_650;
  FUN_00664898(&local_f88,&DAT_00590e5f,&local_65c);
  if (local_650 != (undefined4 *)0x80000000) {
    FUN_019bb7e0(local_650,local_64c);
  }
  uVar3 = local_f80;
  pcVar2 = local_f84;
  piVar1 = local_f88;
  local_654 = 0;
  local_658 = (undefined1 *)0x8;
  local_65c = (int *)0x0;
  FUN_0145a89c(&local_f88,&local_65c);
  local_648[0] = uVar3;
  local_64c = pcVar2;
  local_650 = piVar1;
  FUN_01bed4e2(auStack_640,&local_f88,0x178);
  local_f80 = 9;
  local_f84 = "PauseMode";
  local_660 = &LAB_012b97d8;
  local_f88 = (undefined4 *)0x80000000;
  local_664 = &local_f88;
  FUN_00664898(&local_65c,&DAT_00590e5f,&local_664);
  if (local_f88 != (undefined4 *)0x80000000) {
    FUN_019bb7e0(local_f88,local_f84);
  }
  uVar3 = local_654;
  puVar4 = local_658;
  piVar1 = local_65c;
  local_654 = 0;
  local_658 = (undefined1 *)0x8;
  local_65c = (int *)0x0;
  FUN_0146672c(&local_f88,&local_65c);
  FUN_01bed4e2((uint)auStack_7e0 | 4,&local_f88,0x178);
  FUN_01bed4e2(&local_f88,&local_af0,0x188);
  FUN_01bed4e2(auStack_e00,&local_968,0x188);
  FUN_01bed4e2(auStack_c78,&local_650,0x188);
  local_64c = (char *)0x4;
  local_650 = (undefined4 *)0x0;
  FUN_01bed4e2(local_648,&local_f88,0x498);
  local_1a8 = uVar3;
  local_1ac = puVar4;
  local_1b0 = piVar1;
  FUN_01bed4e2(auStack_1a4,auStack_7e0,0x17c);
  FUN_014888f8(param_1,&local_650);
  local_64c = (char *)0x0;
  local_650 = (undefined4 *)0x0;
  FUN_014889fc(param_1,&local_650);
  local_64c = (char *)0x0;
  local_650 = (undefined4 *)0x0;
  FUN_014889fc(param_1,&local_650);
  local_64c = (char *)0x0;
  local_650 = (undefined4 *)0x0;
  FUN_014889fc(param_1,&local_650);
  FUN_014801b4(param_1);
  return;
}

