// FUN_0160d4f4 @ 0160d4f4 size=508 calls_out=2 calls_in=1
// strings: 

void FUN_0160d4f4(undefined1 *param_1,int *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  bVar7 = (param_3 & 1) != 0;
  puVar1 = param_1;
  if (bVar7) {
    puVar1 = (undefined1 *)param_2[0x16];
  }
  if (((bVar7 && puVar1 != (undefined1 *)0x80000001) && ((uint)param_2[0x1c] <= (uint)param_2[0xe]))
     && (*(char *)((int)param_2 + 0x67) == '\0')) {
    piVar4 = (int *)param_2[0x1e];
    iVar5 = piVar4[2];
    iVar3 = iVar5;
    if (*piVar4 == iVar5) {
      FUN_016225b8(piVar4,iVar5,1);
      iVar3 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar3) = 0x2c;
    piVar4[2] = iVar5 + 1;
    piVar4 = (int *)param_2[0x1e];
    iVar5 = param_2[0x11];
    uVar2 = param_2[0x12];
    iVar3 = piVar4[2];
    if ((uint)(*piVar4 - iVar3) < uVar2) {
      FUN_016225b8(piVar4,iVar3,uVar2);
      iVar3 = piVar4[2];
    }
    FUN_016dd1aa(piVar4[1] + iVar3,iVar5,uVar2);
    piVar4[2] = piVar4[2] + uVar2;
  }
  if ((param_2[0x16] != -0x7fffffff) && (*(char *)((int)param_2 + 0x67) == '\0')) {
    uVar2 = param_2[0x1c];
    if ((uVar2 <= (uint)param_2[0xe]) && ((*(byte *)((int)param_2 + 0x85) & 1) == 0)) {
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      while (uVar2 = uVar2 - 1, uVar2 != 0) {
        piVar4 = (int *)param_2[0x1e];
        iVar5 = param_2[0x14];
        uVar6 = param_2[0x15];
        iVar3 = piVar4[2];
        if ((uint)(*piVar4 - iVar3) < uVar6) {
          FUN_016225b8(piVar4,iVar3,uVar6);
          iVar3 = piVar4[2];
        }
        FUN_016dd1aa(piVar4[1] + iVar3,iVar5,uVar6);
        piVar4[2] = piVar4[2] + uVar6;
      }
      uVar2 = param_2[0x1c];
    }
    *(undefined1 *)((int)param_2 + 0x85) = 2;
    param_2[0x1c] = uVar2 - 1;
  }
  piVar4 = (int *)param_2[0x1e];
  iVar5 = piVar4[2];
  iVar3 = iVar5;
  if (*piVar4 == iVar5) {
    FUN_016225b8(piVar4,iVar5,1);
    iVar3 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar3) = 0x5d;
  piVar4[2] = iVar5 + 1;
  iVar3 = *param_2;
  *param_1 = 0x33;
  if (iVar3 == 1) {
    iVar3 = param_2[1] + 1;
    if (param_2[1] == -1) {
      iVar3 = -1;
    }
    param_2[1] = iVar3;
  }
  return;
}

