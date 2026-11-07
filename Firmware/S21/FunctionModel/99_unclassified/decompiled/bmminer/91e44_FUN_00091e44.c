// FUN_00091e44 @ 00091e44  size=328  callers=1
// program: bmminer


undefined4 FUN_00091e44(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  size_t local_c;
  
  if (param_1 == (char *)0x0) {
    FUN_00095b4c(2,"src/rule.c",0x3f6,"a_rule is null or 0");
    uVar3 = 0xffffffff;
  }
  else if (param_2 == (char *)0x0) {
    FUN_00095b4c(2,"src/rule.c",0x3f7,"category is null or 0");
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = strcmp(param_1,"*");
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      iVar1 = strcmp(param_1,param_2);
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      else {
        local_c = strlen(param_1);
        if (param_1[local_c - 1] == '_') {
          sVar2 = strlen(param_2);
          if (sVar2 == local_c - 1) {
            local_c = local_c - 1;
          }
          iVar1 = strncmp(param_1,param_2,local_c);
          if (iVar1 == 0) {
            return 1;
          }
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

