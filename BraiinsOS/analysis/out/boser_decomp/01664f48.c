// FUN_01664f48 @ 01664f48 size=124 calls_out=1 calls_in=2
// strings: 

int FUN_01664f48(int param_1,uint param_2,code *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  do {
    uVar1 = (*param_3)(param_1,param_2,0);
    if ((int)uVar1 < 1) {
      if (uVar1 != 0xffffffff) {
        return 0x10002;
      }
      piVar2 = (int *)FUN_01be3244(0x10002);
      iVar3 = 0x10001;
      if (0 < *piVar2) {
        iVar3 = -*piVar2;
      }
      if (iVar3 != -4) {
        return iVar3;
      }
    }
    else {
      bVar4 = param_2 < uVar1;
      param_2 = param_2 - uVar1;
      if (bVar4) {
        return 0x10002;
      }
      param_1 = param_1 + uVar1;
    }
    if (param_2 == 0) {
      return 0;
    }
  } while( true );
}

