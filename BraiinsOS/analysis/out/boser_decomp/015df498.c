// FUN_015df498 @ 015df498 size=180 calls_out=2 calls_in=2
// strings: 

uint FUN_015df498(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*param_1 != -0x80000000) != (*param_2 == -0x80000000)) {
    if (*param_1 == -0x80000000) {
      if (param_1[4] == param_2[4]) {
        uVar2 = FUN_015df54c(param_1[2],param_1[3],param_2[2],param_2[3]);
        return uVar2;
      }
    }
    else {
      iVar1 = thunk_FUN_01bed842(param_1 + 4,param_2 + 4,0x10);
      if (((iVar1 == 0) && (param_1[3] == param_2[3])) && (param_1[2] == param_2[2])) {
        iVar1 = thunk_FUN_01bed842(param_1[1],param_2[1]);
        uVar2 = (uint)(iVar1 == 0);
      }
    }
  }
  return uVar2;
}

