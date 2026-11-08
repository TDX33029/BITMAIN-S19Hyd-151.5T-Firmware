// FUN_01156f7c @ 01156f7c size=248 calls_out=1 calls_in=1
// strings: 

void FUN_01156f7c(int *param_1,int param_2,uint param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      if (*(char *)(param_2 + uVar1) == param_4) {
        if (uVar1 != 0) {
          if (uVar1 < param_3) {
            if (*(char *)(param_2 + uVar1) < -0x40) goto LAB_01157058;
          }
          else {
            if (uVar1 != param_3) {
LAB_01157058:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(param_2,param_3,0,uVar1,&DAT_01888dbc);
            }
            uVar3 = 0;
            uVar1 = param_3;
            if (param_3 == 0xffffffff) goto LAB_0115703c;
          }
        }
        uVar2 = uVar1 + 1;
        if (uVar2 < param_3) {
          if (*(char *)(param_2 + uVar2) < -0x40) {
LAB_01157008:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_2,param_3,uVar2,param_3,&DAT_01888dcc);
          }
          uVar3 = uVar2;
        }
        else {
          uVar3 = param_3;
          if (uVar2 != param_3) goto LAB_01157008;
        }
LAB_0115703c:
        *param_1 = param_2;
        param_1[1] = uVar1;
        param_1[2] = param_2 + uVar3;
        param_1[3] = param_3 - uVar3;
        return;
      }
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  *param_1 = 0;
  return;
}

