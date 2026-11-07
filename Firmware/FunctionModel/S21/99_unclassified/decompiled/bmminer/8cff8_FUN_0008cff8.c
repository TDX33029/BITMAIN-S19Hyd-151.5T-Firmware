// FUN_0008cff8 @ 0008cff8  size=112  callers=0
// program: bmminer


void FUN_0008cff8(void *param_1)

{
  FUN_00095b4c(0,"src/rotater.c",0x7e,"del onefile[%p]",param_1);
  FUN_00095b4c(0,"src/rotater.c",0x7f,"a_file->path[%s]",(int)param_1 + 4);
  free(param_1);
  return;
}

