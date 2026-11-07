// FUN_018d5e70 @ 018d5e70 size=216 calls_out=4 calls_in=1
// strings: 

void FUN_018d5e70(int *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  int local_240 [135];
  
  uVar1 = param_4[3];
  if (param_3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d22fe8);
  }
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  (*(code *)*param_4)(local_240,param_2,uVar1);
  if (local_240[0] == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_240,&DAT_01d22fa8,&DAT_01d22ff8);
  }
  FUN_01bed4e2(param_1 + 1,(uint)local_240 | 4,0x20c);
  param_1[0x88] = param_2 + uVar1;
  param_1[0x89] = param_3 - uVar1;
  *param_1 = local_240[0];
  param_1[0x84] = (int)param_4;
  return;
}

