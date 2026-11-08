// FUN_014fb0e8 @ 014fb0e8 size=248 calls_out=2 calls_in=2
// strings: 

void FUN_014fb0e8(int *param_1,int param_2,uint param_3,char param_4,char param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      if (*(char *)(param_2 + uVar3) == param_4 || *(char *)(param_2 + uVar3) == param_5) {
        if (uVar3 == 0) {
LAB_014fb170:
          if (param_3 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar3,param_3,&DAT_01cfa794);
          }
          uVar2 = uVar3 + 1;
          if ((param_3 <= uVar2) || (-0x41 < *(char *)(param_2 + uVar2))) {
            *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + uVar3);
            *param_1 = param_2;
            param_1[1] = uVar3;
            param_1[3] = (int)(param_2 + uVar2);
            param_1[4] = param_3 - uVar2;
            return;
          }
          puVar1 = &DAT_01cfa7a4;
          uVar3 = param_3;
        }
        else {
          if (uVar3 < param_3) {
            if (-0x41 < *(char *)(param_2 + uVar3)) goto LAB_014fb170;
          }
          else if (uVar3 == param_3) goto LAB_014fb170;
          uVar2 = 0;
          puVar1 = &DAT_01cfa784;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar2,uVar3,puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
  }
  *param_1 = 0;
  return;
}

