// FUN_01448eec @ 01448eec size=168 calls_out=1 calls_in=2
// strings: 

void FUN_01448eec(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = *param_1;
  if (iVar2 != param_1[1]) {
    *param_1 = iVar2 + ((param_1[1] - iVar2) - 4U & 0xfffffffc) + 4;
  }
  iVar2 = param_1[4];
  if (iVar2 == 0) {
    return;
  }
  iVar5 = param_1[2];
  puVar4 = (uint *)(iVar5 + 0x48);
  uVar6 = *puVar4;
  if (uVar6 < 0x12) {
    uVar1 = param_1[3];
    if (uVar1 == uVar6) {
      uVar6 = uVar6 + iVar2;
      goto LAB_01448f8c;
    }
    iVar3 = iVar5 + 4;
  }
  else {
    uVar1 = param_1[3];
    uVar6 = *(uint *)(iVar5 + 4);
    if (uVar1 == uVar6) {
      uVar6 = uVar6 + iVar2;
      puVar4 = (uint *)(iVar5 + 4);
      goto LAB_01448f8c;
    }
    iVar3 = *(int *)(iVar5 + 8);
  }
  FUN_01bed864(iVar3 + uVar6 * 4,iVar3 + uVar1 * 4,iVar2 << 2);
  uVar6 = uVar6 + iVar2;
  if (0x11 < *puVar4) {
    puVar4 = (uint *)(iVar5 + 4);
  }
LAB_01448f8c:
  *puVar4 = uVar6;
  return;
}

