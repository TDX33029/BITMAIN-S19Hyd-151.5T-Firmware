// FUN_01410ba0 @ 01410ba0 size=156 calls_out=2 calls_in=2
// strings: 

void FUN_01410ba0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_5c [64];
  int local_1c;
  int local_18;
  byte local_14;
  
  FUN_0140df4c(&local_1c,param_2,param_3,auStack_5c,"");
  if (local_14 != 3) {
    if (local_14 == 2) {
      uVar2 = 0;
      *(char *)(param_1 + 2) = (char)local_1c;
      param_1[1] = 0;
      goto LAB_01410c0c;
    }
    if ((local_14 & 1) != 0) {
LAB_01410c00:
      FUN_012834b0(param_1 + 1);
      uVar2 = 0;
      goto LAB_01410c0c;
    }
    iVar3 = 0;
    do {
      if (local_18 == iVar3) goto LAB_01410c00;
      pbVar1 = (byte *)(local_1c + iVar3);
      iVar3 = iVar3 + 1;
    } while (""[*pbVar1] != '\0');
  }
  uVar2 = 1;
LAB_01410c0c:
  *param_1 = uVar2;
  return;
}

