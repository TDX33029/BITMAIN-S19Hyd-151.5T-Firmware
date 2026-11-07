// FUN_012b0bfc @ 012b0bfc size=84 calls_out=0 calls_in=1
// strings: 

uint FUN_012b0bfc(char *param_1,uint param_2)

{
  if ((param_2 & 4) != 0) {
    return 0;
  }
  if ((param_2 & 0x2000) == 0) {
    if (((param_2 & 0x1000) == 0) || (*param_1 != '\0')) goto LAB_012b0c40;
  }
  else if ((param_2 & 0x1000) == 0 && *param_1 == '\0') goto LAB_012b0c40;
  if ((param_2 & 8) == 0) {
    return 0;
  }
LAB_012b0c40:
  return (param_2 & 2) >> 1 ^ 1;
}

