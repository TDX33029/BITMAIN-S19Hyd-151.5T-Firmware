// FUN_00015c70 @ 00015c70  size=376  callers=4
// program: bmminer


int FUN_00015c70(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,byte *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (param_4 == 0) {
    iVar3 = 2;
    bVar1 = false;
    do {
      FUN_00015c30(param_2,param_1);
      FUN_00020c5c(0x98,param_3,0,0,param_2,param_1);
      usleep(1000);
      uVar2 = FUN_00015c30(param_2,param_1);
      usleep(1000);
      if ((uVar2 & 0xffff) >> 8 == param_3) {
        if (bVar1) {
          return 0;
        }
        if ((uVar2 & 0xff) == 0) {
          return 0;
        }
        *param_5 = (byte)uVar2;
        return 1;
      }
      bVar4 = iVar3 != 1;
      bVar1 = true;
      iVar3 = 1;
    } while (bVar4);
  }
  else {
    iVar3 = 2;
    bVar1 = false;
    do {
      FUN_00015c30(param_2,param_1);
      FUN_00020c5c(0x98,param_3,*param_5,1,param_2,param_1);
      FUN_00015c30(param_2,param_1);
      usleep(1000);
      FUN_00015c30(param_2,param_1);
      FUN_00020c5c(0x98,param_3,0,0,param_2,param_1);
      uVar2 = FUN_00015c30(param_2,param_1);
      usleep(1000);
      if (((uVar2 & 0xffff) >> 8 == param_3) || ((uVar2 & 0xff) == (uint)*param_5)) {
        if (bVar1) {
          return 0;
        }
        return param_4;
      }
      bVar4 = iVar3 != 1;
      bVar1 = true;
      iVar3 = 1;
    } while (bVar4);
  }
  return 0;
}

