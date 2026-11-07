// FUN_01962fb0 @ 01962fb0 size=160 calls_out=1 calls_in=0
// strings: 

void FUN_01962fb0(int *param_1,char *param_2,uint param_3)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_3 < 8) {
    if (param_3 == 0) {
      bVar1 = false;
    }
    else {
      pcVar2 = param_2;
      uVar3 = param_3;
      do {
        uVar3 = uVar3 - 1;
        bVar1 = *pcVar2 == '.';
        if (*pcVar2 == '.') break;
        pcVar2 = pcVar2 + 1;
      } while (uVar3 != 0);
    }
  }
  else {
    iVar5 = FUN_01307168(0x2e,param_2,param_3);
    bVar1 = iVar5 == 1;
  }
  uVar4 = *(undefined4 *)*param_1;
  iVar5 = ((undefined4 *)*param_1)[1];
  *(byte *)(param_1 + 1) = bVar1 | *(byte *)(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0196304c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar5 + 0xc))(uVar4,param_2,param_3);
  return;
}

