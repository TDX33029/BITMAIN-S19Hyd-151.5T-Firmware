// FUN_01b64760 @ 01b64760 size=748 calls_out=18 calls_in=0
// strings: 

undefined4 FUN_01b64760(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 local_1830;
  undefined1 auStack_1820 [1536];
  undefined1 auStack_1220 [508];
  undefined4 local_1024;
  undefined1 auStack_c20 [32];
  undefined1 auStack_c00 [1088];
  undefined1 auStack_7c0 [768];
  short asStack_4c0 [256];
  short local_2c0 [256];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [52];
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_1024 = param_1;
  iVar1 = FUN_01b5b074(param_3,param_2,&PTR_01d3b2b0,0);
  if (iVar1 == 0) {
    iVar1 = param_2;
    puVar6 = auStack_1220;
    do {
      iVar5 = iVar1 + 0x140;
      FUN_01b1de20(puVar6,iVar1);
      puVar6 = puVar6 + 0x200;
      iVar1 = iVar5;
    } while (iVar5 != param_2 + 0x3c0);
    FUN_01b1ddb8(local_2c0,iVar5);
    FUN_01b1e434(auStack_1820,param_3);
    FUN_01b29364(auStack_1220);
    FUN_01b295d8(auStack_7c0,auStack_1220);
    FUN_01b1e484(asStack_4c0,auStack_1820,auStack_1220,auStack_7c0);
    FUN_01b293d8(asStack_4c0);
    iVar1 = 0x100;
    psVar2 = asStack_4c0;
    psVar4 = local_2c0;
    do {
      iVar1 = iVar1 + -1;
      *psVar4 = *psVar4 - *psVar2;
      psVar2 = psVar2 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar1 != 0);
    FUN_01b2898c(local_2c0);
    FUN_01b1e044(auStack_80,local_2c0);
    FUN_01b6b174(auStack_1820,0x600);
    FUN_01b6b174(auStack_1220,0x600);
    FUN_01b6b174(auStack_7c0,0x300);
    FUN_01b6b174(local_2c0,0x200);
    FUN_01b6b174(asStack_4c0,0x200);
    FUN_01b269d8(auStack_60,param_3 + 0x920,0x20);
    FUN_01b5b204(auStack_80,0x40,auStack_c0);
    FUN_01b641fc(auStack_c20,auStack_80,param_3 + 0x480,auStack_a0);
    uVar3 = FUN_01b1db34(param_2,auStack_c20,0x440);
    FUN_01b269d8(auStack_c20,param_3 + 0x940,0x20);
    FUN_01b269d8(auStack_c00,param_2,0x440);
    FUN_01b5b7f8(auStack_c20,0x460,param_1,0x20);
    FUN_01b23084(param_1,auStack_c0,uVar3);
    FUN_01b6b174(auStack_80,0x40);
    FUN_01b6b174(auStack_c0,0x40);
    FUN_01b6b174(auStack_c20,0x460);
    local_1830 = 0;
  }
  else {
    local_1830 = 0xffffffff;
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return local_1830;
}

