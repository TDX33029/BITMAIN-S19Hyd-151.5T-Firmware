// FUN_01657d5c @ 01657d5c size=124 calls_out=4 calls_in=2
// strings: 

void FUN_01657d5c(undefined1 *param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  FUN_00664bdc(&local_1c);
  if ((local_14 == 3) && (iVar1 = thunk_FUN_01bed842(local_18,&DAT_0052d610,3), iVar1 == 0)) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x7ff80000;
  }
  else {
    FUN_01305878(param_1,local_18,local_14);
  }
  FUN_0134bd64(local_1c,local_18);
  return;
}

