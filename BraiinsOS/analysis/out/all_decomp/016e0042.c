// FUN_016e0042 @ 016e0042 size=112 calls_out=3 calls_in=2
// strings: 

char * FUN_016e0042(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char acStack_1020 [4100];
  char *local_1c;
  char acStack_14 [4];
  
  if (param_1 == (char *)0x0) {
    param_1 = acStack_1020;
    pcVar3 = acStack_1020;
    param_2 = (char *)0x1000;
  }
  else {
    pcVar3 = acStack_14;
    if (param_2 == (char *)0x0) {
      local_1c = param_2;
      puVar2 = (undefined4 *)FUN_016d2bc8();
      *puVar2 = 0x16;
      return local_1c;
    }
  }
  software_interrupt(0);
  iVar1 = FUN_016d3496(param_1,param_2);
  if (iVar1 < 0) {
    param_1 = (char *)0x0;
  }
  else if ((iVar1 == 0) || (*param_1 != '/')) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    param_1 = (char *)0x0;
    *puVar2 = 2;
  }
  else if (param_1 == pcVar3) {
    param_1 = (char *)FUN_016dd83e(param_1);
  }
  return param_1;
}

