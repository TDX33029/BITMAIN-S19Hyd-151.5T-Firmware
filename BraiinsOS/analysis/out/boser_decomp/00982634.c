// FUN_00982634 @ 00982634 size=352 calls_out=6 calls_in=2
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00982634(int param_1,int *param_2)

{
  undefined4 local_1f0 [94];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*param_2 == 8) {
    local_1f0[0] = 8;
  }
  else {
    FUN_009828b0(local_1f0,param_2);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch((char)param_2[0x5e]) {
  case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_78 = CONCAT31(local_78._1_3_,6);
  if (param_2[0x6e] == 0) {
    local_58 = 0;
    local_60 = 0;
  }
  else {
    if (param_2[0x6c] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d274a0);
    }
    FUN_009837b8(&local_60,param_2[0x6c],param_2[0x6d]);
  }
  if (param_2[0x71] == 0) {
    local_48 = 0;
    local_50 = 0;
  }
  else {
    if (param_2[0x6f] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d274a0);
    }
    FUN_00982ac4(&local_50,param_2[0x6f],param_2[0x70]);
  }
  if (param_2[100] == 0) {
    local_40 = 0;
  }
  else {
    FUN_00ab8cac(&local_40,param_2 + 100);
  }
  FUN_01bed4e2(param_1,local_1f0,0x178);
  *(undefined4 *)(param_1 + 0x178) = local_78;
  *(undefined4 *)(param_1 + 0x17c) = uStack_74;
  *(undefined4 *)(param_1 + 0x180) = uStack_70;
  *(undefined4 *)(param_1 + 0x184) = uStack_6c;
  *(undefined4 *)(param_1 + 0x188) = uStack_68;
  *(undefined4 *)(param_1 + 0x18c) = uStack_64;
  *(undefined4 *)(param_1 + 0x1b0) = local_60;
  *(undefined4 *)(param_1 + 0x1b4) = uStack_5c;
  *(undefined4 *)(param_1 + 0x1b8) = local_58;
  *(undefined4 *)(param_1 + 0x1bc) = local_50;
  *(undefined4 *)(param_1 + 0x1c0) = uStack_4c;
  *(undefined4 *)(param_1 + 0x1c4) = local_48;
  *(undefined4 *)(param_1 + 400) = local_40;
  *(undefined4 *)(param_1 + 0x194) = uStack_3c;
  *(undefined4 *)(param_1 + 0x198) = uStack_38;
  *(undefined4 *)(param_1 + 0x19c) = uStack_34;
  *(undefined4 *)(param_1 + 0x1a0) = local_30;
  *(undefined4 *)(param_1 + 0x1a4) = uStack_2c;
  *(undefined4 *)(param_1 + 0x1a8) = uStack_28;
  *(undefined4 *)(param_1 + 0x1ac) = uStack_24;
  return;
}

