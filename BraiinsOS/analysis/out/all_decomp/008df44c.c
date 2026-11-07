// FUN_008df44c @ 008df44c size=584 calls_out=8 calls_in=1
// strings: 

void FUN_008df44c(uint *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  int *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[4]) {
  case '\0':
    puVar10 = (undefined4 *)*param_2;
    param_2[1] = (int)puVar10;
    uVar12 = (**(code **)(puVar10[1] + 0x24))(*puVar10);
    *(undefined8 *)(param_2 + 2) = uVar12;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018653ec);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018653ec);
  case '\x03':
    uVar12 = *(undefined8 *)(param_2 + 2);
  }
  (**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0xc))(&local_40,(int)uVar12,param_3);
  uVar3 = local_3c;
  piVar4 = local_40;
  if (local_40 == (int *)0x2) {
    *param_1 = 2;
    uVar5 = 3;
  }
  else {
    iVar8 = param_2[2];
    puVar10 = (undefined4 *)param_2[3];
    pcVar7 = (code *)*puVar10;
    uVar12 = CONCAT44(uStack_34,local_38);
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(iVar8);
    }
    if (puVar10[1] != 0) {
      thunk_FUN_016d3fb4(iVar8);
    }
    if (((uint)piVar4 & 1) == 0) {
      iVar8 = *(int *)(param_2[1] + 8);
      piVar9 = (int *)(iVar8 + 0xb8);
      do {
        if (*piVar9 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar9);
          goto LAB_008df558;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = 1;
      DataMemoryBarrier(0xb);
LAB_008df558:
      uVar11 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = *(char *)(iVar8 + 0xbc);
      }
      else {
        uVar11 = FUN_015bf3f8();
        uVar11 = uVar11 ^ 1;
        cVar1 = *(char *)(iVar8 + 0xbc);
      }
      if (cVar1 != '\0') {
        uVar3 = local_3c >> 8;
        local_3c = CONCAT31((int3)uVar3,(char)uVar11);
        local_40 = piVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00347772,0x16,&local_40,&DAT_01866de4,&DAT_01866d54);
      }
      FUN_015f3b0c(&local_40,1);
      *(undefined4 *)(iVar8 + 0xc0) = 1;
      *(undefined4 *)(iVar8 + 0xc4) = 0;
      *(int **)(iVar8 + 0xe0) = local_40;
      *(uint *)(iVar8 + 0xe4) = local_3c;
      *(undefined8 *)(iVar8 + 200) = uVar12;
      *(undefined4 *)(iVar8 + 0xe8) = local_38;
      if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)(iVar8 + 0xbc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = 0;
      if (iVar8 == 2) {
        FUN_016d6968(0xf0,piVar9,0x81,1);
      }
    }
    uVar5 = 1;
    *param_1 = (uint)piVar4;
    *(undefined8 *)(param_1 + 2) = uVar12;
    param_1[1] = uVar3;
  }
  *(undefined1 *)(param_2 + 4) = uVar5;
  return;
}

