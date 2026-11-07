// FUN_0095a970 @ 0095a970 size=140 calls_out=2 calls_in=1
// strings: 

void FUN_0095a970(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0x13) {
    FUN_00924444(param_1,param_2,param_3,&DAT_018682d0);
    return;
  }
  iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00348f9a,0x13);
  if (iVar1 == 0) {
    *param_1 = 2;
    return;
  }
  FUN_00924444(param_1,param_2,0x13,&DAT_018682d0);
  return;
}

