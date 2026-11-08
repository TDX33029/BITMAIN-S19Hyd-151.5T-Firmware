// FUN_0134a854 @ 0134a854 size=108 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_0134a854(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  
  iVar1 = FUN_01bedb9e(param_1,param_2,0x80);
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      if (*(char *)(param_2 + iVar1) == '\0') goto LAB_0134a898;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x80);
    iVar1 = 0x80;
LAB_0134a898:
    FUN_012fbd94(&local_14,param_2,iVar1);
    if (local_14 != 0) {
      local_10 = 0;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

