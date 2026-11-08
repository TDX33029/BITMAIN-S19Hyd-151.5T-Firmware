// FUN_0009774c @ 0009774c  size=380  callers=17
// program: bmminer


undefined4 FUN_0009774c(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  size_t __n;
  uint local_c;
  
  local_c = *(int *)(param_1 + 4) + param_3;
  if (*(uint *)(param_1 + 8) < local_c) {
    iVar1 = FUN_00096854(param_1,param_3 - (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)));
    if (0 < iVar1) {
      FUN_00095b4c(2,"src/buf.c",0x20d,"conf limit to %ld, can\'t extend, so output",
                   *(undefined4 *)(param_1 + 0x14));
      __n = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      memcpy(*(void **)(param_1 + 4),param_2,__n);
      *(size_t *)(param_1 + 4) = *(int *)(param_1 + 4) + __n;
      FUN_000967b4(param_1);
      return 1;
    }
    if (iVar1 < 0) {
      FUN_00095b4c(2,"src/buf.c",0x215,"zlog_buf_resize fail");
      return 0xffffffff;
    }
    local_c = *(int *)(param_1 + 4) + param_3;
  }
  memcpy(*(void **)(param_1 + 4),param_2,param_3);
  *(uint *)(param_1 + 4) = local_c;
  return 0;
}

