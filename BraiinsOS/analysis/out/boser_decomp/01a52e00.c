// FUN_01a52e00 @ 01a52e00 size=164 calls_out=0 calls_in=0
// strings: 

void FUN_01a52e00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  
  piVar4 = (int *)*param_1;
  pcVar8 = (code *)param_1[1];
  if ((pcVar8 != (code *)0x0) && (iVar2 = piVar4[1], iVar2 != -1)) {
    iVar7 = param_1[2];
    iVar6 = 0;
    iVar5 = -iVar7;
    do {
      iVar1 = *piVar4;
      if (*(char *)(iVar1 + iVar6) == -0x80) {
        uVar3 = piVar4[1];
        *(undefined1 *)(iVar1 + iVar6) = 0xff;
        *(undefined1 *)(iVar1 + (uVar3 & iVar6 - 4U) + 4) = 0xff;
        (*pcVar8)(*piVar4 + iVar5);
        piVar4[3] = piVar4[3] + -1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 - iVar7;
    } while (iVar2 + 1 != iVar6);
  }
  uVar3 = piVar4[1];
  if (7 < uVar3) {
    uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
  }
  piVar4[2] = uVar3 - piVar4[3];
  return;
}

