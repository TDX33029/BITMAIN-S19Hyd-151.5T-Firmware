// FUN_000109a8 @ 000109a8  size=500  callers=1
// program: FileParser


undefined4 FUN_000109a8(char *param_1)

{
  undefined4 uVar1;
  undefined4 local_8014;
  undefined1 auStack_8010 [32764];
  FILE *local_14;
  FILE *local_10;
  int local_c;
  
  local_8014 = 0;
  memset(auStack_8010,0,0x7ffc);
  local_10 = fopen64(param_1,"rb");
  if (local_10 == (FILE *)0x0) {
    puts("Load Nand Image File Failed!");
    uVar1 = 1;
  }
  else {
    for (local_c = 0; local_c < 0xf; local_c = local_c + 1) {
      fread(&local_8014,*(size_t *)(&DAT_0002307c + local_c * 0x84),1,local_10);
      local_14 = fopen64(s__tmp_tmpNand_devicetree_dtb_sig_00023080 + local_c * 0x84,"wb");
      if (local_14 == (FILE *)0x0) {
        printf("Try To Write To File \'%s\' Failed!\n",
               s__tmp_tmpNand_devicetree_dtb_sig_00023080 + local_c * 0x84);
        if (local_10 != (FILE *)0x0) {
          fclose(local_10);
        }
        return 2;
      }
      fwrite(&local_8014,*(size_t *)(&DAT_0002307c + local_c * 0x84),1,local_14);
      if (local_14 != (FILE *)0x0) {
        fclose(local_14);
      }
      local_14 = (FILE *)0x0;
    }
    if (local_10 != (FILE *)0x0) {
      fclose(local_10);
    }
    uVar1 = 0;
  }
  return uVar1;
}

