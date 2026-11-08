// FUN_010a719c @ 010a719c size=96 calls_out=3 calls_in=1
// strings: 

int FUN_010a719c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined1 local_18;
  
  local_310 = *param_2;
  uStack_30c = param_2[1];
  uStack_308 = param_2[2];
  local_18 = 0;
  local_304 = param_1;
  local_300 = param_3;
  local_2fc = param_4;
  iVar1 = thunk_FUN_01be5118(0x2fc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2fc);
  }
  FUN_01bed4e2(iVar1,&local_310,0x2fc);
  return iVar1;
}

