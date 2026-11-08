// FUN_006ca274 @ 006ca274 size=140 calls_out=0 calls_in=0
// strings: 

void FUN_006ca274(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)*param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (pcVar3 == (char *)param_2[1]) goto LAB_006ca2f4;
    pcVar3 = pcVar3 + 1;
    *param_2 = pcVar3;
  }
  if (pcVar3 != (char *)param_2[1]) {
    uVar4 = 5;
    cVar1 = *pcVar3;
    *param_2 = pcVar3 + 1;
    puVar2 = &DAT_0034297e;
    if (cVar1 != '\0') {
      uVar4 = 4;
      puVar2 = &DAT_00567b14;
    }
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 0x80000000;
    param_1[6] = puVar2;
    param_1[7] = uVar4;
    *param_1 = 0;
    return;
  }
LAB_006ca2f4:
  *param_1 = 0x80000000;
  return;
}

