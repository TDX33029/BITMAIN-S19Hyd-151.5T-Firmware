// FUN_015bdce0 @ 015bdce0 size=344 calls_out=4 calls_in=0
// strings: 

void FUN_015bdce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,uint param_8,undefined4 param_9,
                 uint param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 local_70;
  undefined1 auStack_68 [64];
  undefined1 local_28;
  
  FUN_016dd606(auStack_f0,0,0x40);
  FUN_015bd9c4(param_1,param_2,param_3,param_4,param_5,auStack_f0,0x40);
  FUN_015bd9c4(param_1,auStack_f0,0x40,&DAT_0041319b,1,param_7,param_8);
  if (param_6 != 1) {
    if (param_8 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,0x40,param_8,&DAT_018aa6f8);
    }
    FUN_016dd1aa(auStack_b0,param_7,0x40);
    local_70 = 2;
    FUN_015bd9c4(param_1,auStack_f0,0x40,auStack_b0,0x41,param_9,param_10);
    if (param_6 != 2) {
      if (param_10 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,0x40,param_10,&DAT_018aa6e8);
      }
      FUN_016dd1aa(auStack_68,param_9,0x40);
      local_28 = 3;
      FUN_015bd9c4(param_1,auStack_f0,0x40,auStack_68,0x41,param_11,param_12);
    }
  }
  return;
}

