// FUN_0003b0e0 @ 0003b0e0  size=296  callers=1
// program: bmminer


void FUN_0003b0e0(int param_1)

{
  int *piVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_18;
  int local_14;
  
  piVar8 = *(int **)(param_1 + 0x70);
  if (piVar8 == (int *)0x0) {
    return;
  }
  if (0 < *(int *)(param_1 + 0x78)) {
    iVar10 = *piVar8;
    iVar11 = piVar8[1];
    if (piVar8[2] != 3) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        if (iVar5 == *(int *)(param_1 + 0x78)) {
          return;
        }
        iVar10 = piVar8[3];
        iVar11 = piVar8[4];
        piVar1 = piVar8 + 5;
        piVar8 = piVar8 + 3;
      } while (*piVar1 != 3);
    }
    iVar10 = *(int *)(param_1 + 0x18) + iVar10;
    if (iVar10 != 0) {
      cVar2 = *(char *)(iVar10 + iVar11 + -1);
      FUN_0003afc4(&local_18,param_1,"Connection");
      if (local_14 == 5) {
        pbVar4 = (byte *)(local_18 + -1);
        pbVar3 = (byte *)"close";
        do {
          pbVar4 = pbVar4 + 1;
          uVar6 = (uint)*pbVar4;
          uVar9 = (uint)*pbVar3;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 + 0x20 & 0xff;
          }
          if (uVar9 - 0x41 < 0x1a) {
            uVar9 = uVar9 + 0x20 & 0xff;
          }
          if (uVar6 != uVar9) {
            bVar7 = *(byte *)(param_1 + 0x7c);
            goto LAB_0003b190;
          }
          pbVar3 = pbVar3 + 1;
        } while ((byte *)(local_18 + 4) != pbVar4);
        bVar7 = *(byte *)(param_1 + 0x7c);
      }
      else {
        bVar7 = *(byte *)(param_1 + 0x7c);
        if (cVar2 == '1' || local_14 != 0) {
LAB_0003b190:
          *(byte *)(param_1 + 0x7c) = bVar7 | 1;
          return;
        }
      }
      *(byte *)(param_1 + 0x7c) = bVar7 & 0xfe;
      return;
    }
  }
  return;
}

