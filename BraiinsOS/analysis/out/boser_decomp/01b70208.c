// FUN_01b70208 @ 01b70208 size=52 calls_out=0 calls_in=3
// strings: 

ulonglong FUN_01b70208(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == (uint *)0x0) {
    return (ulonglong)param_2 << 0x20;
  }
  if (param_2 < *param_1) {
    uVar1 = *(uint *)(param_1[1] + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return (ulonglong)uVar1;
}

