// FUN_00b5e300 @ 00b5e300 size=172 calls_out=1 calls_in=3
// strings: 

void FUN_00b5e300(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_70 [76];
  
  puVar4 = param_1 + 0x14;
  iVar7 = 0;
  do {
    uVar6 = *puVar4;
    if (uVar6 < puVar4[-0x14]) {
      FUN_016dd1aa(auStack_70,puVar4 + 1,0x4c);
      iVar1 = iVar7;
      do {
        iVar3 = iVar1;
        iVar5 = (int)param_1 + iVar3;
        FUN_016dd1aa(iVar5 + 0x50,iVar5,0x50);
        if (iVar3 == 0) {
          puVar2 = param_1;
          goto LAB_00b5e328;
        }
        iVar1 = iVar3 + -0x50;
      } while (uVar6 < *(uint *)(iVar5 + -0x50));
      puVar2 = (uint *)((int)param_1 + iVar3);
LAB_00b5e328:
      *puVar2 = uVar6;
      FUN_016dd1aa(puVar2 + 1,auStack_70,0x4c);
    }
    puVar4 = puVar4 + 0x14;
    iVar7 = iVar7 + 0x50;
    if (puVar4 == param_1 + param_2 * 0x14) {
      return;
    }
  } while( true );
}

