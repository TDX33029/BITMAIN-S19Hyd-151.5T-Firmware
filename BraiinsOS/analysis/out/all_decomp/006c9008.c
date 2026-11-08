// FUN_006c9008 @ 006c9008 size=136 calls_out=0 calls_in=0
// strings: manual

void FUN_006c9008(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)*param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (pcVar2 == (char *)param_2[1]) goto LAB_006c9084;
    pcVar2 = pcVar2 + 1;
    *param_2 = pcVar2;
  }
  if (pcVar2 != (char *)param_2[1]) {
    uVar3 = 4;
    cVar1 = *pcVar2;
    *param_2 = pcVar2 + 1;
    param_1[1] = 4;
    pcVar2 = &DAT_00568078;
    if (cVar1 != '\0') {
      uVar3 = 6;
      pcVar2 = "manual";
    }
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[2] = 0;
    param_1[3] = 0x80000000;
    param_1[6] = pcVar2;
    param_1[7] = uVar3;
    *param_1 = 0;
    return;
  }
LAB_006c9084:
  *param_1 = 0x80000000;
  return;
}

