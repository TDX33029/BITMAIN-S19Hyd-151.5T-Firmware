// FUN_00020de0 @ 00020de0  size=580  callers=2
// program: cgminer


void FUN_00020de0(int *param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint local_824;
  uint local_820;
  char local_81c [4];
  char acStack_818 [3];
  char acStack_815 [5];
  char acStack_810 [2048];
  
  local_81c[0] = '0';
  local_81c[1] = '0';
  local_81c[2] = '0';
  local_81c[3] = '0';
  acStack_818[0] = '0';
  acStack_818[1] = '0';
  acStack_818[2] = '0';
  register0x00000027 = '0';
  acStack_815[1] = 0x30;
  sVar1 = strlen(param_2);
  local_824 = 0;
  local_820 = 8;
  if (sVar1 != 0) {
    pcVar4 = param_2 + -1;
    pcVar2 = pcVar4 + sVar1;
    pcVar3 = acStack_815 + -sVar1;
    do {
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
      *pcVar3 = *pcVar4;
    } while (pcVar4 != pcVar2);
  }
  acStack_815[1] = 0;
  FUN_0001fb7c(&local_824,local_81c,4);
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
    snprintf(acStack_810,0x800,"mask returned by pool is %s, swaped = 0x%x",param_2,local_824);
    FUN_0001dd98(6,acStack_810,0);
  }
  local_824 = (local_824 & 0xe0ff1f) >> 8 & 0xff00 | (local_824 & 0xff00) << 8 |
              (local_824 & 0xe0ff1f) << 0x18;
  local_824 = FUN_00020d20(local_824,&local_820);
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 5)) {
    if (local_824 != 0) {
LAB_00020fb4:
      *(undefined1 *)(param_1 + 0xa5) = 1;
      param_1[0xa7] = local_824;
      param_1[0xa6] = 1 << (local_820 & 0xff);
      return;
    }
LAB_00020ff0:
    if (DAT_00067848 < 5) goto LAB_00020f94;
  }
  else {
    snprintf(acStack_810,0x800,"real mask = 0x%x, bit_num = %d",local_824,local_820);
    FUN_0001dd98(5,acStack_810,0);
    if (local_824 != 0) goto LAB_00020fb4;
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00020ff0;
  }
  snprintf(acStack_810,0x800,"Pool %d rolling mask do not match!",*param_1);
  FUN_0001dd98(5,acStack_810,0);
LAB_00020f94:
  *(undefined1 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 1;
  param_1[0xa7] = local_824;
  return;
}

