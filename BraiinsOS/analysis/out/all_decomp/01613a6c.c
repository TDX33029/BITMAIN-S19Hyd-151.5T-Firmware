// FUN_01613a6c @ 01613a6c size=608 calls_out=3 calls_in=0
// strings: VarSeq_64k

void FUN_01613a6c(undefined4 *param_1,int *param_2,undefined4 param_3,undefined1 *param_4,
                 int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_24 [3];
  
  iVar2 = thunk_FUN_016dd50a(param_3,&DAT_004119ea,10);
  if (iVar2 == 0) {
    local_24[0] = 0x80000002;
    FUN_00f2cc28(local_24);
    iVar2 = param_2[2];
    if (*param_2 == iVar2) {
      FUN_016225b8(param_2,iVar2,1);
      iVar2 = param_2[2];
    }
    *(char *)(param_2[1] + iVar2) = (char)param_5;
    iVar2 = iVar2 + 1;
    param_2[2] = iVar2;
    for (; param_5 != 0; param_5 = param_5 + -1) {
      uVar1 = *param_4;
      if (*param_2 == iVar2) {
        FUN_016225b8(param_2,iVar2,1);
        iVar2 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar2) = uVar1;
      iVar2 = iVar2 + 1;
      param_2[2] = iVar2;
      param_4 = param_4 + 1;
    }
  }
  else {
    iVar2 = thunk_FUN_016dd50a(param_3,"VarSeq_64k",10);
    if (iVar2 == 0) {
      local_24[0] = 0x80000002;
      FUN_00f2cc28(local_24);
      iVar2 = param_2[2];
      if ((uint)(*param_2 - iVar2) < 2) {
        FUN_016225b8(param_2,iVar2,2);
        iVar2 = param_2[2];
      }
      iVar4 = iVar2 + 2;
      param_2[2] = iVar4;
      *(short *)(param_2[1] + iVar2) = (short)param_5;
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar1 = *param_4;
        if (*param_2 == iVar4) {
          FUN_016225b8(param_2,iVar4,1);
          iVar4 = param_2[2];
        }
        *(undefined1 *)(param_2[1] + iVar4) = uVar1;
        iVar4 = iVar4 + 1;
        param_2[2] = iVar4;
        param_4 = param_4 + 1;
      }
    }
    else {
      iVar2 = thunk_FUN_016dd50a(param_3,&DAT_004111e4,10);
      if (iVar2 != 0) {
        *param_1 = 0x80000003;
        param_1[1] = &DAT_004111ee;
        param_1[2] = 0x31;
        return;
      }
      local_24[0] = 0x80000002;
      FUN_00f2cc28(local_24);
      iVar2 = param_2[2];
      if ((uint)(*param_2 - iVar2) < 3) {
        FUN_016225b8(param_2,iVar2,3);
        iVar2 = param_2[2];
      }
      iVar3 = param_2[1];
      iVar4 = iVar2 + 3;
      param_2[2] = iVar4;
      *(undefined2 *)(iVar3 + iVar2) = (short)param_5;
      *(char *)((undefined2 *)(iVar3 + iVar2) + 1) = (char)((uint)param_5 >> 0x10);
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar1 = *param_4;
        if (*param_2 == iVar4) {
          FUN_016225b8(param_2,iVar4,1);
          iVar4 = param_2[2];
        }
        *(undefined1 *)(param_2[1] + iVar4) = uVar1;
        iVar4 = iVar4 + 1;
        param_2[2] = iVar4;
        param_4 = param_4 + 1;
      }
    }
  }
  *param_1 = 0x8000000a;
  return;
}

