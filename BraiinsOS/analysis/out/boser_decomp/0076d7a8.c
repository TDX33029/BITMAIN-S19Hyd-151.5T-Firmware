// FUN_0076d7a8 @ 0076d7a8 size=128 calls_out=4 calls_in=1
// strings: 

void FUN_0076d7a8(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2[2];
  iVar3 = param_2[1];
  iVar2 = 0;
  do {
    if (iVar4 * 0x44 == iVar2) {
      if (iVar4 == *param_2) {
        FUN_0140bd2c(param_2);
        iVar3 = param_2[1];
      }
      FUN_01bed864(iVar3 + iVar4 * 0x44,param_1,0x44);
      param_2[2] = iVar4 + 1;
      return;
    }
    iVar1 = FUN_013cad2c(iVar3 + iVar2,param_1);
    iVar2 = iVar2 + 0x44;
  } while (iVar1 == 0);
  FUN_0079217c(param_1);
  return;
}

