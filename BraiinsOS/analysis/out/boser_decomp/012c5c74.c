// FUN_012c5c74 @ 012c5c74 size=220 calls_out=4 calls_in=3
// strings: 

void FUN_012c5c74(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar2 = param_2[0xc];
  *(undefined1 *)(param_2 + 0xc) = 0;
  if ((char)iVar2 == '\x01') {
    iVar2 = *param_2;
    uVar4 = *(undefined1 *)((int)param_2 + 0x31);
  }
  else {
    FUN_012c5658(&local_28,param_2 + 3);
    if ((local_28 & 0xff) == 5) {
      local_28 = 4;
      uVar3 = FUN_01966fbc(&local_28,param_2[9],param_2[10]);
      *(undefined4 *)(param_1 + 4) = uVar3;
      uVar1 = 1;
      goto LAB_012c5d20;
    }
    if ((local_28 & 0xff) != 4) {
      uVar3 = FUN_01966f50(local_28,uStack_24);
      *(undefined4 *)(param_1 + 4) = uVar3;
      *param_1 = 1;
      return;
    }
    iVar2 = *param_2;
    uVar4 = local_28._1_1_;
  }
  if (iVar2 != -0x80000000) {
    iVar5 = param_2[2];
    if (iVar5 == iVar2) {
      FUN_006666a0(param_2);
    }
    *(undefined1 *)(param_2[1] + iVar5) = uVar4;
    param_2[2] = iVar5 + 1;
  }
  uVar1 = 0;
  param_1[1] = uVar4;
LAB_012c5d20:
  *param_1 = uVar1;
  return;
}

