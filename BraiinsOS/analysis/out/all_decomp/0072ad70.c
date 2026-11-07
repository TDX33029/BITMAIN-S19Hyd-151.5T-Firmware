// FUN_0072ad70 @ 0072ad70 size=484 calls_out=11 calls_in=1
// strings: 

int * FUN_0072ad70(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_24;
  
  do {
    iVar4 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar4 + 0x40;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_015bef44();
  }
  piVar8 = (int *)*param_1;
  param_1[1] = param_1[1] + 1;
  do {
    iVar4 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_0072af54;
  piVar3 = (int *)thunk_FUN_016d4a50(0x1c);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x1c);
  }
  *(undefined1 *)(piVar3 + 6) = 1;
  piVar7 = piVar8 + 2;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = (int)param_2;
  *piVar3 = 1;
  piVar3[1] = 1;
  piVar6 = piVar3 + 2;
  *piVar6 = (int)piVar8;
  if ((char)*piVar7 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(piVar7);
    if (!bVar2) goto LAB_0072ae20;
    *(char *)piVar7 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0072ae20:
    FUN_01280da8(piVar7);
  }
  FUN_0128236c(piVar7);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    piVar5 = (int *)piVar8[5];
    local_24 = piVar6;
    if (piVar5 != piVar6) {
      piVar3[3] = 0;
      piVar3[4] = (int)piVar5;
      iVar4 = piVar8[6];
      if (piVar5 != (int *)0x0) {
        piVar5[1] = (int)piVar6;
      }
      piVar8[5] = (int)piVar6;
      if (iVar4 == 0) {
        piVar8[6] = (int)piVar6;
      }
      FUN_01282570(piVar7);
      if ((char)*piVar7 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(piVar7);
          if (bVar2) {
            *(char *)piVar7 = '\0';
            goto LAB_0072aec0;
          }
        } while ((char)*piVar7 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(piVar7);
LAB_0072aec0:
      iVar4 = piVar3[5];
      iVar4 = FUN_016343a0(iVar4,iVar4 + *(int *)(*(int *)(iVar4 + 8) + 0x1c),&DAT_0185a6dc,piVar6);
      if (iVar4 != 0) {
        FUN_0072b090(piVar3);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0105b210(piVar3);
      }
      return param_2;
    }
    FUN_010557ec(piVar8 + 5,&local_24,&DAT_018ac72c);
  }
LAB_0072af54:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x72af54);
  (*pcVar1)();
}

