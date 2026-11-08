// FUN_00e71710 @ 00e71710 size=524 calls_out=6 calls_in=0
// strings: 

void FUN_00e71710(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_290 [96];
  undefined1 auStack_230 [144];
  undefined1 auStack_1a0 [92];
  undefined1 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  int local_120;
  undefined4 local_11c;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int *local_a0 [32];
  
  local_b0 = 200;
  local_b4 = local_b4 & 0xffffff00;
  local_b8 = 0;
  local_bc = 0;
  local_c0 = (undefined4 *)0x0;
  local_120 = thunk_FUN_016d4a50(0x910);
  if (local_120 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x910);
  }
  *(undefined4 *)(local_120 + 0x900) = 0;
  *(undefined4 *)(local_120 + 0x904) = 0;
  *(undefined4 *)(local_120 + 0x908) = 0;
  *(undefined4 *)(local_120 + 0x90c) = 0;
  local_13c = 1;
  local_140 = 1;
  local_a8 = 1;
  local_ac = 100;
  local_c8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_11c = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_a4 = 0;
  local_c4 = 0;
  local_a0[0] = (int *)0x0;
  local_d0 = local_120;
  local_cc = local_120;
  iVar4 = FUN_016d51b0(local_a0,0x20,0xa0);
  piVar3 = local_a0[0];
  if ((iVar4 != 0) || (local_a0[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0xa0);
  }
  FUN_016dd1aa(local_a0[0],&local_140,0xa0);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xe71920);
    (*pcVar1)();
  }
  uVar6 = FUN_01626844();
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar5 = 1;
  puVar5[1] = 1;
  puVar5[2] = 0;
  FUN_016dd1aa(auStack_1a0,param_2,0x5c);
  local_144 = 0;
  FUN_005bb454(local_a0);
  local_bc = 0;
  local_b8 = 0;
  local_c0 = &DAT_005674cc;
  local_b4 = 0;
  FUN_016dd1aa(&local_140,local_a0,0x80);
  FUN_016dd1aa(auStack_290,auStack_1a0,0x60);
  FUN_016dd1aa(auStack_230,&local_140,0x90);
  *(int **)(param_1 + 0x100) = piVar3;
  *(int *)(param_1 + 0x104) = (int)uVar6;
  *(undefined4 **)(param_1 + 0x108) = puVar5;
  FUN_016dd1aa(param_1,auStack_290,0xf0);
  *(undefined4 *)(param_1 + 0xf0) = 1000;
  *(undefined4 *)(param_1 + 0xf4) = 100;
  *(int **)(param_1 + 0xf8) = piVar3;
  *(int *)(param_1 + 0xfc) = (int)((ulonglong)uVar6 >> 0x20);
  return;
}

