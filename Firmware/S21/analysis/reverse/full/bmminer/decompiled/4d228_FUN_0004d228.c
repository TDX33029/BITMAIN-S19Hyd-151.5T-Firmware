// FUN_0004d228 @ 0004d228  size=84  callers=1
// program: bmminer


void FUN_0004d228(int param_1,void *param_2)

{
  FILE *__stream;
  
  if (param_1 != 0) {
    FUN_0004d1d4(param_2);
    return;
  }
  __stream = fopen(s__tmp_stable_file_name_000be86c,"r");
  if (__stream == (FILE *)0x0) {
    return;
  }
  fread(param_2,1,0x40,__stream);
  fclose(__stream);
  return;
}

