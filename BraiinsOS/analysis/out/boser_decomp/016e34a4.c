// FUN_016e34a4 @ 016e34a4 size=296 calls_out=2 calls_in=5
// strings: 

void FUN_016e34a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = *(uint *)(param_1 + 8);
  if (uVar10 < 2) {
    return;
  }
  iVar11 = *(int *)(param_1 + 4);
  iVar7 = 0;
  uVar4 = 2;
  do {
    iVar9 = iVar11 + iVar7;
    if (*(int *)(iVar9 + 0x18) == *(int *)(iVar9 + 8)) {
      uVar5 = *(undefined4 *)(iVar9 + 0x14);
      iVar1 = thunk_FUN_01bed842(uVar5,*(undefined4 *)(iVar9 + 4));
      if (iVar1 == 0) {
        iVar7 = uVar4 - 1;
        if (*(char *)(iVar9 + 0x1c) != *(char *)(iVar9 + 0xc)) {
          *(undefined1 *)(iVar9 + 0xc) = 0;
          *(undefined1 *)(iVar9 + 0x1c) = 0;
        }
        FUN_0134bd64(*(undefined4 *)(iVar9 + 0x10),uVar5);
        if (uVar10 <= uVar4) goto LAB_016e35c0;
        iVar1 = uVar10 - uVar4;
        pcVar6 = (char *)(iVar9 + 0x2c);
        break;
      }
    }
    iVar7 = iVar7 + 0x10;
    uVar4 = uVar4 + 1;
    if (uVar10 * 0x10 + -0x10 == iVar7) {
      return;
    }
  } while( true );
LAB_016e354c:
  puVar8 = (undefined4 *)(iVar11 + iVar7 * 0x10);
  if (*(int *)(pcVar6 + -4) == puVar8[-2]) {
    uVar5 = *(undefined4 *)(pcVar6 + -8);
    iVar9 = thunk_FUN_01bed842(uVar5,puVar8[-3]);
    if (iVar9 != 0) goto LAB_016e357c;
    if (*pcVar6 != *(char *)(puVar8 + -1)) {
      *(undefined1 *)(puVar8 + -1) = 0;
      *pcVar6 = '\0';
    }
    FUN_0134bd64(*(undefined4 *)(pcVar6 + -0xc),uVar5);
  }
  else {
LAB_016e357c:
    uVar5 = *(undefined4 *)(pcVar6 + -8);
    uVar2 = *(undefined4 *)(pcVar6 + -4);
    uVar3 = *(undefined4 *)pcVar6;
    iVar7 = iVar7 + 1;
    *puVar8 = *(undefined4 *)(pcVar6 + -0xc);
    puVar8[1] = uVar5;
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
  }
  pcVar6 = pcVar6 + 0x10;
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
LAB_016e35c0:
    *(int *)(param_1 + 8) = iVar7;
    return;
  }
  goto LAB_016e354c;
}

