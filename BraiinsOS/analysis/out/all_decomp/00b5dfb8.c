// FUN_00b5dfb8 @ 00b5dfb8 size=172 calls_out=1 calls_in=0
// strings: 

void FUN_00b5dfb8(uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_c8 [164];
  
  puVar4 = param_1 + 0x2a;
  iVar7 = 0;
  do {
    uVar6 = *puVar4;
    if (uVar6 < puVar4[-0x2a]) {
      FUN_016dd1aa(auStack_c8,puVar4 + 1,0xa4);
      iVar1 = iVar7;
      do {
        iVar3 = iVar1;
        iVar5 = (int)param_1 + iVar3;
        FUN_016dd1aa(iVar5 + 0xa8,iVar5,0xa8);
        if (iVar3 == 0) {
          puVar2 = param_1;
          goto LAB_00b5dfe0;
        }
        iVar1 = iVar3 + -0xa8;
      } while (uVar6 < *(uint *)(iVar5 + -0xa8));
      puVar2 = (uint *)((int)param_1 + iVar3);
LAB_00b5dfe0:
      *puVar2 = uVar6;
      FUN_016dd1aa(puVar2 + 1,auStack_c8,0xa4);
    }
    puVar4 = puVar4 + 0x2a;
    iVar7 = iVar7 + 0xa8;
    if (puVar4 == param_1 + param_2 * 0x2a) {
      return;
    }
  } while( true );
}

