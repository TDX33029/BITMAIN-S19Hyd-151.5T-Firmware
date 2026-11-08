// FUN_00b05048 @ 00b05048 size=312 calls_out=9 calls_in=0
// strings: 

int FUN_00b05048(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = *param_1;
  piVar3 = (int *)(iVar2 + 8);
  if (*piVar3 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (bVar1) {
      *piVar3 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_00b0507c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(piVar3);
LAB_00b0507c:
  uVar4 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar4 = FUN_0197ac0c();
    uVar4 = uVar4 ^ 1;
  }
  if (*(char *)(iVar2 + 0x10) != '\0') {
    local_3c = CONCAT31(local_3c._1_3_,(char)uVar4);
    local_40 = piVar3;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0056c7a8,0x20,&local_40,&DAT_01c10bd8,&DAT_01c10ab8);
  }
  FUN_00a438cc(&local_40);
  uVar5 = *(undefined4 *)(iVar2 + 0x18);
  FUN_015e8ad4(&local_30,uVar5,*(undefined4 *)(iVar2 + 0x1c));
  FUN_019bb7e0(local_40,local_3c);
  FUN_019bb7e0(*(undefined4 *)(iVar2 + 0x14),uVar5);
  *(undefined4 *)(iVar2 + 0x14) = local_30;
  *(undefined4 *)(iVar2 + 0x18) = uStack_2c;
  *(undefined4 *)(iVar2 + 0x1c) = uStack_28;
  *(undefined2 *)(iVar2 + 0x20) = 0x202;
  iVar2 = FUN_00b04520((undefined4 *)(iVar2 + 0x14));
  FUN_01ac2a34(piVar3,uVar4);
  if (iVar2 == 0) {
    FUN_00b047e8(param_1);
  }
  return iVar2;
}

