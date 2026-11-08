// FUN_016d77b8 @ 016d77b8 size=56 calls_out=3 calls_in=0
// strings: 

int FUN_016d77b8(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_118 [66];
  
  FUN_016dd606(local_118,0,0x108);
  iVar1 = FUN_016d8a6c(0,0,&LAB_016d7464_1,local_118);
  if (iVar1 == 0) {
    *param_1 = local_118[0];
  }
  else {
    FUN_016d77a4(local_118[0]);
  }
  return iVar1;
}

