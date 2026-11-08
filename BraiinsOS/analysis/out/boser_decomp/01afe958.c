// FUN_01afe958 @ 01afe958 size=476 calls_out=6 calls_in=0
// strings: 

undefined8
FUN_01afe958(int param_1,int param_2,uint param_3,int param_4,uint param_5,undefined4 param_6,
            int param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  int local_180;
  uint local_17c;
  undefined1 auStack_170 [292];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b500a0(auStack_170,param_6,&PTR_01d3b2b0,0);
  FUN_01b501dc(auStack_170,param_4,param_5 & 0xfffffff0);
  if ((param_5 & 0xf) != 0) {
    FUN_01afe7f0(auStack_4c,0x10);
    FUN_01afe8f4(auStack_4c,param_4 + (param_5 & 0xfffffff0),param_5 & 0xf);
    FUN_01b501dc(auStack_170,auStack_4c,0x10);
  }
  FUN_01b501dc(auStack_170,param_2,param_3 & 0xfffffff0);
  if ((param_3 & 0xf) != 0) {
    FUN_01afe7f0(auStack_4c,0x10);
    FUN_01afe8f4(auStack_4c,param_2 + (param_3 & 0xfffffff0),param_3 & 0xf);
    FUN_01b501dc(auStack_170,auStack_4c,0x10);
  }
  local_17c = param_5 >> 0x1d;
  local_180 = param_5 << 3;
  FUN_01afe8f4(auStack_3c,&local_180,8);
  local_17c = param_3 >> 0x1d;
  local_180 = param_3 << 3;
  FUN_01afe8f4(auStack_34,&local_180,8);
  FUN_01b501dc(auStack_170,auStack_3c,0x10);
  FUN_01b5030c(auStack_170,param_1);
  pbVar2 = (byte *)(param_1 + -1);
  pbVar1 = (byte *)(param_7 + -1);
  do {
    pbVar2 = pbVar2 + 1;
    pbVar1 = pbVar1 + 1;
    *pbVar2 = *pbVar2 ^ *pbVar1;
  } while (pbVar2 != (byte *)(param_1 + 0xb));
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0x7f;
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

