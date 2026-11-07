// FUN_012c2160 @ 012c2160 size=96 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_012c2160(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_14;
  char *local_10;
  int local_c;
  
  FUN_012fbd94(&local_14,param_1,param_2);
  if ((local_14 == 0) && (local_c != 0)) {
    if (*local_10 == '-') {
      uVar1 = FUN_012c20a8(local_10 + 1,local_c + -1);
      return uVar1;
    }
  }
  return 0;
}

