// FUN_01b377e0 @ 01b377e0 size=156 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b377e0(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  iVar1 = (int)param_2 >> 5;
  if (param_1[1] <= iVar1) {
    return 1;
  }
  if ((param_2 & 0x1f) == 0) {
    param_1[1] = iVar1;
  }
  else {
    param_1[1] = iVar1 + 1;
    *(uint *)(*param_1 + iVar1 * 4) = *(uint *)(*param_1 + iVar1 * 4) & ~(-1 << (param_2 & 0x1f));
  }
  FUN_01b2b964();
  return 1;
}

