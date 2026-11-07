// FUN_01b61b70 @ 01b61b70 size=892 calls_out=8 calls_in=2
// strings: 

undefined8 FUN_01b61b70(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_7d20 [3324];
  undefined4 auStack_7024 [1217];
  undefined1 auStack_5d20 [8192];
  undefined1 auStack_3d20 [1024];
  undefined1 auStack_3920 [1024];
  undefined1 auStack_3520 [1024];
  undefined1 auStack_3120 [1024];
  undefined1 auStack_2d20 [1024];
  undefined1 auStack_2920 [1024];
  undefined1 auStack_2520 [1024];
  undefined1 auStack_2120 [1024];
  undefined1 auStack_1d20 [1024];
  undefined1 auStack_1920 [1024];
  undefined1 auStack_1520 [1024];
  undefined1 auStack_1120 [1024];
  undefined1 auStack_d20 [1024];
  undefined1 auStack_920 [1024];
  undefined1 auStack_520 [1024];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [32];
  undefined2 local_40;
  int local_2c;
  undefined4 uStack_28;
  
  puVar4 = (undefined4 *)(auStack_60 + 0x3c);
  do {
    puVar4 = puVar4 + -0x400;
    *puVar4 = param_1;
  } while (puVar4 != auStack_7024);
  local_2c = DAT_01d53560;
  FUN_01b269d8(auStack_60,param_3,0x20,0);
  local_40 = 0x708;
  FUN_01b5b7f8(auStack_60,0x22,auStack_120,0x80);
  FUN_01b5c214(auStack_1d20,auStack_1920,auStack_1520,auStack_1120,auStack_100,0,1,2,3);
  FUN_01b5c214(auStack_d20,auStack_920,auStack_520,auStack_3d20,auStack_100,4,5,6,0xff);
  FUN_01b5c214(auStack_3d20,auStack_3920,auStack_3520,auStack_3120,auStack_100,7,8,9,10);
  FUN_01b5c214(auStack_2d20,auStack_2920,auStack_2520,auStack_2120,auStack_100,0xb,0xc,0xd,0xe);
  FUN_01b61970(auStack_7d20,auStack_5d20,auStack_a0,param_1,auStack_120,auStack_1d20,auStack_3d20);
  FUN_01b269d8(param_2,auStack_120,0x20);
  FUN_01b269d8(param_2 + 0x20,auStack_c0);
  FUN_01b269d8(param_2 + 0x40,auStack_a0);
  iVar1 = param_2 + 800;
  iVar3 = param_2 + 0x80;
  do {
    iVar2 = iVar3 + 0x60;
    FUN_01b1cff8(iVar3);
    iVar3 = iVar2;
  } while (iVar2 != iVar1);
  do {
    FUN_01b1cff8(iVar1);
    iVar1 = iVar1 + 0x60;
  } while (iVar1 != param_2 + 0x620);
  iVar3 = param_2 + 0x620;
  do {
    iVar1 = iVar3 + 0x1a0;
    FUN_01b1cd00(iVar3);
    iVar3 = iVar1;
  } while (iVar1 != param_2 + 0x1320);
  FUN_01b6b174(auStack_7d20,0x2000);
  FUN_01b6b174(auStack_5d20,0x2000);
  FUN_01b6b174(auStack_3d20,0x2000);
  FUN_01b6b174(auStack_1d20,0x1c00);
  FUN_01b6b174(auStack_a0,0x40);
  FUN_01b6b174(auStack_60,0x22);
  FUN_01b6b174(auStack_120,0x80);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

