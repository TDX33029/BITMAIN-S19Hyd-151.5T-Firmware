// FUN_019f6c28 @ 019f6c28 size=228 calls_out=8 calls_in=2
// strings: inner has gone away

void FUN_019f6c28(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_60 [8];
  int local_40;
  int local_3c [6];
  undefined1 auStack_24 [12];
  int local_18;
  
  local_60[0] = *param_1;
  *param_1 = 2;
  if (local_60[0] == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("inner has gone away",0x13,&DAT_01d29950);
  }
  iVar1 = param_1[2];
  iVar3 = param_1[3];
  iVar4 = param_1[4];
  iVar5 = param_1[5];
  piVar2 = (int *)((uint)&local_40 | 4);
  *piVar2 = param_1[1];
  piVar2[1] = iVar1;
  piVar2[2] = iVar3;
  piVar2[3] = iVar4;
  piVar2[4] = iVar5;
  iVar1 = param_1[7];
  iVar3 = param_1[8];
  iVar4 = param_1[9];
  iVar5 = param_1[10];
  piVar2[5] = param_1[6];
  piVar2[6] = iVar1;
  piVar2[7] = iVar3;
  piVar2[8] = iVar4;
  piVar2[9] = iVar5;
  local_40 = local_60[0];
  FUN_019df838(auStack_24);
  if (local_18 != -1) {
    FUN_01bf01d6();
  }
  FUN_01781558(auStack_24);
  FUN_019ea8f8(&local_40,local_60);
  if ((local_40 == 0) && (local_3c[0] != 0)) {
    FUN_010a813c(local_60);
  }
  else {
    if (local_40 != 0) {
      FUN_0069603c(local_3c);
    }
    FUN_019e8f10(local_60);
  }
  return;
}

