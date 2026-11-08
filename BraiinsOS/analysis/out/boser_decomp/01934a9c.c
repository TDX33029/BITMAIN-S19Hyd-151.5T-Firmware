// FUN_01934a9c @ 01934a9c size=172 calls_out=5 calls_in=0
// strings: 

void FUN_01934a9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_24;
  int local_20;
  undefined1 local_1c;
  
  FUN_01933ff0(&local_24);
  if (local_24 == 1) {
    FUN_00a97e8c(local_20,local_1c);
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d259c0);
  }
  uVar4 = FUN_018f7a64(local_20 + 0x18,param_3);
  uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
  puVar1 = (uint *)uVar4;
  if (puVar1 != (uint *)0x0) {
    uVar3 = puVar1[3];
  }
  if (puVar1 != (uint *)0x0 && uVar3 != 0) {
    puVar1[3] = uVar3 - 1;
    uVar2 = puVar1[2] + (uVar3 - 1);
    uVar3 = uVar2 - *puVar1;
    if (uVar2 < *puVar1) {
      uVar3 = uVar2;
    }
    FUN_01bed4e2(param_1,puVar1[1] + uVar3 * 0x48,0x48);
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  }
  FUN_00a97e8c(local_20,local_1c);
  return;
}

