// FUN_014dfd80 @ 014dfd80 size=416 calls_out=6 calls_in=6
// strings: 

void FUN_014dfd80(undefined1 *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *unaff_r5;
  int *local_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int local_40 [8];
  
  if (param_4 == 0) {
    *param_1 = 4;
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  if (param_4 == 1) {
    iStack_4c = *param_3;
    iStack_48 = param_3[1];
    local_50 = (int *)0x0;
    bVar2 = true;
  }
  else {
    unaff_r5 = (int *)thunk_FUN_016d4a50(param_4 << 3);
    if (unaff_r5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,param_4 << 3);
    }
    iVar5 = 0;
    do {
      iVar3 = iVar5 * 2;
      iVar4 = iVar5 * 2;
      unaff_r5[iVar4] = param_3[iVar3];
      iVar5 = iVar5 + 1;
      (unaff_r5 + iVar4)[1] = (param_3 + iVar3)[1];
    } while (param_4 != iVar5);
    if (param_4 == 1) {
      iStack_4c = *unaff_r5;
      iStack_48 = unaff_r5[1];
      bVar2 = false;
      local_50 = (int *)0x0;
    }
    else {
      local_44 = 0;
      if (param_4 != 0) {
        local_44 = 0;
        piVar7 = unaff_r5 + 1;
        iVar5 = param_4;
        do {
          iVar5 = iVar5 + -1;
          local_44 = *piVar7 + local_44;
          piVar7 = piVar7 + 2;
        } while (iVar5 != 0);
      }
      bVar2 = false;
      iStack_48 = 0;
      local_50 = unaff_r5;
      iStack_4c = param_4;
    }
  }
  uVar6 = FUN_01526e04(param_2,&local_50,param_2 + 0x2b0);
  cVar1 = *(char *)(param_2 + 0x25b);
  *(undefined1 *)(param_2 + 0x25b) = 0;
  if (cVar1 == '\x01') {
    if (*(int *)(param_2 + 0x270) == -0x7fffffd7) {
      (**(code **)(*(int *)(param_2 + 0x278) + 0x18))
                (local_40,*(undefined4 *)(param_2 + 0x274),param_2);
    }
    else {
      FUN_014d7960(local_40);
    }
    if (local_40[0] != -0x7fffffd7) {
      FUN_01465b84(local_40);
    }
  }
  *(undefined4 *)(param_1 + 4) = uVar6;
  *param_1 = 4;
  if (bVar2 || param_4 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(unaff_r5);
  return;
}

