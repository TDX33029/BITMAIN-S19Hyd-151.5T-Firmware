// FUN_013fa11c @ 013fa11c size=228 calls_out=3 calls_in=1
// strings: 

void FUN_013fa11c(int *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  uVar6 = *(uint *)(param_2 + 8);
  if (uVar6 != 0) {
    iVar8 = param_1[1];
    uVar9 = param_1[2];
    iVar3 = *(int *)(param_2 + 4);
    if (uVar9 != uVar6) {
LAB_013fa188:
      if (*param_1 - uVar9 < uVar6) {
        FUN_01401968(param_1,uVar9,uVar6,1,2);
        iVar8 = param_1[1];
        uVar9 = param_1[2];
      }
      FUN_016dd1aa(iVar8 + uVar9 * 2,iVar3,uVar6 << 1);
      param_1[2] = uVar9 + uVar6;
      FUN_013f9740(param_1);
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & *(byte *)(param_2 + 0xc);
      return;
    }
    pcVar4 = (char *)(iVar8 + 1);
    pcVar5 = (char *)(iVar3 + 1);
    uVar7 = uVar6;
    do {
      cVar1 = pcVar5[-1];
      cVar2 = pcVar4[-1];
      bVar10 = cVar2 != cVar1;
      if (!bVar10) {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
      }
      if (bVar10 || cVar2 != cVar1) goto LAB_013fa188;
      pcVar4 = pcVar4 + 2;
      pcVar5 = pcVar5 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

