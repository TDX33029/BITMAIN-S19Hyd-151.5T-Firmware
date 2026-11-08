// FUN_00602b88 @ 00602b88 size=552 calls_out=5 calls_in=14
// strings: 

void FUN_00602b88(int *param_1,char *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int local_30;
  int iStack_2c;
  uint uStack_28;
  
  iVar6 = param_3 + 1;
  if (param_3 == 0xfffffffe || iVar6 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  iVar1 = thunk_FUN_016d4a50(iVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar6);
  }
  FUN_016dd1aa(iVar1,param_2,param_3);
  if (param_3 < 8) {
    if (param_3 != 0) {
      if (*param_2 == '\0') {
        iVar2 = 0;
      }
      else {
        if (param_3 == 1) goto LAB_00602d30;
        if (param_2[1] == '\0') {
          iVar2 = 1;
        }
        else {
          if (param_3 == 2) goto LAB_00602d30;
          if (param_2[2] == '\0') {
            iVar2 = 2;
          }
          else {
            if (param_3 == 3) goto LAB_00602d30;
            if (param_2[3] == '\0') {
              iVar2 = 3;
            }
            else {
              if (param_3 == 4) goto LAB_00602d30;
              if (param_2[4] == '\0') {
                iVar2 = 4;
              }
              else {
                if (param_3 == 5) goto LAB_00602d30;
                if (param_2[5] == '\0') {
                  iVar2 = 5;
                }
                else {
                  if ((param_3 == 6) || (param_2[6] != '\0')) goto LAB_00602d30;
                  iVar2 = 6;
                }
              }
            }
          }
        }
      }
LAB_00602d90:
      *param_1 = iVar6;
      param_1[1] = iVar1;
      param_1[2] = param_3;
      param_1[3] = iVar2;
      return;
    }
    goto LAB_00602d30;
  }
  uVar3 = ((uint)(param_2 + 3) & 0xfffffffc) - (int)param_2;
  if (uVar3 == 0) {
    uVar3 = 0;
LAB_00602c88:
    do {
      uVar4 = *(uint *)(param_2 + uVar3);
      uVar5 = *(uint *)((int)(param_2 + uVar3) + 4);
      if (((0x1010100 - uVar4 | uVar4) & 0x80808080 & (0x1010100 - uVar5 | uVar5)) != 0x80808080)
      break;
      uVar3 = uVar3 + 8;
    } while (uVar3 <= param_3 - 8);
  }
  else {
    iVar2 = 0;
    do {
      if (param_2[-iVar2] == '\0') {
        iVar2 = -iVar2;
        goto LAB_00602d90;
      }
      iVar2 = iVar2 + -1;
    } while ((int)param_2 - ((uint)(param_2 + 3) & 0xfffffffc) != iVar2);
    if (uVar3 <= param_3 - 8) goto LAB_00602c88;
  }
  if (param_3 != uVar3) {
    iVar2 = 0;
    do {
      if (param_2[iVar2 + uVar3] == '\0') {
        iVar2 = iVar2 + uVar3;
        goto LAB_00602d90;
      }
      iVar2 = iVar2 + 1;
    } while (param_3 - uVar3 != iVar2);
  }
LAB_00602d30:
  local_30 = iVar6;
  iStack_2c = iVar1;
  uStack_28 = param_3;
  uVar7 = FUN_00600c38(&local_30);
  *(undefined8 *)(param_1 + 1) = uVar7;
  *param_1 = -0x80000000;
  return;
}

