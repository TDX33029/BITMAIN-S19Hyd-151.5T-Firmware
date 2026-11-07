// FUN_017205f4 @ 017205f4 size=184 calls_out=5 calls_in=7
// strings: 

bool FUN_017205f4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_01781e60(param_2);
  iVar1 = *param_1;
  FUN_01781ec0(param_2);
  if (iVar1 != 0) {
    return true;
  }
  FUN_01781e90(param_2);
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = FUN_01720560(param_3,param_4);
    *param_1 = iVar1;
  }
  FUN_01781ef0(param_2);
  return iVar1 != 0;
}

