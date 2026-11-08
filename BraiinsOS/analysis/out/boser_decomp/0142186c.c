// FUN_0142186c @ 0142186c size=284 calls_out=1 calls_in=3
// strings: assertion failed: DEFAULT_MAX_FRAME_SIZE <= val && val <= MAX_MAX_FRAME_SIZEevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/settings.rs:152

void FUN_0142186c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int local_30;
  
  iVar11 = param_2[0x12];
  iVar9 = param_2[0x13];
  iVar5 = param_2[0x14];
  iVar4 = param_2[0x15];
  iVar7 = param_2[0x16];
  if (*param_2 == 1) {
    local_30 = param_2[1];
    uVar10 = 1;
    if (local_30 - 0x1000000U < 0xff004000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: DEFAULT_MAX_FRAME_SIZE <= val && val <= MAX_MAX_FRAME_SIZEevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/settings.rs:152"
                   ,0x4c,&DAT_01cea65c);
    }
  }
  else {
    uVar10 = 0;
  }
  iVar2 = param_2[2];
  iVar6 = param_2[4];
  iVar8 = param_2[8];
  iVar3 = param_2[3];
  iVar1 = param_2[9];
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0x17] = iVar5;
  param_1[0xd] = iVar1;
  param_1[0xe] = 1;
  param_1[0xf] = iVar9;
  iVar5 = param_2[5];
  iVar9 = param_2[6];
  iVar1 = param_2[7];
  if (iVar6 == 0) {
    iVar5 = 0x14;
  }
  param_1[0x13] = iVar4;
  param_1[0x18] = iVar7;
  if (iVar2 == 0) {
    iVar3 = 10;
  }
  param_1[3] = 0x400;
  param_1[0x1b] = 1;
  param_1[0x10] = uVar10;
  param_1[0x11] = local_30;
  param_1[0x12] = 1;
  *param_1 = 1;
  param_1[1] = iVar11;
  param_1[2] = 1;
  param_1[4] = 0x1e;
  param_1[8] = iVar9;
  param_1[9] = iVar1;
  param_1[10] = 1;
  param_1[0xc] = iVar8;
  param_1[0x1a] = iVar5;
  param_1[0x19] = iVar3;
  return;
}

