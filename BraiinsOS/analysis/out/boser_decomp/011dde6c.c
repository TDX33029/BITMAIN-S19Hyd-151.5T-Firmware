// FUN_011dde6c @ 011dde6c size=68 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_011dde6c(char *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 != '\0') || (uVar1 = 0, *(int *)(param_2 + 0x40) == -0x7fffffff)) {
    if (*(uint *)(param_2 + 0x84) < 2) {
      return 1;
    }
    uVar1 = 0;
    if (**(short **)(param_2 + 0x80) != 0x5f5f) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

