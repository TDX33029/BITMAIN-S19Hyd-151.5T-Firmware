// FUN_00010b9c @ 00010b9c  size=212  callers=1
// program: FileParser


undefined4 FUN_00010b9c(void)

{
  undefined4 uVar1;
  undefined4 local_110;
  undefined1 auStack_10c [252];
  FILE *local_10;
  int local_c;
  
  local_10 = fopen64("/tmp/256BFF","wb");
  if (local_10 == (FILE *)0x0) {
    puts("GenFile Failed!");
    uVar1 = 1;
  }
  else {
    local_110 = 0;
    memset(auStack_10c,0,0xfc);
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      auStack_10c[local_c + -4] = 0xff;
    }
    fwrite(&local_110,0x100,1,local_10);
    fclose(local_10);
    uVar1 = 0;
  }
  return uVar1;
}

