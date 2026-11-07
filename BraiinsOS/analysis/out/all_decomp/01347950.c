// FUN_01347950 @ 01347950 size=172 calls_out=1 calls_in=1
// strings: 

longlong FUN_01347950(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0x25) != '\0') {
LAB_0134796c:
    return (ulonglong)param_2 << 0x20;
  }
  iVar4 = *(int *)(param_1 + 4);
  FUN_0062a644(&local_1c,param_1);
  if (local_1c == 1) {
    iVar2 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = local_14;
    return CONCAT44(local_18 - iVar2,iVar4 + iVar2);
  }
  param_2 = (uint)*(byte *)(param_1 + 0x25);
  iVar4 = 0;
  if (param_2 != 0) goto LAB_0134796c;
  uVar1 = (uint)*(byte *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x25) = 1;
  if (uVar1 == 1) {
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar3 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == iVar2) goto LAB_013479f4;
  }
  uVar1 = iVar3 - iVar2;
  iVar4 = *(int *)(param_1 + 4) + iVar2;
LAB_013479f4:
  return CONCAT44(uVar1,iVar4);
}

