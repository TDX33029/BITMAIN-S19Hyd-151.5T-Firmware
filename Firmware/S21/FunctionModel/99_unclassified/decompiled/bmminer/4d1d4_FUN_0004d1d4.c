// FUN_0004d1d4 @ 0004d1d4  size=84  callers=2
// program: bmminer


void FUN_0004d1d4(char *param_1)

{
  FILE *__s;
  size_t __n;
  
  __s = fopen(s__tmp_stable_file_name_000be86c,"w");
  if (__s == (FILE *)0x0) {
    return;
  }
  __n = strlen(param_1);
  fwrite(param_1,1,__n,__s);
  fflush(__s);
  fclose(__s);
  return;
}

