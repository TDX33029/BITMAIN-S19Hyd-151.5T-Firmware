// FUN_01457f60 @ 01457f60 size=644 calls_out=6 calls_in=1
// strings: TeraHashrate | TeraHashrate | TeraHashrate

void FUN_01457f60(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *local_af0;
  char *local_aec;
  undefined4 local_ae8;
  undefined1 auStack_968 [392];
  int *local_7e0;
  undefined1 *local_7dc;
  undefined4 local_7d8;
  undefined1 auStack_7d0 [376];
  undefined1 auStack_658 [380];
  undefined4 **local_4dc;
  undefined1 *local_4d8;
  int *local_4d4;
  undefined1 *local_4d0;
  undefined4 local_4cc;
  undefined4 *local_4c8;
  char *local_4c4;
  undefined4 local_4c0 [2];
  undefined1 auStack_4b8 [776];
  int *local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 auStack_1a4 [384];
  
  local_4c0[0] = 0xc;
  local_4c8 = (undefined4 *)0x80000000;
  local_7e0 = (int *)&local_4c8;
  local_4c4 = "TeraHashrate";
  local_7dc = &LAB_012b97d8;
  FUN_00664898(&local_af0,&DAT_00590e5f,&local_7e0);
  if (local_4c8 != (undefined4 *)0x80000000) {
    FUN_019bb7e0(local_4c8,local_4c4);
  }
  uVar3 = local_ae8;
  pcVar2 = local_aec;
  piVar1 = local_af0;
  local_ae8 = 0;
  local_aec = (char *)0x8;
  local_af0 = (undefined4 *)0x0;
  FUN_01458294(&local_4c8,&local_af0);
  local_7d8 = uVar3;
  local_7dc = pcVar2;
  local_7e0 = piVar1;
  FUN_01bed4e2(auStack_7d0,&local_4c8,0x178);
  local_4c0[0] = 0xc;
  local_4c4 = "TeraHashrate";
  local_4c8 = (undefined4 *)0x80000000;
  local_4d0 = &LAB_012b97d8;
  local_4d4 = (int *)&local_4c8;
  FUN_00664898(&local_af0,&DAT_00590e5f,&local_4d4);
  if (local_4c8 != (undefined4 *)0x80000000) {
    FUN_019bb7e0(local_4c8,local_4c4);
  }
  uVar3 = local_ae8;
  pcVar2 = local_aec;
  piVar1 = local_af0;
  local_4cc = 0;
  local_4d0 = (undefined1 *)0x8;
  local_4d4 = (int *)0x0;
  FUN_01458294(&local_af0,&local_4d4);
  local_4c0[0] = uVar3;
  local_4c4 = pcVar2;
  local_4c8 = piVar1;
  FUN_01bed4e2(auStack_4b8,&local_af0,0x178);
  local_ae8 = 0xc;
  local_aec = "TeraHashrate";
  local_af0 = (undefined4 *)0x80000000;
  local_4d8 = &LAB_012b97d8;
  local_4dc = &local_af0;
  FUN_00664898(&local_4d4,&DAT_00590e5f,&local_4dc);
  if (local_af0 != (undefined4 *)0x80000000) {
    FUN_019bb7e0(local_af0,local_aec);
  }
  uVar3 = local_4cc;
  puVar4 = local_4d0;
  piVar1 = local_4d4;
  local_4cc = 0;
  local_4d0 = (undefined1 *)0x8;
  local_4d4 = (int *)0x0;
  FUN_01458294(&local_af0,&local_4d4);
  FUN_01bed4e2((uint)auStack_658 | 4,&local_af0,0x178);
  FUN_01bed4e2(&local_af0,&local_7e0,0x188);
  FUN_01bed4e2(auStack_968,&local_4c8,0x188);
  local_4c4 = (char *)0x3;
  local_4c8 = (undefined4 *)0x0;
  FUN_01bed4e2(local_4c0,&local_af0,0x310);
  local_1a8 = uVar3;
  local_1ac = puVar4;
  local_1b0 = piVar1;
  FUN_01bed4e2(auStack_1a4,auStack_658,0x17c);
  FUN_01488414(param_1,&local_4c8);
  local_4c4 = (char *)0x0;
  local_4c8 = (undefined4 *)0x0;
  FUN_014889fc(param_1,&local_4c8);
  local_4c4 = (char *)0x0;
  local_4c8 = (undefined4 *)0x0;
  FUN_014889fc(param_1,&local_4c8);
  local_4c4 = (char *)0x0;
  local_4c8 = (undefined4 *)0x0;
  FUN_014889fc(param_1,&local_4c8);
  return;
}

