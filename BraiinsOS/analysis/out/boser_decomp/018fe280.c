// FUN_018fe280 @ 018fe280 size=200 calls_out=3 calls_in=2
// strings: CLIENT_EARLY_TRAFFIC_SECRET

void FUN_018fe280(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,code *param_8,
                 code *param_9,undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [64];
  uint local_20;
  
  FUN_018fe844(auStack_60,param_2,param_3,param_4,param_5,param_6);
  uVar2 = param_4 - 1U & 0xff;
  puVar3 = (&PTR_s_CLIENT_EARLY_TRAFFIC_SECRET_01d33ee4)[uVar2];
  uVar4 = *(undefined4 *)(&DAT_00538abc + uVar2 * 4);
  iVar1 = (*param_9)(param_7,puVar3,uVar4);
  if (iVar1 != 0) {
    if (0x40 < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_20,0x40,&DAT_01d24fd8);
    }
    (*param_8)(param_7,puVar3,uVar4,param_10,0x20,auStack_60,local_20);
  }
  FUN_01bed4e2(param_1,auStack_60,0x44);
  return;
}

