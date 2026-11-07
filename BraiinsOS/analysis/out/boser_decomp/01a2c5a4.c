// FUN_01a2c5a4 @ 01a2c5a4 size=140 calls_out=3 calls_in=2
// strings: 

void FUN_01a2c5a4(undefined4 *param_1,int param_2)

{
  int local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_c;
  
  if ((*(uint *)(param_2 + 0x38) == 2) || ((*(uint *)(param_2 + 0x38) & 1) != 0)) {
    *param_1 = 0x80000000;
  }
  else {
    local_c = 0;
    FUN_01313b0c(&local_c8,&local_c,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44))
    ;
    if (local_c8 == -0x80000000) {
      *param_1 = 0x80000000;
      if (3 < local_c4) {
        FUN_019bb7e0(local_c0,local_bc);
      }
    }
    else {
      FUN_01bed4e2(param_1,&local_c8,0xb8);
    }
  }
  return;
}

