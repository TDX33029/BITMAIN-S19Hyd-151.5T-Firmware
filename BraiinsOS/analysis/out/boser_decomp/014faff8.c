// FUN_014faff8 @ 014faff8 size=232 calls_out=1 calls_in=6
// strings: 

void FUN_014faff8(int *param_1,int param_2,uint param_3,char param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      if (*(char *)(param_2 + uVar3) == param_4) {
        if (uVar3 != 0) {
          if (uVar3 < param_3) {
            if (*(char *)(param_2 + uVar3) < -0x40) goto LAB_014fb0c4;
          }
          else {
            if (uVar3 != param_3) {
LAB_014fb0c4:
              uVar2 = 0;
              puVar1 = &DAT_01cfa764;
              goto LAB_014fb0d0;
            }
            uVar4 = 0;
            uVar3 = param_3;
            if (param_3 == 0xffffffff) goto LAB_014fb0a8;
          }
        }
        uVar2 = uVar3 + 1;
        if (uVar2 < param_3) {
          if (-0x41 < *(char *)(param_2 + uVar2)) {
            uVar4 = uVar2;
LAB_014fb0a8:
            *param_1 = param_2;
            param_1[1] = uVar3;
            param_1[2] = param_2 + uVar4;
            param_1[3] = param_3 - uVar4;
            return;
          }
        }
        else {
          uVar4 = param_3;
          if (uVar2 == param_3) goto LAB_014fb0a8;
        }
        puVar1 = &DAT_01cfa774;
        uVar3 = param_3;
LAB_014fb0d0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar2,uVar3,puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
  }
  *param_1 = 0;
  return;
}

