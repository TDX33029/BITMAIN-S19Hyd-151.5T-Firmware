// FUN_014877e4 @ 014877e4 size=432 calls_out=6 calls_in=1
// strings: Power | Power

void FUN_014877e4(undefined4 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 local_650 [16];
  undefined1 auStack_640 [376];
  undefined1 auStack_4c8 [380];
  int *local_34c;
  undefined1 *local_348;
  int *local_344;
  undefined1 *local_340;
  undefined4 local_33c;
  int local_338;
  char *local_334;
  undefined4 local_330 [98];
  int *local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 auStack_19c [380];
  
  local_330[0] = 5;
  local_338 = -0x80000000;
  local_344 = &local_338;
  local_334 = "Power";
  local_340 = &LAB_012b97d8;
  FUN_00664898(local_650,&DAT_00590e5f,&local_344);
  if (local_338 != -0x80000000) {
    FUN_019bb7e0(local_338,local_334);
  }
  local_33c = 0;
  local_340 = (undefined1 *)0x8;
  local_344 = (int *)0x0;
  FUN_0145b340(&local_338,&local_344);
  FUN_01bed4e2(auStack_640,&local_338,0x178);
  local_330[0] = 5;
  local_334 = "Power";
  local_338 = -0x80000000;
  local_348 = &LAB_012b97d8;
  local_34c = &local_338;
  FUN_00664898(&local_344,&DAT_00590e5f,&local_34c);
  if (local_338 != -0x80000000) {
    FUN_019bb7e0(local_338,local_334);
  }
  uVar3 = local_33c;
  puVar2 = local_340;
  piVar1 = local_344;
  local_33c = 0;
  local_340 = (undefined1 *)0x8;
  local_344 = (int *)0x0;
  FUN_0145b340(&local_338,&local_344);
  FUN_01bed4e2((uint)auStack_4c8 | 4,&local_338,0x178);
  FUN_01bed4e2(local_330,local_650,0x188);
  local_334 = (char *)0x2;
  local_1a0 = uVar3;
  local_1a4 = puVar2;
  local_1a8 = piVar1;
  local_338 = 0;
  FUN_01bed4e2(auStack_19c,auStack_4c8,0x17c);
  FUN_01488a7c(param_1,&local_338);
  local_334 = (char *)0x0;
  local_338 = 0;
  FUN_014889fc(param_1,&local_338);
  local_334 = (char *)0x0;
  local_338 = 0;
  FUN_014889fc(param_1,&local_338);
  return;
}

