// FUN_01beb2c0 @ 01beb2c0 size=286 calls_out=5 calls_in=3
// strings: 

char * FUN_01beb2c0(char *param_1,int param_2,uint *param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  
  if ((int)param_3[0x13] < 0) {
    if (1 < param_2) {
      iVar8 = 0;
      goto LAB_01beb2da;
    }
    param_3[0x12] = param_3[0x12] - 1 | param_3[0x12];
  }
  else {
    iVar8 = FUN_01beae30(param_3);
    if (1 < param_2) {
LAB_01beb2da:
      uVar6 = param_2 - 1;
      pcVar9 = param_1;
      do {
        uVar2 = param_3[1];
        uVar5 = param_3[2];
        if (uVar2 == uVar5) {
LAB_01beb3b0:
          iVar3 = FUN_01beb1a0(param_3);
          if (iVar3 < 0) {
            if (pcVar9 == param_1) {
              pcVar7 = (char *)0x0;
              goto LAB_01beb3a2;
            }
            pcVar7 = (char *)0x0;
            if ((*param_3 & 0x10) == 0) goto LAB_01beb3a2;
            break;
          }
          cVar1 = (char)iVar3;
          pcVar7 = pcVar9;
        }
        else {
          iVar3 = FUN_01bed7c2(uVar2,10,uVar5 - uVar2,uVar5,param_4);
          uVar2 = param_3[1];
          if (iVar3 != 0) {
            uVar5 = (iVar3 - uVar2) + 1;
            if (uVar5 <= uVar6) {
              uVar6 = uVar5;
            }
            FUN_01bed4e2(pcVar9,uVar2,uVar6);
            param_3[1] = param_3[1] + uVar6;
            pcVar9 = pcVar9 + uVar6;
            break;
          }
          uVar5 = param_3[2] - uVar2;
          if (uVar6 <= param_3[2] - uVar2) {
            uVar5 = uVar6;
          }
          FUN_01bed4e2(pcVar9,uVar2,uVar5);
          uVar2 = param_3[1];
          pcVar9 = pcVar9 + uVar5;
          uVar6 = uVar6 - uVar5;
          uVar4 = uVar2 + uVar5;
          param_3[1] = uVar4;
          if (uVar6 == 0) break;
          if (uVar4 == param_3[2]) goto LAB_01beb3b0;
          param_3[1] = uVar4 + 1;
          cVar1 = *(char *)(uVar2 + uVar5);
          pcVar7 = pcVar9;
        }
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar7 + 1;
        *pcVar7 = cVar1;
      } while (cVar1 != '\n' && uVar6 != 0);
      pcVar7 = param_1;
      if (param_1 != (char *)0x0) {
        *pcVar9 = '\0';
      }
LAB_01beb3a2:
      if (iVar8 == 0) {
        return pcVar7;
      }
      FUN_01beaed6(param_3);
      return pcVar7;
    }
    param_3[0x12] = param_3[0x12] - 1 | param_3[0x12];
    if (iVar8 != 0) {
      FUN_01beaed6(param_3);
    }
  }
  if (param_2 == 1) {
    *param_1 = '\0';
  }
  else {
    param_1 = (char *)0x0;
  }
  return param_1;
}

