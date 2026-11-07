// FUN_016f67a8 @ 016f67a8 size=224 calls_out=3 calls_in=2
// strings: 

void FUN_016f67a8(int *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  uVar6 = *(uint *)(param_2 + 8);
  if (uVar6 != 0) {
    uVar8 = param_1[2];
    iVar9 = param_1[1];
    iVar7 = *(int *)(param_2 + 4);
    if (uVar8 == uVar6) {
      pcVar3 = (char *)(iVar9 + 1);
      pcVar4 = (char *)(iVar7 + 1);
      uVar5 = uVar6;
      do {
        cVar1 = pcVar4[-1];
        cVar2 = pcVar3[-1];
        bVar10 = cVar2 != cVar1;
        if (!bVar10) {
          cVar2 = *pcVar4;
          cVar1 = *pcVar3;
        }
        if (bVar10 || cVar1 != cVar2) goto LAB_016f6814;
        pcVar3 = pcVar3 + 2;
        pcVar4 = pcVar4 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    else {
LAB_016f6814:
      if (*param_1 - uVar8 < uVar6) {
        FUN_006520b4(param_1,uVar8,uVar6,1,2);
        iVar9 = param_1[1];
        uVar8 = param_1[2];
      }
      FUN_01bed4e2(iVar9 + uVar8 * 2,iVar7,uVar6 << 1);
      param_1[2] = uVar8 + uVar6;
      FUN_016f6050(param_1);
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & *(byte *)(param_2 + 0xc);
    }
  }
  return;
}

