// FUN_0072df6c @ 0072df6c size=124 calls_out=0 calls_in=1
// strings: Invalid ELF section header offset or size | Invalid ELF section header entry size

void FUN_0072df6c(undefined4 *param_1,uint param_2,short param_3,int param_4,uint param_5)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (param_3 != 0x28) {
    *param_1 = "Invalid ELF section header entry size";
    param_1[1] = 0x25;
    return;
  }
  param_4 = param_4 + param_2;
  pcVar1 = (char *)0x0;
  if (param_5 < param_2 || param_5 - param_2 < 0x28) {
    param_4 = 0x29;
    pcVar1 = "Invalid ELF section header offset or size";
  }
  *param_1 = pcVar1;
  param_1[1] = param_4;
  return;
}

