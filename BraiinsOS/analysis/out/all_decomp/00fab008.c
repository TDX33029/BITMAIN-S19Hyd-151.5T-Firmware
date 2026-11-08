// FUN_00fab008 @ 00fab008 size=472 calls_out=0 calls_in=2
// strings: 

void FUN_00fab008(undefined4 *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 < 8) {
    if (*param_2 == '\0') {
      iVar1 = 0;
LAB_00fab1ac:
      if (iVar1 + 1U == param_3) {
        param_1[1] = param_2;
        param_1[2] = param_3;
        *param_1 = 0;
        return;
      }
      param_1[1] = 0;
      param_1[2] = iVar1;
      *param_1 = 1;
      return;
    }
    if (param_3 != 1) {
      if (param_2[1] == '\0') {
        iVar1 = 1;
      }
      else {
        if (param_3 == 2) goto LAB_00fab160;
        if (param_2[2] == '\0') {
          iVar1 = 2;
        }
        else {
          if (param_3 == 3) goto LAB_00fab160;
          if (param_2[3] == '\0') {
            iVar1 = 3;
          }
          else {
            if (param_3 == 4) goto LAB_00fab160;
            if (param_2[4] == '\0') {
              iVar1 = 4;
            }
            else {
              if (param_3 == 5) goto LAB_00fab160;
              if (param_2[5] == '\0') {
                iVar1 = 5;
              }
              else {
                if ((param_3 == 6) || (param_2[6] != '\0')) goto LAB_00fab160;
                iVar1 = 6;
              }
            }
          }
        }
      }
      goto LAB_00fab1ac;
    }
    goto LAB_00fab160;
  }
  uVar2 = ((uint)(param_2 + 3) & 0xfffffffc) - (int)param_2;
  if (uVar2 == 0) {
    uVar2 = 0;
LAB_00fab0c0:
    do {
      uVar4 = *(uint *)(param_2 + uVar2);
      uVar3 = *(uint *)((int)(param_2 + uVar2) + 4);
      if (((0x1010100 - uVar4 | uVar4) & 0x80808080 & (0x1010100 - uVar3 | uVar3)) != 0x80808080)
      break;
      uVar2 = uVar2 + 8;
    } while (uVar2 <= param_3 - 8);
  }
  else {
    iVar1 = 0;
    do {
      if (param_2[-iVar1] == '\0') {
        iVar1 = -iVar1;
        goto LAB_00fab1ac;
      }
      iVar1 = iVar1 + -1;
    } while ((int)param_2 - ((uint)(param_2 + 3) & 0xfffffffc) != iVar1);
    if (uVar2 <= param_3 - 8) goto LAB_00fab0c0;
  }
  if (param_3 != uVar2) {
    iVar1 = 0;
    do {
      if (param_2[iVar1 + uVar2] == '\0') {
        iVar1 = iVar1 + uVar2;
        goto LAB_00fab1ac;
      }
      iVar1 = iVar1 + 1;
    } while (param_3 - uVar2 != iVar1);
  }
LAB_00fab160:
  param_1[1] = 1;
  *param_1 = 1;
  return;
}

