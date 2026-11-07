// FUN_006665a4 @ 006665a4 size=108 calls_out=1 calls_in=10
// strings: 

void FUN_006665a4(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uStack_9;
  
  uVar1 = -param_1;
  uVar2 = param_1 + 7;
  if (param_1 < 5) {
    param_1 = 4;
  }
  if (0x80000000 - param_1 < (uVar2 & uVar1) + param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_9,&DAT_01c03e68,&DAT_01c03ed0);
  }
  return;
}

