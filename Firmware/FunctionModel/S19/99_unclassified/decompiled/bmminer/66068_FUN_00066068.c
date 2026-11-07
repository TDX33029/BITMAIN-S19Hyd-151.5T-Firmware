// FUN_00066068 @ 00066068  size=388  callers=2
// program: bmminer


undefined4 * FUN_00066068(uint param_1,uint param_2,char *param_3)

{
  undefined4 *puVar1;
  size_t sVar2;
  void *pvVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/buf.c",0x5c,"buf_size_min == 0, not allowed");
    return (undefined4 *)0x0;
  }
  if ((param_2 == 0 || param_2 <= param_1) && (param_2 != 0 && param_1 != param_2)) {
    FUN_000658a8(2,"src/buf.c",0x62,"buf_size_max[%lu] < buf_size_min[%lu] && buf_size_max != 0",
                 param_2,param_1);
    return (undefined4 *)0x0;
  }
  puVar1 = calloc(1,0x424);
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = __errno_location();
    FUN_000658a8(2,"src/buf.c",0x68,"calloc fail, errno[%d]",*piVar4);
    return (undefined4 *)0x0;
  }
  if (param_3 != (char *)0x0) {
    sVar2 = strlen(param_3);
    if (0x400 < sVar2) {
      FUN_000658a8(2,"src/buf.c",0x6e,"truncate_str[%s] overflow",param_3);
      goto LAB_00066160;
    }
    memcpy(puVar1 + 7,param_3,sVar2 + 1);
    puVar1[0x108] = sVar2;
  }
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  puVar1[6] = param_1;
  pvVar3 = calloc(1,param_1);
  *puVar1 = pvVar3;
  if (pvVar3 != (void *)0x0) {
    puVar1[1] = pvVar3;
    puVar1[3] = (int)pvVar3 + param_1;
    puVar1[2] = (int)pvVar3 + param_1 + -1;
    return puVar1;
  }
  piVar4 = __errno_location();
  FUN_000658a8(2,"src/buf.c",0x7c,"calloc fail, errno[%d]",*piVar4);
LAB_00066160:
  FUN_0006601c(puVar1);
  return (undefined4 *)0x0;
}

