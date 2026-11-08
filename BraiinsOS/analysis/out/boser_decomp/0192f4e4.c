// FUN_0192f4e4 @ 0192f4e4 size=396 calls_out=3 calls_in=0
// strings: 

void FUN_0192f4e4(int *param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *local_34;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  int local_2c;
  int local_28;
  
  local_30 = (**(code **)(param_2[1] + 0xc))(*param_2,"{",1);
  iVar2 = *param_1;
  uVar9 = param_1[1];
  iVar8 = param_1[2];
  ppuVar1 = &local_34;
  if (iVar2 == 0) {
    iVar8 = 0;
  }
  bVar4 = iVar2 != 0;
  local_2d = 1;
  local_2f = 0;
  iVar6 = 0;
  local_34 = param_2;
  while( true ) {
    if (iVar8 == 0) {
      FUN_01303100(&local_34);
      return;
    }
    if (!bVar4) break;
    if (iVar6 == 0) {
      iVar5 = 0;
      iVar6 = iVar2;
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        iVar6 = *(int *)(iVar6 + 0x248);
      }
      uVar7 = 0;
    }
    else {
      iVar5 = iVar2;
      uVar7 = uVar9;
    }
    iVar2 = iVar6;
    if (*(ushort *)(iVar6 + 0x242) <= uVar7) {
      do {
        iVar6 = *(int *)(iVar2 + 0x1b8);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fff0);
        }
        uVar7 = (uint)*(ushort *)(iVar2 + 0x240);
        iVar5 = iVar5 + 1;
        iVar2 = iVar6;
      } while (*(ushort *)(iVar6 + 0x242) <= uVar7);
    }
    if (iVar5 == 0) {
      uVar9 = uVar7 + 1;
      iVar10 = iVar6;
    }
    else {
      piVar3 = (int *)(iVar6 + uVar7 * 4 + 0x24c);
      do {
        iVar10 = *piVar3;
        iVar5 = iVar5 + -1;
        piVar3 = (int *)(iVar10 + 0x248);
      } while (iVar5 != 0);
      uVar9 = 0;
    }
    iVar8 = iVar8 + -1;
    local_2c = iVar6 + uVar7 * 0xc + 0x1bc;
    local_28 = iVar6 + uVar7 * 0x28;
    ppuVar1 = (undefined4 **)FUN_01302ea4(ppuVar1,&local_2c,&DAT_018a7214,&local_28,FUN_01919560);
    bVar4 = true;
    iVar2 = 0;
    iVar6 = iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d2ffe0);
}

