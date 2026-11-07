// FUN_015bd788 @ 015bd788 size=412 calls_out=4 calls_in=0
// strings: 

void FUN_015bd788(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,uint param_8,undefined4 param_9,
                 uint param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [32];
  undefined1 local_90;
  undefined4 local_8f;
  undefined4 local_8b;
  undefined4 local_87;
  undefined4 local_83;
  undefined4 local_7f;
  undefined4 local_7b;
  undefined4 local_77;
  undefined4 local_73;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_47;
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  
  FUN_016dd606(auStack_f0,0,0x40);
  FUN_015bd458(param_1,param_2,param_3,param_4,param_5,auStack_f0,0x40);
  FUN_015bd458(param_1,auStack_f0,0x40,&DAT_0041319b,1,param_7,param_8);
  if (param_6 != 1) {
    local_73 = 0;
    local_77 = 0;
    local_7b = 0;
    local_7f = 0;
    local_83 = 0;
    local_87 = 0;
    local_8b = 0;
    local_8f = 0;
    if (param_8 < 0x20) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,0x20,param_8,&DAT_018aa6f8);
    }
    FUN_016dd1aa(auStack_b0,param_7,0x20);
    local_90 = 2;
    FUN_015bd458(param_1,auStack_f0,0x40,auStack_b0,0x21,param_9,param_10);
    if (param_6 != 2) {
      local_2b = 0;
      local_2f = 0;
      local_33 = 0;
      local_37 = 0;
      local_3b = 0;
      local_3f = 0;
      local_43 = 0;
      local_47 = 0;
      if (param_10 < 0x20) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,0x20,param_10,&DAT_018aa6e8);
      }
      FUN_016dd1aa(auStack_68,param_9,0x20);
      local_48 = 3;
      FUN_015bd458(param_1,auStack_f0,0x40,auStack_68,0x21,param_11,param_12);
    }
  }
  return;
}

