// FUN_015fc05c @ 015fc05c size=244 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_015fc05c(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 - param_4;
  uVar3 = param_4;
  if (param_4 < uVar4) {
    uVar3 = uVar4;
  }
  uVar1 = 1;
  if (param_4 * 2 < param_2) {
    if (param_2 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01cfdd38);
    }
    if (uVar4 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,param_3,uVar4,&DAT_01cfdd48);
    }
    if (param_4 <= param_3) {
      for (; 3 < param_4; param_4 = param_4 - 4) {
        if (*(int *)((int)param_1 + param_3) != *param_1) goto LAB_015fc098;
        param_1 = param_1 + 1;
      }
      psVar2 = (short *)((int)param_1 + param_3);
      if (1 < param_4) {
        if (*psVar2 != (short)*param_1) goto LAB_015fc098;
        param_4 = param_4 - 2;
        param_1 = (int *)((int)param_1 + 2);
        psVar2 = psVar2 + 1;
      }
      if (param_4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (uint)((char)*psVar2 != (char)*param_1);
        if ((char)*psVar2 != (char)*param_1) {
          param_3 = uVar3;
        }
      }
      goto LAB_015fc09c;
    }
  }
LAB_015fc098:
  param_3 = uVar3;
LAB_015fc09c:
  return CONCAT44(param_3,uVar1);
}

