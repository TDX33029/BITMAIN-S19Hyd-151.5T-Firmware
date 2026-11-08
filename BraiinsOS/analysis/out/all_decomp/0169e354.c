// FUN_0169e354 @ 0169e354 size=176 calls_out=0 calls_in=0
// strings: 

void FUN_0169e354(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  
  piVar3 = (int *)*param_1;
  pcVar7 = (code *)param_1[1];
  if ((pcVar7 != (code *)0x0) && (iVar2 = piVar3[1], iVar2 != -1)) {
    iVar6 = param_1[2];
    iVar5 = 0;
    iVar4 = -iVar6;
    do {
      if (*(char *)(*piVar3 + iVar5) == -0x80) {
        uVar1 = piVar3[1];
        *(undefined1 *)(*piVar3 + iVar5) = 0xff;
        *(undefined1 *)(*piVar3 + (uVar1 & iVar5 - 4U) + 4) = 0xff;
        (*pcVar7)(*piVar3 + iVar4);
        piVar3[3] = piVar3[3] + -1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 - iVar6;
    } while (iVar2 + 1 != iVar5);
  }
  uVar1 = piVar3[1];
  if (7 < uVar1) {
    uVar1 = (uVar1 + 1 & 0xfffffff8) - (uVar1 + 1 >> 3);
  }
  piVar3[2] = uVar1 - piVar3[3];
  return;
}

