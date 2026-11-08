// FUN_0008102c @ 0008102c  size=204  callers=1
// program: bmminer


void FUN_0008102c(int param_1,char *param_2)

{
  size_t sVar1;
  
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    sVar1 = strlen(param_2);
    if (sVar1 < 0x50) {
      strncpy((char *)(param_1 + 0xc),param_2,sVar1 + 1);
    }
    else {
      memcpy((void *)(param_1 + 0xc),&DAT_000a98e8,3);
      strncpy((char *)(param_1 + 0xf),param_2 + (sVar1 - 0x4c),(sVar1 - (sVar1 - 0x4c)) + 1);
    }
  }
  return;
}

