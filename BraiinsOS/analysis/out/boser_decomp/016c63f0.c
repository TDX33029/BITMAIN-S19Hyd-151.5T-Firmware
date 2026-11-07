// FUN_016c63f0 @ 016c63f0 size=120 calls_out=1 calls_in=0
// strings: Translate | Parse

void FUN_016c63f0(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int **ppiVar3;
  code *pcVar4;
  int *local_10;
  int *local_c;
  
  param_1 = (int *)*param_1;
  if (*param_1 == 0x22) {
    local_c = param_1 + 1;
    pcVar4 = FUN_016ccb20;
    pcVar1 = "Translate";
    ppiVar3 = &local_c;
    uVar2 = 9;
  }
  else {
    pcVar1 = "Parse";
    pcVar4 = FUN_016cd114;
    ppiVar3 = &local_10;
    uVar2 = 5;
    local_10 = param_1;
  }
  FUN_013032f4(param_2,pcVar1,uVar2,ppiVar3,pcVar4);
  return;
}

