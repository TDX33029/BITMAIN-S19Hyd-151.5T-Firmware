// FUN_0075121c @ 0075121c size=424 calls_out=5 calls_in=0
// strings: 

void FUN_0075121c(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int local_ac;
  int local_9c;
  int local_80;
  undefined1 auStack_78 [84];
  
  piVar1 = (int *)thunk_FUN_016d4a50(0x3c);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x3c);
  }
  iVar3 = *param_2;
  iVar4 = 1;
  iVar6 = *(int *)(iVar3 + 0x28);
  uVar7 = *(undefined4 *)(iVar3 + 0x24);
  iVar5 = 1;
  if (iVar6 != 0) {
    iVar5 = thunk_FUN_016d4a50(iVar6);
    iVar8 = iVar6;
    if (iVar5 == 0) goto LAB_007513b8;
  }
  FUN_016dd1aa(iVar5,uVar7,iVar6);
  uVar7 = *(undefined4 *)(iVar3 + 0x30);
  iVar8 = *(int *)(iVar3 + 0x34);
  local_ac = CONCAT31((int3)((uint)local_ac >> 8),1);
  if ((iVar8 == 0) || (iVar4 = thunk_FUN_016d4a50(iVar8), iVar4 != 0)) {
    FUN_016dd1aa(iVar4,uVar7,iVar8);
    local_80 = CONCAT31(local_80._1_3_,*(undefined1 *)(iVar3 + 0x5c));
    local_9c = CONCAT31((int3)((uint)local_9c >> 8),1);
    iVar2 = thunk_FUN_016d4a50(0x50);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x50);
    }
    FUN_0074edbc(auStack_78,iVar3 + 8);
    FUN_016dd1aa(iVar2,auStack_78,0x50);
    *piVar1 = iVar6;
    piVar1[1] = iVar5;
    piVar1[2] = iVar6;
    piVar1[3] = local_ac;
    piVar1[4] = iVar8;
    piVar1[5] = iVar4;
    piVar1[6] = iVar8;
    piVar1[7] = local_9c;
    piVar1[8] = 1;
    piVar1[9] = iVar2;
    piVar1[10] = 1;
    piVar1[0xb] = 1;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    piVar1[0xe] = local_80;
    *param_1 = 1;
    param_1[1] = piVar1;
    param_1[2] = 1;
    return;
  }
LAB_007513b8:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(1,iVar8);
}

