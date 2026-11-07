// FUN_01423668 @ 01423668 size=144 calls_out=2 calls_in=4
// strings: just sent Okevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/pool.rs:170

void FUN_01423668(int *param_1,int param_2,int *param_3)

{
  int iStack_3c;
  int iStack_38;
  int local_34;
  int local_30;
  char local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  local_28 = *param_3;
  iStack_24 = param_3[1];
  iStack_20 = param_3[2];
  iStack_1c = param_3[3];
  FUN_01421f84(&iStack_3c,param_2 + 8,&local_28);
  if (local_2c == '\x02') {
    *param_1 = 0;
  }
  else {
    if (iStack_3c == 0) {
      local_28 = iStack_38;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("just sent Okevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/pool.rs:170"
                   ,0xc,&local_28,&DAT_01cf479c,&DAT_01cf4914);
    }
    *param_1 = iStack_3c;
    param_1[1] = iStack_38;
    param_1[2] = local_34;
    param_1[3] = local_30;
  }
  return;
}

