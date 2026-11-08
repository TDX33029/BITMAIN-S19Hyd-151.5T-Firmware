// FUN_00f35f68 @ 00f35f68 size=132 calls_out=4 calls_in=0
// strings: 

void FUN_00f35f68(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int local_28 [2];
  int local_20;
  char *local_1c;
  
  pcVar4 = param_1 + 0x18;
  while( true ) {
    FUN_00f2cd78(local_28,pcVar4);
    iVar2 = local_20;
    iVar1 = local_28[0];
    if (local_28[0] == 0) break;
    iVar3 = local_28[0] + local_20 * 0xc;
    local_1c = pcVar4;
    if (*(int *)(iVar3 + 0x10c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x110));
    }
    FUN_00f2cf28(iVar1 + iVar2 * 0x18);
  }
  if (*param_1 == '\x06') {
    return;
  }
  FUN_00f33f88(param_1);
  return;
}

