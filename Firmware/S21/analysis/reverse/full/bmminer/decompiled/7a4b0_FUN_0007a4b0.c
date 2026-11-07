// FUN_0007a4b0 @ 0007a4b0  size=196  callers=4
// program: bmminer


int FUN_0007a4b0(undefined4 param_1,int *param_2,char *param_3,int param_4)

{
  int iVar1;
  int local_c;
  
  iVar1 = FUN_0007a3c0(param_1,param_2);
  if (iVar1 == 0) {
    local_c = *param_2;
    while( true ) {
      if ((param_4 == *(int *)(local_c + 0x10)) &&
         (iVar1 = strcmp((char *)(local_c + 0x18),param_3), iVar1 == 0)) {
        return local_c;
      }
      if (local_c == param_2[1]) break;
      local_c = *(int *)(local_c + 4);
    }
  }
  return 0;
}

