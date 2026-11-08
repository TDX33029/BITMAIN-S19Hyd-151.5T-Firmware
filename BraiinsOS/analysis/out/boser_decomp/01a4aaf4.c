// FUN_01a4aaf4 @ 01a4aaf4 size=280 calls_out=3 calls_in=13
// strings: 

void FUN_01a4aaf4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined1 auStack_88 [84];
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
    if (*(int *)(param_2 + 0x14) == 2) {
      param_1[0x15] = 8;
      *param_1 = -0x7ffffffe;
    }
    else {
      *param_1 = *(int *)(param_2 + 0x14);
      iVar3 = *(int *)(param_2 + 0x1c);
      iVar5 = *(int *)(param_2 + 0x20);
      param_1[0x15] = 6;
      iVar4 = *(int *)(param_2 + 0x24);
      iVar2 = *(int *)(param_2 + 0x28);
      param_1[0xc] = -0x7ffffffd;
      param_1[9] = -0x7ffffffd;
      param_1[6] = -0x7ffffffd;
      iVar1 = *(int *)(param_2 + 0x18);
      param_1[2] = iVar3;
      param_1[3] = iVar5;
      param_1[4] = iVar4;
      param_1[5] = iVar2;
      param_1[1] = iVar1;
    }
  }
  else {
    FUN_01a61bd0(auStack_88,param_2);
    FUN_01bed4e2(&local_e0,auStack_88,0x54);
    if (*(int *)(param_2 + 0x30) != -0x80000000) {
      FUN_01a49de4((int *)(param_2 + 0x30));
    }
    if (local_34 == 2) {
      *param_1 = local_e0;
      param_1[1] = iStack_dc;
      param_1[2] = iStack_d8;
      param_1[0x15] = 8;
    }
    else {
      FUN_01bed4e2(param_1,&local_e0,0x54);
      param_1[0x15] = local_34;
      param_1[0x16] = local_30;
      param_1[0x17] = iStack_2c;
      param_1[0x18] = iStack_28;
      param_1[0x19] = iStack_24;
    }
  }
  return;
}

