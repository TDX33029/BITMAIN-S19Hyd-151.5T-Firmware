// FUN_00065e68 @ 00065e68  size=296  callers=5
// program: bmminer


uint FUN_00065e68(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  size_t __size;
  int iVar4;
  uint uVar5;
  void *__ptr;
  bool bVar6;
  uint in_fpscr;
  double dVar7;
  double dVar8;
  
  uVar5 = param_1[5];
  uVar3 = param_1[6];
  if (uVar5 == 0) {
    uVar5 = 0;
    dVar7 = (double)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = (double)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    dVar8 = dVar8 + dVar7 * 1.5;
    __size = (uint)(0.0 < dVar8) * (int)(longlong)dVar8;
  }
  else {
    if (uVar5 <= uVar3) {
      FUN_000658a8(2,"src/buf.c",0xa9,"a_buf->size_real[%ld] >= a_buf->size_max[%ld]",uVar3,uVar5);
      return 1;
    }
    __size = uVar3 + param_2;
    bVar6 = uVar5 < __size;
    if (bVar6) {
      __size = uVar5;
    }
    uVar5 = (uint)bVar6;
  }
  __ptr = (void *)*param_1;
  iVar4 = param_1[1];
  pvVar1 = realloc(__ptr,__size);
  if (pvVar1 == (void *)0x0) {
    piVar2 = __errno_location();
    FUN_000658a8(2,"src/buf.c",0xbd,"realloc fail, errno[%d]",*piVar2);
    uVar5 = 0xffffffff;
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    param_1[1] = (int)pvVar1 + (iVar4 - (int)__ptr);
    *param_1 = pvVar1;
    param_1[3] = (int)pvVar1 + __size;
    param_1[2] = (int)pvVar1 + __size + -1;
    param_1[6] = __size;
  }
  return uVar5;
}

