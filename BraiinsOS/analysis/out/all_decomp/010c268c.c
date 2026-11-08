// FUN_010c268c @ 010c268c size=840 calls_out=7 calls_in=2
// strings: 

void FUN_010c268c(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *local_58;
  int iStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *local_40;
  int local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 == 0) {
    return;
  }
  piVar7 = (int *)(param_1 + 8);
  do {
    if (*piVar7 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar7);
      goto LAB_010c26cc;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
LAB_010c26cc:
  uVar6 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  else {
    uVar6 = FUN_015bf3f8();
    uVar6 = uVar6 ^ 1;
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar3 = (uint)local_3c >> 8;
    local_3c = CONCAT31((int3)uVar3,(char)uVar6);
    local_40 = piVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_01884cb0,&DAT_01884d00);
  }
  if (*(undefined1 **)(param_1 + 0x40) != &DAT_3b9aca00) {
    if (*(int *)(param_1 + 0x48) == 0) {
      FUN_015f3b0c(&local_40,1);
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x4c) + 0x14))
                (&local_40,
                 *(int *)(param_1 + 0x48) +
                 (*(int *)(*(int *)(param_1 + 0x4c) + 8) - 1U & 0xfffffff8) + 8);
    }
    *(uint *)(param_1 + 0x40) = local_38;
    *(int **)(param_1 + 0x38) = local_40;
    *(int *)(param_1 + 0x3c) = local_3c;
  }
  if (*(undefined1 **)(param_1 + 0x30) == &DAT_3b9aca00) {
LAB_010c2810:
    if (*(int *)(param_1 + 0x10) != 0) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
      if (*(undefined1 **)(param_1 + 0x20) == &DAT_3b9aca00) {
        FUN_0102804c(&local_58,*(undefined4 *)(param_1 + 0x50));
        if ((char)local_58 == '\x05') {
          if (*(int *)(param_1 + 0x48) == 0) {
            FUN_015f3b0c(&local_40,1);
          }
          else {
            (**(code **)(*(int *)(param_1 + 0x4c) + 0x14))
                      (&local_40,
                       *(int *)(param_1 + 0x48) +
                       (*(int *)(*(int *)(param_1 + 0x4c) + 8) - 1U & 0xfffffff8) + 8);
          }
          *(uint *)(param_1 + 0x20) = local_38;
          *(int **)(param_1 + 0x18) = local_40;
          *(int *)(param_1 + 0x1c) = local_3c;
        }
        else {
          local_40 = local_58;
          local_3c = iStack_54;
          local_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          FUN_014ed8bc();
        }
      }
      if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(param_1 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = 0;
      goto LAB_010c2950;
    }
  }
  else {
    if (*(int *)(param_1 + 0x48) == 0) {
      FUN_015f3b0c(&local_40,1);
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x4c) + 0x14))
                (&local_40,
                 *(int *)(param_1 + 0x48) +
                 (*(int *)(*(int *)(param_1 + 0x4c) + 8) - 1U & 0xfffffff8) + 8);
    }
    piVar4 = *(int **)(param_1 + 0x28);
    iVar5 = *(int *)(param_1 + 0x2c);
    if (local_40 == piVar4 && local_3c == iVar5) {
      if (*(uint *)(param_1 + 0x30) <= local_38) {
LAB_010c280c:
        *(undefined1 **)(param_1 + 0x30) = &DAT_3b9aca00;
        goto LAB_010c2810;
      }
    }
    else if ((int)(local_3c - (iVar5 + (uint)(local_40 < piVar4))) < 0 ==
             (SBORROW4(local_3c,iVar5) != SBORROW4(local_3c - iVar5,(uint)(local_40 < piVar4))))
    goto LAB_010c280c;
  }
  if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = 0;
LAB_010c2950:
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar7,0x81,1);
    return;
  }
  return;
}

