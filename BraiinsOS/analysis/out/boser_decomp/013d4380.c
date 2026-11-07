// FUN_013d4380 @ 013d4380 size=324 calls_out=5 calls_in=0
// strings: `Ready` polled after completionevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/transport/service/grpc_timeout.rs:43

void FUN_013d4380(int *param_1,undefined4 *param_2)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  int local_30;
  uint local_2c;
  uint local_28;
  int iStack_24;
  uint local_20;
  uint local_1c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x10)) {
  case 0:
    param_2[8] = *param_2;
    param_2[9] = param_2[1];
    param_2[10] = param_2[2];
    param_2[0xb] = param_2[3];
    param_2[0xc] = param_2[4];
    param_2[0xd] = param_2[5];
    param_2[0xe] = param_2[6];
    param_2[0xf] = param_2[7];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01cf2ab4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01cf2ab4);
  }
  sVar1 = *(short *)(param_2 + 8);
  *(undefined2 *)(param_2 + 8) = 4;
  if (sVar1 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("`Ready` polled after completionevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/transport/service/grpc_timeout.rs:43"
                 ,0x1f,&DAT_01d2cd90);
  }
  uVar2 = param_2[10];
  if (sVar1 == 3) {
    local_2c = param_2[9];
  }
  else {
    if (sVar1 == 2) {
LAB_013d43f4:
      FUN_019a18a8(&local_20,0x14,&DAT_0056b028,0x20);
      local_2c = local_20;
    }
    else {
      FUN_019df02c(&local_30);
      if (local_30 != 2) goto LAB_013d442c;
      puVar3 = (uint *)((uint)&local_30 | 4);
      local_2c = *puVar3;
      if ((local_2c & 0xff) == 4) goto LAB_013d43f4;
      local_1c = puVar3[1];
    }
    uVar2 = local_1c;
  }
  local_30 = 2;
  local_28 = uVar2;
LAB_013d442c:
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  param_1[3] = iStack_24;
  *(undefined1 *)(param_2 + 0x10) = 1;
  return;
}

