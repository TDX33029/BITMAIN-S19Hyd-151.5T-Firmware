// FUN_018e1548 @ 018e1548 size=484 calls_out=7 calls_in=2
// strings: chunk size must be non-zero

uint FUN_018e1548(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined1 local_28;
  
  uVar2 = param_3;
  if (*(char *)(param_1 + 0xae) == '\0') {
    if (param_4 == 0) {
      piVar5 = (int *)(param_1 + 0x48);
      if (*piVar5 == 1) {
        uVar3 = *(uint *)(param_1 + 0x4c);
        uVar1 = FUN_018dfe9c(piVar5);
        uVar2 = uVar3 - uVar1;
        if (uVar3 < uVar1) {
          uVar2 = 0;
        }
        if (param_3 <= uVar2) {
          uVar2 = param_3;
        }
      }
      if (uVar2 == 0) {
        local_34 = 0;
        local_30 = 1;
      }
      else {
        local_30 = FUN_01298504(uVar2,1);
        local_34 = uVar2;
        if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,uVar2);
        }
      }
      FUN_01bed4e2(local_30,param_2,uVar2);
      local_2c = uVar2;
      FUN_018dff10(piVar5,&local_34);
    }
    else {
      if (param_3 == 0) {
        local_34 = 0;
        local_30 = 1;
      }
      else {
        local_30 = FUN_01298504(param_3,1);
        local_34 = param_3;
        if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,param_3);
        }
      }
      FUN_01bed4e2(local_30,param_2,param_3);
      local_2c = param_3;
      uVar2 = FUN_018dff10(param_1 + 0x48,&local_34);
    }
  }
  else if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    if ((param_4 == 0) && (*(int *)(param_1 + 0x60) == 1)) {
      uVar3 = *(uint *)(param_1 + 100);
      uVar1 = FUN_018dfe9c();
      uVar2 = uVar3 - uVar1;
      if (uVar3 < uVar1) {
        uVar2 = 0;
      }
      if (param_3 <= uVar2) {
        uVar2 = param_3;
      }
    }
    uVar1 = *(uint *)(param_1 + 0xa8);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("chunk size must be non-zero",0x37,&DAT_01d23098);
    }
    if (uVar2 != 0) {
      uVar3 = uVar2;
      do {
        uVar4 = uVar3;
        if (uVar1 < uVar3) {
          uVar4 = uVar1;
        }
        local_28 = 3;
        local_34 = CONCAT22(local_34._2_2_,4);
        local_30 = param_2;
        local_2c = uVar4;
        FUN_018e09a4(param_1,&local_34);
        param_2 = param_2 + uVar4;
        uVar3 = uVar3 - uVar4;
      } while (uVar3 != 0);
    }
  }
  return uVar2;
}

