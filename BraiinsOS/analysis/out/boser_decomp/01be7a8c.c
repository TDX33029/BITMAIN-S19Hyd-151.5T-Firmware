// FUN_01be7a8c @ 01be7a8c size=56 calls_out=3 calls_in=3
// strings: 

int FUN_01be7a8c(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_118 [66];
  
  FUN_01bed93e(local_118,0,0x108);
  iVar1 = FUN_01be8d40(0,0,&LAB_01be7738_1,local_118);
  if (iVar1 == 0) {
    *param_1 = local_118[0];
  }
  else {
    FUN_01be7a78(local_118[0]);
  }
  return iVar1;
}

