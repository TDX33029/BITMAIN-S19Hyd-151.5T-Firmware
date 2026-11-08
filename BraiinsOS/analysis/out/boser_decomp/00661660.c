// FUN_00661660 @ 00661660 size=144 calls_out=2 calls_in=3
// strings: 

void FUN_00661660(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00660248(param_1[3]);
  }
  iVar3 = param_1[1];
  puVar4 = (undefined4 *)(iVar3 + 4);
  for (iVar5 = param_1[2]; iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_0134aee0(puVar4[-1],*puVar4,4,8,unaff_r4);
    puVar4 = puVar4 + 3;
  }
  FUN_0134aee0(*param_1,iVar3,4,0xc);
  return;
}

