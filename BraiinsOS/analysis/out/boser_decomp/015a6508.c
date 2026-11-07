// FUN_015a6508 @ 015a6508 size=432 calls_out=1 calls_in=3
// strings: 

void FUN_015a6508(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  
  uVar8 = param_2[1];
  iVar10 = 4;
  if (uVar8 != 0) {
    pcVar4 = (char *)*param_2;
    uVar5 = 0;
    do {
      uVar6 = uVar5 + 1;
      if (pcVar4[uVar5] == '{') {
        iVar2 = FUN_015a603c(param_2,uVar5);
        if (iVar2 == 0) {
          if ((uVar6 < uVar8) && (pcVar4[uVar6] == '}')) goto LAB_015a65b4;
          uVar11 = uVar5 + 2;
          pcVar9 = pcVar4;
          uVar6 = 0;
          goto LAB_015a65d0;
        }
      }
      else if ((pcVar4[uVar5] == '}') && (iVar2 = FUN_015a603c(param_2,uVar5), iVar2 == 0)) {
LAB_015a65b4:
        uVar3 = 1;
        uVar8 = 0x80000001;
        goto LAB_015a6590;
      }
      uVar5 = uVar6;
    } while (uVar8 != uVar6);
  }
  uVar3 = 0;
  uVar8 = 0;
  goto LAB_015a6590;
LAB_015a65d0:
  uVar7 = uVar6;
  if (uVar11 == 0) {
    if (pcVar9 == pcVar4 + uVar8) goto LAB_015a665c;
  }
  else {
    if ((uint)((int)(pcVar4 + uVar8) - (int)pcVar9) <= uVar11) goto LAB_015a665c;
    uVar7 = uVar11 + uVar7;
    pcVar9 = pcVar9 + uVar11;
  }
  cVar1 = *pcVar9;
  uVar6 = uVar7 + 1;
  uVar11 = 0;
  if (cVar1 != '}') {
    if ((cVar1 == '*') || (pcVar9 = pcVar9 + 1, cVar1 == '/')) goto LAB_015a665c;
    goto LAB_015a65d0;
  }
  iVar10 = FUN_015a603c(param_2,uVar7);
  uVar3 = 1;
  pcVar9 = pcVar9 + 1;
  if (iVar10 != 0) goto LAB_015a65d0;
  if ((uVar8 <= uVar7 - 1) || (pcVar4[uVar7 - 1] != '*')) {
    iVar10 = 4;
    if ((uVar8 <= uVar6) || (uVar8 = 0x80000000, pcVar4[uVar6] == '/')) {
      uVar3 = 0;
      param_1[1] = 1;
      param_1[2] = uVar5;
      iVar10 = 0xc;
      uVar8 = uVar6;
    }
    goto LAB_015a6590;
  }
LAB_015a665c:
  uVar3 = 1;
  iVar10 = 4;
  uVar8 = 0x80000001;
LAB_015a6590:
  *(uint *)((int)param_1 + iVar10) = uVar8;
  *param_1 = uVar3;
  return;
}

