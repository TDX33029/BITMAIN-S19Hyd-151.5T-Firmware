// FUN_01907b04 @ 01907b04 size=128 calls_out=2 calls_in=3
// strings: 

uint FUN_01907b04(char *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_1 == *param_2) {
    if (*param_1 == '\0') {
      uVar2 = FUN_01939520(param_1 + 4,param_2 + 4);
      return uVar2;
    }
    if (param_1[1] == param_2[1]) {
      if (param_1[1] == '\0') {
        uVar2 = (uint)(*(int *)(param_1 + 2) == *(int *)(param_2 + 2));
      }
      else {
        iVar1 = thunk_FUN_01bed842(param_1 + 2,param_2 + 2,0x10);
        uVar2 = (uint)(iVar1 == 0);
      }
    }
  }
  return uVar2;
}

