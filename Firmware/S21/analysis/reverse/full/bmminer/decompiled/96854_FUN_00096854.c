// FUN_00096854 @ 00096854  size=584  callers=6
// program: bmminer


undefined4 FUN_00096854(int *param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  size_t __size;
  int iVar3;
  uint in_fpscr;
  double dVar4;
  double dVar5;
  undefined4 local_c;
  
  local_c = 0;
  if ((param_1[5] == 0) || ((uint)param_1[6] < (uint)param_1[5])) {
    if (param_1[5] == 0) {
      dVar4 = (double)VectorUnsignedToFloat(param_1[6],(byte)(in_fpscr >> 0x16) & 3);
      dVar5 = (double)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
      dVar4 = dVar4 + dVar5 * 1.5;
      __size = (uint)(0.0 < dVar4) * (int)(longlong)dVar4;
    }
    else if ((uint)param_1[5] < (uint)(param_1[6] + param_2)) {
      __size = param_1[5];
      local_c = 1;
    }
    else {
      __size = param_2 + param_1[6];
    }
    iVar3 = param_1[1] - *param_1;
    pvVar1 = realloc((void *)*param_1,__size);
    if (pvVar1 == (void *)0x0) {
      piVar2 = __errno_location();
      FUN_00095b4c(2,"src/buf.c",0xbd,"realloc fail, errno[%d]",*piVar2);
      free((void *)*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      local_c = 0xffffffff;
    }
    else {
      *param_1 = (int)pvVar1;
      param_1[1] = (int)pvVar1 + iVar3;
      param_1[6] = __size;
      param_1[3] = *param_1 + __size;
      param_1[2] = param_1[3] + -1;
    }
  }
  else {
    FUN_00095b4c(2,"src/buf.c",0xa9,"a_buf->size_real[%ld] >= a_buf->size_max[%ld]",param_1[6],
                 param_1[5],param_2,param_1,0,0,0);
    local_c = 1;
  }
  return local_c;
}

