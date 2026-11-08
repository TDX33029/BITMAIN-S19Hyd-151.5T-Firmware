// FUN_0183b9d4 @ 0183b9d4 size=96 calls_out=3 calls_in=10
// strings: 

int FUN_0183b9d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_78 [18];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_30 = *param_1;
  uStack_2c = param_1[1];
  uStack_28 = param_1[2];
  uStack_24 = param_1[3];
  uStack_20 = param_1[4];
  local_78[0] = 2;
  local_1c = param_2;
  local_18 = param_3;
  iVar1 = thunk_FUN_01be5118(100);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,100);
  }
  FUN_01bed4e2(iVar1,local_78,100);
  return iVar1;
}

