// FUN_017a2c8c @ 017a2c8c size=228 calls_out=4 calls_in=1
// strings: 

void FUN_017a2c8c(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_288 [108];
  undefined1 auStack_21c [512];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  uVar1 = FUN_017943f4(param_4,param_3,param_2,0);
  uVar2 = FUN_01794460(auStack_288,uVar1,param_1,param_3,param_2,0x7ff < param_3);
  if (uVar2 < 0xffffff89) {
    FUN_017942f0(auStack_21c,0x200,auStack_288,param_2,uVar1);
  }
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return;
}

