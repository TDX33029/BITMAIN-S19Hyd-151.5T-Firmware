// FUN_016dafa8 @ 016dafa8 size=286 calls_out=5 calls_in=3
// strings: 

char * FUN_016dafa8(char *param_1,int param_2,uint *param_3,undefined4 param_4)

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
      goto LAB_016dafc2;
    }
    param_3[0x12] = param_3[0x12] - 1 | param_3[0x12];
  }
  else {
    iVar8 = FUN_016dab18(param_3);
    if (1 < param_2) {
LAB_016dafc2:
      uVar6 = param_2 - 1;
      pcVar9 = param_1;
      do {
        uVar2 = param_3[1];
        uVar5 = param_3[2];
        if (uVar2 == uVar5) {
LAB_016db098:
          iVar3 = FUN_016dae88(param_3);
          if (iVar3 < 0) {
            if (pcVar9 == param_1) {
              pcVar7 = (char *)0x0;
              goto LAB_016db08a;
            }
            pcVar7 = (char *)0x0;
            if ((*param_3 & 0x10) == 0) goto LAB_016db08a;
            break;
          }
          cVar1 = (char)iVar3;
          pcVar7 = pcVar9;
        }
        else {
          iVar3 = FUN_016dd48a(uVar2,10,uVar5 - uVar2,uVar5,param_4);
          uVar2 = param_3[1];
          if (iVar3 != 0) {
            uVar5 = (iVar3 - uVar2) + 1;
            if (uVar5 <= uVar6) {
              uVar6 = uVar5;
            }
            FUN_016dd1aa(pcVar9,uVar2,uVar6);
            param_3[1] = param_3[1] + uVar6;
            pcVar9 = pcVar9 + uVar6;
            break;
          }
          uVar5 = param_3[2] - uVar2;
          if (uVar6 <= param_3[2] - uVar2) {
            uVar5 = uVar6;
          }
          FUN_016dd1aa(pcVar9,uVar2,uVar5);
          uVar2 = param_3[1];
          pcVar9 = pcVar9 + uVar5;
          uVar6 = uVar6 - uVar5;
          uVar4 = uVar2 + uVar5;
          param_3[1] = uVar4;
          if (uVar6 == 0) break;
          if (uVar4 == param_3[2]) goto LAB_016db098;
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
LAB_016db08a:
      if (iVar8 == 0) {
        return pcVar7;
      }
      FUN_016dabbe(param_3);
      return pcVar7;
    }
    param_3[0x12] = param_3[0x12] - 1 | param_3[0x12];
    if (iVar8 != 0) {
      FUN_016dabbe(param_3);
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

