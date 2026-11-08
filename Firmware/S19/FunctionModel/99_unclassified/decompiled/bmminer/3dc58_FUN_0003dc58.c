// FUN_0003dc58 @ 0003dc58  size=180  callers=1
// program: bmminer


void FUN_0003dc58(undefined4 param_1)

{
  char local_810 [2052];
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_810,"[DEBUG] Send work for hw sweep.\n",0x21);
    FUN_00032218(4,local_810,0);
  }
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      FUN_0003db14();
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_0050748c + 4) + 0x1c))(0xff,param_1);
  }
  return;
}

