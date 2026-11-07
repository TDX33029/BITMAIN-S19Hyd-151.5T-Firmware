// FUN_01433c5c @ 01433c5c size=120 calls_out=4 calls_in=2
// strings: 

void FUN_01433c5c(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_01298504(param_3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,param_3);
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  local_20 = *param_4;
  uStack_1c = param_4[1];
  iVar2 = FUN_014333d0(&local_20);
  *param_1 = iVar1;
  param_1[1] = param_3;
  param_1[2] = iVar2;
  param_1[3] = (int)&DAT_01cf5e1c;
  return;
}

