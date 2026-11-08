// FUN_0128bd7c @ 0128bd7c size=292 calls_out=0 calls_in=1
// strings: 

void FUN_0128bd7c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  pcVar3 = (char *)*param_2;
  iVar6 = param_2[1];
  uVar1 = 0x3b9aca06;
  if (iVar6 == 0) {
    iVar2 = 0;
    iVar5 = 0;
    pcVar4 = pcVar3;
  }
  else {
    if (*pcVar3 == '<') {
      iVar2 = iVar6 + -1;
      iVar5 = 0;
      if (iVar2 != 0) {
        pcVar4 = pcVar3 + 1;
        iVar5 = 0;
        do {
          if (pcVar4[iVar5] == '>') {
            iVar6 = param_2[2] + 1 + iVar5;
            iVar2 = iVar2 - iVar5;
            param_2[2] = iVar6;
            *param_2 = pcVar4 + iVar5;
            param_2[1] = iVar2;
            if (iVar2 == 0) goto LAB_0128bdec;
            *param_2 = pcVar4 + iVar5 + 1;
            param_2[1] = iVar2 + -1;
            param_2[2] = iVar6 + 1;
            *param_1 = pcVar4;
            param_1[1] = iVar5;
            goto LAB_0128be60;
          }
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
        iVar5 = iVar2;
      }
      *param_2 = pcVar3 + iVar6;
      param_2[1] = 0;
      param_2[2] = param_2[2] + 1 + iVar5;
LAB_0128bdec:
      *param_1 = 0x2501;
      param_1[1] = 0;
      goto LAB_0128be64;
    }
    iVar5 = 0;
    do {
      if (((byte)pcVar3[iVar5] & 0xdf) - 0x5b < 0xffffffe6) {
        iVar2 = iVar6 - iVar5;
        pcVar4 = pcVar3 + iVar5;
        goto LAB_0128be4c;
      }
      iVar5 = iVar5 + 1;
    } while (iVar6 != iVar5);
    iVar2 = 0;
    pcVar4 = pcVar3 + iVar6;
    iVar5 = iVar6;
  }
LAB_0128be4c:
  *param_2 = pcVar4;
  param_2[1] = iVar2;
  iVar6 = param_2[2];
  *param_1 = pcVar3;
  param_1[1] = iVar5;
  param_2[2] = iVar6 + iVar5;
LAB_0128be60:
  uVar1 = 0x3b9aca10;
LAB_0128be64:
  param_1[2] = uVar1;
  return;
}

