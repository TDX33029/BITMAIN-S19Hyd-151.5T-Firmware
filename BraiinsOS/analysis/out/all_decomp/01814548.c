// FUN_01814548 @ 01814548 size=732 calls_out=0 calls_in=1
// strings: 

uint FUN_01814548(int param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint unaff_r8;
  char cVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  
  uVar3 = *(uint *)(param_1 + 0x6c);
  iVar2 = *(int *)(param_1 + 0x38);
  uVar7 = *(int *)(param_1 + 0x2c) - 0x106;
  uVar8 = uVar7;
  if (uVar7 < uVar3) {
    uVar8 = uVar3 + 0x104;
  }
  pcVar11 = (char *)(iVar2 + uVar3);
  if (uVar7 < uVar3) {
    uVar8 = uVar8 + 2;
  }
  uVar12 = *(uint *)(param_1 + 0x78);
  if (uVar7 < uVar3) {
    unaff_r8 = uVar8 - *(int *)(param_1 + 0x2c);
  }
  uVar8 = *(uint *)(param_1 + 0x7c);
  pcVar4 = (char *)(iVar2 + uVar3 + 0x102);
  if (uVar3 <= uVar7) {
    unaff_r8 = 0;
  }
  cVar9 = pcVar11[uVar12];
  cVar10 = pcVar11[uVar12 - 1];
  uVar3 = *(uint *)(param_1 + 0x74);
  if (*(uint *)(param_1 + 0x8c) <= uVar12) {
    uVar8 = uVar8 >> 2;
  }
  uVar7 = *(uint *)(param_1 + 0x90);
  if (uVar3 <= *(uint *)(param_1 + 0x90)) {
    uVar7 = uVar3;
  }
  do {
    iVar5 = iVar2 + param_2;
    if ((((*(char *)(iVar5 + uVar12) == cVar9) && (*(char *)(iVar5 + uVar12 + -1) == cVar10)) &&
        (*(char *)(iVar2 + param_2) == *pcVar11)) && (*(char *)(iVar5 + 1) == pcVar11[1])) {
      pcVar13 = pcVar11 + 2;
      iVar5 = iVar5 + 2;
      do {
        if (pcVar13[1] != *(char *)(iVar5 + 1)) {
          pcVar13 = pcVar13 + 1;
          break;
        }
        if (pcVar13[2] != *(char *)(iVar5 + 2)) {
          pcVar13 = pcVar13 + 2;
          break;
        }
        if (pcVar13[3] != *(char *)(iVar5 + 3)) {
          pcVar13 = pcVar13 + 3;
          break;
        }
        if (pcVar13[4] != *(char *)(iVar5 + 4)) {
          pcVar13 = pcVar13 + 4;
          break;
        }
        if (pcVar13[5] != *(char *)(iVar5 + 5)) {
          pcVar13 = pcVar13 + 5;
          break;
        }
        if (pcVar13[6] != *(char *)(iVar5 + 6)) {
          pcVar13 = pcVar13 + 6;
          break;
        }
        if (pcVar13[7] != *(char *)(iVar5 + 7)) {
          pcVar13 = pcVar13 + 7;
          break;
        }
        pcVar13 = pcVar13 + 8;
        pcVar1 = (char *)(iVar5 + 8);
        iVar5 = iVar5 + 8;
      } while (pcVar13 < pcVar4 && *pcVar13 == *pcVar1);
      iVar5 = (int)pcVar4 - (int)pcVar13;
      uVar6 = 0x102 - iVar5;
      if ((int)uVar12 < (int)uVar6) {
        *(uint *)(param_1 + 0x70) = param_2;
        if ((int)uVar7 <= (int)uVar6) break;
        cVar9 = pcVar11[uVar6];
        cVar10 = pcVar11[0x101 - iVar5];
        uVar12 = uVar6;
      }
    }
    uVar6 = uVar12;
    param_2 = (uint)*(ushort *)
                     (*(int *)(param_1 + 0x40) + (param_2 & *(uint *)(param_1 + 0x34)) * 2);
    if (param_2 <= unaff_r8) break;
    uVar8 = uVar8 - 1;
    uVar12 = uVar6;
  } while (uVar8 != 0);
  if (uVar3 < uVar6) {
    uVar6 = uVar3;
  }
  return uVar6;
}

