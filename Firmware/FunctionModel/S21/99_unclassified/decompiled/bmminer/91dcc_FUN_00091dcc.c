// FUN_00091dcc @ 00091dcc  size=120  callers=1
// program: bmminer


undefined4 FUN_00091dcc(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
    FUN_00095b4c(2,"src/rule.c",0x3ea,"a_rule is null or 0");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = strcmp(param_1,"!");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

