// FUN_000927b4 @ 000927b4  size=228  callers=0
// program: bmminer


undefined4 FUN_000927b4(undefined4 param_1,int param_2,undefined4 param_3)

{
  __pid_t _Var1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x17c) == 0) {
    iVar3 = *(int *)(param_2 + 8);
    _Var1 = getpid();
    *(__pid_t *)(iVar3 + 0x17c) = _Var1;
    if (*(int *)(*(int *)(param_2 + 8) + 0x17c) != *(int *)(*(int *)(param_2 + 8) + 0x180)) {
      *(undefined4 *)(*(int *)(param_2 + 8) + 0x180) =
           *(undefined4 *)(*(int *)(param_2 + 8) + 0x17c);
      iVar3 = sprintf((char *)(*(int *)(param_2 + 8) + 0x184),"%u",
                      *(undefined4 *)(*(int *)(param_2 + 8) + 0x17c));
      *(int *)(*(int *)(param_2 + 8) + 0x1a4) = iVar3;
    }
  }
  uVar2 = FUN_0009774c(param_3,*(int *)(param_2 + 8) + 0x184,
                       *(undefined4 *)(*(int *)(param_2 + 8) + 0x1a4));
  return uVar2;
}

