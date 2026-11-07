// FUN_0125fe1c @ 0125fe1c size=144 calls_out=0 calls_in=1
// strings: 

void FUN_0125fe1c(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *param_3 + (uint)*(ushort *)(param_1 + 0x5e);
  *param_3 = iVar4;
  if (param_2 == 0) {
    return;
  }
  uVar1 = 0;
  do {
    do {
      uVar5 = uVar1;
      iVar2 = param_1;
      param_2 = param_2 + -1;
      param_1 = *(int *)(iVar2 + uVar5 * 4 + 0x60);
      iVar4 = iVar4 + (uint)*(ushort *)(param_1 + 0x5e);
      *param_3 = iVar4;
      uVar1 = 0;
    } while (param_2 != 0);
    param_2 = 1;
    iVar3 = iVar2;
    if (*(ushort *)(iVar2 + 0x5e) <= uVar5) {
      do {
        iVar2 = *(int *)(iVar3 + 0x58);
        if (iVar2 == 0) {
          return;
        }
        uVar5 = (uint)*(ushort *)(iVar3 + 0x5c);
        param_2 = param_2 + 1;
        iVar3 = iVar2;
      } while (*(ushort *)(iVar2 + 0x5e) <= uVar5);
    }
    param_1 = iVar2;
    uVar1 = uVar5 + 1;
  } while( true );
}

