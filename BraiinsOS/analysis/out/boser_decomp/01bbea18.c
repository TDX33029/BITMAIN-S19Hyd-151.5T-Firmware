// FUN_01bbea18 @ 01bbea18 size=108 calls_out=0 calls_in=1
// strings: 

int FUN_01bbea18(char *param_1,char *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_3;
  if (param_1 <= param_2 || param_3 <= param_4) {
    return 0;
  }
  do {
    param_1 = param_1 + -1;
    if (*param_1 != *(char *)(uVar1 - 1)) break;
    uVar1 = uVar1 - 1;
  } while (param_2 < param_1 && param_4 < uVar1);
  return param_3 - uVar1;
}

