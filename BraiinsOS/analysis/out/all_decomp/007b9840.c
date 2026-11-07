// FUN_007b9840 @ 007b9840 size=384 calls_out=2 calls_in=2
// strings: 

void FUN_007b9840(int param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  
  uVar5 = *(uint *)(param_1 + 8);
  if (uVar5 != 0) {
    cVar1 = (char)param_2[1];
    iVar2 = *(int *)(param_1 + 4);
    uVar10 = (uint)*param_2;
    puVar7 = (uint *)((int)param_2 + 3);
    uVar11 = *puVar7;
    if (cVar1 == '\0') {
      pcVar9 = (char *)(iVar2 + 2);
      uVar8 = 0;
      do {
        if (*pcVar9 == '\0') {
          uVar3 = *(uint *)(pcVar9 + 1);
          bVar13 = uVar3 == uVar11;
          if (bVar13) {
            uVar3 = (uint)*(ushort *)(pcVar9 + -2);
          }
          if (bVar13 && uVar3 == uVar10) goto LAB_007b9900;
        }
        uVar8 = uVar8 + 1;
        pcVar9 = pcVar9 + 0x14;
      } while (uVar5 != uVar8);
    }
    else {
      pcVar9 = (char *)(iVar2 + 2);
      uVar8 = 0;
      do {
        if (*pcVar9 != '\0') {
          uVar3 = thunk_FUN_016dd50a(pcVar9 + 1,puVar7,0x10);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            uVar3 = (uint)*(ushort *)(pcVar9 + -2);
          }
          if (bVar13 && uVar3 == uVar10) goto LAB_007b9900;
        }
        uVar8 = uVar8 + 1;
        pcVar9 = pcVar9 + 0x14;
      } while (uVar5 != uVar8);
    }
  }
  return;
LAB_007b9900:
  if (uVar8 + 1 < uVar5) {
    iVar6 = ~uVar8 + uVar5;
    puVar12 = (uint *)(iVar2 + uVar8 * 0x14 + 0x17);
    do {
      if (*(char *)((int)puVar12 + -1) == cVar1) {
        if (cVar1 != '\0') {
          iVar4 = thunk_FUN_016dd50a(puVar12,puVar7,0x10);
          if (iVar4 == 0) goto LAB_007b99a4;
          goto LAB_007b9958;
        }
        if (*puVar12 != uVar11) goto LAB_007b9958;
LAB_007b99a4:
        if (*(ushort *)((int)puVar12 + -3) != uVar10) goto LAB_007b9958;
      }
      else {
LAB_007b9958:
        FUN_016dd1aa(iVar2 + uVar8 * 0x14,(ushort *)((int)puVar12 + -3),0x14);
        uVar8 = uVar8 + 1;
      }
      puVar12 = puVar12 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(uint *)(param_1 + 8) = uVar8;
  return;
}

