// FUN_00a30258 @ 00a30258 size=360 calls_out=4 calls_in=14
// strings: 

int * FUN_00a30258(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if ((char)param_1[2] == '\0') {
    if (param_2 != (int *)0x0) {
      iVar4 = *param_2;
      iVar5 = param_2[1];
      *param_2 = 0;
      if (iVar4 != 0) {
        *param_1 = iVar4;
        param_1[1] = iVar5;
        *(undefined1 *)(param_1 + 2) = 1;
        goto LAB_00a30384;
      }
    }
    piVar6 = DAT_018d9124;
    DataMemoryBarrier(0xb);
    piVar3 = &DAT_018dc800;
    do {
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = -1;
      if (iVar4 != -1) goto LAB_00a30358;
      piVar1 = piVar3 + 1;
      DataMemoryBarrier(0xb);
    } while ((piVar3 != piVar6) && (piVar3 = (int *)*piVar1, (int *)*piVar1 != (int *)0x0));
    piVar3 = (int *)thunk_FUN_016d4a50(8);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *piVar3 = -1;
    piVar3[1] = 0;
    iVar4 = DAT_018d9120;
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(0x18d9124);
    } while (!bVar2);
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(0x18d9120);
    } while (!bVar2);
    DataMemoryBarrier(0xb);
    piVar6 = DAT_018d9124 + 1;
    DAT_018d9120 = DAT_018d9120 + 1;
    DAT_018d9124 = piVar3;
    *piVar6 = (int)piVar3;
LAB_00a30358:
    piVar6 = (int *)*param_1;
    iVar7 = param_1[1];
    iVar5 = param_1[2];
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = (int)piVar3;
    param_1[1] = iVar4;
    if ((char)iVar5 != '\x01') {
      if ((char)iVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae210);
      }
LAB_00a30384:
      FUN_015e8e6c(param_1,&LAB_009c40ec);
      return param_1;
    }
    *piVar6 = iVar7;
  }
  else if ((char)param_1[2] != '\x01') {
    return (int *)0x0;
  }
  return param_1;
}

