// FUN_007620bc @ 007620bc size=200 calls_out=0 calls_in=1
// strings: 

longlong FUN_007620bc(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar4 = param_1[3];
  iVar8 = 0;
  if (uVar4 == 0) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *param_1;
    uVar5 = param_1[2];
    uVar7 = uVar5 - uVar3;
    if (uVar5 < uVar3) {
      uVar7 = uVar5;
    }
    if (uVar3 - uVar7 < uVar4) {
      iVar8 = uVar4 - (uVar3 - uVar7);
    }
    else {
      uVar3 = uVar7 + uVar4;
    }
  }
  uVar4 = param_1[1];
  iVar6 = uVar4 + iVar8 * 0x1c;
  iVar2 = uVar4 + uVar3 * 0x1c;
  iVar8 = iVar8 * -0x1c;
  do {
    if (iVar8 == 0) {
      iVar8 = uVar7 * 0x1c + uVar3 * -0x1c;
      do {
        if (iVar8 == 0) {
          return (ulonglong)param_2 << 0x20;
        }
        puVar1 = (uint *)(iVar2 + -0x10);
        iVar8 = iVar8 + 0x1c;
        iVar2 = iVar2 + -0x1c;
      } while (*puVar1 != param_2);
      goto LAB_00762164;
    }
    puVar1 = (uint *)(iVar6 + -0x10);
    iVar8 = iVar8 + 0x1c;
    iVar6 = iVar6 + -0x1c;
  } while (*puVar1 != param_2);
  iVar2 = uVar4 - iVar8;
LAB_00762164:
  uVar4 = 0;
  if (*(char *)(iVar2 + 0x18) != '\0') {
    uVar4 = (uint)DAT_018dd947;
  }
  return CONCAT44(uVar4,iVar2);
}

