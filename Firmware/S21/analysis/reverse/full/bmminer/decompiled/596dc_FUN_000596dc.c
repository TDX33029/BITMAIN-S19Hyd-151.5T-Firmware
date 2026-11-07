// FUN_000596dc @ 000596dc  size=180  callers=1
// program: bmminer


void FUN_000596dc(undefined4 param_1)

{
  char local_2010 [8196];
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2010,"[DEBUG] Send work for hw sweep.\n",0x21);
    FUN_0004948c(4,local_2010,0);
  }
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      FUN_00059598();
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_00944b84 + 4) + 0x1c))(0xff,param_1);
  }
  return;
}

