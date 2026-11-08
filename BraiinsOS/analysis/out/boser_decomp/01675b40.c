// FUN_01675b40 @ 01675b40 size=452 calls_out=7 calls_in=2
// strings: 

void FUN_01675b40(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 local_54;
  undefined4 uStack_50;
  uint *puStack_4c;
  uint auStack_48 [2];
  char *local_40;
  uint local_3c [6];
  
  local_54 = *(undefined4 *)(param_2 + 4);
  uStack_50 = *(undefined4 *)(param_2 + 8);
  puStack_4c = (uint *)(param_2 + 0xc);
  uVar11 = FUN_0134384c(&local_54);
  uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
  local_3c[1] = param_3;
  local_40 = "#";
  uVar4 = 0;
  iVar3 = 4;
  local_3c[2] = param_4;
  local_3c[0] = 1;
  auStack_48[1] = uVar6;
  while (iVar3 != 0x1c) {
    puVar1 = (uint *)((int)auStack_48 + iVar3);
    iVar3 = iVar3 + 8;
    bVar10 = CARRY4(*puVar1,uVar4);
    uVar4 = *puVar1 + uVar4;
    if (bVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
    }
  }
  uVar5 = 0;
  if ((int)uVar4 < 0) {
LAB_01675be4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,uVar4);
  }
  if (uVar4 == 0) {
    local_3c[4] = 1;
    local_3c[3] = 0;
  }
  else {
    uVar5 = 1;
    local_3c[4] = FUN_01298504(uVar4,1);
    local_3c[3] = uVar4;
    if (local_3c[4] == 0) goto LAB_01675be4;
  }
  local_3c[5] = 0;
  if (local_3c[3] < uVar6) {
    FUN_006520b4(auStack_48 + 6,0,uVar6,1,1);
  }
  uVar2 = local_3c[5];
  uVar8 = local_3c[4];
  FUN_01bed4e2(local_3c[4] + local_3c[5],(int)uVar11,uVar6);
  iVar7 = 0;
  uVar9 = uVar4 - (uVar2 + uVar6);
  iVar3 = uVar8 + uVar2 + uVar6;
  while( true ) {
    if (iVar7 == 0x10) {
      *param_1 = local_3c[3];
      param_1[1] = local_3c[4];
      param_1[2] = uVar4 - uVar9;
      uVar6 = *(uint *)(param_2 + 0x10);
      uVar4 = *(uint *)(param_2 + 0x14);
      param_1[3] = *(uint *)(param_2 + 0xc);
      param_1[4] = uVar6;
      param_1[5] = uVar4;
      uVar6 = *(uint *)(param_2 + 0x1c);
      uVar4 = *(uint *)(param_2 + 0x20);
      uVar8 = *(uint *)(param_2 + 0x24);
      param_1[6] = *(uint *)(param_2 + 0x18);
      param_1[7] = uVar6;
      param_1[8] = uVar4;
      param_1[9] = uVar8;
      return;
    }
    uVar6 = *(uint *)((int)auStack_48 + iVar7 + 0xc);
    if (uVar9 < uVar6) break;
    FUN_01bed4e2(iVar3,*(undefined4 *)((int)auStack_48 + iVar7 + 8),uVar6);
    uVar9 = uVar9 - uVar6;
    iVar3 = iVar3 + uVar6;
    iVar7 = iVar7 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
}

