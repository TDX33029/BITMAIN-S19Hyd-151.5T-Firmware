// FUN_00b240f8 @ 00b240f8 size=176 calls_out=1 calls_in=1
// strings: 

void FUN_00b240f8(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 unaff_r4;
  undefined1 unaff_r6;
  undefined1 uVar5;
  int iVar6;
  int in_r12;
  int unaff_lr;
  
  iVar4 = *param_2;
  iVar3 = param_2[4];
  iVar6 = param_2[5];
  iVar2 = param_2[8];
  if (iVar4 == -0x80000000) {
    uVar5 = 0;
  }
  else {
    puVar1 = (uint *)(param_2 + 3);
    in_r12 = param_2[1];
    unaff_lr = param_2[2];
    uVar5 = (undefined1)param_2[3];
    if (iVar3 != -0x80000000) {
      param_2 = (int *)param_2[7];
    }
    unaff_r4 = 0;
    if (((iVar3 != -0x80000000 && param_2 != (int *)0x0) && (unaff_r4 = 3, (int)param_2 < -0x3c)) &&
       (unaff_r4 = 1, (int *)0xffffffb4 < param_2)) {
      unaff_r4 = 2;
    }
    param_2 = (int *)(uint)(iVar3 != -0x80000000);
    unaff_r6 = (&DAT_00570918)[*puVar1 >> 8 & 0xff];
  }
  *(undefined1 *)((int)param_1 + 0x11) = uVar5;
  *(char *)(param_1 + 4) = (char)iVar2;
  *(undefined1 *)((int)param_1 + 0xe) = unaff_r6;
  *(undefined1 *)((int)param_1 + 0xd) = unaff_r4;
  *(char *)(param_1 + 3) = (char)param_2;
  *param_1 = iVar4;
  param_1[1] = in_r12;
  param_1[2] = unaff_lr;
  if (iVar3 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(iVar3,iVar6);
  return;
}

