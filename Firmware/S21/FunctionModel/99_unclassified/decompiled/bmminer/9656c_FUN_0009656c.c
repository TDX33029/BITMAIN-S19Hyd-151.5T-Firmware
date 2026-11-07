// FUN_0009656c @ 0009656c  size=584  callers=2
// program: bmminer


int * FUN_0009656c(uint param_1,uint param_2,char *param_3)

{
  int *piVar1;
  size_t sVar2;
  void *pvVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/buf.c",0x5c,"buf_size_min == 0, not allowed");
    return (int *)0x0;
  }
  if ((param_2 != 0) && (param_2 < param_1)) {
    FUN_00095b4c(2,"src/buf.c",0x62,"buf_size_max[%lu] < buf_size_min[%lu] && buf_size_max != 0",
                 param_2,param_1);
    return (int *)0x0;
  }
  piVar1 = calloc(1,0x424);
  if (piVar1 == (int *)0x0) {
    piVar1 = __errno_location();
    FUN_00095b4c(2,"src/buf.c",0x68,"calloc fail, errno[%d]",*piVar1);
    return (int *)0x0;
  }
  if (param_3 != (char *)0x0) {
    sVar2 = strlen(param_3);
    if (0x400 < sVar2) {
      FUN_00095b4c(2,"src/buf.c",0x6e,"truncate_str[%s] overflow",param_3);
      goto LAB_0009679c;
    }
    strcpy((char *)(piVar1 + 7),param_3);
    sVar2 = strlen(param_3);
    piVar1[0x108] = sVar2;
  }
  piVar1[4] = param_1;
  piVar1[5] = param_2;
  piVar1[6] = piVar1[4];
  pvVar3 = calloc(1,piVar1[6]);
  *piVar1 = (int)pvVar3;
  if (*piVar1 != 0) {
    piVar1[1] = *piVar1;
    piVar1[3] = *piVar1 + piVar1[6];
    piVar1[2] = piVar1[3] + -1;
    return piVar1;
  }
  piVar4 = __errno_location();
  FUN_00095b4c(2,"src/buf.c",0x7c,"calloc fail, errno[%d]",*piVar4);
LAB_0009679c:
  FUN_00096504(piVar1);
  return (int *)0x0;
}

