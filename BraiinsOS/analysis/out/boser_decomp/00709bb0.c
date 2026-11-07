// FUN_00709bb0 @ 00709bb0 size=112 calls_out=1 calls_in=0
// strings: DataQ;

void FUN_00709bb0(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char **ppcVar3;
  undefined1 *puVar4;
  char *local_10;
  char *local_c;
  
  if (*param_1 == '\x01') {
    puVar4 = &LAB_01ac5d40;
    pcVar1 = &DAT_0053258f;
    ppcVar3 = &local_c;
    uVar2 = 7;
    local_c = param_1 + 1;
  }
  else {
    pcVar1 = "DataQ,";
    puVar4 = &LAB_01ac59e8;
    ppcVar3 = &local_10;
    uVar2 = 4;
    local_10 = param_1 + 1;
  }
  FUN_013032f4(param_2,pcVar1,uVar2,ppcVar3,puVar4);
  return;
}

