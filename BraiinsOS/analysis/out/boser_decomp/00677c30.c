// FUN_00677c30 @ 00677c30 size=260 calls_out=3 calls_in=4
// strings: 

void FUN_00677c30(undefined2 *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  
  cVar1 = *(char *)(param_2 + 0x28);
  uVar2 = *(undefined1 *)(param_2 + 0x29);
  piVar5 = (int *)(param_2 + 0xc);
  *(undefined1 *)(param_2 + 0x28) = 0;
  if (cVar1 == '\x01') {
    if (*piVar5 != -0x80000000) {
      iVar4 = *(int *)(param_2 + 0x14);
      if (iVar4 == *piVar5) {
        FUN_006666a0(piVar5);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar4) = uVar2;
      *(int *)(param_2 + 0x14) = iVar4 + 1;
    }
    *(undefined1 *)(param_1 + 1) = uVar2;
    *param_1 = 0x100;
  }
  else {
    FUN_0068cbec(&local_28,param_2 + 0x18);
    if ((local_28 & 0xff) == 5) {
      uVar2 = 0;
      *(undefined1 *)((int)param_1 + 1) = 0;
    }
    else if ((local_28 & 0xff) == 4) {
      if (*piVar5 != -0x80000000) {
        iVar4 = *(int *)(param_2 + 0x14);
        if (iVar4 == *piVar5) {
          FUN_006666a0(piVar5);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar4) = local_28._1_1_;
        *(int *)(param_2 + 0x14) = iVar4 + 1;
      }
      *(undefined1 *)(param_1 + 1) = local_28._1_1_;
      *(undefined1 *)((int)param_1 + 1) = 1;
      uVar2 = 0;
    }
    else {
      uVar3 = FUN_01966f50(local_28,uStack_24);
      *(undefined4 *)(param_1 + 2) = uVar3;
      uVar2 = 1;
    }
    *(undefined1 *)param_1 = uVar2;
  }
  return;
}

