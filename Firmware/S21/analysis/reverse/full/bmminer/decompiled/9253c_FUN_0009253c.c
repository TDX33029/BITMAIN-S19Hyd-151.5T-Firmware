// FUN_0009253c @ 0009253c  size=236  callers=0
// program: bmminer


undefined4 FUN_0009253c(undefined4 param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = strrchr(*(char **)(*(int *)(param_2 + 8) + 0x110),0x2f);
  if (pcVar1 == (char *)0x0) {
    if (*(int *)(*(int *)(param_2 + 8) + 0x110) == 0) {
      uVar2 = FUN_0009774c(param_3,"(file=null)",0xb);
    }
    else {
      uVar2 = FUN_0009774c(param_3,*(undefined4 *)(*(int *)(param_2 + 8) + 0x110),
                           *(undefined4 *)(*(int *)(param_2 + 8) + 0x114));
    }
  }
  else {
    uVar2 = FUN_0009774c(param_3,pcVar1 + 1,
                         ((*(int *)(*(int *)(param_2 + 8) + 0x110) +
                          *(int *)(*(int *)(param_2 + 8) + 0x114)) - (int)pcVar1) + -1);
  }
  return uVar2;
}

