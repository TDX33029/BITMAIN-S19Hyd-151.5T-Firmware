// FUN_0193f960 @ 0193f960 size=52 calls_out=1 calls_in=2
// strings: 

void FUN_0193f960(int *param_1)

{
  code *pcVar1;
  int unaff_r4;
  undefined4 *puVar2;
  bool bVar3;
  
  if (*param_1 == 0) {
    if ((char)param_1[7] == '\0') {
      FUN_0193c71c(param_1 + 2);
      return;
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  bVar3 = param_1[2] == 0 && param_1[3] == 0;
  if (param_1[2] != 0 || param_1[3] != 0) {
    unaff_r4 = param_1[4];
    bVar3 = unaff_r4 == 0;
  }
  if (!bVar3) {
    puVar2 = (undefined4 *)param_1[5];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(unaff_r4);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_01be4678(unaff_r4);
      return;
    }
  }
  return;
}

