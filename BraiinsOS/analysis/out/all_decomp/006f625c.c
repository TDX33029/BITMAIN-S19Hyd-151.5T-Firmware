// FUN_006f625c @ 006f625c size=420 calls_out=3 calls_in=42
// strings: 

void FUN_006f625c(uint *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  undefined4 in_stack_00000000;
  uint *local_20;
  undefined4 local_1c;
  
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = uVar5 & 0xfffffffe;
  DataMemoryBarrier(0xb);
  if ((uVar5 & 2) != 0) {
    puVar8 = param_1 + 1;
    do {
      if (*puVar8 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(puVar8);
        goto LAB_006f62ac;
      }
      bVar2 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar2);
    *puVar8 = 1;
    DataMemoryBarrier(0xb);
LAB_006f62ac:
    uVar5 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = (char)param_1[2];
    }
    else {
      uVar5 = FUN_015bf3f8();
      uVar5 = uVar5 ^ 1;
      cVar1 = (char)param_1[2];
    }
    if (cVar1 != '\0') {
      uVar3 = (uint)local_1c >> 8;
      local_1c = CONCAT31((int3)uVar3,(char)uVar5);
      local_20 = puVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_01859134,&DAT_01883dd0);
    }
    iVar7 = param_1[5] * 0xc;
    piVar4 = (int *)(param_1[4] - 0xc);
    do {
      piVar6 = piVar4;
      if (iVar7 == 0) goto LAB_006f6324;
      iVar7 = iVar7 + -0xc;
      piVar4 = piVar6 + 3;
    } while (piVar6[3] == 0);
    iVar7 = piVar6[4];
    piVar6[4] = 0;
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 4))(piVar6[5]);
    }
LAB_006f6324:
    if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)
       ) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar8;
      bVar2 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar2);
    *puVar8 = 0;
    if (uVar5 == 2) {
      software_interrupt(0);
      FUN_016d3496(puVar8,0x81,1,in_stack_00000000);
      return;
    }
  }
  return;
}

