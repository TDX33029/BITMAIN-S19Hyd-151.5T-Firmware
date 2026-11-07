// FUN_01b64fe8 @ 01b64fe8 size=648 calls_out=18 calls_in=0
// strings: 

undefined4 FUN_01b64fe8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  short *psVar4;
  undefined4 local_11ec;
  undefined1 auStack_11e0 [444];
  undefined4 local_1024;
  undefined1 auStack_de0 [512];
  undefined1 auStack_be0 [512];
  undefined1 auStack_9e0 [32];
  undefined1 auStack_9c0 [768];
  undefined1 auStack_6c0 [512];
  short asStack_4c0 [256];
  short local_2c0 [256];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [52];
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_1024 = param_1;
  iVar1 = FUN_01b5afac(param_3,param_2,&PTR_01d3b2b0,0);
  if (iVar1 == 0) {
    FUN_01b1de20(auStack_de0,param_2);
    FUN_01b1de20(auStack_be0,param_2 + 0x140);
    FUN_01b1ddb8(local_2c0,param_2 + 0x280);
    FUN_01b1e194(auStack_11e0,param_3);
    FUN_01b29338(auStack_de0);
    FUN_01b295a4(auStack_6c0,auStack_de0);
    FUN_01b1e1c8(asStack_4c0,auStack_11e0,auStack_de0,auStack_6c0);
    FUN_01b293d8(asStack_4c0);
    iVar1 = 0x100;
    psVar3 = local_2c0;
    psVar4 = asStack_4c0;
    do {
      iVar1 = iVar1 + -1;
      *psVar3 = *psVar3 - *psVar4;
      psVar3 = psVar3 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar1 != 0);
    FUN_01b2898c(local_2c0);
    FUN_01b1e044(auStack_80,local_2c0);
    FUN_01b6b174(auStack_11e0,0x400);
    FUN_01b6b174(auStack_de0,0x400);
    FUN_01b6b174(auStack_6c0,0x200);
    FUN_01b6b174(local_2c0,0x200);
    FUN_01b6b174(asStack_4c0,0x200);
    FUN_01b269d8(auStack_60,param_3 + 0x620,0x20);
    FUN_01b5b204(auStack_80,0x40,auStack_c0);
    FUN_01b64a58(auStack_9e0,auStack_80,param_3 + 0x300,auStack_a0);
    uVar2 = FUN_01b1db34(param_2,auStack_9e0,0x300);
    FUN_01b269d8(auStack_9e0,param_3 + 0x640,0x20);
    FUN_01b269d8(auStack_9c0,param_2,0x300);
    FUN_01b5b7f8(auStack_9e0,800,param_1,0x20);
    FUN_01b23084(param_1,auStack_c0,uVar2);
    FUN_01b6b174(auStack_80,0x40);
    FUN_01b6b174(auStack_c0,0x40);
    FUN_01b6b174(auStack_9e0,800);
    local_11ec = 0;
  }
  else {
    local_11ec = 0xffffffff;
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return local_11ec;
}

