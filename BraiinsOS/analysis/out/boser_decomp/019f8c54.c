// FUN_019f8c54 @ 019f8c54 size=96 calls_out=3 calls_in=277
// strings: 

void FUN_019f8c54(char *param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (*param_1 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019f8c88;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(param_1);
LAB_019f8c88:
  FUN_0165098c(param_1);
  FUN_019f8cb4(param_1,param_2,param_1);
  return;
}

