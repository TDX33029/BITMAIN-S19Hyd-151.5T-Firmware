// FUN_014144fc @ 014144fc size=128 calls_out=0 calls_in=3
// strings: 

void FUN_014144fc(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  iVar2 = 0;
  do {
    if (iVar4 == iVar2) {
      iVar2 = param_2[1];
      iVar3 = param_2[2];
      iVar4 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = iVar2;
      param_1[2] = iVar3;
      param_1[3] = iVar4;
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    }
    bVar1 = *(byte *)(iVar3 + iVar2);
    iVar2 = iVar2 + 1;
  } while ((bVar1 == 9) || (0x1f < bVar1 && bVar1 != 0x7f));
  iVar2 = *param_2;
  *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Could not recover jumptable at 0x01414560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0x10))(param_2 + 3,iVar3,iVar4);
  return;
}

