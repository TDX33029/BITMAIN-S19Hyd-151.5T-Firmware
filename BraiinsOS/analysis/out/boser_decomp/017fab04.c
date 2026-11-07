// FUN_017fab04 @ 017fab04 size=192 calls_out=5 calls_in=2
// strings: 

void FUN_017fab04(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 local_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = 1;
  if ((param_4 != 0) && (iVar2 = FUN_01298504(param_4,1), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,param_4);
  }
  FUN_01bed4e2(iVar2,param_3,param_4);
  local_24 = 0;
  local_28 = 0;
  local_38 = 1;
  local_30 = iVar2;
  local_2c = param_4;
  cVar1 = FUN_017f65ac(param_2,&local_38,param_5);
  if (cVar1 == '\f') {
    *param_1 = 4;
  }
  else {
    local_38 = CONCAT31(CONCAT21(local_38._2_2_,cVar1),3);
    FUN_0143a6a0(param_1,&local_38);
  }
  return;
}

