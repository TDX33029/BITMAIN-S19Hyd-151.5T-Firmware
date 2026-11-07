// FUN_00b59df4 @ 00b59df4 size=160 calls_out=4 calls_in=7
// strings: 

void FUN_00b59df4(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_34 [20];
  
  puVar4 = (uint *)(param_2 + 8);
  do {
    uVar2 = *puVar4;
    iVar3 = *(int *)(param_2 + 0xc);
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = uVar2 + 1;
  *(uint *)(param_2 + 0xc) = iVar3 + (uint)(0xfffffffe < uVar2);
  iVar3 = FUN_012fc968(uVar2,iVar3,auStack_34,0x14);
  iVar5 = 0x14 - iVar3;
  if (iVar3 == 0x14) {
    iVar6 = 1;
    iVar7 = 0;
  }
  else {
    iVar6 = FUN_01298504(iVar5,1);
    iVar7 = iVar5;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar5);
    }
  }
  FUN_01bed4e2(iVar6,auStack_34 + iVar3,iVar5);
  *param_1 = iVar7;
  param_1[1] = iVar6;
  param_1[2] = iVar5;
  return;
}

