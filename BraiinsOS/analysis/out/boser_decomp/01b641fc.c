// FUN_01b641fc @ 01b641fc size=880 calls_out=16 calls_in=2
// strings: 

undefined8 FUN_01b641fc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *local_336c;
  undefined1 auStack_3360 [828];
  int local_3024;
  undefined1 auStack_2160 [316];
  int local_2024;
  undefined1 auStack_1f60 [512];
  undefined1 auStack_1d60 [512];
  undefined1 auStack_1b60 [512];
  undefined1 auStack_1960 [512];
  undefined1 auStack_1760 [512];
  undefined1 auStack_1560 [1340];
  int local_1024;
  undefined1 auStack_f60 [512];
  undefined1 auStack_d60 [512];
  undefined1 auStack_b60 [512];
  undefined1 auStack_960 [768];
  undefined1 auStack_660 [512];
  undefined1 auStack_460 [512];
  undefined1 auStack_260 [512];
  undefined1 auStack_60 [52];
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_3024 = param_1;
  local_2024 = param_1;
  local_1024 = param_1;
  FUN_01b1e434(auStack_1560,param_3,&PTR_01d3b2b0,0);
  FUN_01b269d8(auStack_60,param_3 + 0x480,0x20);
  iVar2 = 0;
  FUN_01b1dfe0(auStack_460,param_2);
  FUN_01b625a0(auStack_3360,auStack_60,1);
  FUN_01b62ad4(auStack_f60,auStack_d60,auStack_b60,auStack_2160,param_4,0,1,2,0xff);
  FUN_01b62ad4(auStack_1b60,auStack_1960,auStack_1760,auStack_660,param_4,3,4,5,6);
  FUN_01b29364(auStack_f60);
  FUN_01b295d8(auStack_960,auStack_f60);
  puVar1 = auStack_3360;
  puVar3 = auStack_2160;
  do {
    iVar2 = iVar2 + 1;
    FUN_01b1e484(puVar3,puVar1,auStack_f60,auStack_960);
    puVar3 = puVar3 + 0x200;
    puVar1 = puVar1 + 0x600;
  } while (iVar2 != 3);
  iVar2 = 0;
  FUN_01b1e484(auStack_260,auStack_1560,auStack_f60,auStack_960);
  FUN_01b293d8(auStack_2160);
  FUN_01b293d8(auStack_1f60);
  FUN_01b293d8(auStack_1d60);
  FUN_01b293d8(auStack_260);
  do {
    puVar3 = auStack_1b60 + iVar2;
    puVar1 = auStack_2160 + iVar2;
    iVar2 = iVar2 + 0x200;
    FUN_01b1e118(puVar1,puVar3);
  } while (iVar2 != 0x600);
  FUN_01b1e118(auStack_260,auStack_660);
  FUN_01b1e118(auStack_260,auStack_460);
  FUN_01b28b28(auStack_2160);
  FUN_01b2898c(auStack_260);
  iVar2 = param_1 + 0x3c0;
  local_336c = auStack_2160;
  do {
    FUN_01b1dca8(param_1,local_336c);
    param_1 = param_1 + 0x140;
    local_336c = local_336c + 0x200;
  } while (param_1 != iVar2);
  FUN_01b1db90(param_1,auStack_260);
  FUN_01b6b174(auStack_60,0x20);
  FUN_01b6b174(auStack_f60,0x600);
  FUN_01b6b174(auStack_960,0x300);
  FUN_01b6b174(auStack_2160,0x600);
  FUN_01b6b174(auStack_260,0x200);
  FUN_01b6b174(auStack_3360,0x1200);
  FUN_01b6b174(auStack_460,0x200);
  FUN_01b6b174(auStack_1b60,0x600);
  FUN_01b6b174(auStack_660,0x200);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

