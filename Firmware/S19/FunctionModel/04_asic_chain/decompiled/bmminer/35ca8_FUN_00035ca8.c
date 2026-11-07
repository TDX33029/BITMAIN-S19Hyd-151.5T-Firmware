// FUN_00035ca8 @ 00035ca8  size=608  callers=1
// program: bmminer


void FUN_00035ca8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  char acStack_828 [2052];
  
  if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 5)) {
joined_r0x00035efc:
    if (DAT_00087bc4 < 5) goto LAB_00035d50;
  }
  else {
    memcpy(acStack_828,"==========================capability start==========================\n",0x46
          );
    FUN_00032218(5,acStack_828,0);
    if ((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) goto joined_r0x00035efc;
  }
  snprintf(acStack_828,0x800,"board num = %d\n",*param_1);
  FUN_00032218(5,acStack_828,0);
LAB_00035d50:
  cVar3 = DAT_0071e84c;
  if (*param_1 != 0) {
    uVar6 = 0;
    puVar5 = param_1;
    do {
      if (((cVar3 != '\0') || (DAT_0048d36d != '\0')) || (cVar3 = DAT_0048d36d, 4 < DAT_00087bc4)) {
        snprintf(acStack_828,0x800,"board id = %d, chain num = %d\n",puVar5[1],puVar5[2]);
        FUN_00032218(5,acStack_828,0);
        cVar3 = DAT_0071e84c;
      }
      uVar2 = puVar5[2];
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          if (cVar3 == '\0') {
            while ((DAT_0048d36d == '\0' && (DAT_00087bc4 < 5))) {
              uVar4 = uVar4 + 1;
              cVar3 = DAT_0048d36d;
              if (uVar2 <= uVar4) goto LAB_00035ddc;
            }
          }
          iVar1 = uVar4 + 3;
          uVar4 = uVar4 + 1;
          snprintf(acStack_828,0x800,"\tchain id = %d\n",puVar5[iVar1]);
          FUN_00032218(5,acStack_828,0);
          uVar2 = puVar5[2];
          cVar3 = DAT_0071e84c;
        } while (uVar4 < uVar2);
      }
LAB_00035ddc:
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 0x12;
    } while (uVar6 < *param_1);
  }
  if (((cVar3 != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
    memcpy(acStack_828,"==========================capability end============================\n",0x46
          );
    FUN_00032218(5,acStack_828,0);
  }
  return;
}

