// FUN_0189a82c @ 0189a82c size=208 calls_out=6 calls_in=0
// strings: internal error: entered unreachable code

void FUN_0189a82c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 auStack_20 [16];
  
  if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d21e6c);
  }
  FUN_01bed4e2(auStack_20,param_3,0x10);
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  uVar1 = 1;
  if ((DAT_01d53480 & 4) == 0) {
    uVar1 = DAT_01d53480 & 1 ^ 3;
  }
  if (uVar1 == 1) {
    FUN_01bd8f20(auStack_20,&local_30,param_2 + 1);
  }
  else if (uVar1 == 2) {
    FUN_01bda190(auStack_20,&local_30);
  }
  else {
    FUN_01bcf57c(auStack_20,&local_30);
  }
  *(undefined1 *)(param_1 + 1) = local_2c;
  *param_1 = local_30;
  return;
}

